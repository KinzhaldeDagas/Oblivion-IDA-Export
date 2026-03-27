BSAnimGroupSequence *__thiscall BSAnimGroupSequence::`scalar deleting destructor'(BSAnimGroupSequence *this, char a2)
{
  BSAnimGroupSequence::~BSAnimGroupSequence(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
