char **__thiscall sub_6D8070(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x6d8073*/
  *this = (char *)&NiTArray<NiPointer<NiTransformController>>::`vftable'; /*0x6d8078*/
  if ( v3 ) /*0x6d807e*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x6d8084*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6d8090*/
    FormHeapFree(v4); /*0x6d8096*/
  }
  if ( (a2 & 1) != 0 ) /*0x6d80a4*/
    FormHeapFree((unsigned int)this); /*0x6d80a7*/
  return this; /*0x6d80b1*/
}
