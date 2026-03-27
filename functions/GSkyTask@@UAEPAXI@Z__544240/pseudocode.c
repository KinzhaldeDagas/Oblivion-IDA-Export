SkyTask *__thiscall SkyTask::`scalar deleting destructor'(SkyTask *this, char a2)
{
  SkyTask::~SkyTask(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
