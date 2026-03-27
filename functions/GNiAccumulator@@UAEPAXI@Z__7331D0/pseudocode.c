NiAccumulator *__thiscall NiAccumulator::`scalar deleting destructor'(NiAccumulator *this, char a2)
{
  *(_DWORD *)this = &NiAccumulator::`vftable';
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
