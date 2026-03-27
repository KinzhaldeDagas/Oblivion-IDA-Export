bhkMemory *__thiscall bhkMemory::`scalar deleting destructor'(bhkMemory *this, char a2)
{
  *(_DWORD *)this = &hkMemory::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
