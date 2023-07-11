#include<stdio.h>
#include<stdlib.h>
#include<netdb.h>
#include<sys/socket.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/types.h>
#include <unistd.h>
#define PORT 3000
#include<time.h>

int main(int argc,char *argv[]){
	int n, bytes_to_read;
	int sd, new_sd, client_len;
	struct sockaddr_in server,client;
	char *bp,buf[256];
	int start,end;

	if((sd = socket(AF_INET,SOCK_STREAM,0)) == -1){
		fprintf(stderr,"Usage : %s [port]\n",argv[0]);
		exit(0);
	}

	printf("socket created successfully\n");

	bzero((char *)&server,sizeof(struct sockaddr_in));

	server.sin_family = AF_INET;
	server.sin_port = htons(PORT);
	server.sin_addr.s_addr = htonl(INADDR_ANY);

	if(bind(sd, (struct sockaddr *)&server, sizeof(server)) == -1){
		fprintf(stderr, "Can't bind name to socket\n");
		exit(1);
	}

	printf("binding of socket to address done succesfully\n");
	printf("listening\n");

	listen(sd,5);

	client_len = sizeof(client);
	if((new_sd = accept(sd, (struct sockaddr *)&client, &client_len)) == -1){
		fprintf(stderr, "Can't accept client\n");
		exit(1);
	}

	printf("client accepted\n");
	while(1){
		bp = buf;

		bytes_to_read = 256;

		while((n = read(new_sd, bp, bytes_to_read)) > 0){
			bp += n;
			bytes_to_read -= n;
		}
		if(strcmp(buf,"exit")==0)
			break;
		printf("From client : %s\n",buf);
		scanf("%s",buf);
		start = clock();
		write(new_sd,buf,256);
		end = clock();
		printf("time taken to send the data = %f\n",(double)(end-start)/CLOCKS_PER_SEC);
		if(strcmp(buf,"exit")==0)
			break;
	}
	close(new_sd);
	printf("closed client socket\n");
	close(sd);
	printf("connection closed\n");
	return 0;
}
