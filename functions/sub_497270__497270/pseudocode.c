bool __thiscall sub_497270(_DWORD *this, int a2)
{
  unsigned __int8 v3; // al
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  unsigned int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  unsigned __int8 *v9; // edx
  unsigned __int8 *v10; // ecx
  unsigned int v11; // eax
  unsigned __int8 *v12; // edx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // ecx
  int v16; // eax

  if ( !a2 ) /*0x497277*/
    return 1; /*0x497277*/
  v3 = *(_BYTE *)this; /*0x49727f*/
  if ( *(_BYTE *)this != *(_BYTE *)a2 ) /*0x497283*/
    return 1; /*0x497283*/
  if ( v3 ) /*0x497287*/
  {
    v4 = (_DWORD *)*(this + 1); /*0x49728d*/
    v5 = *(_DWORD **)(a2 + 4); /*0x49729c*/
    v6 = 0x1C * v3; /*0x4972a1*/
    if ( v6 < 4 ) /*0x4972a7*/
    {
LABEL_8:
      if ( !v6 ) /*0x4972c6*/
        goto LABEL_18; /*0x4972c6*/
    }
    else
    {
      while ( *v4 == *v5 ) /*0x4972b4*/
      {
        v6 -= 4; /*0x4972b6*/
        ++v5; /*0x4972b9*/
        ++v4; /*0x4972bc*/
        if ( v6 < 4 ) /*0x4972c2*/
          goto LABEL_8; /*0x4972c2*/
      }
    }
    v7 = *(unsigned __int8 *)v4 - *(unsigned __int8 *)v5; /*0x4972ce*/
    if ( v7 ) /*0x4972d0*/
      goto LABEL_16; /*0x4972d0*/
    v8 = v6 - 1; /*0x4972d2*/
    v9 = (unsigned __int8 *)v5 + 1; /*0x4972d5*/
    v10 = (unsigned __int8 *)v4 + 1; /*0x4972d8*/
    if ( v8 ) /*0x4972dd*/
    {
      v7 = *v10 - *v9; /*0x4972e5*/
      if ( v7 /*0x497315*/
        || (v11 = v8 - 1, v12 = v9 + 1, v13 = v10 + 1, v11)
        && ((v7 = *v13 - *v12) != 0 || (v14 = v12 + 1, v15 = v13 + 1, v11 != 1) && (v7 = *v15 - *v14) != 0) )
      {
LABEL_16:
        v16 = 1; /*0x497319*/
        if ( v7 <= 0 ) /*0x49731e*/
          v16 = 0xFFFFFFFF; /*0x497320*/
        return v16 != 0; /*0x49732a*/
      }
    }
LABEL_18:
    v16 = 0; /*0x497325*/
    return v16 != 0; /*0x497325*/
  }
  return 0; /*0x49727b*/
}
