NiSequence *__thiscall NiSequence::`scalar deleting destructor'(NiSequence *this, char a2)
{
  NiSequence::~NiSequence(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
