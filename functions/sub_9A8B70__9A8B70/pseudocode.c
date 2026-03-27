_DWORD *__thiscall sub_9A8B70(_DWORD *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 3);
  *this = &NiD3DShaderConstantMapEntry::`vftable';
  FormHeapFree(v4);
  FormHeapFree(*(this + 9));
  if ( *((_BYTE *)this + 0x34) )
    FormHeapFree(*(this + 0xC));
  *this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
