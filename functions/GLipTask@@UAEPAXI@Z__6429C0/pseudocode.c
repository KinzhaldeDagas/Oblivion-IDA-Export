LipTask *__thiscall LipTask::`scalar deleting destructor'(LipTask *this, char a2)
{
  LipTask::~LipTask(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
