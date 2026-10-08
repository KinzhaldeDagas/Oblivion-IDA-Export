_WORD *__thiscall sub_8BC030(_WORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  *(this + 3) = 1; /*0x8bc03b*/
  *(_DWORD *)this = &off_A98330; /*0x8bc041*/
  *((_DWORD *)this + 2) = a2; /*0x8bc047*/
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 4); /*0x8bc04d*/
  *((_DWORD *)this + 4) = a3; /*0x8bc050*/
  v4 = *(_DWORD *)(a2 + 4) + 1; /*0x8bc059*/
  v5 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF; /*0x8bc05a*/
  if ( v5 < v4 ) /*0x8bc062*/
  {
    v6 = 2 * v5; /*0x8bc064*/
    if ( v4 < v6 ) /*0x8bc068*/
      v4 = v6; /*0x8bc06a*/
    sub_8A6E40((const void **)a2, v4, 1); /*0x8bc070*/
  }
  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4) + **((_DWORD **)this + 2)) = 0; /*0x8bc080*/
  return this; /*0x8bc086*/
}
