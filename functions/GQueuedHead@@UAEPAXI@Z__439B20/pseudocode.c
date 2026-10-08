QueuedHead *__thiscall QueuedHead::`scalar deleting destructor'(QueuedHead *this, char a2)
{
  QueuedHead::~QueuedHead(this); /*0x439b23*/
  if ( (a2 & 1) != 0 ) /*0x439b2d*/
    FormHeapFree((unsigned int)this); /*0x439b30*/
  return this; /*0x439b3a*/
}
