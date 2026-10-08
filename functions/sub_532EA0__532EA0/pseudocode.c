char **__thiscall sub_532EA0(char **this, char a2)
{
  char *v3; // eax
  unsigned int v4; // edi

  v3 = *(this + 1); /*0x532ea3*/
  *this = (char *)&NiTArray<NiPointer<bhkRigidBody>>::`vftable'; /*0x532ea8*/
  if ( v3 ) /*0x532eae*/
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x532eb4*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x532ec0*/
    FormHeapFree(v4); /*0x532ec6*/
  }
  if ( (a2 & 1) != 0 ) /*0x532ed4*/
    FormHeapFree((unsigned int)this); /*0x532ed7*/
  return this; /*0x532ee1*/
}
