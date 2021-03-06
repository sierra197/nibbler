//
// objetcs.cpp for 203 in /home/nguye_1/rendu/203hotline
//
// Made by Alexandre NGUYEN
// Login   <nguye_1@epitech.net>
//
// Started on  Fri Mar 28 17:48:57 2014 Alexandre NGUYEN
// Last update Sat Apr  5 12:17:39 2014 Alexandre NGUYEN
//

#include "objects.h"

// COLORS
GLfloat snake_head_c[]   = {
  0,0.5,0,  0,0.5,0,  0,0.5,0,
  0,0.5,0,  0,0.5,0,  0,0.5,0,
  0,0.5,0,  0,0.5,0,  0,0.5,0,
  0,0.3,0,  0,0.3,0,  0,0.3,0,
  1,0,0,  1,0,0,  1,0,0,
  0,0.3,0,  0,0.3,0,  0,0.3,0,
  1,0,0,  1,0,0,  1,0,0,
  0,0.3,0,  0,0.3,0,  0,0.3,0,
  0,0.15,0,  0,0.15,0,  0,0.15,0,
  0,0.15,0,  0,0.15,0,  0,0.15,0,

  // Dents
  0.2,0.2,0.2,  0.2,0.2,0.2,  0.2,0.2,0.2,
  0.15,0.15,0.15,  0.15,0.15,0.15,  0.15,0.15,0.15,
  0.1,0.1,0.1,  0.1,0.1,0.1,  0.1,0.1,0.1,
  0.2,0.2,0.2,  0.2,0.2,0.2,  0.2,0.2,0.2,
  0.15,0.15,0.15,  0.15,0.15,0.15,  0.15,0.15,0.15,
  0.1,0.1,0.1,  0.1,0.1,0.1,  0.1,0.1,0.1,

  // Gauche
  0,0.4,0,  0,0.4,0,  0,0.4,0,
  0,0.4,0,  0,0.4,0,  0,0.4,0,
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,

  // Droite
  0,0.4,0,  0,0.4,0,  0,0.4,0,
  0,0.4,0,  0,0.4,0,  0,0.4,0,
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,

  // Arriere
  0,0.5,0,  0,0.5,0,  0,0.5,0,
  0,0.5,0,  0,0.5,0,  0,0.5,0,
  0,0.5,0,  0,0.5,0,  0,0.5,0,
  0,0.3,0,  0,0.3,0,  0,0.3,0,
  0,0.3,0,  0,0.3,0,  0,0.3,0,
  0,0.3,0,  0,0.3,0,  0,0.3,0,
  0,0.3,0,  0,0.3,0,  0,0.3,0,
  0,0.3,0,  0,0.3,0,  0,0.3,0,
  0,0.15,0,  0,0.15,0,  0,0.15,0,
  0,0.15,0,  0,0.15,0,  0,0.15,0,

  // Top / Under
  0,0.6,0,  0,0.6,0,  0,0.6,0,
  0,0.6,0,  0,0.6,0,  0,0.6,0,

  0,0.01,0,  0,0.01,0,  0,0.01,0,
  0,0.01,0,  0,0.01,0,  0,0.01,0,

  // Bouche
  // Gauche
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,

// Droite
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.2,0,  0,0.2,0,  0,0.2,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,

// Devant
  0,0.15,0,  0,0.15,0,  0,0.15,0,
  0,0.15,0,  0,0.15,0,  0,0.15,0,

// Dessous
  0,0.01,0,  0,0.01,0,  0,0.01,0,
  0,0.01,0,  0,0.01,0,  0,0.01,0,

// Derriere
  0,0.1,0,  0,0.1,0,  0,0.1,0,
  0,0.1,0,  0,0.1,0,  0,0.1,0,

  0,0.05,0,  0,0.05,0,  0,0.05,0,
  0,0.05,0,  0,0.05,0,  0,0.05,0,

// Interieur
  0.92,0.65,0.04, 0.92,0.65,0.04, 0.92,0.65,0.04,
  0.92,0.65,0.04, 0.92,0.65,0.04, 0.92,0.65,0.04,
  0.85,0.61,0.06, 0.85,0.61,0.06, 0.85,0.61,0.06,
  0.85,0.61,0.06, 0.85,0.61,0.06, 0.85,0.61,0.06,
  0.75,0.55,0.06,  0.75,0.55,0.06,  0.75,0.55,0.06,
  0.75,0.55,0.06,  0.75,0.55,0.06,  0.75,0.55,0.06,
};

