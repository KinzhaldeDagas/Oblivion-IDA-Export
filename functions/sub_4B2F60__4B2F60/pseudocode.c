char **__thiscall sub_4B2F60(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x4b2f63*/
  *this = (char *)&NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x4b2f68*/
  if ( v3 ) /*0x4b2f6e*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x4b2f74*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x4b2f80*/
    FormHeapFree(v4); /*0x4b2f86*/
  }
  if ( (a2 & 1) != 0 ) /*0x4b2f94*/
    FormHeapFree((unsigned int)this); /*0x4b2f97*/
  return this; /*0x4b2fa1*/
}
