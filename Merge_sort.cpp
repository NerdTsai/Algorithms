//原地归并排序;
#include<iostream>
#include<vector>
using namespace std;

int merge(int a[],int lo,int mid,int hi){
	int i=lo,j=mid+1;
	int t;
	int aux[hi+1];
	for(int k=lo;k<=hi;k++){
		aux[k]=a[k];
	}
	for(int k=lo;k<=hi;k++){
		if(i>mid)
			a[k]=aux[j++];
		else if(j>hi)
			a[k]=aux[i++];
		     else if(aux[j]<aux[i]){
			     t=aux[i];
			     aux[i]=aux[j];
			     aux[j]=t;
			     a[k]=aux[j++];
			 }
			  else
			     a[k]=aux[i++];
	}
	for(int b=0;b<=hi;b++){
		cout<<a[b]<<" ";
	}
	return 0; 
}

int main(){
	cout<<"请输入待排序数组: "<<endl;
	int temp;
	vector<int>ivec;
	while(cin>>temp){
		ivec.push_back(temp);
	}
	int arr[ivec.size()];
	for(int i=0;i<ivec.size();i++){
		arr[i]=ivec[i];
	}
	merge(arr,0,ivec.size()/2-1,ivec.size()-1);	
	return 0;
} 
