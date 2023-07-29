#ifndef DEMO_H
#define DEMO_H

#include <sync.h>

typedef struct demo_t_ demo_t;

demo_t *demo_init(void);
void demo_render(demo_t *demo, struct sync_device *rocket, double rocket_row);
void demo_deinit(demo_t *demo);

#endif
