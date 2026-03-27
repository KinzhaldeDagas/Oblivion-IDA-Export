void **__thiscall ExtraLastFinishedSequence::`scalar deleting destructor'(void **this, char a2)
{
  ExtraLastFinishedSequence::~ExtraLastFinishedSequence(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
