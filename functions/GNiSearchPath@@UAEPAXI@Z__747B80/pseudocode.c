NiSearchPath *__thiscall NiSearchPath::`scalar deleting destructor'(NiSearchPath *this, char a2)
{
  *(_DWORD *)this = &NiSearchPath::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
