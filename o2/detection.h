#ifndef DETECTION_H
#define DETECTION_H



void  Line_Detection(SDL_Surface* img);
void Height_Detection(SDL_Surface* img);
void Horizontal_Line(SDL_Surface* img, int y, int start, int end);
void Vertical_Line(SDL_Surface* img, int x, int start, int end);
SDL_Surface* sdlnewchar(SDL_Surface* img,int minw,int maxw,int minh, int maxh);
#endif
