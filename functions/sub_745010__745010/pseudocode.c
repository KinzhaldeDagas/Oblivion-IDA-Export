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

  v2 = (_DWORD *)a1[7];
  v3 = v2[0xC];
  v4 = (unsigned __int8 *)(*a1 - 1);
  v57 = (unsigned int)&v4[a1[1] - 5];
  v5 = (_BYTE *)(a1[3] - 1);
  v67 = &v5[a1[4] - a2];
  v65 = (unsigned int)&v5[a1[4] - 0x101];
  v64 = v2[8];
  v68 = v2[9];
  v70 = v2[0xA];
  v69 = v2[0xB];
  v62 = v2[0x11];
  v63 = v2[0x12];
  v58 = v2;
  v6 = v2[0xD];
  v7 = (1 << v2[0x13]) - 1;
  v56 = v4;
  v71 = v7;
  v66 = (1 << v2[0x14]) - 1;
  while ( 1 )
  {
    if ( v6 < 0xF )
    {
      v8 = v4[1];
      v4 += 2;
      v56 = v4;
      v3 += (*v4 << (v6 + 8)) + (v8 << v6);
      v6 += 0x10;
    }
    v9 = *(_DWORD *)(v62 + 4 * (v3 & v7));
    v10 = v9;
    v3 >>= SBYTE1(v9);
    v6 -= BYTE1(v9);
    if ( !(_BYTE)v9 )
    {
LABEL_8:
      *++v5 = BYTE2(v9);
      goto LABEL_47;
    }
    while ( (v10 & 0x10) == 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        if ( (v10 & 0x20) != 0 )
        {
          *v58 = 0xB;
          goto LABEL_61;
        }
        a1[6] = "invalid literal/length code";
LABEL_60:
        *v58 = 0x1B;
        goto LABEL_61;
      }
      v9 = *(_DWORD *)(v62 + 4 * (HIWORD(v9) + (v3 & ((1 << v10) - 1))));
      v10 = v9;
      v3 >>= SBYTE1(v9);
      v6 -= BYTE1(v9);
      if ( !(_BYTE)v9 )
        goto LABEL_8;
    }
    v11 = v10 & 0xF;
    v72 = HIWORD(v9);
    if ( v11 )
    {
      if ( v6 < v11 )
      {
        v12 = *++v4;
        v56 = v4;
        v3 += v12 << v6;
        v6 += 8;
      }
      v72 += v3 & ((1 << v11) - 1);
      v3 >>= v11;
      v6 -= v11;
    }
    if ( v6 < 0xF )
    {
      v13 = v4[1];
      v14 = v4 + 1;
      v15 = v14[1];
      v4 = v14 + 1;
      v56 = v4;
      v3 += (v15 << (v6 + 8)) + (v13 << v6);
      v6 += 0x10;
    }
    v16 = *(_DWORD *)(v63 + 4 * (v3 & v66));
    v17 = v16;
    v3 >>= SBYTE1(v16);
    v6 -= BYTE1(v16);
    v61 = HIWORD(v16);
    if ( (v16 & 0x10) == 0 )
    {
      while ( (v17 & 0x40) == 0 )
      {
        v16 = *(_DWORD *)(v63 + 4 * (v61 + (v3 & ((1 << v17) - 1))));
        v17 = v16;
        v3 >>= SBYTE1(v16);
        v6 -= BYTE1(v16);
        v61 = HIWORD(v16);
        if ( (v16 & 0x10) != 0 )
          goto LABEL_18;
      }
      a1[6] = "invalid distance code";
      goto LABEL_60;
    }
