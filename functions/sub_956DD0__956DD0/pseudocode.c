int __thiscall sub_956DD0(_DWORD **this, unsigned int **a2, _DWORD *a3)
{
  unsigned int **v3; // ecx
  unsigned int *v4; // ebx
  unsigned int v5; // ebp
  int result; // eax
  int v8; // eax
  int v9; // esi
  unsigned int *v10; // ecx
  unsigned int v11; // edx
  unsigned int *v12; // ecx
  unsigned int v13; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+14h] [ebp-4h] BYREF
  unsigned int *v16; // [esp+20h] [ebp+8h]

  v3 = a2; /*0x956dd9*/
  v4 = *a2; /*0x956ddd*/
  v5 = **a2; /*0x956ddf*/
  a3[0xB] = 0; /*0x956de8*/
  a3[0xD] = 0; /*0x956deb*/
  a3[0xC] = 0xFFFFFFFF; /*0x956dee*/
  result = (int)a2[1] + 0xFFFFFFFF; /*0x956df8*/
  v13 = v5; /*0x956df9*/
  if ( result >= 0 ) /*0x956dfd*/
  {
    v16 = a2[1]; /*0x956e00*/
    do /*0x956e66*/
    {
      if ( *v4 > v13 ) /*0x956e0b*/
        v13 = *v4; /*0x956e0d*/
      if ( *v4 < v5 ) /*0x956e13*/
        v5 = *v4; /*0x956e15*/
      v8 = (*(int (__thiscall **)(_DWORD, unsigned int *, int *))(**(this + 0xA) + 0x1C))(*(this + 0xA), v4, &v15); /*0x956e26*/
      if ( v8 > a3[0xB] ) /*0x956e2c*/
        a3[0xB] = v8; /*0x956e2e*/
      v9 = 0; /*0x956e31*/
      if ( v8 > 0 ) /*0x956e35*/
      {
        v10 = a3 + 0xD; /*0x956e37*/
        do /*0x956e58*/
        {
          v11 = *(&v15 + v9); /*0x956e40*/
          if ( v11 < v10[0xFFFFFFFF] ) /*0x956e47*/
            v10[0xFFFFFFFF] = v11; /*0x956e49*/
          if ( v11 > *v10 ) /*0x956e4e*/
            *v10 = v11; /*0x956e50*/
          ++v9; /*0x956e52*/
          ++v10; /*0x956e53*/
        }
        while ( v9 < v8 ); /*0x956e58*/
      }
      v4 += 4; /*0x956e5e*/
      result = (int)v16 + 0xFFFFFFFF; /*0x956e61*/
      v16 = (unsigned int *)((char *)v16 + 0xFFFFFFFF); /*0x956e62*/
    }
    while ( v16 ); /*0x956e66*/
    v3 = a2; /*0x956e68*/
  }
  v12 = v3[1]; /*0x956e6d*/
  a3[9] = v5; /*0x956e74*/
  a3[2] = v12; /*0x956e77*/
  a3[0xA] = v13; /*0x956e7a*/
  return result; /*0x956e7d*/
}
