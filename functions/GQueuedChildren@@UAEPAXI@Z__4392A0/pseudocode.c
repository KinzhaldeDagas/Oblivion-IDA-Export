QueuedChildren *__thiscall QueuedChildren::`scalar deleting destructor'(QueuedChildren *this, char a2)
{
  QueuedChildren::~QueuedChildren(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
