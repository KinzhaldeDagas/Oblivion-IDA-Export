char **__thiscall sub_8C6C90(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x8c6c93*/
  *this = (char *)&NiTLargeArray<hkNiTriStripsData>::`vftable'; /*0x8c6c98*/
  if ( v3 ) /*0x8c6c9e*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x8c6ca4*/
    _LN21(v3, 8u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x8c6cb0*/
    FormHeapFree(v4); /*0x8c6cb6*/
  }
  if ( (a2 & 1) != 0 ) /*0x8c6cc4*/
    FormHeapFree((unsigned int)this); /*0x8c6cc7*/
  return this; /*0x8c6cd1*/
}
