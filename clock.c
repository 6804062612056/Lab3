#include <stdio.h>

int main() {
	int h,m,s,next;
	scanf("%d:%d:%d",&h,&m,&s);
	scanf("%d",&next);
	
	if ((m += next) >= 60) {
		m -= 60;
		h += 1;
		if (m >= 60) {
			m -= 60;
			h += 1;
		}
		if (h >= 24) {
			h -= 24;
			}
		}
	printf("hour:%d\n",h);
	printf("minute:%d\n",m);
	printf("second:%d",s);
}
