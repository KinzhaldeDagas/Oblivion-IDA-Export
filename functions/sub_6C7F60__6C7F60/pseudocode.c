char **__thiscall sub_6C7F60(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x6c7f63*/
  *this = (char *)&NiTArray<NiPointer<NiInterpController>>::`vftable'; /*0x6c7f68*/
  if ( v3 ) /*0x6c7f6e*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x6c7f74*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6c7f80*/
    FormHeapFree(v4); /*0x6c7f86*/
  }
  if ( (a2 & 1) != 0 ) /*0x6c7f94*/
    FormHeapFree((unsigned int)this); /*0x6c7f97*/
  return this; /*0x6c7fa1*/
}
