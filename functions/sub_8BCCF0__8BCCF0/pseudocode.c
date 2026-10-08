char **__thiscall sub_8BCCF0(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x8bccf3*/
  *this = (char *)&NiTLargeArray<NiPointer<NiTimeController>>::`vftable'; /*0x8bccf8*/
  if ( v3 ) /*0x8bccfe*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x8bcd04*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x8bcd10*/
    FormHeapFree(v4); /*0x8bcd16*/
  }
  if ( (a2 & 1) != 0 ) /*0x8bcd24*/
    FormHeapFree((unsigned int)this); /*0x8bcd27*/
  return this; /*0x8bcd31*/
}
