template <typename T>
class dynamicqueue
{
	int *data;
	int nextindex;
	int firstindex;
	int size;
	int capacity;
public:
	dynamicqueue(int s){
		data=new T(s);
		nextindex=0;
		firstindex=-1;
		size=0;
		capacity=s;

	}
	int getsize(){
		return size;
	}
	bool isEmpty(){
		return size==0;
	}
	void enqueue(T element){
		if(size==capacity){
			T *newData= new T(2*capacity);
			int j=0;
			for(int i=firstindex;i<capacity;i++){
				newData[j]=data[i];
				j++;
			}
			for(int i=0;i<firstindex;i++){
				newData[j]=data[i];
				j++;
			}
			delete []data;
			data=newData;
			firstindex=0; 
			nextindex=capacity;
			capacity*=2;
			//cout<<"queue is full"<<endl;
			//return;
		}
		data[nextindex]=element;
		nextindex=(nextindex+1)%capacity;
		if(firstindex==-1){
			firstindex=0;
		}
		size++;
	}
	T front(){
		if(isEmpty()){
			cout<<"queue is empty"<<endl;
			return 0;
		}
		return data[firstindex];
	}
	T dequeue(){
		if(isEmpty()){
			cout<<"queue is empty"<<endl;
			return 0;
		}
		T ans=data[firstindex];
		firstindex=(firstindex+1)%capacity;
		size--;
		if(size==0){
			firstindex=-1;
			nextindex=0;
		}
		return ans;
	}
	
};