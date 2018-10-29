#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
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
int calculate2(int num4){
	int i,B;
	B=1;
	for(i=1;i<=num4;i++){
	B=B*i;
	}
	return B;
}
void title1(int n1){
	int num4,a,i,B;
	int rnum=0;
	float z=0.0;
	int b;
	printf("\t\t请输入阶乘数的最大值：");
	scanf("%d",&a);
	for(i=0;i<n1;i++){
		srand(time(NULL));
		num4=rand()%a+1;
		B=calculate2(num4);
		printf("\t\t%d!=",num4);
		scanf("%d",&b);
		if(b==B){
			printf("\t\t回答正确\n");
			rnum++;
		  }
		else{
			printf("\t\t回答错误，正确答案为：%d\n",B);
		}

	}
	z=(float)rnum/(float)n1*100;
	printf("\t\t本次答题数目为%d,准确率为%.2f%!\n",n1,z);


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
	  num1=rand()%200-100;
	  num2=rand()%200-100;
	  num3=rand()%200-100;
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
		   if(num2<0){
			   if(num3<0){
					printf("\t\t%d%c(%d)%c(%d)=",num1,op1,num2,op2,num3);
			   }
			   else
					printf("\t\t%d%c(%d)%c%d=",num1,op1,num2,op2,num3);
		   }
		   else if(num3<0){
					printf("\t\t%d%c%d%c(%d)=",num1,op1,num2,op2,num3);
		   }
		   else{
					printf("\t\t%d%c%d%c%d=",num1,op1,num2,op2,num3);
		   }
		  scanf("%f",&result);
		  if((int)(100*Rresult+0.5)/100==(int)(100*result+0.5)/100){
			printf("\t\t回答正确\n");
			rnum++;
		  }
		  else{
			printf("\t\t回答错误，正确答案是：%.2f%\n",((100*Rresult+0.5)/100));		  
		  }
		  //return Rresult;
	   }
  }
  //printf("%d",rnum);
   
  z=(float)rnum/(float)n*100;
  printf("\t\t本次答题数目为%d,准确率为%.2f%!\n",n,z);
}

int menu()
{
    int I_chose;
	system("cls");
    puts("\t\t|-----------------------------------------------------|");
    puts("\t\t|              欢迎进入四则运算升级版                 |");
    puts("\t\t|-----------------------------------------------------|");
    puts("\t\t|       0:退出系统                                    |");
    puts("\t\t|       1:更改背景颜色                                |");
    puts("\t\t|       2:开始执行简单四则运算                        |");
    puts("\t\t|       3:阶乘运算                                    |");
    puts("\t\t|-----------------------------------------------------|");
	printf("\t\t请选择菜单功能:");
    scanf("%d",&I_chose);
    return I_chose;

}



void main(){
	int n,n1;
	int i;
    while(1)
    {
        switch(menu())
        {
            case 0:
                printf("\t\t谢谢您的使用");
				return;
            case 1:
				printf("\t\t请输入你想显示的颜色：(1-蓝色、2-绿色、3-湖蓝色、4-红色):");
				scanf("%d",&i);
				switch(i){
				case 1:
					system("color 1f"); 
					break;
				case 2:
					system("color 2f");
					break;
				case 3:
					system("color 3f");
					break;
				case 4:
					system("color 4f");
					break;
				}
				
				break;
               
            case 2:
                	printf("\t\t请输入题目数量(不超过5个):");
					scanf("%d",&n);
					while(n<1||n>5){
						printf("\t\t你的输入有误，请重新输入：");
						scanf("%d",&n);
					}
						title(n);
						
					 break;
			case 3:
					printf("\t\t请输入题目数量(不超过5个):");
					scanf("%d",&n1);
					while(n1<1||n1>5){
						printf("\t\t你的输入有误，请重新输入：");
						continue;
					}
						title1(n1);
						
					break;
        }
		getchar();
		printf("\t\t按任意键继续");
		getchar();
    }

}