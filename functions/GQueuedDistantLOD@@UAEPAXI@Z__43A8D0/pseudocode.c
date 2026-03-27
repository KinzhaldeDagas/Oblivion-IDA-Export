QueuedDistantLOD *__thiscall QueuedDistantLOD::`scalar deleting destructor'(QueuedDistantLOD *this, char a2)
{
  QueuedDistantLOD::~QueuedDistantLOD(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
