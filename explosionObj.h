#ifndef EXPLOSION_OBJECT_H_
#define EXPLOSION_OBJECT_H_


#include "commonFunction.h"
#include "baseFunction.h"

#define NUM_FRAME_EXP 8

class explosionObj : public baseFunction {


public:
	explosionObj();
	~explosionObj();

public:
	void set_clip();
	void set_frame(const int& fr) { frame_ = fr;}
	virtual bool LoadImg(std::string path, SDL_Renderer* screen);
	void Show(SDL_Renderer* screen);
	int get_frame_width() const {return frame_width_;}
	int get_frame_height() const {return frame_height_;}
private:
	int frame_width_;
	int frame_height_;

	unsigned int frame_;
	SDL_Rect frame_clip_[8];

};

#endif
