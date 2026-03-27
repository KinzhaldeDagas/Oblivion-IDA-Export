AnimSequenceBase *__thiscall AnimSequenceBase::`scalar deleting destructor'(AnimSequenceBase *this, char a2)
{
  *(_DWORD *)this = &AnimSequenceBase::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
