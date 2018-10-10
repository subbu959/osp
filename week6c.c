#include<stdio.h>
#define max 25
void main()
{
int frag[max],b[max],f[max],i,j,nb,nf,temp,highest=0;
static int bf[max],ff[max];
printf("\n\tMemory Management Scheme - Worst Fit");
printf("\nEnter the number of blocks:");
scanf("%d",&nb);
printf("Enter the number of files:");
scanf("%d",&nf);
printf("\nEnter the size of the blocks:-\n");
 for(i=1;i<=nb;i++) {printf("Block %d:",i);scanf("%d",&b[i]);}
printf("Enter the size of the files :-\n");
 for(i=1;i<=nf;i++) {printf("File %d:",i);scanf("%d",&f[i]);}
for(i=1;i<=nf;i++)
 {
for(j=1;j<=nb;j++)
  {
if(bf[j]!=1)    //if bf[j] is not allocated
   {
temp=b[j]-f[i];
if(temp>=0)
if(highest<temp)
    {
ff[i]=j;
highest=temp;
    }
   }
  }
frag[i]=highest;
bf[ff[i]]=1;
highest=0;
 }
printf("\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement");
for(i=1;i<=nf;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);
}
/*Input and Output:
        Memory Management Scheme - Worst Fit
Enter the number of blocks:5
Enter the number of files:5

Enter the size of the blocks:-
Block 1:100
Block 2:150
Block 3:90
Block 4:200
Block 5:250
Enter the size of the files :-
File 1:100
File 2:20
File 3:110
File 4:210
File 5:190

File_no:        File_size :     Block_no:       Block_size:     Fragement
1               100             5               250             150
2               20              4               200             180
3               110             2               150             40
4               210             0               4691760         0
5               190             0               4691760         0*/

