#include<stdio.h>
#include<string.h>
int top=-1;
int size=0;
int s[1000];
char str[100];
void push(int d){
    top++;
    s[top]=d;

    }

int pop(){
    if (top==-1){
        printf("\n stack is empty");
        return 0;
    }
    else{

        return s[top--];

    }

}

int main(){
printf("Enter the Postfix expression : \n");
scanf("%s",str);
int n=strlen(str);
char ch;
for(int i=0;i<n;i++){
    ch=str[i];
    if ((ch>='0' && ch<='9')){
    push(ch-'0');
      }
    else{
        int a;
        int b;
        a=pop();
        b=pop();
        switch(ch){
        case '+':push((b+a));
                break;
        case '-':push((b-a));
                break;
        case '*':push((b*a));
                break;
        case '/':push((b/a));
                break;
        }
        }


    }
    int c=pop();
    printf("\n Postfix evaluation :\n");
    printf("%d",c);



}

