#include<stdio.h>
#include<stdlib.h>
#include <arpa/inet.h> // inet_addr()
#include <netdb.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include <unistd.h> 
#include<time.h>
#define PORT 3000
#define BUFLEN 256

int main(int argc,char *argv[])
{
	int n,bytes_to_read;
	int sd;
	int start,end;
	struct sockaddr_in server;
	char *bp,buf1[BUFLEN],buf2[BUFLEN];

	if((sd = socket(AF_INET,SOCK_STREAM,0)) == -1){
		fprintf(stderr,"Can't create socket\n");
		exit(0);
	}
	
	printf("socket created successfully\n");

	bzero((char *)&server,sizeof(server));
	server.sin_family = AF_INET;
	server.sin_port = htons(PORT);
	server.sin_addr.s_addr = inet_addr("127.0.0.1");

	if(connect(sd,(struct sockaddr *)&server,sizeof(server)) == -1){
		fprintf(stderr,"Cannot connect to the server\n");
		exit(1);
	}

	printf("connected to server successfully\n");
	
	while(1){
		printf("enter something\n");
		scanf("%s",buf1);
	
		printf("writing data to server\n");
		
		start = clock();
		write(sd,buf1,BUFLEN);
		end = clock();
		printf("time taken to send the data = %f\n",(double)(end-start)/CLOCKS_PER_SEC);

		if(strcmp(buf1,"exit") == 0)
			break;

		printf("receiving data from server\n");

		bp = buf2;
		bytes_to_read = BUFLEN;
		while((n = read(sd,bp,bytes_to_read)) > 0){
			bp += n;
			bytes_to_read -= n;
		}

		if(strcmp(buf2,"exit")==0)
			break;
		printf("received data is %s\n",buf2);
	}
	close(sd);
	return 0;
}
