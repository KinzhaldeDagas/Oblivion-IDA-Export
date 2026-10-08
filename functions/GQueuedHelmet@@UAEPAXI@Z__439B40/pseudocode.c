QueuedHelmet *__thiscall QueuedHelmet::`scalar deleting destructor'(QueuedHelmet *this, char a2)
{
  QueuedHelmet::~QueuedHelmet(this); /*0x439b43*/
  if ( (a2 & 1) != 0 ) /*0x439b4d*/
    FormHeapFree((unsigned int)this); /*0x439b50*/
  return this; /*0x439b5a*/
}
