////3．有五个学生，每个学生有三门课的成绩，从键盘上输入学生的学号，姓名，三门课成绩，把它们存放到磁盘文件中，并从该文件中能读出显示。
//
//#include <stdio.h>
//
//#include <stdlib.h>
//
//struct student
//
//{
//
//    int number;
//
//    char name[20];
//
//    int score[3];
//
//} stud[2];
//
//void save()
//
//{
//
//    FILE *fp;
//
//    int i;
//
//    if (( fp = fopen( "student.dat", "wb" )) == NULL )
//
//    {
//
//        printf( "can not open file\n" );
//
//        exit( 0 );
//
//    }
//
//    for ( i = 0; i < 2; i++ )
//
//    {
//
//   		fwrite(&stud[i],sizeof(struct student),1,fp);
//
//    }
//
//    fclose( fp );
//
//}
//
//void load()
//
//{
//	int i;
//	FILE*fp;
//	fp=fopen("student.dat", "rb");
//	if(fp==NULL)              //打开文件，并判断是否打开
//	{
//		printf("打开失败!!即将退出!!");
//		exit(-1);
//	}
//	//进行文件的读写操作
//	for(i=0;i<2;i++)
//	{
//		//若成功则读入数据否则退出程序显示数据
//		if(fread(&stud[i],sizeof(struct student),1,fp)!=1)
//		{
//			if(feof(fp))            //在判断是否读完，若读完退出程序否则读入失败
//			{
//				fclose(fp);
//				return;
//			}
//			printf("Open eorror!");
//		}
//		else
//		{
//			printf("%-2d,%-2s,%-2d,%-2d,%-2d\n",stud[i].number,stud[i].name,stud[i].score[0],stud[i].score[1],stud[i].score[2]);
//		}
//		
//	}
//
//	//关闭文件
//	if(fclose(fp))
//	{
//		printf("关闭失败!!!");
//	}
//    
//
//}
//
//int main()
//
//{
//
//    int i, j;
//
//    for ( i = 0; i < 2; i++ )
//
//    {
//
//        printf( "\ninput %d student's number: ", i + 1 );
//
//        scanf( "%d", &stud[i].number );
//
//        printf( "\ninput %d student's name:  ", i + 1 );
//
//        scanf( "%s", stud[i].name ,sizeof(stud[i].name));
//
//        printf( "\ninput %d student's score:  \n", i + 1 );
//
//        for ( j = 0; j < 3; j++ )
//
//        {
//
//            scanf( "%d", &stud[i].score[j] );
//
//        }
//
//    }
//
//    save();
//
//    load();
//
//}
#include <stdio.h>

#define  M  4

#define  N  5

int  fun(int a[M][N])

{
    int i = 0,j=0;
    int n = 0;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || i == M - 1||j == 0 || j == N - 1)

                n += a[i][j];
        }
    }
    return n;


}

main()

{
    int  aa[M][N] = { {1,3,5,7,9},

                 {2,9,9,9,4},

                 {6,9,9,9,8},

                 {1,3,5,7,0} };

    int  i, j, y; /*void NONO();*/

    printf("The original data is : \n");

    for (i = 0; i < M; i++)

    {
        for (j = 0; j < N; j++) printf("%6d", aa[i][j]);

        printf("\n");

    }

    y = fun(aa);

    printf("\nThe  sum:  %d\n", y);

    printf("\n");

    /*NONO();*/

    getchar();

}

//void NONO()
//
//{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
//
//    输出数据，关闭文件。 */
//
//    int i, j, y, k, aa[M][N];
//
//    FILE* rf, * wf;
//
//    rf = fopen("..\\..\\in.dat", "r");
//
//    wf = fopen("..\\..\\out.dat", "w");
//
//    for (k = 0; k < 10; k++) {
//
//        for (i = 0; i < M; i++)
//
//            for (j = 0; j < N; j++) fscanf(rf, "%d", &aa[i][j]);
//
//        y = fun(aa);
//
//        fprintf(wf, "%d\n", y);
//
//    }
//
//    fclose(rf);
//
//    fclose(wf);
//
//}