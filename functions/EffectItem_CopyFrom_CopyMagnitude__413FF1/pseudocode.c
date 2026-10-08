int __usercall EffectItem_CopyFrom_::CopyMagnitude@<eax>(
        _DWORD *a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // eax
  int v8; // ecx

  if ( (*(_DWORD *)(a1[7] + 0x58) & 0x100) != 0 ) /*0x413ffe*/
    v7 = 0; /*0x414000*/
  else
    v7 = a1[1]; /*0x414004*/
  v8 = *(_DWORD *)(a2 + 0x1C); /*0x414007*/
  if ( (*(_DWORD *)(v8 + 0x58) & 0x100) == 0 && v7 >= 0 ) /*0x41401d*/
  {
    *(float *)(a2 + 0x20) = -1.0; /*0x41401f*/
    *(_DWORD *)(a2 + 4) = v7; /*0x414022*/
  }
  return EffectItem_CopyFrom_::CopyArea(0, a1, a2, v8, -1.0, a3, a4, a5, a6, a7);
}