// VECTORS
GLfloat snake_head_v[] = {
1,1,7,  7,1,7,  4,0,5,
0,0,5,  1,1,7,  4,0,5,
4,0,5,  7,1,7,  8,0,5,
0,0,5,  0,0,3,  2,0,3,
0,0,5,  2,0,3,  4,0,5,
2,0,3,  4,0,5,  6,0,3,
6,0,3,  4,0,5,  8,0,5,
8,0,5,  8,0,3,  6,0,3,
0,0,3,  8,0,3,  7,1,2,
7,1,2,  1,1,2,  0,0,3,

// Dents
1,1,2,  3,1,2,  2,1,0,
3,1,2,  2,1,0,  2,1.5,2,
1,1,2,  2,1,0,  2,1.5,2,
5,1,2,  7,1,2,  6,1,0,
7,1,2,  6,1,0,  6,1.5,2,
5,1,2,  6,1,0,  6,1.5,2,

// Gauche
7,1,7,  8,0,5,  8,8,5,
8,8,5,  7,1,7,  7,7,7,
8,0,5,  8,8,5,  8,8,3,
8,0,5,  8,8,3,  8,0,3,
8,0,3,  8,8,3,  7,7,2,
7,7,2,  8,0,3,  7,1,2,

// Droite
1,1,7,  0,0,5,  0,8,5,
0,8,5,  1,1,7,  1,7,7,
0,0,5,  0,8,5,  0,8,3,
0,0,5,  0,8,3,  0,0,3,
0,0,3,  0,8,3,  1,7,2,
1,7,2,  0,0,3,  1,1,2,

// Arriere
1,7,7,  7,7,7,  4,8,5,
0,8,5,  1,7,7,  4,8,5,
4,8,5,  7,7,7,  8,8,5,
0,8,5,  0,8,3,  2,8,3,
0,8,5,  2,8,3,  4,8,5,
2,8,3,  4,8,5,  6,8,3,
6,8,3,  4,8,5,  8,8,5,
8,8,5,  8,8,3,  6,8,3,
0,8,3,  8,8,3,  7,7,2,
7,7,2,  1,7,2,  0,8,3,

// Top / Under
1,1,7,  7,1,7,  7,7,7,
1,1,7,  7,7,7,  1,7,7,
1,1,2,  7,1,2,  7,7,2,
1,1,2,  7,7,2,  1,7,2,

// Bouche
// Exterieur
// Gauche
7,7,2,  7,6,2,  7,6,1.5,
7,6,1.5,  7,7,2,  7,7,1,
7,7,1,  7,6,1.5,  7,5.5,1,
7,5.5,1,  7,7,1,  6,6,0,
6,6,0,  7,5.5,1,  6,2,0,
6,2,0,  7,5.5,1,  7,1.5,1,

// Droite
1,7,2,  1,6,2,  1,6,1.5,
1,6,1.5,  1,7,2,  1,7,1,
1,7,1,  1,6,1.5,  1,5.5,1,
1,5.5,1,  1,7,1,  2,6,0,
2,6,0,  1,5.5,1,  2,2,0,
2,2,0,  1,5.5,1,  1,1.5,1,

// Devant
1,1.5,1,  7,1.5,1,  2,2,0,
2,2,0,  7,1.5,1,  6,2,0,

// Dessous
6,2,0,  6,6,0,  2,6,0,
6,2,0,  2,6,0,  2,2,0,

// Derriere
7,7,2,  7,7,1,  1,7,2,
1,7,2,  1,7,1,  7,7,1,
7,7,1,  1,7,1,  6,6,0,
1,7,1,  6,6,0,  2,6,0,

// Interieur
1,1.5,1,  7,1.5,1,  7,5.5,1,
1,1.5,1,  7,5.5,1,  1,5.5,1,
1,5.5,1,  7,5.5,1,  7,6,1.5,
1,5.5,1,  7,6,1.5,  1,6,1.5,
1,6,2,  7,6,2,  7,6,1,
7,6,1,  1,6,2,  1,6,1
};

void	draw_field(float height, float width)
{
  width *= 8;
  height *= 8;
  GLfloat field_v[] = {
    0,height,0,  width,0,0,  0,0,0,
    0,height,0,  width,0,0,  width,height,0
  };
  GLfloat field_c[] = {
    0.71,0.66,0.21,  0.71,0.66,0.21,  0.71,0.66,0.21,
    0.71,0.66,0.21,  0.71,0.66,0.21,  0.71,0.66,0.21
  };

  glEnableClientState(GL_VERTEX_ARRAY);
  glEnableClientState(GL_COLOR_ARRAY);
  glVertexPointer(3, GL_FLOAT, 0, field_v);
  glColorPointer(3, GL_FLOAT, 0, field_c);

  glTranslatef(-4, -4, -3.5);
  glDrawArrays(GL_TRIANGLES, 0, 6);
  glTranslatef(4, 4, 3.5);

  glDisableClientState(GL_VERTEX_ARRAY);
  glDisableClientState(GL_COLOR_ARRAY);
}

void draw_head(int x, int y)
{
  glEnableClientState(GL_VERTEX_ARRAY);
  glEnableClientState(GL_COLOR_ARRAY);
  glVertexPointer(3, GL_FLOAT, 0, snake_head_v);
  glColorPointer(3, GL_FLOAT, 0, snake_head_c);

  glTranslatef(-4 + x*8, -4 + y*8, -2.5);
  glDrawArrays(GL_TRIANGLES, 0, 204);
  glTranslatef(4 - x*8, 4 - y*8, 2.5);

  glDisableClientState(GL_VERTEX_ARRAY);
  glDisableClientState(GL_COLOR_ARRAY);
}
