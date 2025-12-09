#pragma once


#define rqueue(type, max) struct { type a[max]; size_t h; }
#define rqueue_init(b)     ((b).h = 0)
#define requeue_size(b)     (sizeof((b).a) / sizeof((b).a[0]))
#define requeue_AT(b, i)     ((b).a[i])
#define requeue_at(b, i)     ((b).a[(i) % requeue_size(b)])
#define requeue_top(b)      (requeue_a(b, b.h + requeue_size(b) - 1))
#define requeue_push(b, i) do{\
    (b).a[(b).h] = i;    \
    (b).h = ((b).h + 1) % requeue_size(b);  \
}while(0)