#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

void main(){
    clrscr();
    int n,r,x,y;
    cin>>n;
    cin>>r;
    cin>>x;
    cin>>y;
    int temp = r;
    char *c = new char[n+1], *s = new char[n+1];
    gets(c);
    gets(s);
    int l = strlen(c);
    for(int i=0;i<l;i+=2){
	if(c[i] == '0')
	    continue;
	else
	    if(s[i] == '1')
		r+=x;
	    else
		r-=y;
    }
    if(temp>r)
	cout<<"demoted";
    else if(temp<r)
	cout<<"promoted";
    else
	cout<<"no change";
    getch();
    delete(c);
    delete(s);
}