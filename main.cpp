#include <iostream>

class Map{
	class Tile{
		int value;
		bool 
	};
	int size_x;
    Tile **array;
public:
    Map(int y, int x){
    	array=new *Tile	[y];
    	for (int i = 0; i < x; i ++) t[i] = new Tile[n];
	}
	~Map(){
		delete [] array;
	}
	
};

int main(){
	return 0;
}