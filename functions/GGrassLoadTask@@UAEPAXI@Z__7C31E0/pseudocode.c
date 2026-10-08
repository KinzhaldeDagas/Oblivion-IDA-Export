GrassLoadTask *__thiscall GrassLoadTask::`scalar deleting destructor'(GrassLoadTask *this, char a2)
{
  GrassLoadTask::~GrassLoadTask(this); /*0x7c31e3*/
  if ( (a2 & 1) != 0 ) /*0x7c31ed*/
    FormHeapFree((unsigned int)this); /*0x7c31f0*/
  return this; /*0x7c31fa*/
}
