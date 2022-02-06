template<typename T>
class queueclass
{
	int *data;
	int firstindex;
	int nextindex;
	int size;
	int capacity;
public:
	queueclass(int s){
		data=new T(s);
		nextindex=0;
		firstindex=-1;
		capacity=s;
		size=0;

	}
	int getsize(){
		return size;
	}
	bool isEmpty(){
		return size==0;
	}
	void enqueue(T element){
		if(size==capacity){
			cout<<"queue is full"<<endl;
			return;
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