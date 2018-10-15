#include<stdio.h>
#include<time.h>
float calculate(z,x,y){
	float Rresult2=0;
	switch(z){
	case '+':
		Rresult2=(float)x+(float)y;break;
	case '-':
		Rresult2=(float)x-(float)y;break;
	case '*':
		Rresult2=(float)x*(float)y;break;
	case '/':
		Rresult2=(float)x/(float)y;break;
	}
	return Rresult2;
}
float title(){
  int num1,num2,num3,a,b;
  char op1,op2,sign;
  float result,Rresult,Rresult1,h;
  srand(time(NULL));
  num1=rand()%20+1;
  num2=rand()%20+1;
  num3=rand()%20+1;
  a=rand()%4+1;
  b=rand()%4+1;
  switch(a){
	case 1:
	  op1='+';
	  break;
	case 2:
	  op1='-';
	  break;
	case 3:
	  op1='*';
	  break;
	case 4:
	  op1='/';
	  break;
  }
   switch(b){
	case 1:
	  op2='+';
	  break;
	case 2:
	  op2='-';
	  break;
	case 3:
	  op2='*';
	  break;
	case 4:
	  op2='/';
	  break;
  }
   if(a==1||a==2){
	   if(b==1||b==2){
	    Rresult1=calculate(op1,num1,num2);
		Rresult=calculate(op2,Rresult1,num3);
	   }
	   else
	   {
		Rresult1=calculate(op2,num2,num3);
		Rresult=calculate(op1,num1,Rresult1);
	   }
   }
   else{
	 Rresult1=calculate(op1,num1,num2);
	 Rresult=calculate(op2,Rresult1,num3);
   }
  
  printf("%d%c%d%c%d=",num1,op1,num2,op2,num3);
  h=scanf("%f",&result);	
  return 0;
}
void main(){
	int n,i;
	printf("请输入题目数量:");
	scanf("%d",&n);
	while(n<1||n>20){
		printf("你的输入有误，请重新输入：");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)	
	{	
		title();
	}
}