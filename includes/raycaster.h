#ifndef _RAYCASTER_H_
#define _RAYCASTER_H_

/**
  5  * struct Vector - Typedef for a struct of type Vector
  6  * @posX: x-coordinate of an object at a starting time
  7  * @posY: y-coordinate of an object at a starting time
  8  * @dirX: x-coordinate direction vector of an object at a time
  9  * @dirY: y-coordinate direction vector  of an object at a time
 10  * @planeX: x-coordinate of an object on the camera plane at a time
 11  * @planeY: y-coordinate of an object on the camera plane at a time
 12  *
 13  * Description: It is a struct containing all cordinates of an object at a t    ime
 14  */
typedef struct Vector
 {  
    int posX;
    int posY;
    int dirX;
    int dirY;
    int planeX;
    int planeY;
} Vector;

/**
 26  * struct Projection - Typedef for a struct of type Projection
 27  * @drawStart: The coordinate of the first pixel to be drawn
 28  * @drawEnd: The coordinate of the last pixel to be drawn
 29  *
 30  * Description: It is a struct containing the start and stop cordinates for
 31  * camera projection.
 32  */
 typedef struct Projection
 {
    int drawStart;
    int drawEnd;
} Projection;
    

 void calculate_distances(Vector object, double rayDirX, double rayDirY, double *sideDistX, double *sideDistY, int *stepX,
    int *stepY, int mapX, int mapY, double deltaDistX,
    double deltaDistY);
 Projection calcuate_projection(int side, double sideDistX, double sideDistY,
 double deltaDistX, double deltaDistY,
 double *perpWallDist, int *wall_height, int *wall_top,
 int *wall_bottom);
 int fps_count(double *time, double *oldTime);
 unsigned long getTicks(void);
 void cls(SDL_Surface *scr);
  
#endif /* _RAYCASTER_H_ */   

