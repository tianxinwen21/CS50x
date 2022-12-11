#define  _CRT_SECURE_NO_WARNINGS 

//#include <stdio.h>
//
//#define MAX(X) (X) + (X)
//int main()
//{
//	char c = "XXXYYY";
//	int a = MAX(4);
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char* c = "abcd""efg";
//	printf("%s\n", c);
//	printf("abcd""efg");
//	return 0;
//}



//#include <stdio.h>
//
//#define PRINT(FORMAT,VALUE)\
//printf("the value of "#VALUE" is "FORMAT" !\n", VALUE) 
//int main()
//{
//	int w = 5;
//	PRINT("%d", w);
//	return 0;
//}


//#include <stdio.h>
//
//#define ADD(num, value) sum##num += value
//
//int main()
//{
//	int sum10 = 5;
//	sum10 = ADD(10, 10);//作用是：给sum10加10
//	printf("%d\n", sum10);
//	return 0;
//}


//#include <stdio.h>
//
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
// 
//
//int main()
//{
//	int x = 5;
//	int y = 6;
//	int z = MAX(x++, y++);
//	//((x++) >(y++) ? (x++) : (y++))
//	//  6       7      不执行   (7++) --> 8 
//	printf("x=%d y=%d z=%d\n", x, y, z);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//#define MAX 200
//    printf("MAX = %d\n", MAX);
//#undef MAX
//
//    int MAX = 10;
//    printf("MAX = %d\n", MAX);
//
//    return 0;
//}



//#include <stdio.h>
//
//#define SIZE 10
//
//int main()
//{
//    int array[SIZE];
//    int i = 0;
//    for (i = 0; i < SIZE; i++)
//    {
//        array[i] = i;
//    }
//    for (i = 0; i < SIZE; i++)
//    {
//        printf("%d ", array[i]);
//    }
//    printf("\n");
//    return 0;
//}



//#include <stdio.h>
//#define  a 1
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#if  a
//		printf("%d\n", arr[i]);//为了观察数组是否赋值成功。 
//#endif 
//		printf("hahahah\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//#define TOSTRING(a) #a
//
//int main()
//{
//	char* str1 = TOSTRING(123);    // str = "123"
//	printf("%s\n", str1);
//	return 0;
//}


//#include <stdio.h>
//#include <stddef.h>
//
//struct str
//{
//	char a;
//	int b;
//	char c;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct str, a));
//	printf("%d\n", offsetof(struct str, b));
//	printf("%d\n", offsetof(struct str, c));
//
//	return 0;
//}

//
//#include <stdio.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#define OFFSETOF(type, m_name)    (size_t)&(((type*)0)->m_name)
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}


//#include <stdio.h>
//
//#define SIZE(type,file) sizeof(((type*)0)->file)
//
//struct str
//{
//	int a;
//	char i;
//};
//
//int main()
//{
//	struct str s = { 0 };
//	printf("%d\n", SIZE(struct str, a));
//	printf("%d\n", SIZE(struct str, i));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()//正三角
//{
//    int i, j;
//
//    for (i = 0; i < 6; i++) {
//        for (j = 6; j > i; j--) {
//            printf("");
//        }
//        for (j = 0; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//	return 0;
//}




//#include <stdio.h>
//
//int main(void)//倒三角
//{
//    int h = 6;
//    int i = 0, j = 0;
//    do {
//
//        for (i = 0; i < h; i++) {
//            for (j = h; j > i; j--) {
//                printf("#");
//            }
//            for (j = 0; j <= i; j++) {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    } while (h < 1 || h>8);
//    return 0;
//}

//贪心算法
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);//25
int calculate_dimes(int cents);//10
int calculate_nickels(int cents);//5
int calculate_pennies(int cents);//1

int main(void)
{
    int cents = 0;
    int coins = 0;
    do {
        cents = get_cents();
        int quarters = calculate_quarters(cents);
        cents = cents - quarters * 25;

        int dimes = calculate_dimes(cents);
        cents = cents - dimes * 10;

        int nickels = calculate_nickels(cents);
        cents = cents - nickels * 5;

        int pennies = calculate_pennies(cents);
        cents = cents - pennies * 1;

        coins = quarters + dimes + nickels + pennies;

    } while (cents < 0);
    printf("%i\n", coins);
    return 0;
}

int get_cents(void)
{
    // TODO
    int cent = scanf("%d", &cent);
    return cent;
}

int calculate_quarters(int cents)
{
    // TODO
    int quarters = 0;
    while (cents >= 25)
    {
        cents = cents - quarters * 25;
        quarters++;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    // TODO
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - dimes * 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - nickels * 5;
        nickels++;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = 0;
    while (cents >= 1)
    {
        cents = cents - pennies * 1;
        pennies++;
    }
    return pennies;
}


//你好
//#include <stdio.h>
//#include <cs50.h>
//
//int main(void)
//{
//    string name = get_string("What's your name? ");
//    printf("hello, %s\n", name);
//    return 0;
//}


//mario
//#include <cs50.h>
//#include <stdio.h>
//
//int main(void)
//{
//    int h = 0;
//    int i = 0, j = 0;
//    do {
//        h = get_int("height: ");
//        for (i = 0; i < h; i++) {
//            for (j = h - 1; j > i; j--) {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++) {
//                printf("#");
//            }
//            printf("\n");
//        }
//    } while (h < 1 || h>8);
//    return 0;
//}