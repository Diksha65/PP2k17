#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &vec, vector<int> &v1, vector<int> &v2){
    int n1 = v1.size();
    int n2 = v2.size();
    int p1=0, p2=0, k=0;
    while(p1<n1 && p2<n2){
        if(v1[p1] < v2[p2])
            vec[k++] = v1[p1++];
        else
            vec[k++] = v2[p2++];
    }
    while(p1<n1) vec[k++] = v1[p1++];
    while(p2<n2) vec[k++] = v2[p2++];
}

void sort(vector<int> & vec){
    int n = vec.size();
    if(n<=1) return;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;++i){
        if(i<n/2)
            v1.push_back(vec[i]);
        else
            v2.push_back(vec[i]);
    }
    sort(v1);
    sort(v2);
    merge(vec, v1, v2);
}

void display(vector<int> vec){
    cout<<"\n";
    for(int i=0; i<vec.size(); ++i){
        cout<<vec[i]<<"\t";
    }
    cout<<"\n";
}

int main(){
    vector<int> vec(8,0);
    int val;
    cout<<"Enter the elements in the vector:";
    for(int i=0; i<8; i++){
        cin>>val;
        vec[i] = val;
    }
    sort(vec);
    display(vec);
}