QueuedHelmet *__thiscall QueuedHelmet::`scalar deleting destructor'(QueuedHelmet *this, char a2)
{
  QueuedHelmet::~QueuedHelmet(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
