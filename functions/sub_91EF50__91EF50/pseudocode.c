int __usercall sub_91EF50@<eax>(int a1@<ebp>, int a2@<edi>, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v7; // eax
  char v8; // cl
  int v9; // esi
  int v10; // ebp
  char v11; // cl
  int v12; // eax
  int v13; // esi
  bool v14; // al
  _DWORD *v15; // edi
  int v16; // eax
  const void **v17; // edi
  int v18; // ebp
  _BYTE *v19; // esi
  BOOL v20; // edx
  int v21; // esi
  int v22; // ecx
  int v23; // esi
  int v24; // esi
  int v25; // eax
  bool v26; // zf
  int v27; // esi
  int v28; // edx
  const void **v29; // ebx
  const void *v30; // esi
  _DWORD *v31; // eax
  _BYTE *v32; // esi
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // esi
  int v37; // ecx
  int v38; // edx
  _DWORD *v39; // ecx
  int v40; // ebx
  const void *v41; // ecx
  int v42; // ebx
  int v43; // esi
  int v44; // edx
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  int v48; // esi
  int result; // eax
  int v52; // [esp+1Ch] [ebp-34h]
  int v53; // [esp+20h] [ebp-30h]
  _DWORD *v54; // [esp+24h] [ebp-2Ch] BYREF
  int v55; // [esp+28h] [ebp-28h]
  _DWORD v56[2]; // [esp+2Ch] [ebp-24h] BYREF
  unsigned int v57; // [esp+34h] [ebp-1Ch]
  int v58; // [esp+38h] [ebp-18h]
  int v59; // [esp+3Ch] [ebp-14h] BYREF
  int v60; // [esp+40h] [ebp-10h]
  _BYTE v61[12]; // [esp+44h] [ebp-Ch]

  v6 = a4;
  if ( *(_WORD *)(a4 + 4) )
    ++*(_WORD *)(a4 + 6);
  v7 = *(_DWORD *)(a4 + 0x10);
  v8 = *(_BYTE *)(a4 + 0x18);
  v9 = *(_DWORD *)(a4 + 0x14);
  v10 = *(_DWORD *)(a4 + 0xC);
  v57 = a4;
  v58 = v7;
  v59 = v9;
  v60 = v10;
  v61[0] = v8;
  if ( !*(_BYTE *)(v7 + 0x91) && !*(_BYTE *)(v9 + 0x91) && *(_DWORD *)(v7 + 0x54) != *(_DWORD *)(v9 + 0x54) )
  {
    sub_8CD320(*(int **)(v7 + 8), v7, v9);
    v10 = v60;
    v9 = v59;
    v7 = v58;
  }
  v11 = *(_BYTE *)(v7 + 0x91);
  if ( v11 == (*(_BYTE *)(v9 + 0x91) != 0) )
  {
    v12 = *(_DWORD *)(v7 + 0x6C);
    v13 = *(_DWORD *)(v9 + 0x6C);
    if ( v13 + v12 >= 8 )
      v14 = v12 <= v13;
    else
      v14 = v12 >= v13;
  }
  else
  {
    v14 = v11 != 0;
  }
  v61[1] = v14;
  v15 = (_DWORD *)*(&v58 + v14);
  *(_DWORD *)(a4 + 8) = v15[0x15];
  (*(void (__thiscall **)(int, _DWORD **, int, int))(*(_DWORD *)v10 + 0x20))(v10, &v54, a2, a1);
  (*(void (__thiscall **)(_DWORD, int, _DWORD *))(**(_DWORD **)(a4 + 8) + 0xC))(*(_DWORD *)(a4 + 8), a4, v56);
  v16 = v15[0x1B];
  v17 = (const void **)(v15 + 0x1A);
  v18 = 0;
  if ( v16 > 0 )
  {
    v19 = (char *)*v17 + 0x10;
    do
    {
      if ( *v19 > v61[8] )
        break;
      ++v18;
      v19 += 0x1C;
    }
    while ( v18 < v16 );
  }
  v20 = v16 >= (int)((unsigned int)v17[2] & 0x3FFFFFFF);
  v56[0] = &v59;
  v21 = v20 ? 0 : v18;
  v56[1] = 1;
  v57 = 0x80000001;
  sub_91EE60(v17, v18, (char *)v56);
  v22 = v21;
  if ( v21 < (int)v17[1] )
  {
    v23 = 0x1C * v21;
    do
    {
      *(_DWORD *)(*(_DWORD *)((char *)*v17 + v23) + 0x24) = (char *)*v17 + v23;
      ++v22;
      v23 += 0x1C;
    }
    while ( v22 < (int)v17[1] );
  }
  v24 = *(_DWORD *)(a4 + 0x24);
  v53 = v24;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD *))(**(_DWORD **)(v24 + 0xC) + 0x10))(
    *(_DWORD *)(v24 + 0xC),
    *(unsigned __int8 *)(a4 + 0x19),
    v56);
  v25 = v56[0];
  v26 = v56[0] == 0;
  *(_WORD *)(v24 + 0x14) = v56[0];
  if ( v26 )
  {
    *(_DWORD *)(v24 + 0x18) = 0;
  }
  else
  {
    v27 = v54[0x21];
    v28 = v54[0x22];
    v29 = (const void **)(v54 + 0x20);
    v54 = (_DWORD *)v54[0x20];
    if ( (v28 & 0x3FFFFFFF) < v27 + v25 )
    {
      sub_8A6E40(v29, v27 + v25, 1);
      v25 = v56[0];
    }
    v30 = (const void *)(v25 + v27);
    v31 = v54;
    v29[1] = v30;
    v32 = *v29;
    v33 = (_BYTE *)*v29 - (_BYTE *)v31;
    v55 = v33;
    v54 = 0;
    if ( v18 > 0 )
    {
      v52 = 0;
      v54 = (_DWORD *)v18;
      do
      {
        v34 = (int)*v17 + v52;
        v35 = *(_DWORD *)(v34 + 0x18);
        if ( v35 )
        {
          v36 = *(unsigned __int16 *)(v34 + 0x14);
          v37 = v33 + v35;
          *(_DWORD *)(v34 + 0x18) = v37;
          v32 = (_BYTE *)(v37 + v36);
        }
        --v18;
        v52 += 0x1C;
      }
      while ( v18 );
    }
    j_unknown_libname_16(
      (int)&v32[*(unsigned __int16 *)(v53 + 0x14)],
      (int)v32,
      (int)*v29 + (char *)v29[1] - *(unsigned __int16 *)(v53 + 0x14) - v32);
    v38 = *(unsigned __int16 *)(v53 + 0x14);
    v39 = v54;
    v40 = v55;
    *(_DWORD *)(v53 + 0x18) = v32;
    v41 = (char *)v39 + 1;
    v42 = v38 + v40;
    if ( (int)v41 < (int)v17[1] )
    {
      v43 = 0x1C * (_DWORD)v41;
      do
      {
        v44 = *(_DWORD *)((char *)*v17 + v43 + 0x18);
        if ( v44 )
          v45 = v42 + v44;
        else
          v45 = 0;
        *(_DWORD *)((char *)*v17 + v43 + 0x18) = v45;
        v41 = (char *)v41 + 1;
        v43 += 0x1C;
      }
      while ( (int)v41 < (int)v17[1] );
    }
    v6 = a6;
    v24 = v53;
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v24 + 0xC) + 0x18))(*(_DWORD *)(v24 + 0xC), v6);
  v46 = *(_DWORD *)(v24 + 4 * (2 - *(unsigned __int8 *)(v24 + 0x11)));
  *(_WORD *)(v24 + 0x12) = *(_WORD *)(v46 + 0x78);
  v47 = *(_DWORD *)(v46 + 0x78);
  v48 = v46 + 0x74;
  result = *(_DWORD *)(v46 + 0x7C) & 0x3FFFFFFF;
  if ( v47 == result )
    result = sub_8A6EE0((const void **)v48, 4);
  *(_DWORD *)(*(_DWORD *)v48 + 4 * (*(_DWORD *)(v48 + 4))++) = v6;
  return result;
}