LABEL_18:
    v18 = v17 & 0xF;
    v59 = HIWORD(v16);
    if ( v6 < v18 )
    {
      v19 = *++v4;
      v20 = v19 << v6;
      v6 += 8;
      v56 = v4;
      v3 += v20;
      if ( v6 < v18 )
      {
        v21 = *++v4;
        v56 = v4;
        v3 += v21 << v6;
        v6 += 8;
      }
    }
    v6 -= v18;
    v22 = (v3 & ((1 << v18) - 1)) + v59;
    v23 = v18;
    v24 = (_BYTE *)(v5 - v67);
    v3 >>= v23;
    v60 = v22;
    if ( v22 > v5 - v67 )
    {
      v25 = v22 - (_DWORD)v24;
      if ( v22 - (unsigned int)v24 > v68 )
      {
        v4 = v56;
        a1[6] = "invalid distance too far back";
        *v58 = 0x1B;
LABEL_61:
        v43 = v57;
        break;
      }
      v26 = v69 - 1;
      if ( v70 )
      {
        if ( v70 < v25 )
        {
          v29 = v64 + v70 - v25;
          v30 = v25 - v70;
          v27 = (_BYTE *)(v29 + v26);
          if ( v30 < v72 )
          {
            v72 -= v30;
            do
            {
              v31 = *++v27;
              ++v5;
              --v30;
              *v5 = v31;
            }
            while ( v30 );
            v27 = (_BYTE *)(v69 - 1);
            if ( v70 < v72 )
            {
              v72 -= v70;
              v32 = v70;
              do
              {
                v33 = *++v27;
                ++v5;
                --v32;
                *v5 = v33;
              }
              while ( v32 );
              v27 = &v5[-v60];
            }
          }
          goto LABEL_40;
        }
        v27 = (_BYTE *)(v70 - v25 + v26);
        if ( v25 < v72 )
        {
          v72 -= v25;
          do
          {
            v34 = *++v27;
            ++v5;
            --v25;
            *v5 = v34;
          }
          while ( v25 );
          goto LABEL_39;
        }
      }
      else
      {
        v27 = (_BYTE *)(v64 - v25 + v26);
        if ( v25 < v72 )
        {
          v72 -= v25;
          do
          {
            v28 = *++v27;
            ++v5;
            --v25;
            *v5 = v28;
          }
          while ( v25 );
LABEL_39:
          v27 = &v5[-v22];
        }
      }
LABEL_40:
      if ( v72 > 2 )
      {
        v35 = (v72 - 3) / 3 + 1;
        do
        {
          v36 = v27[1];
          v72 -= 3;
          v37 = v27 + 1;
          v38 = v5 + 1;
          *v38 = v36;
          v39 = *++v37;
          *++v38 = v39;
          v40 = v37[1];
          v27 = v37 + 1;
          v5 = v38 + 1;
          --v35;
          *v5 = v40;
        }
        while ( v35 );
      }
      if ( v72 )
      {
        v41 = v27[1];
        v42 = v27 + 1;
        *++v5 = v41;
        if ( v72 > 1 )
          *++v5 = v42[1];
      }
      v4 = v56;
      goto LABEL_47;
    }
    v44 = &v5[-v22];
    do
    {
      v45 = v44[1];
      v46 = v44 + 1;
      v5[1] = v45;
      v47 = *++v46;
      v48 = v5 + 2;
      *v48 = v47;
      v49 = v46[1];
      v44 = v46 + 1;
      v5 = v48 + 1;
      *v5 = v49;
      v50 = v72 - 3;
      v72 -= 3;
    }
    while ( v72 > 2 );
    if ( v50 )
    {
      v51 = v44[1];
      v52 = v44 + 1;
      *++v5 = v51;
      if ( v50 > 1 )
        *++v5 = v52[1];
    }
LABEL_47:
    v43 = v57;
    if ( (unsigned int)v4 >= v57 || (unsigned int)v5 >= v65 )
      break;
    v7 = v71;
  }
  v53 = &v4[-(v6 >> 3)];
  v54 = v6 - 8 * (v6 >> 3);
  *a1 = v53 + 1;
  a1[3] = v5 + 1;
  a1[4] = v65 - (_DWORD)v5 + 0x101;
  a1[1] = v43 - (_DWORD)v53 + 5;
  v58[0xD] = v54;
  v58[0xC] = ((1 << v54) - 1) & v3;
  return v58;
}
