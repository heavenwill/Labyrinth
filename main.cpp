#include <iostream>

class Map{
	class Tile{
	private:
			int value;
			bool up = false;
			bool down = false;
			bool left = false;
			bool right = false;
	};
private:
	int size_x;
    	Tile **array;
public:
	Map(int y, int x){
    		array = new *Tile	[y];
    		for (int i = 0; i < x; i++) t[i] = new Tile[n];
	}
	
	~Map(){
		
	}
	
};

int main(){
	return 0;
}
