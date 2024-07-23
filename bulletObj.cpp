
#include "main.h"
#include "bulletObj.h"

bulletObj::bulletObj() {

	x_val_ =0;
	y_val_ =0;
	is_move_=0;

}

bulletObj::~bulletObj() {

}

void bulletObj::HandleMove(const int& x_border, const int& y_border) {


	if(bullet_dir_ == DIR_RIGHT) {
		rect_.x += x_val_;
		if(rect_.x>x_border) {
			is_move_ = false;

		}
	}
	else if(bullet_dir_ == DIR_LEFT) {
		rect_.x-= x_val_;
		if(rect_.x<0) {
			is_move_ = false;

		}
	}


}