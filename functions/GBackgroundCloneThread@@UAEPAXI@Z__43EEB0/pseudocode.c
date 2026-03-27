BackgroundCloneThread *__thiscall BackgroundCloneThread::`scalar deleting destructor'(
        BackgroundCloneThread *this,
        char a2)
{
  BackgroundCloneThread::~BackgroundCloneThread(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
