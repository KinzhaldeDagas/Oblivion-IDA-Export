GrassLoadTask *__thiscall GrassLoadTask::`scalar deleting destructor'(GrassLoadTask *this, char a2)
{
  GrassLoadTask::~GrassLoadTask(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
