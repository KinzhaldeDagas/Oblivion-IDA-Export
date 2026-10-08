bool __thiscall sub_703080(NiTriBasedGeomData *this, int a2)
{
  unsigned __int16 v5; // ax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  int v18; // eax
  _DWORD *v19; // ecx
  _DWORD *v20; // edx
  unsigned int v21; // eax
  int v22; // esi
  unsigned int v23; // eax
  unsigned __int8 *v24; // ecx
  unsigned __int8 *v25; // edx
  unsigned int v26; // eax
  unsigned __int8 *v27; // ecx
  unsigned __int8 *v28; // edx
  unsigned __int8 *v29; // ecx
  unsigned __int8 *v30; // edx
  int v31; // eax
  int v32; // [esp+Ch] [ebp+4h]

  if ( !sub_71FDE0(this, a2) ) /*0x703089*/
    return 0; /*0x703089*/
  v5 = *((_WORD *)this + 0x30); /*0x703099*/
  if ( *((_DWORD *)this + 0x18) != *(_DWORD *)(a2 + 0x60) /*0x7030dd*/
    || *((_WORD *)this + 0x32) != *(_WORD *)(a2 + 0x64)
    || *((_WORD *)this + 0x33) != *(_WORD *)(a2 + 0x66)
    || *((_WORD *)this + 0x34) != *(_WORD *)(a2 + 0x68)
    || *((_WORD *)this + 0x35) != *(_WORD *)(a2 + 0x6A)
    || *((_WORD *)this + 0x36) != *(_WORD *)(a2 + 0x6C) )
  {
    return 0; /*0x703096*/
  }
  v6 = *(_DWORD **)(a2 + 0x58); /*0x7030df*/
  v7 = *((_DWORD **)this + 0x16); /*0x7030e2*/
  v32 = v5; /*0x7030e8*/
  v8 = 8 * v5; /*0x7030f0*/
  if ( v8 < 4 ) /*0x7030f7*/
  {
LABEL_12:
    if ( !v8 ) /*0x703116*/
    {
LABEL_22:
      v18 = 0; /*0x703175*/
      goto LABEL_23; /*0x703175*/
    }
  }
  else
  {
    while ( *v7 == *v6 ) /*0x703104*/
    {
      v8 -= 4; /*0x703106*/
      ++v6; /*0x703109*/
      ++v7; /*0x70310c*/
      if ( v8 < 4 ) /*0x703112*/
        goto LABEL_12; /*0x703112*/
    }
  }
  v9 = *(unsigned __int8 *)v7 - *(unsigned __int8 *)v6; /*0x70311e*/
  if ( !v9 ) /*0x703120*/
  {
    v10 = v8 - 1; /*0x703122*/
    v11 = (unsigned __int8 *)v6 + 1; /*0x703125*/
    v12 = (unsigned __int8 *)v7 + 1; /*0x703128*/
    if ( !v10 ) /*0x70312d*/
      goto LABEL_22; /*0x70312d*/
    v9 = *v12 - *v11; /*0x703135*/
    if ( !v9 ) /*0x703137*/
    {
      v13 = v10 - 1; /*0x703139*/
      v14 = v11 + 1; /*0x70313c*/
      v15 = v12 + 1; /*0x70313f*/
      if ( !v13 ) /*0x703144*/
        goto LABEL_22; /*0x703144*/
      v9 = *v15 - *v14; /*0x70314c*/
      if ( !v9 ) /*0x70314e*/
      {
        v16 = v14 + 1; /*0x703153*/
        v17 = v15 + 1; /*0x703156*/
        if ( v13 == 1 ) /*0x70315b*/
          goto LABEL_22; /*0x70315b*/
        v9 = *v17 - *v16; /*0x703163*/
        if ( !v9 ) /*0x703165*/
          goto LABEL_22; /*0x703165*/
      }
    }
  }
  v18 = 1; /*0x703169*/
  if ( v9 <= 0 ) /*0x70316e*/
    v18 = 0xFFFFFFFF; /*0x703170*/
LABEL_23:
  if ( v18 ) /*0x703179*/
    return 0; /*0x703181*/
  v19 = *(_DWORD **)(a2 + 0x5C); /*0x703188*/
  v20 = *((_DWORD **)this + 0x17); /*0x70318b*/
  v21 = 2 * v32; /*0x70318e*/
  if ( (unsigned int)(2 * v32) < 4 ) /*0x703193*/
  {
LABEL_28:
    if ( !v21 ) /*0x7031ab*/
    {
LABEL_38:
      v31 = 0; /*0x703214*/
      return v31 == 0; /*0x703214*/
    }
  }
  else
  {
    while ( *v20 == *v19 ) /*0x703199*/
    {
      v21 -= 4; /*0x70319b*/
      ++v19; /*0x70319e*/
      ++v20; /*0x7031a1*/
      if ( v21 < 4 ) /*0x7031a7*/
        goto LABEL_28; /*0x7031a7*/
    }
  }
  v22 = *(unsigned __int8 *)v20 - *(unsigned __int8 *)v19; /*0x7031b3*/
  if ( !v22 ) /*0x7031b5*/
  {
    v23 = v21 - 1; /*0x7031b7*/
    v24 = (unsigned __int8 *)v19 + 1; /*0x7031ba*/
    v25 = (unsigned __int8 *)v20 + 1; /*0x7031bd*/
    if ( !v23 ) /*0x7031c2*/
      goto LABEL_38; /*0x7031c2*/
    v22 = *v25 - *v24; /*0x7031ca*/
    if ( !v22 ) /*0x7031cc*/
    {
      v26 = v23 - 1; /*0x7031ce*/
      v27 = v24 + 1; /*0x7031d1*/
      v28 = v25 + 1; /*0x7031d4*/
      if ( !v26 ) /*0x7031d9*/
        goto LABEL_38; /*0x7031d9*/
      v22 = *v28 - *v27; /*0x7031e1*/
      if ( !v22 ) /*0x7031e3*/
      {
        v29 = v27 + 1; /*0x7031e8*/
        v30 = v28 + 1; /*0x7031eb*/
        if ( v26 == 1 ) /*0x7031f0*/
          goto LABEL_38; /*0x7031f0*/
        v22 = *v30 - *v29; /*0x7031f8*/
        if ( !v22 ) /*0x7031fa*/
          goto LABEL_38; /*0x7031fa*/
      }
    }
  }
  v31 = 1; /*0x7031fe*/
  if ( v22 <= 0 ) /*0x703203*/
    return 0; /*0x703211*/
  return v31 == 0; /*0x703092*/
}
