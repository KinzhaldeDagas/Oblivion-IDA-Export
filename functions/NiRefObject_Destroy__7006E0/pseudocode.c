_DWORD *__thiscall NiRefObject_Destroy(_DWORD *this, char a2)
{
  *this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
