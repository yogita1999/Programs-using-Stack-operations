#include<stdio.h>
#include<string.h>
int top=-1;
int size=0;
char s[1000];
char str[100];
void push(char ch){
    top++;
    s[top]=ch;
    }

char pop(){
    if (top==-1){
        printf("\n stack is empty");
    }
    else{
        return s[top--];

    }

}
int inStack(){
    char c=s[top];
    switch(c){
    case '+':
    case '-':return 1;
    case '*':
    case '/':return 2;
    }




}
int outStack(char ch){
    switch(ch){
    case '+':
    case '-':return 1;
    case '*':
    case '/':return 2;
    }


}

int main(){
printf("Enter the infix expression : \n");
scanf("%s",str);
int n=strlen(str);
char ch;
for(int i=0;i<n;i++){
    ch=str[i];
    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
    printf("%c",ch);
      }
    else{
        if (top==-1){
            push(ch);
        }
        else{
            char r;
            while(inStack()>=outStack(ch) && top!=-1){
                r=pop();
                printf("%c",r);
            }
            push(ch);

        }


    }


}
while(top!=-1){
    char d;
    d=pop();
    printf("%c",d);
}
}
