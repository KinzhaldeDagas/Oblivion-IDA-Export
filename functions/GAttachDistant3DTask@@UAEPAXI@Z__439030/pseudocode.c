AttachDistant3DTask *__thiscall AttachDistant3DTask::`scalar deleting destructor'(AttachDistant3DTask *this, char a2)
{
  AttachDistant3DTask::~AttachDistant3DTask(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
