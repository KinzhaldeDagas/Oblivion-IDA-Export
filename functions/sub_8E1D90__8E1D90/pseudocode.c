int __thiscall sub_8E1D90(__m128 *this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // edi

  v3 = *((_DWORD *)this + 0x11); /*0x8e1d9c*/
  if ( (*(_DWORD *)(a2 + 8) & 0x3FFFFFFF) < v3 ) /*0x8e1da7*/
    sub_8A6E40((const void **)a2, v3, 0x20); /*0x8e1dad*/
  *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 0x11); /*0x8e1db8*/
  result = *((_DWORD *)this + 0x11); /*0x8e1dbb*/
  v5 = 0; /*0x8e1dbe*/
  if ( result > 0 ) /*0x8e1dc2*/
  {
    v6 = 0; /*0x8e1dc5*/
    v7 = 0; /*0x8e1dc7*/
    do /*0x8e1df2*/
    {
      sub_8E1060(this, (unsigned __int16 *)(v6 + *((_DWORD *)this + 0x10)), (__m128 *)(v7 + *(_DWORD *)a2)); /*0x8e1de1*/
      result = *((_DWORD *)this + 0x11); /*0x8e1de6*/
      ++v5; /*0x8e1de9*/
      v7 += 0x20; /*0x8e1dea*/
      v6 += 0x10; /*0x8e1ded*/
    }
    while ( v5 < result ); /*0x8e1df2*/
  }
  return result; /*0x8e1df5*/
}
