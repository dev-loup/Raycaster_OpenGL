#include "maze.h"
/**
 * buttons - control the player
 * @key: key pressed
 */
void buttons(unsigned char key, int x, int y)
{
    if (key == 'a')
    {
        player.angle -= 0.1;
        if (player.angle < 0)
        {
            player.angle += 2 * PI;
        }
        player.dx = cos(player.angle) * 5;
        player.dy = sin(player.angle) * 5;
    }
    if (key == 'd')
        {
        player.angle += 0.1;
        if (player.angle > 2 * PI)
        {
            player.angle -= 2 * PI;
        }
        player.dx = cos(player.angle) * 5;
        player.dy = sin(player.angle) * 5;
    }
    if (key == 'w')
    {
        player.x += player.dx;
        player.y += player.dy;
    }
    if (key == 's')
    {
        player.x -= player.dx;
        player.y -= player.dy;
    }
    glutPostRedisplay();
}