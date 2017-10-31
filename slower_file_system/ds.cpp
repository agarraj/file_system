#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;


/*bit map for inode*/

struct imap{
	bool map[1000]={false};
	};

/*
struct dmap{
	bool map[1000]={false};
	};*/
	
 struct _inode{
	double f_d=1.0;
	int db[30];
	};

int main()
	{
	//	int a,b;
	//	struct imap* inodemap; 
	//	struct inode* in[1000];
	

	struct _inode inode[1000];
	for(int i=0;i<1000;i++)
		{for(int j=0;j<30;j++)
			inode[i].db[j]=j;
		}


		/*for(int i=0;i<1000;i++)
	 	inode[i]=(struct _inode*) malloc(sizeof(struct _inode));*/
	cout<<sizeof(struct _inode)<<endl;

	char buff[sizeof(inode)];
	memset(buff,0,sizeof(buff));
	memcpy(buff,inode,sizeof(inode));

	//cout<<buff;


	vector<string> v;
	FILE *fp;
	
	fp= fopen("myDisk","r+b");

	fseek(fp,0,SEEK_SET);
	//fseek(fp,-100,SEEK_END);
	//cout<<"pos:"<<ftell(fp);
	char arr[30]="";
	//int y=strlen("p");
	//fscanf(fp,"%c",&arr);
	fwrite(arr,30,1,fp);

	fseek(fp,0,SEEK_SET);

	//cout<<"pos:"<<ftell(fp);

	
	    if (fp == NULL)

    {

        printf("Cannot open file \n");

        exit(0);

    }
 
    char ch;
    ch=getc(fp);
    while(ch!=EOF)
    {
    	printf("%c",ch );
    ch=getc(fp);

    }







	//fprintf(fp, "rajat agarwal" );
	//fread()
	//fclose(fp);
	/*fseek(fp,0,SEEK_END);
	printf("%ld",ftell(fp));
	*/
 
		
	/*char ch;	
		
		
    if (fp == NULL)

    {

        printf("Cannot open file \n");

        exit(0);

    }

    ch = fgetc(fp);
    int i=0;
    while (i<=ftell(fp))

    {

        printf ("%c", ch);

        ch = fgetc(fp);
        i++;

    }
	
	*/
	return 0;
	}
