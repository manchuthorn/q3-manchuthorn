#include<bits/stdc++.h>
using namespace std;
class Heap{
	vector<int> q;
	public:
		Heap(){q.push_back(0);}
		
		void insert(int n){
			q.push_back(n);
			int i= q.size()-1;
			while (i>1&&q[i/2]<q[i]){
				swap(q[i],q[i/2]);
				i /= 2;
			}
		}
		
		int remove(){
			if (q.size()>1){
				int root = q[1];
				q[1] = q.back();
				q.pop_back();
				
				int i=1;
				while(i*2<q.size()){
					int l=i*2,r=l+1,largest = i;
					if(l<q.size()&&q[l]>q[largest]) largest = l;
					if(r<q.size()&&q[r]>q[largest]) largest = r;
					if(largest != i){
						swap(q[i],q[largest]);
						i = largest;
					}else berak;
				}return root;
			}return -1;
		}
		void print(){
			for(int i=1;i<q.size();i++){
				cout<<q[i]<<" ";
			}
			cout<<endl;
		}
};

int main(){
	Heap h;
	char cmd;
	int n;
	
	while(cin>>cmd){
		if(cmd=='a'){
			cin>>n;
			h.insert(n);
		}else if (cmd=='d'){
			cout<<h.remove()<<endl;
		}else if(cmd=='p'){
			h.print();
		}else if(cmd=='e'){
			break;
		}
	}
	return 0;
}
