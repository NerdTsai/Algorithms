//快速排序;
#include<iostream>
#include<vector>
using namespace std;
//快速排序的切分; 
int partition(int *arr1,int lo,int hi){
	int i=lo,j=hi+1;
	int v=arr1[lo];
	int t;
	while (true){
		while(arr1[++i]>v){
			if(i==hi)break;
		}
		while(v>arr1[--j]){
			if(j==lo)break;
		}
		if(i>=j)break;
		t=arr1[i];
		arr1[i]=arr1[j];
		arr1[j]=t;
	}
	t=arr1[lo];
	arr1[lo]=arr1[j];
	arr1[j]=t;
	return j;
}

    void sort(int *arr2,int lo,int hi){
	if(hi<=lo)return;
	int j=partition(arr2,lo,hi);
	sort(arr2,lo,j-1);
	sort(arr2,j+1,hi);
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
	
	sort(arr,0,ivec.size());
	for(int k=0;k<ivec.size();k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}
