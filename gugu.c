#include <stdio.h>
#include <stdlib.h>
struct gugudan{
	int i,j;
	
	
	};



int main(void)
{
    
struct gugudan gugu[3][9];
int dan,num,x=0,y;
for(dan=2;dan<5;dan++){
	
y=0;
for(num=1;num<10;num++){
	gugu[x][y].i=dan*num;
	gugu[x][y].j=dan*num;
	y++;	
	}
x++;
}
for(x=0;x<3;x++){
	
	y=0;
	while(y<9){
		
	if(y<8){
		printf("%d ",gugu[x][y].i);
		y++;	
		
		}	
		else if(y==8){
			
			printf("%d ",gugu[x][y].j);
			y++;
			}
		}
		printf("\n");
		
		}
	
	
	
	
	
	
	
	







return 0;}



