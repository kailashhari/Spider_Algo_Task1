#include<iostream.h>
#include<conio.h>
#include<math.h>

int isel(int n){
    if((n == 10)||(n == 8)||(n == 7)||(n == 16)||(n == 9)||(n == 43))
	return 1;
    else
	return 0;
}

void main(){
    clrscr();
    int tsum = 93,pr1,pr2,pr3,pr4,i;
    int mArr[] = {10, 8, 7, 16, 9, 43};
    int arr[] = {0,0,0,0,0,0};
    cout<<"0 1\n";
    cin>>pr1;
    cout<<"1 2\n";
    cin>>pr2;
    for(i=0;i<6;i++){
	if((pr1%mArr[i] == 0))
	    if(pr2%mArr[i] == 0)
		if((isel(pr1/mArr[i]) == 1)&&(isel(pr2/mArr[i]) == 1)){
		    arr[1] = mArr[i];
		    arr[0] = pr1/mArr[i];
		    arr[2] = pr2/mArr[i];
		    break;
		    }
    }
    cout<<"0 3\n";
    cin>>pr3;
    arr[3] = pr3/arr[0];
    cout<<"0 4\n";
    cin>>pr4;
    arr[4] = pr4/arr[0];
    for(i=0;i<5;i++){
	tsum-=arr[i];
    }
    arr[5] = tsum;
    for(i=0;i<6;i++)
	cout<<arr[i]<<" ";
    getch();
}