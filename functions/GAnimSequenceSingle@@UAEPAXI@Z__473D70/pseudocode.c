AnimSequenceSingle *__thiscall AnimSequenceSingle::`scalar deleting destructor'(AnimSequenceSingle *this, char a2)
{
  AnimSequenceSingle::~AnimSequenceSingle(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
