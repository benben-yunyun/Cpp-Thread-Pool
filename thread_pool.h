#if !defined(__THREAD_POOL_H__)
#define __THREAD_POOL_H__

/**
 * thread_pool.h - thread pool implement with cpp
 * use the message queue to save the jobs and control the thread pool run.
 */

class thread_pool_t {
 public:
  /**
   * pthread_pool : the thread_pool_t constructor 
   * @Param
   * tp_num : the maximum number of the thread pool's working jobs in meanwhile
   * @return : none
   */
  pthead_pool(int thp_num);
  /**
   * ~pthread_pool : the thread_pool_t destoryer
   */
  ~pthread_pool();
 private:
};

#endif
