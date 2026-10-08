int __thiscall sub_917200(int *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // edx
  double v11; // st7
  double v12; // st6

  v3 = *(this + 0xF); /*0x91720c*/
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF; /*0x91720f*/
  if ( v4 < v3 ) /*0x917216*/
  {
    v5 = 2 * v4; /*0x917218*/
    if ( v3 >= v5 ) /*0x91721c*/
      v5 = *(this + 0xF); /*0x91721e*/
    sub_8A6E40((const void **)a2, v5, 0x10); /*0x917224*/
  }
  *(_DWORD *)(a2 + 4) = v3; /*0x91722c*/
  result = *(this + 0xF); /*0x91722f*/
  v7 = 0; /*0x917232*/
  if ( result > 0 ) /*0x917236*/
  {
    v8 = 0; /*0x917239*/
    do /*0x91727f*/
    {
      v9 = *(this + 0xC); /*0x917240*/
      v10 = (v7 & 3) + 0xC * (v7 / 4); /*0x917256*/
      v11 = *(float *)(v9 + 4 * v10 + 0x20); /*0x91725c*/
      result = v8 + *(_DWORD *)a2; /*0x917260*/
      v12 = *(float *)(v9 + 4 * v10 + 0x10); /*0x917262*/
      *(_DWORD *)result = *(_DWORD *)(v9 + 4 * v10); /*0x917269*/
      *(float *)(result + 4) = v12; /*0x91726b*/
      ++v7; /*0x91726e*/
      v8 += 0x10; /*0x91726f*/
      *(float *)(result + 8) = v11; /*0x917272*/
      *(_DWORD *)(result + 0xC) = 0; /*0x917275*/
    }
    while ( v7 < *(this + 0xF) ); /*0x91727f*/
  }
  return result; /*0x917282*/
}
