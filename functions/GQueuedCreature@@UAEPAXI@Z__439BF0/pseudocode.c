QueuedCreature *__thiscall QueuedCreature::`scalar deleting destructor'(QueuedCreature *this, char a2)
{
  QueuedCreature::~QueuedCreature(this); /*0x439bf3*/
  if ( (a2 & 1) != 0 ) /*0x439bfd*/
    FormHeapFree((unsigned int)this); /*0x439c00*/
  return this; /*0x439c0a*/
}
