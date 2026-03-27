unsigned int *__thiscall sub_7F1920(unsigned int *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 2);
  *this = (unsigned int)&STLSPData::`vftable';
  if ( v3 )
    FormHeapFree(v3);
  *this = (unsigned int)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
