#include<stdio.h>
#include<time.h>
#include<math.h>
float calculate(char z,float x,float y){
	float Rresult2=0.00;
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
void title(int n){
  int num1,num2,num3,a,b;
  int i;
  char op1,op2,sign;
  float result,Rresult,Rresult1,h,h1;
  float z=0.0;
  int rnum=0;
  for(i=0;i<n;i++){
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
			//printf("%f\n",Rresult1);
			h1=(float)num3;
		//	printf("%f\n",h1);
		//	printf("%f\n",Rresult1);
			Rresult=calculate(op2,Rresult1,h1);
		   }
		   else
		   {
			Rresult1=calculate(op2,num2,num3);
		//	printf("%f\n",Rresult1);
			h1=(float)num1;
		//	printf("%.2f\n",h1);
		//	printf("%f\n",Rresult1);
			Rresult=calculate(op1,h1,Rresult1);
		   }
	   }
	   else{
		 Rresult1=calculate(op1,num1,num2);
	//	 printf("%f\n",Rresult1);
		 h1=(float)num3;
		// printf("%.2f\n",h1);
		 //printf("%f\n",Rresult1);
		 Rresult=calculate(op2,Rresult1,h1);
	   }
	   if(Rresult<0){
	     i--;
		 continue;
	   }
	   else{
		  printf("%d%c%d%c%d=",num1,op1,num2,op2,num3);
		  //printf("%.2f",Rresult);
		  scanf("%f",&result);
		  if((int)(100*Rresult+0.5)/100==(int)(100*result+0.5)/100){
			printf("�ش���ȷ\n");
			rnum++;
		  }
		  else{
			printf("�ش������ȷ���ǣ�%.2f\n",((100*Rresult+0.5)/100));		  
		  }
		  //return Rresult;
	   }
  }
  //printf("%d",rnum);
   
  z=(float)rnum/(float)n*100;
  printf("���δ�����ĿΪ%d,׼ȷ��Ϊ%.2f%!\n",n,z);
}
void main(){
	int n;
	printf("��������Ŀ����:");
	scanf("%d",&n);
	while(n<1||n>20){
		printf("��������������������룺");
		scanf("%d",&n);
	}
		title(n);
}