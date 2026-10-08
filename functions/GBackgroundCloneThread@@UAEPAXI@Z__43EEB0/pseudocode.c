BackgroundCloneThread *__thiscall BackgroundCloneThread::`scalar deleting destructor'(
        BackgroundCloneThread *this,
        char a2)
{
  BackgroundCloneThread::~BackgroundCloneThread(this); /*0x43eeb3*/
  if ( (a2 & 1) != 0 ) /*0x43eebd*/
    FormHeapFree((unsigned int)this); /*0x43eec0*/
  return this; /*0x43eeca*/
}
