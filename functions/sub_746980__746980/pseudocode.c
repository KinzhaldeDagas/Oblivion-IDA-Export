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

  v3 = a2; /*0x746984*/
  v4 = 0; /*0x746989*/
  if ( *(_DWORD *)(result + 0x1698) ) /*0x74698b*/
  {
    do /*0x7469a6*/
    {
      v5 = *(unsigned __int16 *)(*(_DWORD *)(result + 0x169C) + 2 * v4); /*0x7469a6*/
      v6 = *(unsigned __int8 *)(v4 + *(_DWORD *)(result + 0x1690)); /*0x7469b0*/
      v49 = v4 + 1; /*0x7469b9*/
      v7 = *(_DWORD *)(result + 0x16B4); /*0x7469bd*/
      if ( v5 ) /*0x7469c3*/
      {
        v14 = (unsigned __int8)byte_A851D0[v6]; /*0x746a4a*/
        v46 = *(unsigned __int16 *)(v3 + 4 * v14 + 0x406); /*0x746a62*/
        v47 = v14; /*0x746a6a*/
        if ( v7 <= 0x10 - v46 ) /*0x746a6e*/
        {
          *(_WORD *)(result + 0x16B0) |= *(_WORD *)(a2 + 4 * v14 + 0x404) << v7; /*0x746ade*/
          *(_DWORD *)(result + 0x16B4) = v46 + v7; /*0x746aeb*/
        }
        else
        {
          v15 = *(unsigned __int16 *)(a2 + 4 * v14 + 0x404); /*0x746a70*/
          v16 = v15 << v7; /*0x746a7a*/
          v17 = *(_DWORD *)(result + 8); /*0x746a7c*/
          *(_WORD *)(result + 0x16B0) |= v16; /*0x746a7f*/
          *(_BYTE *)(v17 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746a90*/
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746aa4*/
          v18 = *(_DWORD *)(result + 0x16B4); /*0x746aa7*/
          ++*(_DWORD *)(result + 0x14); /*0x746aad*/
          LOWORD(v15) = (unsigned __int16)v15 >> (0x10 - v18); /*0x746ab5*/
          *(_DWORD *)(result + 0x16B4) = v18 + v46 - 0x10; /*0x746ac0*/
          v14 = v47; /*0x746ac6*/
          *(_WORD *)(result + 0x16B0) = v15; /*0x746aca*/
        }
        v19 = *(_DWORD *)(4 * v14 + 0xA84988); /*0x746af1*/
        v3 = a2; /*0x746afa*/
        if ( v19 ) /*0x746afe*/
        {
          v20 = v6 - *(_DWORD *)(4 * v14 + 0xA852D0); /*0x746b00*/
          v21 = *(_DWORD *)(result + 0x16B4); /*0x746b07*/
          if ( v21 <= 0x10 - v19 ) /*0x746b16*/
          {
            *(_WORD *)(result + 0x16B0) |= v20 << v21; /*0x746b6b*/
            v25 = v19 + v21; /*0x746b72*/
          }
          else
          {
            v22 = v20 << v21; /*0x746b1a*/
            v23 = *(_DWORD *)(result + 8); /*0x746b1c*/
            *(_WORD *)(result + 0x16B0) |= v22; /*0x746b1f*/
            *(_BYTE *)(v23 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746b30*/
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746b44*/
            v24 = *(_DWORD *)(result + 0x16B4); /*0x746b47*/
            ++*(_DWORD *)(result + 0x14); /*0x746b4d*/
            v3 = a2; /*0x746b51*/
            v25 = v24 + v19 - 0x10; /*0x746b5c*/
            *(_WORD *)(result + 0x16B0) = (unsigned __int16)v20 >> (0x10 - v24); /*0x746b60*/
          }
          *(_DWORD *)(result + 0x16B4) = v25; /*0x746b74*/
        }
        v26 = v5 - 1; /*0x746b7a*/
        if ( v26 >= 0x100 ) /*0x746b83*/
          v27 = (unsigned __int8)byte_A850D0[v26 >> 7]; /*0x746b93*/
        else
          v27 = (unsigned __int8)byte_A84FD0[v26]; /*0x746b85*/
        v28 = *(unsigned __int16 *)(a3 + 4 * v27 + 2); /*0x746b9e*/
        v29 = *(_DWORD *)(result + 0x16B4); /*0x746ba3*/
        v48 = v28; /*0x746bb2*/
        if ( v29 <= 0x10 - v28 ) /*0x746bb6*/
        {
          *(_WORD *)(result + 0x16B0) |= *(_WORD *)(a3 + 4 * v27) << v29; /*0x746c26*/
          *(_DWORD *)(result + 0x16B4) = v28 + v29; /*0x746c2f*/
        }
        else
        {
          v30 = *(_WORD *)(a3 + 4 * v27); /*0x746bbc*/
          v31 = v30 << v29; /*0x746bc2*/
          v32 = *(_DWORD *)(result + 8); /*0x746bc4*/
          *(_WORD *)(result + 0x16B0) |= v31; /*0x746bc7*/
          *(_BYTE *)(v32 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746bd8*/
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746bec*/
          v33 = *(_DWORD *)(result + 0x16B4); /*0x746bef*/
          ++*(_DWORD *)(result + 0x14); /*0x746bf5*/
          v3 = a2; /*0x746bf9*/
          *(_DWORD *)(result + 0x16B4) = v33 + v48 - 0x10; /*0x746c0c*/
          *(_WORD *)(result + 0x16B0) = v30 >> (0x10 - v33); /*0x746c12*/
        }
        v34 = *(_DWORD *)(4 * v27 + 0xA84A10); /*0x746c35*/
        if ( !v34 ) /*0x746c3e*/
          goto LABEL_25; /*0x746c3e*/
        v35 = *(_DWORD *)(result + 0x16B4); /*0x746c44*/
        v36 = v26 - *(_DWORD *)(4 * v27 + 0xA85348); /*0x746c4a*/
        if ( v35 <= 0x10 - v34 ) /*0x746c5a*/
        {
          *(_WORD *)(result + 0x16B0) |= v36 << v35; /*0x746cb3*/
          v13 = v34 + v35; /*0x746cba*/
        }
        else
        {
          v37 = v36 << v35; /*0x746c5e*/
          v38 = *(_DWORD *)(result + 8); /*0x746c60*/
          *(_WORD *)(result + 0x16B0) |= v37; /*0x746c67*/
          *(_BYTE *)(v38 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746c78*/
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746c8c*/
          v39 = *(_DWORD *)(result + 0x16B4); /*0x746c8f*/
          ++*(_DWORD *)(result + 0x14); /*0x746c95*/
          v13 = v39 + v34 - 0x10; /*0x746ca4*/
          *(_WORD *)(result + 0x16B0) = (unsigned __int16)v36 >> (0x10 - v39); /*0x746ca8*/
        }
      }
      else
      {
        v8 = *(unsigned __int16 *)(v3 + 4 * v6 + 2); /*0x7469c9*/
        if ( v7 <= 0x10 - v8 ) /*0x7469d7*/
        {
          *(_WORD *)(result + 0x16B0) |= *(_WORD *)(v3 + 4 * v6) << v7; /*0x746a3c*/
          v13 = v8 + v7; /*0x746a43*/
        }
        else
        {
          v9 = *(unsigned __int16 *)(v3 + 4 * v6); /*0x7469d9*/
          v10 = v9 << v7; /*0x7469df*/
          v11 = *(_DWORD *)(result + 8); /*0x7469e1*/
          *(_WORD *)(result + 0x16B0) |= v10; /*0x7469e8*/
          *(_BYTE *)(v11 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x7469f9*/
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746a0d*/
          v12 = *(_DWORD *)(result + 0x16B4); /*0x746a10*/
          ++*(_DWORD *)(result + 0x14); /*0x746a16*/
          v13 = v12 + v8 - 0x10; /*0x746a25*/
          *(_WORD *)(result + 0x16B0) = (unsigned __int16)v9 >> (0x10 - v12); /*0x746a29*/
        }
      }
      *(_DWORD *)(result + 0x16B4) = v13; /*0x746cbc*/
LABEL_25:
      v4 = v49; /*0x746cc2*/
    }
    while ( v49 < *(_DWORD *)(result + 0x1698) ); /*0x7469a6*/
  }
  v40 = *(unsigned __int16 *)(v3 + 0x402); /*0x746cd2*/
  v41 = *(_DWORD *)(result + 0x16B4); /*0x746cd9*/
  if ( v41 <= 0x10 - v40 ) /*0x746ce8*/
  {
    *(_WORD *)(result + 0x16B0) |= *(_WORD *)(v3 + 0x400) << v41; /*0x746d67*/
    *(_DWORD *)(result + 0x16B4) = v40 + v41; /*0x746d71*/
  }
  else
  {
    v42 = *(_WORD *)(v3 + 0x400); /*0x746cea*/
    v43 = v42 << v41; /*0x746cf3*/
    v44 = *(_DWORD *)(result + 8); /*0x746cf5*/
    *(_WORD *)(result + 0x16B0) |= v43; /*0x746cfc*/
    *(_BYTE *)(v44 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746d0c*/
    *(_BYTE *)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 0x14)) = *(_BYTE *)(result + 0x16B1); /*0x746d23*/
    v45 = *(_DWORD *)(result + 0x16B4); /*0x746d26*/
    ++*(_DWORD *)(result + 0x14); /*0x746d2c*/
    *(_DWORD *)(result + 0x16B4) = v45 + v40 - 0x10; /*0x746d3c*/
    *(_WORD *)(result + 0x16B0) = v42 >> (0x10 - v45); /*0x746d42*/
  }
  *(_DWORD *)(result + 0x16AC) = *(unsigned __int16 *)(v3 + 0x402); /*0x746d52*/
  return result; /*0x746d3b*/
}
