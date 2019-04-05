/**
* This file contains the game rules
* @author ghouibi ghassen
*/
#include "shared.hpp"

class Game{
	public:
		grid_t grid;
		int played=L*H;
	public:
		grid_t    init_grid();
		grid_t    get_grid();
		grid_t 	  play(grid_t grid,int placement,int player); 
		void 	  show_grid(grid_t grid);
		int   	  check_winner(grid_t grid);
		int       check_play(grid_t grid,int placement);

};