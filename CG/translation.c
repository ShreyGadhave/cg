#include <graphics.h>
void translateRectangle(int x, int y, int dx, int dy) {
setcolor(WHITE);
rectangle(x, y, x + 100, y + 50);
x += dx;
y += dy;
setcolor(RED);
rectangle(x, y, x + 100, y + 50);
}
int main() {
int gd = DETECT, gm;
initgraph(&gd, &gm, "");
int x = 100, y = 100;
int dx = 10, dy = 10;
setcolor(RED);
rectangle(x, y, x + 100, y + 50);
delay(2000);
translateRectangle(x, y, dx, dy);
getch();
closegraph();
return 0;
}
