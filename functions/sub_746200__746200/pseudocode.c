int __usercall sub_746200@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // edx
  int v8; // edi
  int v9; // ecx
  unsigned __int16 v10; // si
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  __int16 v14; // si
  int v15; // ecx
  int v16; // ecx
  unsigned __int16 v17; // si
  int v18; // edi
  int v19; // ecx
  int v20; // ebx
  int v21; // ecx
  int v22; // ecx
  unsigned __int16 v23; // si
  int v24; // edi
  int v25; // ecx
  int v26; // ebx
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  int v30; // ecx
  int v31; // ebx
  int v32; // ecx
  int v33; // ecx
  unsigned __int16 v34; // si
  int v35; // edi
  int v36; // ecx
  int v37; // ebx
  int v38; // ecx
  int v39; // esi
  int v40; // edi
  int v41; // ecx
  int v42; // ebx
  unsigned __int16 v43; // si
  int v44; // edi
  int v45; // ecx
  int v46; // ebx
  int v47; // ecx
  int v48; // esi
  int v49; // edi
  int v50; // ecx
  int v51; // ebx
  int v52; // [esp+10h] [ebp-18h]
  unsigned int v53; // [esp+14h] [ebp-14h]
  unsigned __int16 *v54; // [esp+18h] [ebp-10h]
  unsigned int v55; // [esp+1Ch] [ebp-Ch]
  int v56; // [esp+1Ch] [ebp-Ch]
  int v57; // [esp+1Ch] [ebp-Ch]
  int v58; // [esp+1Ch] [ebp-Ch]
  int v59; // [esp+1Ch] [ebp-Ch]
  int i; // [esp+20h] [ebp-8h]
  unsigned int v61; // [esp+24h] [ebp-4h]

  v3 = 0; /*0x74620a*/
  v55 = 0xFFFFFFFF; /*0x746211*/
  v53 = *(unsigned __int16 *)(a2 + 2); /*0x746219*/
  v5 = 7; /*0x74621d*/
  v6 = 4; /*0x746222*/
  if ( !*(_WORD *)(a2 + 2) ) /*0x746205*/
  {
    v5 = 0x8A; /*0x746229*/
    v6 = 3; /*0x74622e*/
  }
  if ( a3 >= 0 ) /*0x746235*/
  {
    v54 = (unsigned __int16 *)(a2 + 6); /*0x746241*/
    for ( i = a3 + 1; i; --i ) /*0x746245*/
    {
      v7 = v53; /*0x746257*/
      ++v3; /*0x74625b*/
      v61 = v53; /*0x74625f*/
      v53 = *v54; /*0x746263*/
      v52 = v3; /*0x746267*/
      if ( v3 < v5 && v7 == *v54 ) /*0x74626f*/
        goto LABEL_44; /*0x74626f*/
      if ( v3 < v6 ) /*0x746277*/
      {
        do /*0x746314*/
        {
          v8 = *(unsigned __int16 *)(result + 4 * v7 + 0xA76); /*0x746280*/
          v9 = *(_DWORD *)(result + 0x16B4); /*0x746288*/
          if ( v9 <= 0x10 - v8 ) /*0x746297*/
          {
            *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 4 * v7 + 0xA74) << v9; /*0x7462ff*/
            v15 = v8 + v9; /*0x746306*/
          }
          else
          {
            v10 = *(_WORD *)(result + 4 * v7 + 0xA74); /*0x746299*/
            v11 = v10 << v9; /*0x7462a3*/
            v12 = *(_DWORD *)(result + 8); /*0x7462a5*/
            *(_WORD *)(result + 0x16B0) |= v11; /*0x7462a8*/
            *(_BYTE *)(v12 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x7462b9*/
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x7462cc*/
            v13 = *(_DWORD *)(result + 0x16B4); /*0x7462cf*/
            ++*(_DWORD *)(result + 0x14); /*0x7462d5*/
            v14 = v10 >> (0x10 - v13); /*0x7462dc*/
            v15 = v13 + v8 - 0x10; /*0x7462df*/
            v7 = v61; /*0x7462e3*/
            *(_WORD *)(result + 0x16B0) = v14; /*0x7462e7*/
            v3 = v52; /*0x7462ee*/
          }
          --v3; /*0x746308*/
          *(_DWORD *)(result + 0x16B4) = v15; /*0x74630a*/
          v52 = v3; /*0x746310*/
        }
        while ( v3 ); /*0x746314*/
        goto LABEL_39; /*0x746314*/
      }
      if ( v7 ) /*0x746321*/
      {
        if ( v7 != v55 ) /*0x74632b*/
        {
          v16 = *(_DWORD *)(result + 0x16B4); /*0x746339*/
          v56 = *(unsigned __int16 *)(result + 4 * v7 + 0xA76); /*0x746348*/
          if ( v16 <= 0x10 - v56 ) /*0x74634c*/
          {
            *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 4 * v7 + 0xA74) << v16; /*0x7463b4*/
            v21 = v56 + v16; /*0x7463bf*/
          }
          else
          {
            v17 = *(_WORD *)(result + 4 * v7 + 0xA74); /*0x74634e*/
            v18 = v17 << v16; /*0x746358*/
            v19 = *(_DWORD *)(result + 8); /*0x74635a*/
            *(_WORD *)(result + 0x16B0) |= v18; /*0x74635d*/
            *(_BYTE *)(v19 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x74636e*/
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746381*/
            v20 = *(_DWORD *)(result + 0x16B4); /*0x746384*/
            ++*(_DWORD *)(result + 0x14); /*0x74638a*/
            v21 = v20 + v56 - 0x10; /*0x746398*/
            *(_WORD *)(result + 0x16B0) = v17 >> (0x10 - v20); /*0x74639c*/
            v3 = v52; /*0x7463a3*/
          }
          --v3; /*0x7463c1*/
          *(_DWORD *)(result + 0x16B4) = v21; /*0x7463c3*/
          v52 = v3; /*0x7463c9*/
        }
        v22 = *(_DWORD *)(result + 0x16B4); /*0x7463d4*/
        v57 = *(unsigned __int16 *)(result + 0xAB6); /*0x7463e3*/
        if ( v22 <= 0x10 - v57 ) /*0x7463e7*/
        {
          *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 0xAB4) << v22; /*0x74644d*/
          v27 = v57 + v22; /*0x746458*/
        }
        else
        {
          v23 = *(_WORD *)(result + 0xAB4); /*0x7463e9*/
          v24 = v23 << v22; /*0x7463f2*/
          v25 = *(_DWORD *)(result + 8); /*0x7463f4*/
          *(_WORD *)(result + 0x16B0) |= v24; /*0x7463f7*/
          *(_BYTE *)(v25 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746408*/
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x74641b*/
          v26 = *(_DWORD *)(result + 0x16B4); /*0x74641e*/
          ++*(_DWORD *)(result + 0x14); /*0x746424*/
          v27 = v26 + v57 - 0x10; /*0x746432*/
          *(_WORD *)(result + 0x16B0) = v23 >> (0x10 - v26); /*0x746436*/
          v3 = v52; /*0x74643d*/
        }
        v28 = v3 - 3; /*0x74645a*/
        *(_DWORD *)(result + 0x16B4) = v27; /*0x746460*/
        if ( v27 > 0xE ) /*0x746466*/
        {
          v29 = v28 << v27; /*0x74646a*/
          v30 = *(_DWORD *)(result + 8); /*0x74646c*/
          *(_WORD *)(result + 0x16B0) |= v29; /*0x74646f*/
          *(_BYTE *)(v30 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746480*/
          *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746493*/
          v31 = *(_DWORD *)(result + 0x16B4); /*0x746496*/
          ++*(_DWORD *)(result + 0x14); /*0x74649c*/
          *(_DWORD *)(result + 0x16B4) = v31 - 0xE; /*0x7464a9*/
          *(_WORD *)(result + 0x16B0) = (unsigned __int16)v28 >> (0x10 - v31); /*0x7464af*/
          goto LABEL_39; /*0x7464b6*/
        }
        *(_WORD *)(result + 0x16B0) |= v28 << v27; /*0x7464bd*/
        v32 = v27 + 2; /*0x7464c4*/
      }
      else
      {
        v33 = *(_DWORD *)(result + 0x16B4); /*0x7464cf*/
        if ( v3 > 0xA ) /*0x7464da*/
        {
          v59 = *(unsigned __int16 *)(result + 0xABE); /*0x7465df*/
          if ( v33 <= 0x10 - v59 ) /*0x7465e3*/
          {
            *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 0xABC) << v33; /*0x746649*/
            v47 = v59 + v33; /*0x746654*/
          }
          else
          {
            v43 = *(_WORD *)(result + 0xABC); /*0x7465e5*/
            v44 = v43 << v33; /*0x7465ee*/
            v45 = *(_DWORD *)(result + 8); /*0x7465f0*/
            *(_WORD *)(result + 0x16B0) |= v44; /*0x7465f3*/
            *(_BYTE *)(v45 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746604*/
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746617*/
            v46 = *(_DWORD *)(result + 0x16B4); /*0x74661a*/
            ++*(_DWORD *)(result + 0x14); /*0x746620*/
            v47 = v46 + v59 - 0x10; /*0x74662e*/
            *(_WORD *)(result + 0x16B0) = v43 >> (0x10 - v46); /*0x746632*/
            v3 = v52; /*0x746639*/
          }
          v48 = v3 - 0xB; /*0x746656*/
          *(_DWORD *)(result + 0x16B4) = v47; /*0x74665c*/
          if ( v47 > 9 ) /*0x746662*/
          {
            v49 = v48 << v47; /*0x746666*/
            v50 = *(_DWORD *)(result + 8); /*0x746668*/
            *(_WORD *)(result + 0x16B0) |= v49; /*0x74666b*/
            *(_BYTE *)(v50 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x74667c*/
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x74668f*/
            v51 = *(_DWORD *)(result + 0x16B4); /*0x746692*/
            ++*(_DWORD *)(result + 0x14); /*0x746698*/
            *(_DWORD *)(result + 0x16B4) = v51 - 9; /*0x7466a5*/
            *(_WORD *)(result + 0x16B0) = (unsigned __int16)v48 >> (0x10 - v51); /*0x7466ab*/
            goto LABEL_39; /*0x7466b2*/
          }
          *(_WORD *)(result + 0x16B0) |= v48 << v47; /*0x7466b6*/
          v32 = v47 + 7; /*0x7466bd*/
        }
        else
        {
          v58 = *(unsigned __int16 *)(result + 0xABA); /*0x7464eb*/
          if ( v33 <= 0x10 - v58 ) /*0x7464ef*/
          {
            *(_WORD *)(result + 0x16B0) |= *(_WORD *)(result + 0xAB8) << v33; /*0x746555*/
            v38 = v58 + v33; /*0x746560*/
          }
          else
          {
            v34 = *(_WORD *)(result + 0xAB8); /*0x7464f1*/
            v35 = v34 << v33; /*0x7464fa*/
            v36 = *(_DWORD *)(result + 8); /*0x7464fc*/
            *(_WORD *)(result + 0x16B0) |= v35; /*0x7464ff*/
            *(_BYTE *)(v36 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746510*/
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x746523*/
            v37 = *(_DWORD *)(result + 0x16B4); /*0x746526*/
            ++*(_DWORD *)(result + 0x14); /*0x74652c*/
            v38 = v37 + v58 - 0x10; /*0x74653a*/
            *(_WORD *)(result + 0x16B0) = v34 >> (0x10 - v37); /*0x74653e*/
            v3 = v52; /*0x746545*/
          }
          v39 = v3 - 3; /*0x746562*/
          *(_DWORD *)(result + 0x16B4) = v38; /*0x746568*/
          if ( v38 > 0xD ) /*0x74656e*/
          {
            v40 = v39 << v38; /*0x746572*/
            v41 = *(_DWORD *)(result + 8); /*0x746574*/
            *(_WORD *)(result + 0x16B0) |= v40; /*0x746577*/
            *(_BYTE *)(v41 + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x746588*/
            *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x74659b*/
            v42 = *(_DWORD *)(result + 0x16B4); /*0x74659e*/
            ++*(_DWORD *)(result + 0x14); /*0x7465a4*/
            *(_DWORD *)(result + 0x16B4) = v42 - 0xD; /*0x7465b1*/
            *(_WORD *)(result + 0x16B0) = (unsigned __int16)v39 >> (0x10 - v42); /*0x7465b7*/
            goto LABEL_39; /*0x7465be*/
          }
          *(_WORD *)(result + 0x16B0) |= v39 << v38; /*0x7465c5*/
          v32 = v38 + 3; /*0x7465cc*/
        }
      }
      *(_DWORD *)(result + 0x16B4) = v32; /*0x7466c0*/
LABEL_39:
      v3 = 0; /*0x7466c6*/
      v55 = v7; /*0x7466ce*/
      if ( v53 ) /*0x7466d2*/
      {
        if ( v7 == v53 ) /*0x7466e2*/
        {
          v5 = 6; /*0x7466e4*/
          v6 = 3; /*0x7466e9*/
        }
        else
        {
          v5 = 7; /*0x7466f0*/
          v6 = 4; /*0x7466f5*/
        }
      }
      else
      {
        v5 = 0x8A; /*0x7466d4*/
        v6 = 3; /*0x7466d9*/
      }
LABEL_44:
      v54 += 2; /*0x7466fa*/
    }
  }
  return result; /*0x746709*/
}
