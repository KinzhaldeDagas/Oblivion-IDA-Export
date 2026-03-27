AnimSequenceMultiple *__thiscall AnimSequenceMultiple::`scalar deleting destructor'(
        AnimSequenceMultiple *this,
        char a2)
{
  AnimSequenceMultiple::~AnimSequenceMultiple(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
