int __thiscall sub_724320(int this, NiProperty *a2)
{
  bool v3; // zf
  char v4; // al
  int result; // eax
  int v6; // edi

  v3 = (*(_BYTE *)(this + 0xDC) & 1) == 0; /*0x724327*/
  *(float *)(this + 0xE4) = *(float *)&a2; /*0x72432e*/
  if ( v3 ) /*0x724334*/
    return sub_70A280((NiNode *)this, a2); /*0x7243d4*/
  v4 = *(_BYTE *)(this + 0x18); /*0x72433a*/
  ++*(_DWORD *)(this + 0xE8); /*0x72433e*/
  NiAVObject_UpdatePropertiesAndControllers((_DWORD *)this, *(float *)&a2, (v4 & 8) != 0); /*0x724359*/
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x74))(this); /*0x724365*/
  result = *(_DWORD *)(this + 0xE0); /*0x724367*/
  if ( result >= 0 ) /*0x72436f*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * result); /*0x724378*/
    if ( v6 ) /*0x72437d*/
    {
      if ( (*(_BYTE *)(v6 + 0x18) & 2) != 0 ) /*0x724387*/
        (*(void (__thiscall **)(int, NiProperty *))(*(_DWORD *)v6 + 0x68))(v6, a2); /*0x724398*/
      NiTArray_SetAt( /*0x7243a8*/
        (NiTArray_NiTexturingPropertyMap *)(this + 0xEC),
        *(_DWORD *)(this + 0xE0),
        (_DWORD *)(this + 0xE8));
      *(_DWORD *)(this + 0x20) = *(_DWORD *)(v6 + 0x20); /*0x7243b6*/
      *(_DWORD *)(this + 0x24) = *(_DWORD *)(v6 + 0x24); /*0x7243bb*/
      *(_DWORD *)(this + 0x28) = *(_DWORD *)(v6 + 0x28); /*0x7243c1*/
      result = *(_DWORD *)(v6 + 0x2C); /*0x7243c4*/
      *(_DWORD *)(this + 0x2C) = result; /*0x7243c7*/
    }
  }
  return result; /*0x7243cd*/
}
