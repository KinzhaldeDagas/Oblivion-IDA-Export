_BYTE *__cdecl sub_92C790(_BYTE *a1, int a2, __int16 *a3, __int16 *a4, __int16 *a5, __int16 *a6)
{
  __int16 *v6; // ebp
  __int16 v8; // dx
  __int16 *v9; // ebx
  int v11; // esi
  __int16 v13; // si
  bool v14; // zf
  __int16 v15; // dx
  __int16 *v16; // esi
  int v17; // ecx
  __int16 *v18; // ecx
  bool v19; // al
  char v21; // [esp+1Ch] [ebp+Ch]
  __int16 *v22; // [esp+20h] [ebp+10h]
  __int16 *v23; // [esp+20h] [ebp+10h]
  bool v24; // [esp+20h] [ebp+10h]
  char v25; // [esp+28h] [ebp+18h]

  v6 = a4;
  if ( a3 == a4
    || *a3 != *a4
    || (v8 = *(_WORD *)(a2 + 8 * (unsigned __int16)a3[1]), v21 = 1, v8 == *(_WORD *)(a2 + 8 * (unsigned __int16)a4[1])) )
  {
    v21 = 0;
  }
  v9 = a5;
  if ( a5 == a6
    || *a5 != *a6
    || (v11 = (unsigned __int16)a6[1], v25 = 1, *(_WORD *)(a2 + 8 * (unsigned __int16)a5[1]) == *(_WORD *)(a2 + 8 * v11)) )
  {
    v25 = 0;
  }
  if ( v21 && v25 )
  {
    if ( a3 != a6
      && *a3 == *a6
      && (v9 = a5, *(_WORD *)(a2 + 8 * (unsigned __int16)a3[1]) == *(_WORD *)(a2 + 8 * (unsigned __int16)a6[1]))
      || v9 == a6
      || (v13 = *a6, *v9 != *a6)
      || (v14 = *(_WORD *)(a2 + 8 * (unsigned __int16)v9[1]) == *(_WORD *)(a2 + 8 * (unsigned __int16)a6[1]),
          v6 = a4,
          v9 = a5,
          !v14) )
    {
      v13 = *a6;
      v22 = (__int16 *)(a2 + 8 * (unsigned __int16)a3[1]);
      if ( *v22 == *a6 && *(_WORD *)(a2 + 8 * (unsigned __int16)a6[1]) == *a3 && v22 != a6 )
        goto LABEL_26;
    }
    v23 = (__int16 *)(a2 + 8 * (unsigned __int16)v9[1]);
    if ( *v23 == v13 && *(_WORD *)(a2 + 8 * (unsigned __int16)a6[1]) == *v9 )
      v24 = v23 == a6;
    else
LABEL_26:
      v24 = 1;
    if ( a3 != v6
      && *a3 == *v6
      && *(_WORD *)(a2 + 8 * (unsigned __int16)a3[1]) == *(_WORD *)(a2 + 8 * (unsigned __int16)v6[1])
      || v9 == v6
      || (v15 = *v6, *v9 != *v6)
      || (v14 = *(_WORD *)(a2 + 8 * (unsigned __int16)v9[1]) == *(_WORD *)(a2 + 8 * (unsigned __int16)v6[1]),
          v9 = a5,
          !v14) )
    {
      v16 = (__int16 *)(a2 + 8 * (unsigned __int16)a3[1]);
      v15 = *v6;
      if ( *v16 == *v6 && *(_WORD *)(a2 + 8 * (unsigned __int16)v6[1]) == *a3 && v16 != v6 )
        goto LABEL_39;
    }
    v17 = (unsigned __int16)v9[1];
    v14 = *(_WORD *)(a2 + 8 * v17) == (unsigned __int16)v15;
    v18 = (__int16 *)(a2 + 8 * v17);
    if ( v14 && *(_WORD *)(a2 + 8 * (unsigned __int16)v6[1]) == *v9 )
      v19 = v18 == v6;
    else
LABEL_39:
      v19 = 1;
    if ( v24 && v19 )
    {
      *a1 = 1;
      return a1;
    }
    else
    {
      *a1 = 0;
      return a1;
    }
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
