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
  size_t v38; // [esp-4h] [ebp-14h]

  v2 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(a1 + 0x6C);
    if ( v3 < 0x106 )
    {
      sub_7441E0((int *)a1);
      v3 = *(_DWORD *)(a1 + 0x6C);
      if ( v3 < 0x106 && !a2 )
        return 0;
      if ( !v3 )
        break;
    }
    if ( v3 >= 3 )
    {
      v4 = *(_DWORD *)(a1 + 0x64);
      v5 = *(_DWORD *)(a1 + 0x2C);
      v6 = *(_DWORD *)(a1 + 0x4C)
         & (*(unsigned __int8 *)(*(_DWORD *)(a1 + 0x30) + v4 + 2)
          ^ (*(_DWORD *)(a1 + 0x40) << *(_DWORD *)(a1 + 0x50)));
      v7 = *(_DWORD *)(a1 + 0x3C);
      *(_DWORD *)(a1 + 0x40) = v6;
      *(_WORD *)(*(_DWORD *)(a1 + 0x38) + 2 * (v4 & v5)) = *(_WORD *)(v7 + 2 * v6);
      v2 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 0x38) + 2 * (*(_DWORD *)(a1 + 0x2C) & *(_DWORD *)(a1 + 0x64)));
      *(_WORD *)(*(_DWORD *)(a1 + 0x3C) + 2 * *(_DWORD *)(a1 + 0x40)) = *(_WORD *)(a1 + 0x64);
    }
    if ( v2 )
    {
      v8 = *(_DWORD *)(a1 + 0x64) - v2;
      if ( v8 <= *(_DWORD *)(a1 + 0x24) - 0x106 )
      {
        v9 = *(_DWORD *)(a1 + 0x80);
        if ( v9 >= 2 )
        {
          if ( v9 == 3 && v8 == 1 )
            *(_DWORD *)(a1 + 0x58) = sub_744110((_DWORD *)a1, v2);
        }
        else
        {
          *(_DWORD *)(a1 + 0x58) = sub_743F90(v2, (_DWORD *)a1);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 0x58) < 3u )
    {
      v25 = *(_BYTE *)(*(_DWORD *)(a1 + 0x64) + *(_DWORD *)(a1 + 0x30));
      *(_WORD *)(*(_DWORD *)(a1 + 0x169C) + 2 * *(_DWORD *)(a1 + 0x1698)) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 0x1690) + (*(_DWORD *)(a1 + 0x1698))++) = v25;
      ++*(_WORD *)(a1 + 4 * v25 + 0x8C);
      v26 = *(_DWORD *)(a1 + 0x1698) == *(_DWORD *)(a1 + 0x1694) - 1;
      --*(_DWORD *)(a1 + 0x6C);
      v14 = v26;
    }
    else
    {
      v10 = *(_BYTE *)(a1 + 0x58);
      v11 = *(_WORD *)(a1 + 0x64) - *(_WORD *)(a1 + 0x68);
      *(_WORD *)(*(_DWORD *)(a1 + 0x169C) + 2 * *(_DWORD *)(a1 + 0x1698)) = v11;
      v10 -= 3;
      *(_BYTE *)(*(_DWORD *)(a1 + 0x1690) + (*(_DWORD *)(a1 + 0x1698))++) = v10;
      ++*(_WORD *)(a1 + 4 * (unsigned __int8)byte_A851D0[v10] + 0x490);
      v12 = v11 - 1;
      if ( v12 >= 0x100u )
        v13 = (unsigned __int8)byte_A850D0[v12 >> 7];
      else
        v13 = (unsigned __int8)byte_A84FD0[v12];
      ++*(_WORD *)(a1 + 4 * v13 + 0x980);
      v14 = *(_DWORD *)(a1 + 0x1698) == *(_DWORD *)(a1 + 0x1694) - 1;
      v15 = *(_DWORD *)(a1 + 0x58);
      *(_DWORD *)(a1 + 0x6C) -= v15;
      if ( v15 > *(_DWORD *)(a1 + 0x78) || *(_DWORD *)(a1 + 0x6C) < 3u )
      {
        *(_DWORD *)(a1 + 0x64) += v15;
        v22 = (unsigned __int8 *)(*(_DWORD *)(a1 + 0x64) + *(_DWORD *)(a1 + 0x30));
        v23 = *(_DWORD *)(a1 + 0x50);
        *(_DWORD *)(a1 + 0x58) = 0;
        v24 = *v22;
        *(_DWORD *)(a1 + 0x40) = v24;
        *(_DWORD *)(a1 + 0x40) = *(_DWORD *)(a1 + 0x4C) & (v22[1] ^ (v24 << v23));
        goto LABEL_27;
      }
      *(_DWORD *)(a1 + 0x58) = v15 - 1;
      do
      {
        v16 = ++*(_DWORD *)(a1 + 0x64);
        v17 = *(_DWORD *)(a1 + 0x3C);
        v18 = *(_DWORD *)(a1 + 0x4C)
            & ((*(_DWORD *)(a1 + 0x40) << *(_DWORD *)(a1 + 0x50))
             ^ *(unsigned __int8 *)(v16 + *(_DWORD *)(a1 + 0x30) + 2));
        v19 = v16 & *(_DWORD *)(a1 + 0x2C);
        v20 = *(_DWORD *)(a1 + 0x38);
        *(_DWORD *)(a1 + 0x40) = v18;
        *(_WORD *)(v20 + 2 * v19) = *(_WORD *)(v17 + 2 * v18);
        v2 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 0x38) + 2 * (*(_DWORD *)(a1 + 0x2C) & *(_DWORD *)(a1 + 0x64)));
        *(_WORD *)(*(_DWORD *)(a1 + 0x3C) + 2 * *(_DWORD *)(a1 + 0x40)) = *(_WORD *)(a1 + 0x64);
      }
      while ( (*(_DWORD *)(a1 + 0x58))-- != 1 );
    }
    ++*(_DWORD *)(a1 + 0x64);
