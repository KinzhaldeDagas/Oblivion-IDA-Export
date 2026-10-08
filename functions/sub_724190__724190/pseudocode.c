int __thiscall sub_724190(int this, float a2, int a3)
{
  bool v4; // zf
  int result; // eax
  _DWORD *v6; // edi

  if ( (_BYTE)a3 ) /*0x72419a*/
    *(_WORD *)(this + 0xDC) |= 2u; /*0x72419c*/
  else
    *(_WORD *)(this + 0xDC) &= ~2u; /*0x7241a6*/
  v4 = (*(_BYTE *)(this + 0xDC) & 1) == 0; /*0x7241af*/
  *(float *)(this + 0xE4) = a2; /*0x7241ba*/
  if ( v4 ) /*0x7241c0*/
    return NiNode_UpdateDownwardPass((float *)this, a2, a3); /*0x724256*/
  ++*(_DWORD *)(this + 0xE8); /*0x7241c6*/
  if ( (_BYTE)a3 ) /*0x7241d6*/
    NiAVObject_UpdatePropertiesAndControllers((_DWORD *)this, a2, 1); /*0x7241de*/
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x74))(this); /*0x7241ee*/
  result = *(_DWORD *)(this + 0xE0); /*0x7241f0*/
  if ( result >= 0 ) /*0x7241f8*/
  {
    v6 = *(_DWORD **)(*(_DWORD *)(this + 0xB0) + 4 * result); /*0x724201*/
    if ( v6 ) /*0x724206*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v6 + 0x60))(v6, LODWORD(a2), a3); /*0x724218*/
      NiTArray_SetAt( /*0x724228*/
        (NiTArray_NiTexturingPropertyMap *)(this + 0xEC),
        *(_DWORD *)(this + 0xE0),
        (_DWORD *)(this + 0xE8));
      *(_DWORD *)(this + 0x20) = v6[8]; /*0x724236*/
      *(_DWORD *)(this + 0x24) = v6[9]; /*0x72423b*/
      *(_DWORD *)(this + 0x28) = v6[0xA]; /*0x724241*/
      result = v6[0xB]; /*0x724244*/
      *(_DWORD *)(this + 0x2C) = result; /*0x724247*/
    }
  }
  return result; /*0x72424c*/
}
