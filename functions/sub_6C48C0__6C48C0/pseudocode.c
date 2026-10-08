char **__thiscall sub_6C48C0(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x6c48c3*/
  *this = (char *)&NiTArray<NiPointer<NiControllerSequence>>::`vftable'; /*0x6c48c8*/
  if ( v3 ) /*0x6c48ce*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x6c48d4*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6c48e0*/
    FormHeapFree(v4); /*0x6c48e6*/
  }
  if ( (a2 & 1) != 0 ) /*0x6c48f4*/
    FormHeapFree((unsigned int)this); /*0x6c48f7*/
  return this; /*0x6c4901*/
}
