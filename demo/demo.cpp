#include <graphics.h>

int main() {
	initgraph(1280, 720);
	int x = 300;
	int y = 300;
	int radius = 100;
	BeginBatchDraw();
	while (true) {
		ExMessage msg;
		while (peekmessage(&msg)) {
			if (msg.message == WM_MOUSEMOVE) {
				x = msg.x;
				y = msg.y;
			}
		}
		cleardevice();
		solidcircle(x, y, radius);
		FlushBatchDraw();
	}
	EndBatchDraw();

	return 0;
}