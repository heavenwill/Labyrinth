#include <iostream>
enum tag{empty, chest};

class Map{
	class Tile{
	private:
		tag value;
		bool up = false;
		bool down = false;
		bool left = false;
		bool right = false;
		
	public:
		Tile(tag g){
			this.value = g;
		}
		
	};
	
private:
	int sizeX;
	int sizeY;
    	Tile **array;
public:
	Map(int x, int y){
    		array = new *Tile	[x];
    		for (int i = 0; i < y; i++) t[i] = new Tile[n];
		this.sizeX = x;
		this.sizeY = y;
	}
	
	~Map(){
		for (int i = 0; i < sizeX; i++) delete[] array[i];
		delete[] array;
	}
	
};

int main(){
	return 0;
}
