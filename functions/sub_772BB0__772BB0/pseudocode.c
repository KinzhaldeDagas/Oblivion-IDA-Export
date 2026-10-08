_DWORD *__thiscall sub_772BB0(_DWORD *this)
{
  _DWORD *result; // eax
  unsigned int *v2; // ecx
  int v3; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // esi
  unsigned int v6; // eax
  unsigned int *v7; // ebp
  _DWORD *v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // ebx
  _DWORD *v13; // esi
  unsigned int v14; // eax
  unsigned int *v15; // ebp
  _DWORD *v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+10h] [ebp-8h]
  _DWORD *v21; // [esp+14h] [ebp-4h]

  result = this; /*0x772bb5*/
  v2 = (unsigned int *)NiD3DRenderStateGroup_EntryPool; /*0x772bb7*/
  v3 = result[2]; /*0x772bbf*/
  v21 = result; /*0x772bc4*/
  if ( v3 ) /*0x772bc8*/
  {
    do /*0x772c2d*/
    {
      v4 = v2[2]; /*0x772bd3*/
      v5 = v2 + 2; /*0x772bd6*/
      v19 = *(_DWORD *)(v3 + 8); /*0x772bd9*/
      v6 = 0; /*0x772bdd*/
      v7 = v2; /*0x772be1*/
      if ( !v4 ) /*0x772be3*/
        goto LABEL_8; /*0x772be3*/
      v8 = (_DWORD *)*v2; /*0x772be5*/
      while ( *v8 != v3 ) /*0x772be9*/
      {
        ++v6; /*0x772beb*/
        ++v8; /*0x772bee*/
        if ( v6 >= v4 ) /*0x772bf3*/
          goto LABEL_8; /*0x772bf3*/
      }
      if ( v6 == 0xFFFFFFFF ) /*0x772bfa*/
      {
LABEL_8:
        v9 = v2[1]; /*0x772bfc*/
        if ( v4 == v9 ) /*0x772c01*/
        {
          if ( v9 ) /*0x772c05*/
            v10 = 2 * v9; /*0x772c07*/
          else
            v10 = 1; /*0x772c0b*/
          sub_6E8CA0(v2, v10); /*0x772c11*/
        }
        *(_DWORD *)(*v7 + 4 * (*v5)++) = v3; /*0x772c1b*/
        v2 = (unsigned int *)NiD3DRenderStateGroup_EntryPool; /*0x772c21*/
      }
      v3 = v19; /*0x772c27*/
    }
    while ( v19 ); /*0x772c2d*/
    result = v21; /*0x772c2f*/
  }
  v11 = result[4]; /*0x772c33*/
  if ( v11 ) /*0x772c38*/
  {
    do /*0x772c9d*/
    {
      v12 = v2[2]; /*0x772c43*/
      v13 = v2 + 2; /*0x772c46*/
      v20 = *(_DWORD *)(v11 + 8); /*0x772c49*/
      v14 = 0; /*0x772c4d*/
      v15 = v2; /*0x772c51*/
      if ( !v12 ) /*0x772c53*/
        goto LABEL_23; /*0x772c53*/
      v16 = (_DWORD *)*v2; /*0x772c55*/
      while ( *v16 != v11 ) /*0x772c59*/
      {
        ++v14; /*0x772c5b*/
        ++v16; /*0x772c5e*/
        if ( v14 >= v12 ) /*0x772c63*/
          goto LABEL_23; /*0x772c63*/
      }
      if ( v14 == 0xFFFFFFFF ) /*0x772c6a*/
      {
LABEL_23:
        v17 = v2[1]; /*0x772c6c*/
        if ( v12 == v17 ) /*0x772c71*/
        {
          if ( v17 ) /*0x772c75*/
            v18 = 2 * v17; /*0x772c77*/
          else
            v18 = 1; /*0x772c7b*/
          sub_6E8CA0(v2, v18); /*0x772c81*/
        }
        *(_DWORD *)(*v15 + 4 * (*v13)++) = v11; /*0x772c8b*/
        v2 = (unsigned int *)NiD3DRenderStateGroup_EntryPool; /*0x772c91*/
      }
      v11 = v20; /*0x772c97*/
    }
    while ( v20 ); /*0x772c9d*/
    v21[2] = 0; /*0x772ca8*/
    v21[4] = 0; /*0x772cab*/
    return v21; /*0x772c9f*/
  }
  else
  {
    result[2] = 0; /*0x772cb6*/
    result[4] = 0; /*0x772cbd*/
  }
  return result; /*0x772ca3*/
}
