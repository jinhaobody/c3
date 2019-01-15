
// d3.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
void main()

{
	char arr[100];
	int index = 0;
	printf("敏感字符管理系统\n");

	while(1){

		int code;

		printf("1---添加敏感词\n");
		printf("2---删除最后一个敏感词\n");
		printf("3---显示全部敏感词\n");
		printf("4---替换输入内容中的敏感词\n");//把所有的敏感字符全部替换为*
		printf("5---退出系统\n");

		printf("请输入相应功能的编号\n");

		scanf("%d",&code);

		if(code == 1){
			char a;
			char x;
			printf("请输入要添加的敏感字符：\n");
			scanf("%c",&a);//获取上一次输入的回车字符
			scanf("%c",&a);//获取当次输入的字符
			
			arr[index] = a;
			index++;

			printf("添加成功，点击回车继续\n");
			scanf("%c",&x);
			scanf("%c",&x);
		}

		if(code == 2){
			char x;
			printf("删除最后一个敏感词\n");

			index--;//逻辑删除，不是真实删除

			printf("删除成功，点击回车继续\n");
			scanf("%c",&x);
			scanf("%c",&x);

		}

		if(code == 3){
			char x;
			int i = 0;
			printf("输出所有敏感词:\n");
			for(;i<index;i++){
				printf("%c\n",arr[i]);
			}

			printf("点击回车继续\n");
			scanf("%c",&x);
			scanf("%c",&x);

		}

		if(code == 4){
			char x;//解决幻影回车的问题的变量
			int i = 0;//为一个for循环服务的变量
			char str[200];//定义一个字符数组，来储存用户输入的字符串内容

			printf("请输入一段文字（英文）:\n");
			scanf("%s",str);

			//对用户输入的每一个元素进行判定
			for(;str[i]!='\0';i++){

				char a = str[i];//用户输入的字符串中的每一个字符

				int j=0;//为第二个循环服务的变量
				int flag = 0;//作为标记，a值是否与敏感字符相同
				//依次比较a和储存敏感字符的数组中的每一个元素
				for(;j<index;j++){
					if(a == arr[j]){
						flag = 1;
					}
				}
				//循环结束既比较结束，如果标志变量的值，发生变化，那就表名，a的值是敏感字符
				if(flag != 0){
					//a是敏感字符
					str[i] = '*';
				}

			}

			printf("%s\n",str);

			printf("点击回车继续\n");
			scanf("%c",&x);
			scanf("%c",&x);

			/*

			//用户输入一个字符，输出这个字符是不是敏感字符

			char x;
			char a;
			int i=0;

			int flag = 0;//作为标记

			printf("请输入一个字符:\n");

			scanf("%c",&a);
			scanf("%c",&a);


			//判断用户输入的内容，是不是敏感字符
			//判断方法：用用户输入的内容，与arr数组中的每一个元素进行比较，
			//如果全部都不一样，那么用户输入的内容，就不是敏感字符
			//如果有一样的，那用户输入的内容就是敏感字符


			for(;i<index;i++){
				if(a == arr[i]){
					flag = 1;
				}
			}

			if(flag == 0){
				//a不是敏感字符
				printf("输入的内容不是敏感字符");
			}else{
				//a是敏感字符
				printf("输入的内容是敏感字符");
			}

			printf("点击回车继续\n");
			scanf("%c",&x);
			scanf("%c",&x);


			*/


		}

	}





	return 0;
}

