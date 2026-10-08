signed int __thiscall sub_90D3B0(_DWORD *this, int a2, int *a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  int i; // edx
  int v6; // edi
  int v7; // eax
  _DWORD *v9; // ecx
  int v10; // edi
  int v11; // ebp
  int v12; // eax

  v3 = this; /*0x90d3b1*/
  v4 = *(this + 1); /*0x90d3b3*/
  for ( i = *(this + 7); v4; i += v6 ) /*0x90d3bc*/
  {
    v6 = *(_DWORD *)(v4 + 0x1C); /*0x90d3c0*/
    v4 = *(_DWORD *)(v4 + 4); /*0x90d3c3*/
  }
  v7 = a2 - i; /*0x90d3d2*/
  while ( 1 ) /*0x90d3d4*/
  {
    v7 += *(this + 7); /*0x90d3d4*/
    if ( v7 >= 0 ) /*0x90d3d7*/
      break; /*0x90d3d7*/
    this = (_DWORD *)*(this + 1); /*0x90d3d9*/
    if ( !this ) /*0x90d3de*/
      return 1; /*0x90d3de*/
  }
  v9 = (_DWORD *)*(this + 8); /*0x90d3ea*/
  if ( !v9 ) /*0x90d3ef*/
    return 1; /*0x90d3ef*/
  v10 = *(_DWORD *)(*v9 + 4 * v7); /*0x90d3f3*/
  if ( v10 < 0 ) /*0x90d3f8*/
    return 1; /*0x90d3e7*/
  v11 = *a3; /*0x90d406*/
  v12 = sub_940B80(v3[6] + 0x14 * v7); /*0x90d40b*/
  (*(void (__thiscall **)(int *, int, int))(v11 + 0xC))(a3, v10 + v3[8], v12); /*0x90d419*/
  return 0; /*0x90d3e0*/
}