LABEL_27:
    if ( v14 )
    {
      v27 = *(_DWORD *)(a1 + 0x54);
      v28 = v27 < 0 ? 0 : (_BYTE *)(v27 + *(_DWORD *)(a1 + 0x30));
      sub_747610(a1, v28, *(_DWORD *)(a1 + 0x64) - v27, 0);
      v29 = *(_DWORD *)a1;
      *(_DWORD *)(a1 + 0x54) = *(_DWORD *)(a1 + 0x64);
      v30 = *(_DWORD *)(v29 + 0x1C);
      v31 = *(_DWORD *)(v30 + 0x14);
      if ( v31 > *(_DWORD *)(v29 + 0x10) )
        v31 = *(_DWORD *)(v29 + 0x10);
      if ( v31 )
      {
        LODWORD(v38) = v31;
        memcpy(*(void **)(v29 + 0xC), *(const void **)(v30 + 0x10), v38);
        v32 = *(_DWORD *)(v29 + 0x1C);
        *(_DWORD *)(v29 + 0xC) += v31;
        *(_DWORD *)(v32 + 0x10) += v31;
        *(_DWORD *)(v29 + 0x14) += v31;
        *(_DWORD *)(v29 + 0x10) -= v31;
        *(_DWORD *)(*(_DWORD *)(v29 + 0x1C) + 0x14) -= v31;
        v33 = *(_DWORD **)(v29 + 0x1C);
        if ( !v33[5] )
          v33[4] = v33[2];
      }
      if ( !*(_DWORD *)(*(_DWORD *)a1 + 0x10) )
        return 0;
    }
  }
  v35 = *(_DWORD *)(a1 + 0x54);
  if ( v35 < 0 )
    v36 = 0;
  else
    v36 = (_BYTE *)(v35 + *(_DWORD *)(a1 + 0x30));
  sub_747610(a1, v36, *(_DWORD *)(a1 + 0x64) - v35, a2 == 4);
  *(_DWORD *)(a1 + 0x54) = *(_DWORD *)(a1 + 0x64);
  sub_7439F0(*(_DWORD *)a1);
  v37 = 0;
  if ( !*(_DWORD *)(*(_DWORD *)a1 + 0x10) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v37) = a2 == 4;
  return 2 * v37 + 1;
}
