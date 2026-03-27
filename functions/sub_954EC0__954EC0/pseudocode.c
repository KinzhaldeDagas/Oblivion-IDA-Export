int __fastcall sub_954EC0(int a1, int a2, int a3, char *a4, _DWORD *a5)
{
  const void *v5; // esi
  int v6; // edi
  char v7; // al
  float *v9; // eax
  int v10; // esi
  double v11; // st7
  unsigned int v12; // eax
  int i; // ecx
  int result; // eax
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // ebx
  int v18; // esi
  int v19; // edx
  int v20; // eax
  signed int v21; // esi
  bool v22; // cc
  int v23; // edx
  bool v24; // cc
  unsigned int v25; // [esp+0h] [ebp-94h]
  unsigned int v26; // [esp+0h] [ebp-94h]
  bool v27; // [esp+17h] [ebp-7Dh] BYREF
  float v28; // [esp+18h] [ebp-7Ch]
  signed int v29; // [esp+1Ch] [ebp-78h]
  int v30; // [esp+20h] [ebp-74h]
  float v31; // [esp+24h] [ebp-70h]
  signed int v32; // [esp+28h] [ebp-6Ch]
  int v33; // [esp+2Ch] [ebp-68h]
  int v34; // [esp+30h] [ebp-64h]
  int v35; // [esp+34h] [ebp-60h]
  char v36[20]; // [esp+38h] [ebp-5Ch] BYREF
  int v37[18]; // [esp+4Ch] [ebp-48h] BYREF

  v5 = a5;
  v6 = a3;
  v32 = a5[2];
  v7 = *(_BYTE *)(a3 + 4);
  v33 = a1;
  if ( v7 )
  {
    v9 = (float *)(a3 + 0xC);
    v31 = *(float *)(a1 + 0x48);
    v10 = 0;
    v33 = a3 + 0xC;
    v30 = a1 + 0x50;
    do
    {
      if ( !*(_BYTE *)(a3 + 0x39) )
        *(_BYTE *)(v10 + a3 + 0x40) = 1;
      v11 = v9[1] - *v9;
      v28 = *(float *)v30;
      if ( v11 < v28 && v28 < (double)v31 )
      {
        *(float *)&v25 = *(float *)(a1 + 0x3C) * v28;
        if ( sub_8ECB30(v25) << 7 < 1 << v32 )
        {
          if ( !*(_BYTE *)(a3 + 0x39) )
            *(_BYTE *)(v10 + a3 + 0x40) = 2;
        }
        else
        {
          v31 = v28;
        }
      }
      v30 += 4;
      ++v10;
      v9 = (float *)(v33 + 8);
      v33 += 8;
    }
    while ( v10 < 3 );
    *(float *)&v26 = *(float *)(a1 + 0x3C) * flt_A37450 * v31;
    v12 = sub_8ECB30(v26);
    for ( i = 0; v12; ++i )
      v12 >>= 1;
    result = i + 6;
    if ( i + 6 <= v32 )
      return v32;
    return result;
  }
  if ( !*(_BYTE *)(a3 + 0x39) && *a5 < *(_DWORD *)(a1 + 0x18) && *sub_954D70(&v27, a3, (int)a4, (int)a5) )
    *(_BYTE *)(a3 + 0x3C) = 1;
  if ( *(_BYTE *)(a3 + 0x3C) == 1 )
    sub_954DB0(a4, (char *)a5, (int)v36);
  v15 = *(_DWORD *)(a3 + 0xEC);
  v28 = NAN;
  v29 = 0xFFFFFFFF;
  v35 = *(_DWORD *)(a3 + 0xF0);
  v16 = 0;
  v30 = 0x7FFFFFFF;
  v34 = v15;
  v31 = 0.0;
  do
  {
    v17 = *(_DWORD **)&v36[v16 - 4];
    if ( v17 )
    {
      qmemcpy(v37, v5, sizeof(v37));
      sub_954710(v37, v17);
      v18 = v33;
      sub_954C10(v37, (int)v17, v33 + 0x30);
      v37[0] = *a5 + 1;
      LOBYTE(v37[1]) = 0;
      sub_954CA0(v37);
      v20 = sub_954EC0(v18, v19, (int)v17, (char *)a5, (int)v37);
      v6 = a3;
      v15 = v34;
      v5 = a5;
      *(signed int *)((char *)&v29 + LODWORD(v31)) = v20;
      if ( v30 >= v37[2] )
        v30 = v37[2];
    }
    v16 = LODWORD(v31) - 4;
    LODWORD(v31) -= 4;
  }
  while ( SLODWORD(v31) >= (int)0xFFFFFFFC );
  v21 = v32;
  result = v30 + 2;
  if ( v32 + 2 < v30 + 2 )
    result = v32 + 2;
  if ( v15 )
  {
    if ( *(_BYTE *)(v6 + 0x39) )
    {
      if ( *(_BYTE *)(v15 + 0x39) )
      {
LABEL_36:
        if ( !*(_BYTE *)(v15 + 0x3C) && result >= SLODWORD(v28) )
          result = LODWORD(v28);
        goto LABEL_39;
      }
      v22 = SLODWORD(v28) < result;
    }
    else
    {
      v22 = SLODWORD(v28) < v32;
    }
    if ( v22 )
      *(_BYTE *)(v15 + 0x3C) = 1;
    goto LABEL_36;
  }
LABEL_39:
  v23 = v35;
  if ( !v35 )
    return result;
  if ( !*(_BYTE *)(v6 + 0x39) )
  {
    v24 = v29 < v21;
LABEL_44:
    if ( v24 )
      *(_BYTE *)(v35 + 0x3C) = 1;
    goto LABEL_46;
  }
  if ( !*(_BYTE *)(v35 + 0x39) )
  {
    v24 = v29 < result;
    goto LABEL_44;
  }
LABEL_46:
  if ( !*(_BYTE *)(v23 + 0x3C) && result >= v29 )
    return v29;
  return result;
}
