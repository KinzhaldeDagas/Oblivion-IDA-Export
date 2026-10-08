signed int __cdecl sub_744510(int a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned __int8 v10; // al
  __int16 v11; // cx
  unsigned __int16 v12; // cx
  int v13; // eax
  BOOL v14; // edi
  unsigned int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // edx
  unsigned __int8 *v22; // edx
  int v23; // ecx
  int v24; // eax
  unsigned __int8 v25; // al
  BOOL v26; // ecx
  int v27; // ecx
  _BYTE *v28; // eax
  int v29; // edi
  int v30; // eax
  unsigned int v31; // ebp
  int v32; // eax
  _DWORD *v33; // edi
  int v35; // ecx
  _BYTE *v36; // eax
  int v37; // eax

  v2 = 0; /*0x744518*/
  while ( 1 )
  {
    v3 = *(_DWORD *)(a1 + 0x6C); /*0x744520*/
    if ( v3 < 0x106 ) /*0x744528*/
    {
      sub_7441E0((int *)a1); /*0x74452a*/
      v3 = *(_DWORD *)(a1 + 0x6C); /*0x74452f*/
      if ( v3 < 0x106 && !a2 ) /*0x74453f*/
        return 0; /*0x744811*/
      if ( !v3 ) /*0x744547*/
        break; /*0x744547*/
    }
    if ( v3 >= 3 ) /*0x744550*/
    {
      v4 = *(_DWORD *)(a1 + 0x64); /*0x744558*/
      v5 = *(_DWORD *)(a1 + 0x2C); /*0x74455b*/
      v6 = *(_DWORD *)(a1 + 0x4C) /*0x74456a*/
         & (*(unsigned __int8 *)(*(_DWORD *)(a1 + 0x30) + v4 + 2)
          ^ (*(_DWORD *)(a1 + 0x40) << *(_DWORD *)(a1 + 0x50)));
      v7 = *(_DWORD *)(a1 + 0x3C); /*0x74456d*/
      *(_DWORD *)(a1 + 0x40) = v6; /*0x744570*/
      *(_WORD *)(*(_DWORD *)(a1 + 0x38) + 2 * (v4 & v5)) = *(_WORD *)(v7 + 2 * v6); /*0x74457c*/
      v2 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 0x38) + 2 * (*(_DWORD *)(a1 + 0x2C) & *(_DWORD *)(a1 + 0x64))); /*0x744589*/
      *(_WORD *)(*(_DWORD *)(a1 + 0x3C) + 2 * *(_DWORD *)(a1 + 0x40)) = *(_WORD *)(a1 + 0x64); /*0x744597*/
    }
    if ( v2 ) /*0x74459d*/
    {
      v8 = *(_DWORD *)(a1 + 0x64) - v2; /*0x7445a5*/
      if ( v8 <= *(_DWORD *)(a1 + 0x24) - 0x106 ) /*0x7445af*/
      {
        v9 = *(_DWORD *)(a1 + 0x80); /*0x7445b1*/
        if ( v9 >= 2 ) /*0x7445ba*/
        {
          if ( v9 == 3 && v8 == 1 ) /*0x74464e*/
            *(_DWORD *)(a1 + 0x58) = sub_744110((_DWORD *)a1, v2); /*0x744659*/
        }
        else
        {
          *(_DWORD *)(a1 + 0x58) = sub_743F90(v2, (_DWORD *)a1); /*0x7445c9*/
        }
      }
    }
    if ( *(_DWORD *)(a1 + 0x58) < 3u ) /*0x7445d5*/
    {
      v25 = *(_BYTE *)(*(_DWORD *)(a1 + 0x64) + *(_DWORD *)(a1 + 0x30)); /*0x74472d*/
      *(_WORD *)(*(_DWORD *)(a1 + 0x169C) + 2 * *(_DWORD *)(a1 + 0x1698)) = 0; /*0x74473c*/
      *(_BYTE *)(*(_DWORD *)(a1 + 0x1690) + (*(_DWORD *)(a1 + 0x1698))++) = v25; /*0x74474e*/
      ++*(_WORD *)(a1 + 4 * v25 + 0x8C); /*0x74475a*/
      v26 = *(_DWORD *)(a1 + 0x1698) == *(_DWORD *)(a1 + 0x1694) - 1; /*0x744779*/
      --*(_DWORD *)(a1 + 0x6C); /*0x74477c*/
      v14 = v26; /*0x744780*/
    }
    else
    {
      v10 = *(_BYTE *)(a1 + 0x58); /*0x7445e3*/
      v11 = *(_WORD *)(a1 + 0x64) - *(_WORD *)(a1 + 0x68); /*0x7445ec*/
      *(_WORD *)(*(_DWORD *)(a1 + 0x169C) + 2 * *(_DWORD *)(a1 + 0x1698)) = v11; /*0x7445f5*/
      v10 -= 3; /*0x744605*/
      *(_BYTE *)(*(_DWORD *)(a1 + 0x1690) + (*(_DWORD *)(a1 + 0x1698))++) = v10; /*0x744607*/
      ++*(_WORD *)(a1 + 4 * (unsigned __int8)byte_A851D0[v10] + 0x490); /*0x74461a*/
      v12 = v11 - 1; /*0x744629*/
      if ( v12 >= 0x100u ) /*0x744634*/
        v13 = (unsigned __int8)byte_A850D0[v12 >> 7]; /*0x744667*/
      else
        v13 = (unsigned __int8)byte_A84FD0[v12]; /*0x744639*/
      ++*(_WORD *)(a1 + 4 * v13 + 0x980); /*0x74466e*/
      v14 = *(_DWORD *)(a1 + 0x1698) == *(_DWORD *)(a1 + 0x1694) - 1; /*0x744689*/
      v15 = *(_DWORD *)(a1 + 0x58); /*0x74468b*/
      *(_DWORD *)(a1 + 0x6C) -= v15; /*0x74468e*/
      if ( v15 > *(_DWORD *)(a1 + 0x78) || *(_DWORD *)(a1 + 0x6C) < 3u ) /*0x74469c*/
      {
        *(_DWORD *)(a1 + 0x64) += v15; /*0x7446fb*/
        v22 = (unsigned __int8 *)(*(_DWORD *)(a1 + 0x64) + *(_DWORD *)(a1 + 0x30)); /*0x744704*/
        v23 = *(_DWORD *)(a1 + 0x50); /*0x744707*/
        *(_DWORD *)(a1 + 0x58) = 0; /*0x74470a*/
        v24 = *v22; /*0x744711*/
        *(_DWORD *)(a1 + 0x40) = v24; /*0x744714*/
        *(_DWORD *)(a1 + 0x40) = *(_DWORD *)(a1 + 0x4C) & (v22[1] ^ (v24 << v23)); /*0x744722*/
        goto LABEL_27; /*0x744725*/
      }
      *(_DWORD *)(a1 + 0x58) = v15 - 1; /*0x7446a1*/
      do /*0x7446f4*/
      {
        v16 = ++*(_DWORD *)(a1 + 0x64); /*0x7446a7*/
        v17 = *(_DWORD *)(a1 + 0x3C); /*0x7446ba*/
        v18 = *(_DWORD *)(a1 + 0x4C) /*0x7446bf*/
            & ((*(_DWORD *)(a1 + 0x40) << *(_DWORD *)(a1 + 0x50))
             ^ *(unsigned __int8 *)(v16 + *(_DWORD *)(a1 + 0x30) + 2));
        v19 = v16 & *(_DWORD *)(a1 + 0x2C); /*0x7446c5*/
        v20 = *(_DWORD *)(a1 + 0x38); /*0x7446c7*/
        *(_DWORD *)(a1 + 0x40) = v18; /*0x7446ca*/
        *(_WORD *)(v20 + 2 * v19) = *(_WORD *)(v17 + 2 * v18); /*0x7446d1*/
        v2 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 0x38) + 2 * (*(_DWORD *)(a1 + 0x2C) & *(_DWORD *)(a1 + 0x64))); /*0x7446de*/
        *(_WORD *)(*(_DWORD *)(a1 + 0x3C) + 2 * *(_DWORD *)(a1 + 0x40)) = *(_WORD *)(a1 + 0x64); /*0x7446ec*/
      }
      while ( (*(_DWORD *)(a1 + 0x58))-- != 1 ); /*0x7446f4*/
    }
    ++*(_DWORD *)(a1 + 0x64); /*0x744782*/
