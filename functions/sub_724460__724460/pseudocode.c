int __thiscall sub_724460(int this, float a2)
{
  int result; // eax
  int v4; // ecx

  if ( (*(_BYTE *)(this + 0xDC) & 1) == 0 ) /*0x72446a*/
    return (int)sub_70A310((_DWORD *)this, a2); /*0x7244b2*/
  if ( *(int *)(this + 0xE0) >= 0 ) /*0x724473*/
  {
    NiAVObject_UpdatePropertiesAndControllers((_DWORD *)this, a2, 1); /*0x72447f*/
    result = *(_DWORD *)(this + 0xE0); /*0x724484*/
    v4 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * result); /*0x724490*/
    if ( v4 ) /*0x724495*/
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 0x4C))(LODWORD(a2)); /*0x7244a4*/
  }
  return result; /*0x7244a6*/
}
