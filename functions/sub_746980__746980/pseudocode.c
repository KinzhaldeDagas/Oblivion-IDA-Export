int __usercall sub_746980@<eax>(int result@<eax>, int a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // ecx
  int v5; // ebp
  int v6; // esi
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  int v20; // esi
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // ebp
  int v27; // edi
  int v28; // edx
  int v29; // ecx
  unsigned __int16 v30; // si
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  int v34; // esi
  int v35; // ecx
  unsigned int v36; // ebp
  unsigned int v37; // edx
  int v38; // ecx
  int v39; // edx
  int v40; // edi
  int v41; // ecx
  unsigned __int16 v42; // si
  int v43; // edx
  int v44; // ecx
  int v45; // edx
  int v46; // [esp+10h] [ebp-Ch]
  int v47; // [esp+14h] [ebp-8h]
  int v48; // [esp+14h] [ebp-8h]
  unsigned int v49; // [esp+18h] [ebp-4h]

  v3 = a2;
  v4 = 0;
  if ( *(_DWORD *)(result + 0x1698) )
  {
    do
    {
      v5 = *(unsigned __int16 *)(*(_DWORD *)(result + 0x169C) + 2 * v4);
      v6 = *(unsigned __int8 *)(v4 + *(_DWORD *)(result + 0x1690));
      v49 = v4 + 1;
      v7 = *(_DWORD *)(result + 0x16B4);
      if ( v5 )
      {
        v14 = (unsigned __int8)byte_A851D0[v6];
        v46 = *(unsigned __int16 *)(v3 + 4 * v14 + 0x406);
        v47 = v14;
        if ( v7 <= 0x10 - v46 )
        {
          *(_WORD *)(result + 0x16B0) |= *(_WORD *)(a2 + 4 * v14 + 0x404) << v7;
          *(_DWORD *)(result + 0x16B4) = v46 + v7;
        }
        else
        {
          v15 = *(unsigned __int16 *)(a2 + 4 * v14 + 0x404);
          v16 = v15 << v7;
          v17 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 0x16B0) |= v16;
          *(_BYTE *)(v17 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
          v18 = *(_DWORD *)(result + 0x16B4);
          ++*(_DWORD *)(result + 0x14);
          LOWORD(v15) = (unsigned __int16)v15 >> (0x10 - v18);
          *(_DWORD *)(result + 0x16B4) = v18 + v46 - 0x10;
          v14 = v47;
          *(_WORD *)(result + 0x16B0) = v15;
        }
        v19 = *(_DWORD *)(4 * v14 + 0xA84988);
        v3 = a2;
        if ( v19 )
        {
          v20 = v6 - *(_DWORD *)(4 * v14 + 0xA852D0);
          v21 = *(_DWORD *)(result + 0x16B4);
          if ( v21 <= 0x10 - v19 )
          {
            *(_WORD *)(result + 0x16B0) |= v20 << v21;
            v25 = v19 + v21;
          }
          else
          {
            v22 = v20 << v21;
            v23 = *(_DWORD *)(result + 8);
            *(_WORD *)(result + 0x16B0) |= v22;
            *(_BYTE *)(v23 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
            v24 = *(_DWORD *)(result + 0x16B4);
            ++*(_DWORD *)(result + 0x14);
            v3 = a2;
            v25 = v24 + v19 - 0x10;
            *(_WORD *)(result + 0x16B0) = (unsigned __int16)v20 >> (0x10 - v24);
          }
          *(_DWORD *)(result + 0x16B4) = v25;
        }
        v26 = v5 - 1;
        if ( v26 >= 0x100 )
          v27 = (unsigned __int8)byte_A850D0[v26 >> 7];
        else
          v27 = (unsigned __int8)byte_A84FD0[v26];
        v28 = *(unsigned __int16 *)(a3 + 4 * v27 + 2);
        v29 = *(_DWORD *)(result + 0x16B4);
        v48 = v28;
        if ( v29 <= 0x10 - v28 )
        {
          *(_WORD *)(result + 0x16B0) |= *(_WORD *)(a3 + 4 * v27) << v29;
          *(_DWORD *)(result + 0x16B4) = v28 + v29;
        }
        else
        {
          v30 = *(_WORD *)(a3 + 4 * v27);
          v31 = v30 << v29;
          v32 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 0x16B0) |= v31;
          *(_BYTE *)(v32 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
          v33 = *(_DWORD *)(result + 0x16B4);
          ++*(_DWORD *)(result + 0x14);
          v3 = a2;
          *(_DWORD *)(result + 0x16B4) = v33 + v48 - 0x10;
          *(_WORD *)(result + 0x16B0) = v30 >> (0x10 - v33);
        }
        v34 = *(_DWORD *)(4 * v27 + 0xA84A10);
        if ( !v34 )
          goto LABEL_25;
        v35 = *(_DWORD *)(result + 0x16B4);
        v36 = v26 - *(_DWORD *)(4 * v27 + 0xA85348);
        if ( v35 <= 0x10 - v34 )
        {
          *(_WORD *)(result + 0x16B0) |= v36 << v35;
          v13 = v34 + v35;
        }
        else
        {
          v37 = v36 << v35;
          v38 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 0x16B0) |= v37;
          *(_BYTE *)(v38 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
          v39 = *(_DWORD *)(result + 0x16B4);
          ++*(_DWORD *)(result + 0x14);
          v13 = v39 + v34 - 0x10;
          *(_WORD *)(result + 0x16B0) = (unsigned __int16)v36 >> (0x10 - v39);
        }
      }
      else
      {
        v8 = *(unsigned __int16 *)(v3 + 4 * v6 + 2);
        if ( v7 <= 0x10 - v8 )
        {
          *(_WORD *)(result + 0x16B0) |= *(_WORD *)(v3 + 4 * v6) << v7;
          v13 = v8 + v7;
        }
        else
        {
          v9 = *(unsigned __int16 *)(v3 + 4 * v6);
          v10 = v9 << v7;
          v11 = *(_DWORD *)(result + 8);
          *(_WORD *)(result + 0x16B0) |= v10;
          *(_BYTE *)(v11 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
          v12 = *(_DWORD *)(result + 0x16B4);
          ++*(_DWORD *)(result + 0x14);
          v13 = v12 + v8 - 0x10;
          *(_WORD *)(result + 0x16B0) = (unsigned __int16)v9 >> (0x10 - v12);
        }
      }
      *(_DWORD *)(result + 0x16B4) = v13;
LABEL_25:
      v4 = v49;
    }
    while ( v49 < *(_DWORD *)(result + 0x1698) );
  }
  v40 = *(unsigned __int16 *)(v3 + 0x402);
  v41 = *(_DWORD *)(result + 0x16B4);
  if ( v41 <= 0x10 - v40 )
  {
    *(_WORD *)(result + 0x16B0) |= *(_WORD *)(v3 + 0x400) << v41;
    *(_DWORD *)(result + 0x16B4) = v40 + v41;
  }
  else
  {
    v42 = *(_WORD *)(v3 + 0x400);
    v43 = v42 << v41;
    v44 = *(_DWORD *)(result + 8);
    *(_WORD *)(result + 0x16B0) |= v43;
    *(_BYTE *)(v44 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 0x14)) = *(_BYTE *)(result + 0x16B1);
    v45 = *(_DWORD *)(result + 0x16B4);
    ++*(_DWORD *)(result + 0x14);
    *(_DWORD *)(result + 0x16B4) = v45 + v40 - 0x10;
    *(_WORD *)(result + 0x16B0) = v42 >> (0x10 - v45);
  }
  *(_DWORD *)(result + 0x16AC) = *(unsigned __int16 *)(v3 + 0x402);
  return result;
}
