char **__thiscall sub_523EB0(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x523eb3*/
  *this = (char *)&NiTArray<NiPointer<NiTexture>>::`vftable'; /*0x523eb8*/
  if ( v3 ) /*0x523ebe*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x523ec4*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x523ed0*/
    FormHeapFree(v4); /*0x523ed6*/
  }
  if ( (a2 & 1) != 0 ) /*0x523ee4*/
    FormHeapFree((unsigned int)this); /*0x523ee7*/
  return this; /*0x523ef1*/
}
