QueuedChildren *__thiscall QueuedChildren::`scalar deleting destructor'(QueuedChildren *this, char a2)
{
  QueuedChildren::~QueuedChildren(this); /*0x4392a3*/
  if ( (a2 & 1) != 0 ) /*0x4392ad*/
    FormHeapFree((unsigned int)this); /*0x4392b0*/
  return this; /*0x4392ba*/
}
