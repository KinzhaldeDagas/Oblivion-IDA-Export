int __thiscall sub_8E88A0(const void **this, int a2, const void *a3, int a4)
{
  const void **v4; // esi
  signed int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // edx
  int v9; // ecx

  v4 = this + 4; /*0x8e88a4*/
  v5 = (unsigned int)*(this + 6) & 0x3FFFFFFF; /*0x8e88ac*/
  if ( v5 < (int)a3 ) /*0x8e88b3*/
  {
    v6 = 2 * v5; /*0x8e88b5*/
    if ( (int)a3 >= v6 ) /*0x8e88b9*/
      v6 = (int)a3; /*0x8e88bb*/
    sub_8A6E40(this + 4, v6, 8); /*0x8e88c1*/
  }
  result = 0; /*0x8e88c9*/
  v4[1] = a3; /*0x8e88cd*/
  if ( (int)a3 > 0 ) /*0x8e88d0*/
  {
    v8 = a2; /*0x8e88d2*/
    do /*0x8e8918*/
    {
      if ( *(_DWORD *)v8 ) /*0x8e88e4*/
      {
        *((_DWORD *)*v4 + 2 * result) = *(_DWORD *)v8; /*0x8e88ee*/
        if ( a4 ) /*0x8e88f2*/
          v9 = *(_DWORD *)(a4 - a2 + v8); /*0x8e88f8*/
        else
          v9 = 0; /*0x8e88fd*/
        *((_DWORD *)*v4 + 2 * result + 1) = v9; /*0x8e8901*/
        if ( *(_WORD *)(*(_DWORD *)v8 + 4) ) /*0x8e8907*/
          ++*(_WORD *)(*(_DWORD *)v8 + 6); /*0x8e890e*/
      }
      ++result; /*0x8e8912*/
      v8 += 4; /*0x8e8913*/
    }
    while ( result < (int)a3 ); /*0x8e8918*/
  }
  return result; /*0x8e891c*/
}
