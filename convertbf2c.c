#include <stdio.h>
int main(int argc,char *argv[])
{
	int index=0;
	printf("#include <stdio.h>\nint p[30000],i;\nint main()\n{\n");
	while (argv[1][index]!='\0')
	{
		switch (argv[1][index])
		{
			case '>':printf("i++;\n");break;
			case '<':printf("i--;\n");break;
			case '+':printf("p[i]++;\n");break;
			case '-':printf("p[i]--;\n");break;
			case '.':printf("putchar(p[i]);\n");break;
			case ',':printf("p[i]=getchar();\n");break;
			case '[':printf("while (p[i]!=0)\n{\n");break;
			case ']':printf("}\n");break;
			default:break;
		}
		index++;
	}
	printf("printf(\"\\n\");\n}\n");
}
