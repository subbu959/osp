#include<stdio.h>
#define M 20
int b[M],c[M],p[M],i=-1,t=-1,j=-1;
void push(){
int val;
if(t==M-1){
printf("producer is full");
}
else{
printf("eneter the producer elements:");
scanf("%d",&val);
p[++t]=val;
}
}
void popb(){
if(t==-1){
printf("producer is empty");
}
if(i==M-1)
printf("\nbuffer is full");
else{
printf("%d is sent to producer to buffer",p[t]);
b[++i]=p[t--];
}
}
void popc(){
if(i==-1){
printf("buffer is empty");
}
if(j==M-1)
printf("\nconsumer is full");
else{
printf("\n%d is sent from buffer to consumer",b[i]);
c[++j]=b[i--];
}
}
void display(){
int r;
if(t==-1)
printf("\nproducer is empty");
else{
printf("producer elements are:");
for(r=t;r>=0;r--)
printf("%d ",p[r]);
}
}
void displayb(){
int r;
if(i==-1)
printf("\nbuffer is empty");
else{
printf("\nbuffer elements are:");
for(r=i;r>=0;r--)
printf("%d ",b[r]);
}
}
void displayc(){
int r;
if(j==-1)
printf("\nconsumer is empty");
else{
printf("\nconsumer elements are:");
for(r=j;r>=0;r--)
printf("%d ",c[r]);
}
}
int  main(){
int c;
do{
printf("\n1.elements to producer\n2.producer to buffer\n3.buffer to consumer\n4.display");
scanf("%d",&c);
switch(c){\
case 1:push();
	break;
case 2:popb();
       break;
case 3:popc();
      break;
case 4:display();
      displayb();
      displayc();
break;
}
}while(c<=4);
return 0;
}
