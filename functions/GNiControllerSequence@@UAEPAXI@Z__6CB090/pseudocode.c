NiControllerSequence *__thiscall NiControllerSequence::`scalar deleting destructor'(
        NiControllerSequence *this,
        char a2)
{
  NiControllerSequence::~NiControllerSequence(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
