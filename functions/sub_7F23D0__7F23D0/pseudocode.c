_DWORD *__thiscall sub_7F23D0(_DWORD *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 2);
  *this = &STSPData::`vftable';
  if ( v3 )
  {
    if ( *((_WORD *)this + 6) )
      FormHeapFree(v3);
  }
  *this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
