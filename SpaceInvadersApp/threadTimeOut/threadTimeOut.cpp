#include "threadTimeOut.h"
///////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////  Thread TimeOut /////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
void threadTimeOut(){
  Attente(DELAI_TIME_OUT);
  mLock(&mutexFireOn);
    fireOn = true;
  mUnLock(&mutexFireOn);
  pthread_exit(NULL);
}
