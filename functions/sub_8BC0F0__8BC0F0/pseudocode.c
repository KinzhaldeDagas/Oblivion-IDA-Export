signed int __thiscall sub_8BC0F0(_DWORD *this, const void *a2, signed int a3)
{
  int v4; // edx
  int v5; // eax
  signed int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // eax

  v4 = *(this + 2); /*0x8bc0f4*/
  v5 = *(_DWORD *)(v4 + 4); /*0x8bc0f7*/
  v6 = v5 - *(this + 3); /*0x8bc0ff*/
  if ( a3 <= v6 ) /*0x8bc107*/
  {
    if ( (*(_DWORD *)(v4 + 8) & 0x3FFFFFFF) > v5 ) /*0x8bc150*/
      *(_BYTE *)(v5 + *(_DWORD *)v4) = 0; /*0x8bc154*/
  }
  else
  {
    v7 = a3 + v5 - v6; /*0x8bc10e*/
    v8 = *(_DWORD *)(v4 + 8) & 0x3FFFFFFF; /*0x8bc116*/
    if ( v8 < v7 + 1 ) /*0x8bc11d*/
    {
      v9 = 2 * v8; /*0x8bc11f*/
      if ( v7 + 1 >= v9 ) /*0x8bc123*/
        v9 = v7 + 1; /*0x8bc125*/
      sub_8A6E40((const void **)v4, v9, 1); /*0x8bc12b*/
    }
    *(_DWORD *)(*(this + 2) + 4) = v7; /*0x8bc136*/
    *(_BYTE *)(v7 + *(_DWORD *)*(this + 2)) = 0; /*0x8bc13e*/
  }
  sub_8B1890((void *)(*(this + 3) + *(_DWORD *)*(this + 2)), a2, a3); /*0x8bc167*/
  *(this + 3) += a3; /*0x8bc174*/
  return a3; /*0x8bc177*/
}
