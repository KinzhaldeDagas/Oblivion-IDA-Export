QueuedHead *__thiscall QueuedHead::`scalar deleting destructor'(QueuedHead *this, char a2)
{
  QueuedHead::~QueuedHead(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
