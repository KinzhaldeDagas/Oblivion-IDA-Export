int __thiscall sub_724260(int this, float a2)
{
  bool v3; // zf
  char v4; // al
  int result; // eax
  int v6; // ecx
  _DWORD *v7; // edi

  v3 = (*(_BYTE *)(this + 0xDC) & 1) == 0; /*0x724267*/
  *(float *)(this + 0xE4) = a2; /*0x72426e*/
  if ( v3 ) /*0x724274*/
    return sub_70A190(this, a2); /*0x724308*/
  v4 = *(_BYTE *)(this + 0x18); /*0x72427a*/
  ++*(_DWORD *)(this + 0xE8); /*0x72427e*/
  NiAVObject_UpdatePropertiesAndControllers((_DWORD *)this, a2, (v4 & 8) != 0); /*0x724299*/
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x74))(this); /*0x7242a5*/
  result = *(_DWORD *)(this + 0xE0); /*0x7242a7*/
  if ( result >= 0 ) /*0x7242af*/
  {
    v6 = *(_DWORD *)(this + 0xB0); /*0x7242b1*/
    v7 = *(_DWORD **)(v6 + 4 * result); /*0x7242b8*/
    if ( v7 ) /*0x7242bd*/
    {
      sub_709E30(*(unsigned __int16 **)(v6 + 4 * result), a2); /*0x7242c9*/
      NiTArray_SetAt( /*0x7242dc*/
        (NiTArray_NiTexturingPropertyMap *)(this + 0xEC),
        *(_DWORD *)(this + 0xE0),
        (_DWORD *)(this + 0xE8));
      *(_DWORD *)(this + 0x20) = v7[8]; /*0x7242ea*/
      *(_DWORD *)(this + 0x24) = v7[9]; /*0x7242ef*/
      *(_DWORD *)(this + 0x28) = v7[0xA]; /*0x7242f5*/
      result = v7[0xB]; /*0x7242f8*/
      *(_DWORD *)(this + 0x2C) = result; /*0x7242fb*/
    }
  }
  return result; /*0x724301*/
}
