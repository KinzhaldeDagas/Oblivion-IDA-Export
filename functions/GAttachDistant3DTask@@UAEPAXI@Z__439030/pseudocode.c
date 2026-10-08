AttachDistant3DTask *__thiscall AttachDistant3DTask::`scalar deleting destructor'(AttachDistant3DTask *this, char a2)
{
  AttachDistant3DTask::~AttachDistant3DTask(this); /*0x439033*/
  if ( (a2 & 1) != 0 ) /*0x43903d*/
    FormHeapFree((unsigned int)this); /*0x439040*/
  return this; /*0x43904a*/
}
