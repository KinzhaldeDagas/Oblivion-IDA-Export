// Select a compatible depth/stencil format from cached DX9 device capabilities. For a surface request above 16 depth bits, normalize the selection target to 24 depth bits and 8 stencil bits.
int __thiscall sub_775280(_DWORD *this, int a2, int a3, unsigned int a4, int a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v8; // edx

  v5 = (_DWORD *)*(this + 0x4E); /*0x775280*/
  if ( !v5 ) /*0x775288*/
    return 0; /*0x7752a5*/
  while ( 1 ) /*0x775293*/
  {
    v6 = (_DWORD *)v5[2]; /*0x775293*/
    v5 = (_DWORD *)*v5; /*0x775297*/
    if ( v6 ) /*0x775299*/
    {
      if ( *v6 == a2 ) /*0x77529d*/
        break; /*0x77529d*/
    }
    if ( !v5 ) /*0x7752a1*/
      return 0; /*0x7752a1*/
  }
  if ( !a5 ) /*0x7752ae*/
  {
    v8 = a4; /*0x77530c*/
    return NiDX9FormatCaps_SelectClosestDepthStencilFormat(v6, a3, v8, a5); /*0x775317*/
  }
  if ( a4 > 0x10 ) /*0x7752b5*/
  {
    v8 = 0x18; /*0x7752ba*/
    if ( a5 != 1 ) /*0x7752bf*/
      return NiDX9FormatCaps_SelectClosestDepthStencilFormat(v6, a3, 0x18, 8);// For the DX9 surface case, rank supported formats against 24 depth bits and 8 stencil bits. /*0x7752d2*/
    return NiDX9FormatCaps_SelectClosestDepthStencilFormat(v6, a3, v8, a5); /*0x7752bf*/
  }
  if ( a5 != 1 ) /*0x7752d8*/
    return NiDX9FormatCaps_SelectClosestDepthStencilFormat(v6, a3, 0x18, 8); /*0x7752d8*/
  return NiDX9FormatCaps_SelectClosestDepthStencilFormat(v6, a3, 0xF, 1); /*0x7752a5*/
}
