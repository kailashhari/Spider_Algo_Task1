#include<iostream.h>
#include<string.h>
#include<conio.h>

int ans = 0;

void checker(char a[],int n){
    if(n <= 1){
	return;
    }
    char *half1 = new char[(n/2)+1], *half2 = new char[(n/2)+1];
    int i;
    for(i=0;i<n/2;i++){
	half1[i] = a[i];
	half2[i] = a[(n/2)+i];
    }
    half1[i] = '\0';
    half2[i] = '\0';
    if(strcmp(half1,half2) == 0){
	ans++;
	checker(half1, n/2);
    }
    delete(half1);
    delete(half2);
}

void main(){
    clrscr();
    int n;
    cin>>n;
    char *a = new char[n+1];
    cin>>a;
    checker(a, n);
    cout<<ans;
    delete(a);
    getch();

}