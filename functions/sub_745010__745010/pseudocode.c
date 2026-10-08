_DWORD *__cdecl sub_745010(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // ebx
  unsigned __int8 *v4; // ebp
  _BYTE *v5; // esi
  unsigned int v6; // edi
  int v7; // edx
  int v8; // eax
  unsigned int v9; // eax
  char v10; // dl
  unsigned int v11; // edx
  int v12; // eax
  int v13; // edx
  unsigned __int8 *v14; // ebp
  int v15; // eax
  unsigned int v16; // edx
  char v17; // al
  unsigned int v18; // eax
  int v19; // edx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  char v23; // cl
  _BYTE *v24; // eax
  unsigned int v25; // ebp
  int v26; // ecx
  _BYTE *v27; // ecx
  char v28; // al
  int v29; // edx
  unsigned int v30; // ebp
  char v31; // dl
  unsigned int v32; // ebp
  char v33; // al
  char v34; // al
  unsigned int v35; // ebp
  char v36; // al
  _BYTE *v37; // ecx
  _BYTE *v38; // esi
  char v39; // dl
  char v40; // al
  char v41; // dl
  _BYTE *v42; // ecx
  unsigned int v43; // edx
  _BYTE *v44; // eax
  char v45; // cl
  _BYTE *v46; // eax
  char v47; // dl
  _BYTE *v48; // esi
  char v49; // cl
  unsigned int v50; // ecx
  char v51; // dl
  _BYTE *v52; // eax
  unsigned __int8 *v53; // ebp
  unsigned int v54; // edi
  unsigned __int8 *v56; // [esp+10h] [ebp-3Ch]
  unsigned int v57; // [esp+14h] [ebp-38h]
  _DWORD *v58; // [esp+18h] [ebp-34h]
  unsigned int v59; // [esp+1Ch] [ebp-30h]
  unsigned int v60; // [esp+1Ch] [ebp-30h]
  unsigned __int16 v61; // [esp+1Eh] [ebp-2Eh]
  int v62; // [esp+20h] [ebp-2Ch]
  int v63; // [esp+24h] [ebp-28h]
  int v64; // [esp+28h] [ebp-24h]
  unsigned int v65; // [esp+2Ch] [ebp-20h]
  int v66; // [esp+30h] [ebp-1Ch]
  _BYTE *v67; // [esp+38h] [ebp-14h]
  unsigned int v68; // [esp+3Ch] [ebp-10h]
  int v69; // [esp+40h] [ebp-Ch]
  unsigned int v70; // [esp+44h] [ebp-8h]
  int v71; // [esp+48h] [ebp-4h]
  unsigned int v72; // [esp+54h] [ebp+8h]

  v2 = (_DWORD *)a1[7]; /*0x74501b*/
  v3 = v2[0xC]; /*0x745021*/
  v4 = (unsigned __int8 *)(*a1 - 1); /*0x745026*/
  v57 = (unsigned int)&v4[a1[1] - 5]; /*0x74502d*/
  v5 = (_BYTE *)(a1[3] - 1); /*0x74503d*/
  v67 = &v5[a1[4] - a2]; /*0x745049*/
  v65 = (unsigned int)&v5[a1[4] - 0x101]; /*0x745050*/
  v64 = v2[8]; /*0x745057*/
  v68 = v2[9]; /*0x74505e*/
  v70 = v2[0xA]; /*0x745065*/
  v69 = v2[0xB]; /*0x74506c*/
  v62 = v2[0x11]; /*0x745073*/
  v63 = v2[0x12]; /*0x745077*/
  v58 = v2; /*0x745088*/
  v6 = v2[0xD]; /*0x74508c*/
  v7 = (1 << v2[0x13]) - 1; /*0x74509d*/
  v56 = v4; /*0x7450a0*/
  v71 = v7; /*0x7450a4*/
  v66 = (1 << v2[0x14]) - 1; /*0x7450ab*/
  while ( 1 ) /*0x7450b0*/
  {
    if ( v6 < 0xF ) /*0x7450b3*/
    {
      v8 = v4[1]; /*0x7450b5*/
      v4 += 2; /*0x7450c0*/
      v56 = v4; /*0x7450d0*/
      v3 += (*v4 << (v6 + 8)) + (v8 << v6); /*0x7450d4*/
      v6 += 0x10; /*0x7450d6*/
    }
    v9 = *(_DWORD *)(v62 + 4 * (v3 & v7)); /*0x7450df*/
    v10 = v9; /*0x7450ea*/
    v3 >>= SBYTE1(v9); /*0x7450ed*/
    v6 -= BYTE1(v9); /*0x7450ef*/
    if ( !(_BYTE)v9 ) /*0x7450f3*/
    {
LABEL_8:
      *++v5 = BYTE2(v9); /*0x74513e*/
      goto LABEL_47; /*0x745140*/
    }
    while ( (v10 & 0x10) == 0 ) /*0x7450f8*/
    {
      if ( (v10 & 0x40) != 0 ) /*0x7450fd*/
      {
        if ( (v10 & 0x20) != 0 ) /*0x74544d*/
        {
          *v58 = 0xB; /*0x745453*/
          goto LABEL_61; /*0x745459*/
        }
        a1[6] = "invalid literal/length code"; /*0x74545f*/
LABEL_60:
        *v58 = 0x1B; /*0x745466*/
        goto LABEL_61; /*0x74546a*/
      }
      v9 = *(_DWORD *)(v62 + 4 * (HIWORD(v9) + (v3 & ((1 << v10) - 1)))); /*0x745122*/
      v10 = v9; /*0x74512d*/
      v3 >>= SBYTE1(v9); /*0x745130*/
      v6 -= BYTE1(v9); /*0x745132*/
      if ( !(_BYTE)v9 ) /*0x745136*/
        goto LABEL_8; /*0x745136*/
    }
    v11 = v10 & 0xF; /*0x745148*/
    v72 = HIWORD(v9); /*0x74514b*/
    if ( v11 ) /*0x74514f*/
    {
      if ( v6 < v11 ) /*0x745153*/
      {
        v12 = *++v4; /*0x745155*/
        v56 = v4; /*0x745160*/
        v3 += v12 << v6; /*0x745164*/
        v6 += 8; /*0x745166*/
      }
      v72 += v3 & ((1 << v11) - 1); /*0x745177*/
      v3 >>= v11; /*0x74517b*/
      v6 -= v11; /*0x74517d*/
    }
    if ( v6 < 0xF ) /*0x745182*/
    {
      v13 = v4[1]; /*0x745184*/
      v14 = v4 + 1; /*0x745188*/
      v15 = v14[1]; /*0x74518b*/
      v4 = v14 + 1; /*0x745191*/
      v56 = v4; /*0x74519f*/
      v3 += (v15 << (v6 + 8)) + (v13 << v6); /*0x7451a3*/
      v6 += 0x10; /*0x7451a5*/
    }
    v16 = *(_DWORD *)(v63 + 4 * (v3 & v66)); /*0x7451b2*/
    v17 = v16; /*0x7451bd*/
    v3 >>= SBYTE1(v16); /*0x7451c0*/
    v6 -= BYTE1(v16); /*0x7451c2*/
    v61 = HIWORD(v16); /*0x7451c6*/
    if ( (v16 & 0x10) == 0 ) /*0x7451ca*/
    {
      while ( (v17 & 0x40) == 0 ) /*0x7451d2*/
      {
        v16 = *(_DWORD *)(v63 + 4 * (v61 + (v3 & ((1 << v17) - 1)))); /*0x7451f1*/
        v17 = v16; /*0x7451fc*/
        v3 >>= SBYTE1(v16); /*0x7451ff*/
        v6 -= BYTE1(v16); /*0x745201*/
        v61 = HIWORD(v16); /*0x745205*/
        if ( (v16 & 0x10) != 0 ) /*0x745209*/
          goto LABEL_18; /*0x745209*/
      }
      a1[6] = "invalid distance code"; /*0x745441*/
      goto LABEL_60; /*0x745448*/
    }
LABEL_18:
    v18 = v17 & 0xF; /*0x74520b*/
    v59 = HIWORD(v16); /*0x745213*/
    if ( v6 < v18 ) /*0x745217*/
    {
      v19 = *++v4; /*0x745219*/
      v20 = v19 << v6; /*0x745222*/
      v6 += 8; /*0x745224*/
      v56 = v4; /*0x745227*/
      v3 += v20; /*0x74522b*/
      if ( v6 < v18 ) /*0x74522f*/
      {
        v21 = *++v4; /*0x745231*/
        v56 = v4; /*0x74523c*/
        v3 += v21 << v6; /*0x745240*/
        v6 += 8; /*0x745242*/
      }
    }
    v6 -= v18; /*0x745250*/
    v22 = (v3 & ((1 << v18) - 1)) + v59; /*0x74525d*/
    v23 = v18; /*0x74525f*/
    v24 = (_BYTE *)(v5 - v67); /*0x745263*/
    v3 >>= v23; /*0x745267*/
    v60 = v22; /*0x74526b*/
    if ( v22 > v5 - v67 ) /*0x74526f*/
    {
      v25 = v22 - (_DWORD)v24; /*0x745277*/
      if ( v22 - (unsigned int)v24 > v68 ) /*0x74527d*/
      {
        v4 = v56; /*0x74542a*/
        a1[6] = "invalid distance too far back"; /*0x74542e*/
        *v58 = 0x1B; /*0x745435*/
LABEL_61:
        v43 = v57; /*0x745470*/
        break; /*0x745470*/
      }
      v26 = v69 - 1; /*0x74528b*/
      if ( v70 ) /*0x745294*/
      {
        if ( v70 < v25 ) /*0x7452c4*/
        {
          v29 = v64 + v70 - v25; /*0x7452ca*/
          v30 = v25 - v70; /*0x7452ce*/
          v27 = (_BYTE *)(v29 + v26); /*0x7452d0*/
          if ( v30 < v72 ) /*0x7452d6*/
          {
            v72 -= v30; /*0x7452d8*/
            do /*0x7452ee*/
            {
              v31 = *++v27; /*0x7452e0*/
              ++v5; /*0x7452e6*/
              --v30; /*0x7452e9*/
              *v5 = v31; /*0x7452ec*/
            }
            while ( v30 ); /*0x7452ee*/
            v27 = (_BYTE *)(v69 - 1); /*0x7452f4*/
            if ( v70 < v72 ) /*0x7452f8*/
            {
              v72 -= v70; /*0x7452fa*/
              v32 = v70; /*0x7452fe*/
              do /*0x74530e*/
              {
                v33 = *++v27; /*0x745300*/
                ++v5; /*0x745306*/
                --v32; /*0x745309*/
                *v5 = v33; /*0x74530c*/
              }
              while ( v32 ); /*0x74530e*/
              v27 = &v5[-v60]; /*0x745312*/
            }
          }
          goto LABEL_40; /*0x745316*/
        }
        v27 = (_BYTE *)(v70 - v25 + v26); /*0x74531a*/
        if ( v25 < v72 ) /*0x745320*/
        {
          v72 -= v25; /*0x745322*/
          do /*0x745334*/
          {
            v34 = *++v27; /*0x745326*/
            ++v5; /*0x74532c*/
            --v25; /*0x74532f*/
            *v5 = v34; /*0x745332*/
          }
          while ( v25 ); /*0x745334*/
          goto LABEL_39; /*0x745334*/
        }
      }
      else
      {
        v27 = (_BYTE *)(v64 - v25 + v26); /*0x74529c*/
        if ( v25 < v72 ) /*0x7452a2*/
        {
          v72 -= v25; /*0x7452a8*/
          do /*0x7452be*/
          {
            v28 = *++v27; /*0x7452b0*/
            ++v5; /*0x7452b6*/
            --v25; /*0x7452b9*/
            *v5 = v28; /*0x7452bc*/
          }
          while ( v25 ); /*0x7452be*/
LABEL_39:
          v27 = &v5[-v22]; /*0x745336*/
        }
      }
LABEL_40:
      if ( v72 > 2 ) /*0x745341*/
      {
        v35 = (v72 - 3) / 3 + 1; /*0x745351*/
        do /*0x74537f*/
        {
          v36 = v27[1]; /*0x745354*/
          v72 -= 3; /*0x745358*/
          v37 = v27 + 1; /*0x74535d*/
          v38 = v5 + 1; /*0x745360*/
          *v38 = v36; /*0x745363*/
          v39 = *++v37; /*0x745365*/
          *++v38 = v39; /*0x74536e*/
          v40 = v37[1]; /*0x745370*/
          v27 = v37 + 1; /*0x745374*/
          v5 = v38 + 1; /*0x745377*/
          --v35; /*0x74537a*/
          *v5 = v40; /*0x74537d*/
        }
        while ( v35 ); /*0x74537f*/
      }
      if ( v72 ) /*0x745387*/
      {
        v41 = v27[1]; /*0x745389*/
        v42 = v27 + 1; /*0x74538c*/
        *++v5 = v41; /*0x745395*/
        if ( v72 > 1 ) /*0x745397*/
          *++v5 = v42[1]; /*0x74539f*/
      }
      v4 = v56; /*0x7453a1*/
      goto LABEL_47; /*0x7453a1*/
    }
    v44 = &v5[-v22]; /*0x7453c6*/
    do /*0x745402*/
    {
      v45 = v44[1]; /*0x7453d0*/
      v46 = v44 + 1; /*0x7453d4*/
      v5[1] = v45; /*0x7453d7*/
      v47 = *++v46; /*0x7453da*/
      v48 = v5 + 2; /*0x7453e3*/
      *v48 = v47; /*0x7453e6*/
      v49 = v46[1]; /*0x7453e8*/
      v44 = v46 + 1; /*0x7453ec*/
      v5 = v48 + 1; /*0x7453ef*/
      *v5 = v49; /*0x7453f2*/
      v50 = v72 - 3; /*0x7453f8*/
      v72 -= 3; /*0x7453fe*/
    }
    while ( v72 > 2 ); /*0x745402*/
    if ( v50 ) /*0x745406*/
    {
      v51 = v44[1]; /*0x745408*/
      v52 = v44 + 1; /*0x74540b*/
      *++v5 = v51; /*0x745414*/
      if ( v50 > 1 ) /*0x745416*/
        *++v5 = v52[1]; /*0x74541e*/
    }
LABEL_47:
    v43 = v57; /*0x7453a5*/
    if ( (unsigned int)v4 >= v57 || (unsigned int)v5 >= v65 ) /*0x7453b5*/
      break; /*0x7453b5*/
    v7 = v71; /*0x7453bb*/
  }
  v53 = &v4[-(v6 >> 3)]; /*0x745474*/
  v54 = v6 - 8 * (v6 >> 3); /*0x745481*/
  *a1 = v53 + 1; /*0x74549d*/
  a1[3] = v5 + 1; /*0x7454a2*/
  a1[4] = v65 - (_DWORD)v5 + 0x101; /*0x7454b0*/
  a1[1] = v43 - (_DWORD)v53 + 5; /*0x7454b7*/
  v58[0xD] = v54; /*0x7454ba*/
  v58[0xC] = ((1 << v54) - 1) & v3; /*0x7454c0*/
  return v58; /*0x7454bd*/
}
