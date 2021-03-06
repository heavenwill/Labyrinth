#include <iostream>
enum tag{empty, chest};

class Map{
	class Tile{
	private:
		tag value;
		bool up, down, left, right;
		
	public:
		Tile() : up(false), down(false), left(false),right(false){
			value = empty;
		}
		
	};
	
private:
	int sizeX;
	int sizeY;
    	Tile **array;
public:
	Map(int x, int y){
    		array = new Tile*[x];
    		for (int i = 0; i < x; i++) array[i] = new Tile[y];
		sizeX = x;
		sizeY = y;
	}
	
	~Map(){
		for (int i = 0; i < sizeX; i++) delete[] array[i];
		delete[] array;
	}
	
};

int main(){
	return 0;
}
