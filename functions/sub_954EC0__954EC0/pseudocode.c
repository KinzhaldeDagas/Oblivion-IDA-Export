int __fastcall sub_954EC0(int a1, int a2, int a3, char *a4, char *a5)
{
  char *v5; // esi
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

  v5 = a5; /*0x954ece*/
  v6 = a3; /*0x954ed5*/
  v32 = *((_DWORD *)a5 + 2); /*0x954ed8*/
  v7 = *(_BYTE *)(a3 + 4); /*0x954edc*/
  v33 = a1; /*0x954ee3*/
  if ( v7 ) /*0x954ee7*/
  {
    v9 = (float *)(a3 + 0xC); /*0x954ef0*/
    v31 = *(float *)(a1 + 0x48); /*0x954ef6*/
    v10 = 0; /*0x954efa*/
    v33 = a3 + 0xC; /*0x954efc*/
    v30 = a1 + 0x50; /*0x954f00*/
    do /*0x954f88*/
    {
      if ( !*(_BYTE *)(a3 + 0x39) ) /*0x954f04*/
        *(_BYTE *)(v10 + a3 + 0x40) = 1; /*0x954f0b*/
      v11 = v9[1] - *v9; /*0x954f17*/
      v28 = *(float *)v30; /*0x954f1b*/
      if ( v11 < v28 && v28 < (double)v31 ) /*0x954f37*/
      {
        *(float *)&v25 = *(float *)(a1 + 0x3C) * v28; /*0x954f41*/
        if ( sub_8ECB30(v25) << 7 < 1 << v32 ) /*0x954f5c*/
        {
          if ( !*(_BYTE *)(a3 + 0x39) ) /*0x954f68*/
            *(_BYTE *)(v10 + a3 + 0x40) = 2; /*0x954f6f*/
        }
        else
        {
          v31 = v28; /*0x954f62*/
        }
      }
      v30 += 4; /*0x954f74*/
      ++v10; /*0x954f7d*/
      v9 = (float *)(v33 + 8); /*0x954f7e*/
      v33 += 8; /*0x954f84*/
    }
    while ( v10 < 3 ); /*0x954f88*/
    *(float *)&v26 = *(float *)(a1 + 0x3C) * flt_A37450 * v31; /*0x954f9c*/
    v12 = sub_8ECB30(v26); /*0x954f9f*/
    for ( i = 0; v12; ++i ) /*0x954fab*/
      v12 >>= 1; /*0x954fb0*/
    result = i + 6; /*0x954fb7*/
    if ( i + 6 <= v32 ) /*0x954fc0*/
      return v32; /*0x954fc6*/
    return result; /*0x954fce*/
  }
  if ( !*(_BYTE *)(a3 + 0x39) && *(_DWORD *)a5 < *(_DWORD *)(a1 + 0x18) && *sub_954D70(&v27, a3, (int)a4, (int)a5) ) /*0x954ff1*/
    *(_BYTE *)(a3 + 0x3C) = 1; /*0x954ff6*/
  if ( *(_BYTE *)(a3 + 0x3C) == 1 ) /*0x954ffe*/
    sub_954DB0(a4, a5, (int)v36); /*0x95500c*/
  v15 = *(_DWORD *)(a3 + 0xEC); /*0x955011*/
  v28 = NAN; /*0x95501a*/
  v29 = 0xFFFFFFFF; /*0x95501e*/
  v35 = *(_DWORD *)(a3 + 0xF0); /*0x955028*/
  v16 = 0; /*0x95502c*/
  v30 = 0x7FFFFFFF; /*0x95502e*/
  v34 = v15; /*0x955036*/
  v31 = 0.0; /*0x95503a*/
  do /*0x9550c3*/
  {
    v17 = *(_DWORD **)&v36[v16 - 4]; /*0x955040*/
    if ( v17 ) /*0x955046*/
    {
      qmemcpy(v37, v5, sizeof(v37)); /*0x955051*/
      sub_954710(v37, v17); /*0x955058*/
      v18 = v33; /*0x95505d*/
      sub_954C10(v37, (int)v17, v33 + 0x30); /*0x95506a*/
      v37[0] = *(_DWORD *)a5 + 1; /*0x955079*/
      LOBYTE(v37[1]) = 0; /*0x95507d*/
      sub_954CA0(v37); /*0x955082*/
      v20 = sub_954EC0(v18, v19, (int)v17, a5, v37); /*0x955090*/
      v6 = a3; /*0x955099*/
      v15 = v34; /*0x95509c*/
      v5 = a5; /*0x9550a0*/
      *(signed int *)((char *)&v29 + LODWORD(v31)) = v20; /*0x9550a3*/
      if ( v30 >= v37[2] ) /*0x9550af*/
        v30 = v37[2]; /*0x9550b1*/
    }
    v16 = LODWORD(v31) - 4; /*0x9550b9*/
    LODWORD(v31) -= 4; /*0x9550bf*/
  }
  while ( SLODWORD(v31) >= (int)0xFFFFFFFC ); /*0x9550c3*/
  v21 = v32; /*0x9550cd*/
  result = v30 + 2; /*0x9550d1*/
  if ( v32 + 2 < v30 + 2 ) /*0x9550d9*/
    result = v32 + 2; /*0x9550db*/
  if ( v15 ) /*0x9550df*/
  {
    if ( *(_BYTE *)(v6 + 0x39) ) /*0x9550e1*/
    {
      if ( *(_BYTE *)(v15 + 0x39) ) /*0x9550e8*/
      {
LABEL_36:
        if ( !*(_BYTE *)(v15 + 0x3C) && result >= SLODWORD(v28) ) /*0x95510c*/
          result = LODWORD(v28); /*0x95510e*/
        goto LABEL_39; /*0x95510e*/
      }
      v22 = SLODWORD(v28) < result; /*0x9550ef*/
    }
    else
    {
      v22 = SLODWORD(v28) < v32; /*0x9550f5*/
    }
    if ( v22 ) /*0x9550f9*/
      *(_BYTE *)(v15 + 0x3C) = 1; /*0x9550fb*/
    goto LABEL_36; /*0x9550fb*/
  }
LABEL_39:
  v23 = v35; /*0x955110*/
  if ( !v35 ) /*0x955116*/
    return result; /*0x955116*/
  if ( !*(_BYTE *)(v6 + 0x39) ) /*0x95511d*/
  {
    v24 = v29 < v21; /*0x95512c*/
LABEL_44:
    if ( v24 ) /*0x955130*/
      *(_BYTE *)(v35 + 0x3C) = 1; /*0x955132*/
    goto LABEL_46; /*0x955132*/
  }
  if ( !*(_BYTE *)(v35 + 0x39) ) /*0x95511f*/
  {
    v24 = v29 < result; /*0x955126*/
    goto LABEL_44; /*0x95512a*/
  }
LABEL_46:
  if ( !*(_BYTE *)(v23 + 0x3C) && result >= v29 ) /*0x955143*/
    return v29; /*0x955145*/
  return result; /*0x954fc8*/
}
