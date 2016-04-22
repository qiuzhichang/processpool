#ifndef __PROCESSPOOL_H
#define __PROCESSPOOL_H

#ifdef __cplusplus
extern "C" {
#endif

#define PP_TIMEOUT 1
#define PP_ERROR  -1
typedef struct pp_pool_t pp_pool_t;

pp_pool_t *pp_pool_new(int np);

int pp_pool_add(pp_pool_t *pool, void (*func)(void *), void *arg);

int pp_pool_process_addn(pp_pool_t *pool, int n);

int pp_pool_process_deln(pp_pool_t *pool, int n);

int pp_pool_wait(pp_pool_t *pool);

int pp_pool_free(pp_pool_t *pool);

#ifdef __cplusplus
}
#endif

#endif