LABEL_27:
    if ( v14 )
    {
      v27 = *(_DWORD *)(a1 + 0x54); /*0x74478d*/
      v28 = v27 < 0 ? 0 : (_BYTE *)(v27 + *(_DWORD *)(a1 + 0x30));
      sub_747610(a1, v28, *(_DWORD *)(a1 + 0x64) - v27, 0); /*0x7447a7*/
      v29 = *(_DWORD *)a1; /*0x7447af*/
      *(_DWORD *)(a1 + 0x54) = *(_DWORD *)(a1 + 0x64); /*0x7447b1*/
      v30 = *(_DWORD *)(v29 + 0x1C); /*0x7447b4*/
      v31 = *(_DWORD *)(v30 + 0x14); /*0x7447b7*/
      if ( v31 > *(_DWORD *)(v29 + 0x10) ) /*0x7447c2*/
        v31 = *(_DWORD *)(v29 + 0x10); /*0x7447c4*/
      if ( v31 ) /*0x7447c8*/
      {
        memcpy(*(void **)(v29 + 0xC), *(const void **)(v30 + 0x10), v31); /*0x7447d3*/
        v32 = *(_DWORD *)(v29 + 0x1C); /*0x7447d8*/
        *(_DWORD *)(v29 + 0xC) += v31; /*0x7447db*/
        *(_DWORD *)(v32 + 0x10) += v31; /*0x7447de*/
        *(_DWORD *)(v29 + 0x14) += v31; /*0x7447e1*/
        *(_DWORD *)(v29 + 0x10) -= v31; /*0x7447e4*/
        *(_DWORD *)(*(_DWORD *)(v29 + 0x1C) + 0x14) -= v31; /*0x7447ea*/
        v33 = *(_DWORD **)(v29 + 0x1C); /*0x7447ed*/
        if ( !v33[5] ) /*0x7447f3*/
          v33[4] = v33[2]; /*0x7447fc*/
      }
      if ( !*(_DWORD *)(*(_DWORD *)a1 + 0x10) ) /*0x744801*/
        return 0; /*0x744805*/
    }
  }
  v35 = *(_DWORD *)(a1 + 0x54); /*0x744812*/
  if ( v35 < 0 ) /*0x744817*/
    v36 = 0; /*0x744820*/
  else
    v36 = (_BYTE *)(v35 + *(_DWORD *)(a1 + 0x30)); /*0x74481c*/
  sub_747610(a1, v36, *(_DWORD *)(a1 + 0x64) - v35, a2 == 4); /*0x744833*/
  *(_DWORD *)(a1 + 0x54) = *(_DWORD *)(a1 + 0x64); /*0x74483b*/
  sub_7439F0(*(_DWORD *)a1); /*0x744843*/
  v37 = 0; /*0x74484a*/
  if ( !*(_DWORD *)(*(_DWORD *)a1 + 0x10) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v37) = a2 == 4; /*0x744865*/
  return 2 * v37 + 1; /*0x74480b*/
}
