#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void add1(char a[], int n){
    if(a[n] == '0'){
	a[n] = '1';
    }
    else{
	a[n] = '0';
	add1(a,n-1);
    }
}

void sub1(char a[], int n){
    if(a[n] == '1'){
	a[n] = '0';
    }
    else{
	a[n] = '1';
	sub1(a,n-1);
    }
}



int all1chk(char a[], int n){
    int status = 1, i;
    for(i=0;i<n;i++){
	if(a[i] == '0'){
	    status = 0;
	    break;
	}
    }
    return status;
}


void main(){
    clrscr();
    int n,n1,n2,status = -1;
    cin>>n;
    char *a = new char[n];
    char *Inc = new char[n];
    char *Dec = new char[n];
    cin>>a;
    n1 = n;
    n2 = n;
    strcpy(Dec, a);
    strcpy(Inc, a);

    while(1){
	if(all1chk(Inc, n1) == 1){
	    break;
	}
	add1(Inc, n1-1);
	sub1(Dec, n2-1);
	if(Dec[0] == '0'){
	    break;
	}
	if((n1 == n1)&&(n1 == n)){
	    cout<<Dec<<" "<<Inc<<endl;
	    status = 1;
	}
    }

    if(status == -1){
	cout<<status;
    }

    delete(a);
    delete(Inc);
    delete(Dec);
    getch();
}