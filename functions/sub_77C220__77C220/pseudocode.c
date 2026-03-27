unsigned int *__thiscall sub_77C220(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2);
  *this = (unsigned int)&NiD3DGlobalConstantEntry::`vftable';
  FormHeapFree(v4);
  FormHeapFree(*(this + 6));
  *this = (unsigned int)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
