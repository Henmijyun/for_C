//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	float c;
//	printf("############################\n1.りんご　    2.みかん\n3.ラズベリ�`　4.パイナップル\n############################\n挫きな惚麗を�x�kして、桑催を秘薦して和さい。\n");
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a > 0 && a < 5)
//		{
//			switch (a)
//			{
//			case 1:
//				printf("りんごを�x�kしました。\nその楚を秘薦して和さい。\n");
//				while (1)
//				{
//					scanf("%d", &b);
//					if (b > 0)
//					{
//						printf("方楚��%d\n", b);
//						c = (float)b * 140.5;
//						printf("りんご%d��蛍の��函カロリ�`は%f(Kcal)です。\n", b, c);
//						break;
//					}
//					else
//					{
//						printf("方楚��%d\n方楚が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", b);
//					}
//				}
//				break;
//			case 2:
//				printf("みかんを�x�kしました。\nその楚を秘薦して和さい。\n");
//				while (1)
//				{
//					scanf("%d", &b);
//					if (b > 0)
//					{
//						printf("方楚��%d\n", b);
//						c = (float)b * 45.25;
//						printf("みかん%d��蛍の��函カロリ�`は%f(Kcal)です。\n", b, c);
//						break;
//					}
//					else
//					{
//						printf("方楚��%d\n方楚が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", b);
//					}
//				}
//				break;
//			case 3:
//				printf("ラズベリ�`を�x�kしました。\nその楚を秘薦して和さい。\n");
//				while (1)
//				{
//					scanf("%d", &b);
//					if (b > 0)
//					{
//						printf("方楚��%d\n", b);
//						c = (float)b * 2.41;
//						printf("ラズベリ�`%d��蛍の��函カロリ�`は%f(Kcal)です。\n", b, c);
//						break;
//					}
//					else
//					{
//						printf("方楚��%d\n方楚が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", b);
//					}
//				}
//				break;
//			case 4:
//				printf("パイナップルを�x�kしました。\nその楚を秘薦して和さい。\n");
//				while (1)
//				{
//					scanf("%d", &b);
//					if (b > 0)
//					{
//						printf("方楚��%d\n", b);
//						c = (float)b * 700.6;
//						printf("パイナップル%d��蛍の��函カロリ�`は%f(Kcal)です。\n", b, c);
//						break;
//					}
//					else
//					{
//						printf("方楚��%d\n方楚が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", b);
//					}
//				}
//				break;
//			default:
//				break;
//			}
//			if (b > 0)
//			{
//				break;
//			}
//		}
//		else
//		{
//			printf("斌瞳桑催��%d\n斌瞳桑催が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", a);
//		}
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 0;
//	int j = 0;
//	int i = 0;
//	while (c == 1)
//	{
//		printf("プログラム1��\n2つの方�､�1つずつ秘薦してください。(2つの方�､隆鵑�さが�`いように)\n");
//		scanf("%d%d", &a, &b);
//		if (a < b)
//		{
//			printf("1つ朕の方�｣�%d\n2つ朕の方�｣�%d\n\n寄きい方�､�ら��桑は:", a, b);
//			while (a-1 < b)
//			{
//				printf("%d,", b);
//				b--;
//			}
//			printf("\n\nもう匯指秘薦しませんか。\n１.もう匯指　　　　2.プログラム2へ　　 ��1または2秘薦してください。��\n");
//			scanf("%d", &c);
//			break;
//		}
//		else if (b < a)
//		{
//			printf("1つ朕の方�｣�%d\n2つ朕の方�｣�%d\n\n寄きい方�､�ら��桑は:", a, b);
//			while (b-1 < a)
//			{
//				printf("%d,", a);
//				a--;
//			}
//			printf("\n\nもう匯指秘薦しませんか。\n１.もう匯指　　　　2.プログラム2へ　　 ��1または2秘薦してください。��\n");
//			scanf("%d", &c);
//			break;
//		}
//		else
//		{
//			printf("秘薦した方�､��g�`っています。もう匯指秘薦してください。\n");
//		}
//	}
//	while (1)
//	{
//		printf("プログラム2��\n2つの方�､�1つずつ秘薦してください。(2つの方�､隆鵑�さが�`いように)\n");
//		scanf("%d%d", &a, &b);
//			if (a < b)
//			{
//				printf("1つ朕の方�｣�%d\n2つ朕の方�｣�%d\n\n弌さい方�､�ら��桑にプラスすると、\n%d", a, b, a);
//				for (i = 1; i <= (b-a); i++)
//				{
//					d = a + i;
//					j = j + d;
//					printf("+%d", d);
//				}
//				printf(" = %d\n", a+j);
//				printf("\n\nもう匯指秘薦しませんか。\n１.もう匯指　　　　2.�Kわり　　 ��1または2秘薦してください。��\n");
//				scanf("%d", &c);
//				if (c == 2)
//				{
//					break;
//				}
//			}
//			else if (b < a)
//			{
//				printf("1つ朕の方�｣�%d\n2つ朕の方�｣�%d\n\n弌さい方�､�ら��桑にプラスすると、\n%d", a, b,b);
//				for (i = 1; i <= (a - b); i++)
//				{
//					d = b + i;
//					j = j + d;
//					printf("+%d", d);
//				}
//				printf(" = %d\n", b+j);
//				printf("\n\nもう匯指秘薦しませんか。\n１.もう匯指　　　　2.�Kわり　　 ��1または2秘薦してください。��\n");
//				scanf("%d", &c);
//				if (c == 2)
//				{
//					break;
//				}
//			}
//			else
//			{
//				printf("秘薦した方�､��g�`っています。もう匯指秘薦してください。\n");
//			}
//	}
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (1)
//	{
//		printf("方�､鯣訌Δ靴討�ださい。\n");
//		scanf("%d", &a);
//		if (a >= 0)
//		{
//			printf("秘薦�｣�%d��の�s方は、參和の宥りです。\n", a);
//			for (b = 0; b <= a; b++)
//			{
//				for (c = 0; c <= a; c++)
//				{
//					if (b * c == a)
//					{
//						printf("%d\n", c);
//					}
//				}
//			}
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}