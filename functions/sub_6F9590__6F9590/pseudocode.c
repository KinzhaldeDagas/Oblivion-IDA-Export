char **__thiscall sub_6F9590(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x6f9593*/
  *this = (char *)&NiTArray<NiPointer<NiRefObject>>::`vftable'; /*0x6f9598*/
  if ( v3 ) /*0x6f959e*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x6f95a4*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6f95b0*/
    FormHeapFree(v4); /*0x6f95b6*/
  }
  if ( (a2 & 1) != 0 ) /*0x6f95c4*/
    FormHeapFree((unsigned int)this); /*0x6f95c7*/
  return this; /*0x6f95d1*/
}
