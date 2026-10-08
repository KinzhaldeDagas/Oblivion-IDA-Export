// Choose the supported depth/stencil candidate nearest the requested depth-bit and stencil-bit counts for the render-target format.
int __thiscall sub_7750F0(_DWORD *this, int a2, int a3, int a4)
{
  signed int v4; // ebp
  unsigned int i; // edi
  int v6; // esi
  signed int v7; // ecx
  _BYTE *v9; // [esp+8h] [ebp-10h] BYREF
  signed int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v9 = 0; /*0x775106*/
  if ( !NiTMap_GetAt(this + 2, a2, &v9) ) /*0x77510a*/
    return 0; /*0x7751d8*/
  v4 = 0; /*0x775120*/
  v12 = 0; /*0x775122*/
  v11 = 0; /*0x775126*/
  v9 += 0x24; /*0x77512a*/
  for ( i = 0; i < 9; ++i )                     // Scan the nine native D3D depth/stencil candidates and retain the closest supported depth/stencil bit-count match. /*0x77512e*/
  {
    if ( *v9 ) /*0x775134*/
    {
      v6 = D3DDepthStencilFormatCandidates[i]; /*0x77513c*/
      v10 = 0; /*0x77514d*/
      a2 = 0; /*0x775151*/
      D3DDepthStencilFormat_GetBitCounts(v6, &v10, &a2); /*0x775155*/
      v7 = v10; /*0x77515a*/
      v10 = abs32(v10 - a3); /*0x77516b*/
      if ( (int)abs32(v4 - a3) >= v10 ) /*0x775181*/
      {
        v10 = abs32(a2 - a4); /*0x775192*/
        if ( (int)abs32(v11 - a4) >= v10 ) /*0x7751a7*/
        {
          v4 = v7; /*0x7751a9*/
          v11 = a2; /*0x7751af*/
          v12 = v6; /*0x7751b3*/
        }
      }
    }
    v9 += 4; /*0x7751b9*/
  }
  return v12; /*0x7751d0*/
}
