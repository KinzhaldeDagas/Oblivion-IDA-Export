QueuedCreature *__thiscall QueuedCreature::`scalar deleting destructor'(QueuedCreature *this, char a2)
{
  QueuedCreature::~QueuedCreature(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
