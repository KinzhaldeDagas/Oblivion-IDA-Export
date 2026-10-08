QueuedDistantLOD *__thiscall QueuedDistantLOD::`scalar deleting destructor'(QueuedDistantLOD *this, char a2)
{
  QueuedDistantLOD::~QueuedDistantLOD(this); /*0x43a8d3*/
  if ( (a2 & 1) != 0 ) /*0x43a8dd*/
    FormHeapFree((unsigned int)this); /*0x43a8e0*/
  return this; /*0x43a8ea*/
}
