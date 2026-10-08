int __cdecl zlib_Inflate(unsigned __int8 **a1, int a2, int a3, int a4, size_t a5)
{
  unsigned __int8 *v5; // edi
  unsigned int v6; // ebx
  unsigned __int8 *v7; // ebp
  unsigned __int8 *v8; // eax
  int v9; // ecx
  unsigned int v10; // esi
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int8 *v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  bool v19; // zf
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  int v27; // edx
  unsigned int v28; // eax
  int v29; // edx
  unsigned __int8 *v30; // eax
  int v31; // edx
  unsigned __int16 v32; // dx
  unsigned __int8 *v33; // ecx
  unsigned __int8 *v34; // eax
  int v35; // edx
  int v36; // ecx
  unsigned int v37; // ebx
  int v39; // esi
  int v40; // ecx
  int v41; // [esp+4h] [ebp-2Ch]
  unsigned int v42; // [esp+8h] [ebp-28h]
  unsigned int v43; // [esp+8h] [ebp-28h]
  unsigned int v44; // [esp+8h] [ebp-28h]
  char v45; // [esp+Eh] [ebp-22h]
  unsigned __int8 *v46; // [esp+10h] [ebp-20h]
  unsigned int v47; // [esp+14h] [ebp-1Ch] BYREF
  void *Dst; // [esp+18h] [ebp-18h]
  int v49; // [esp+1Ch] [ebp-14h]
  int v50; // [esp+20h] [ebp-10h]
  int v51; // [esp+24h] [ebp-Ch]
  int v52; // [esp+2Ch] [ebp-4h]

  if ( !a1 ) /*0x7425aa*/
    return 0xFFFFFFFE; /*0x7425aa*/
  v5 = a1[7]; /*0x7425b0*/
  if ( !v5 || !a1[3] || !*a1 && a1[1] ) /*0x7425ca*/
    return 0xFFFFFFFE; /*0x7438e2*/
  if ( *(_DWORD *)v5 == 0xB ) /*0x7425d7*/
    *(_DWORD *)v5 = 0xC; /*0x7425d9*/
  v6 = *((_DWORD *)v5 + 0xC); /*0x7425e3*/
  Dst = a1[3]; /*0x7425e6*/
  v7 = *a1; /*0x7425ee*/
  v8 = a1[1]; /*0x7425f0*/
  v46 = a1[4]; /*0x7425f3*/
  v50 = (int)v46; /*0x7425f7*/
  v9 = *(_DWORD *)v5; /*0x7425fb*/
  v10 = *((_DWORD *)v5 + 0xD); /*0x742601*/
  v41 = (int)v8; /*0x742604*/
  v45 = BYTE2(v6); /*0x742608*/
  v52 = (int)v8; /*0x74260c*/
  v51 = 0; /*0x742610*/
  switch ( v9 )
  {
    case 0:
      if ( !*((_DWORD *)v5 + 2) ) /*0x742627*/
      {
        *(_DWORD *)v5 = 0xC; /*0x74262d*/
        goto LABEL_140; /*0x742633*/
      }
      if ( v10 < 0x10 ) /*0x74263b*/
      {
        while ( v8 ) /*0x742642*/
        {
          v11 = *v7 << v10; /*0x74264e*/
          --v8; /*0x742650*/
          v10 += 8; /*0x742653*/
          ++v7; /*0x742656*/
          v6 += v11; /*0x742659*/
          if ( v10 >= 0x10 ) /*0x742666*/
            goto LABEL_14; /*0x742666*/
        }
        goto LABEL_107; /*0x742642*/
      }
LABEL_14:
      v12 = *((_DWORD *)v5 + 2); /*0x742668*/
      if ( (v12 & 2) != 0 && v6 == 0x8B1F ) /*0x742675*/
      {
        *((_DWORD *)v5 + 5) = sub_745D90(0, 0, 0); /*0x742682*/
        LOWORD(v47) = 0x8B1F; /*0x74268b*/
        *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 2u); /*0x7426a4*/
        *(_DWORD *)v5 = 1; /*0x7426b1*/
        goto LABEL_140; /*0x7426b7*/
      }
      *((_DWORD *)v5 + 4) = 0; /*0x7426be*/
      if ( (v12 & 1) != 0 && !(((v6 >> 8) + ((unsigned __int8)v6 << 8)) % 0x1F) ) /*0x7426df*/
      {
        if ( (v6 & 0xF) != 8 ) /*0x7426ed*/
        {
          a1[6] = "unknown compression method"; /*0x7426f3*/
          goto LABEL_141; /*0x7426fe*/
        }
        v13 = v6 >> 4; /*0x742703*/
        if ( (v13 & 0xF) + 8 > *((_DWORD *)v5 + 7) ) /*0x742718*/
        {
          a1[6] = "invalid window size"; /*0x742722*/
          goto LABEL_141; /*0x742729*/
        }
        v14 = (unsigned __int8 *)sub_7459B0(0, 0, 0); /*0x742734*/
        *((_DWORD *)v5 + 5) = v14; /*0x742748*/
        a1[0xC] = v14; /*0x74274b*/
        *(_DWORD *)v5 = ~BYTE1(v13) & 2 | 9; /*0x742752*/
LABEL_140:
        JUMPOUT(0x7437A3); /*0x7437a3*/
      }
      a1[6] = "incorrect header check"; /*0x74276c*/
      goto LABEL_141; /*0x742773*/
    case 1:
      if ( v10 >= 0x10 ) /*0x74277b*/
        goto LABEL_28; /*0x74277b*/
      do /*0x7427a6*/
      {
        if ( !v8 ) /*0x742782*/
          goto LABEL_107; /*0x742782*/
        v15 = *v7 << v10; /*0x74278e*/
        --v8; /*0x742790*/
        v10 += 8; /*0x742793*/
        ++v7; /*0x742796*/
        v6 += v15; /*0x742799*/
        v41 = (int)v8; /*0x74279e*/
      }
      while ( v10 < 0x10 ); /*0x7427a6*/
LABEL_28:
      *((_DWORD *)v5 + 4) = v6; /*0x7427a8*/
      if ( (_BYTE)v6 != 8 ) /*0x7427ae*/
      {
        a1[6] = "unknown compression method"; /*0x7427b4*/
        goto LABEL_141; /*0x7427bb*/
      }
      if ( (v6 & 0xE000) != 0 ) /*0x7427c6*/
      {
        a1[6] = "unknown header flags set"; /*0x7427cc*/
        goto LABEL_141; /*0x7427d3*/
      }
      if ( (v6 & 0x200) != 0 ) /*0x7427de*/
      {
        LOBYTE(v47) = 8; /*0x7427e0*/
        BYTE1(v47) = BYTE1(v6); /*0x7427ed*/
        *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 2u); /*0x7427fb*/
        v8 = (unsigned __int8 *)v41; /*0x7427fe*/
      }
      v6 = 0; /*0x742805*/
      v10 = 0; /*0x742807*/
      *(_DWORD *)v5 = 2; /*0x742809*/
      do /*0x742838*/
      {
LABEL_36:
        if ( !v8 ) /*0x742818*/
          goto LABEL_107; /*0x742818*/
        v16 = *v7 << v10; /*0x742824*/
        --v8; /*0x742826*/
        v10 += 8; /*0x742829*/
        ++v7; /*0x74282c*/
        v6 += v16; /*0x74282f*/
        v41 = (int)v8; /*0x742834*/
      }
      while ( v10 < 0x20 ); /*0x742838*/
LABEL_38:
      if ( (*((_DWORD *)v5 + 4) & 0x200) != 0 ) /*0x742841*/
      {
        v47 = v6; /*0x742843*/
        *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 4u); /*0x742870*/
        v8 = (unsigned __int8 *)v41; /*0x742873*/
      }
      v6 = 0; /*0x74287a*/
      v10 = 0; /*0x74287c*/
      *(_DWORD *)v5 = 3; /*0x74287e*/
      do /*0x7428b2*/
      {
LABEL_42:
        if ( !v8 ) /*0x742892*/
          goto LABEL_107; /*0x742892*/
        v17 = *v7 << v10; /*0x74289e*/
        --v8; /*0x7428a0*/
        v10 += 8; /*0x7428a3*/
        ++v7; /*0x7428a6*/
        v6 += v17; /*0x7428a9*/
        v41 = (int)v8; /*0x7428ae*/
      }
      while ( v10 < 0x10 ); /*0x7428b2*/
LABEL_44:
      if ( (*((_DWORD *)v5 + 4) & 0x200) != 0 ) /*0x7428bb*/
      {
        LOWORD(v47) = v6; /*0x7428bd*/
        *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 2u); /*0x7428d8*/
        v8 = (unsigned __int8 *)v41; /*0x7428db*/
      }
      v6 = 0; /*0x7428e2*/
      v10 = 0; /*0x7428e8*/
      *(_DWORD *)v5 = 4; /*0x7428ea*/
LABEL_47:
      if ( (*((_DWORD *)v5 + 4) & 0x400) != 0 ) /*0x7428f7*/
      {
        if ( v10 < 0x10 ) /*0x7428fc*/
        {
          while ( v8 ) /*0x742902*/
          {
            v18 = *v7 << v10; /*0x74290e*/
            --v8; /*0x742910*/
            v10 += 8; /*0x742913*/
            ++v7; /*0x742916*/
            v6 += v18; /*0x742919*/
            v41 = (int)v8; /*0x74291e*/
            if ( v10 >= 0x10 ) /*0x742922*/
              goto LABEL_51; /*0x742922*/
          }
          goto LABEL_107; /*0x742902*/
        }
LABEL_51:
        v19 = (*((_DWORD *)v5 + 4) & 0x200) == 0; /*0x742924*/
        *((_DWORD *)v5 + 0xE) = v6; /*0x74292b*/
        if ( !v19 ) /*0x74292e*/
        {
          LOWORD(v47) = v6; /*0x742930*/
          *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 2u); /*0x74294b*/
          v8 = (unsigned __int8 *)v41; /*0x74294e*/
        }
        v6 = 0; /*0x742955*/
        v10 = 0; /*0x74295b*/
      }
      *(_DWORD *)v5 = 5; /*0x74295d*/
LABEL_55:
      v20 = *((_DWORD *)v5 + 4); /*0x742963*/
      if ( (v20 & 0x400) == 0 ) /*0x74296c*/
        goto LABEL_145; /*0x74296c*/
      v21 = *((_DWORD *)v5 + 0xE); /*0x74296e*/
      v42 = v21; /*0x742973*/
      if ( v21 > (unsigned int)v8 ) /*0x742977*/
      {
        v21 = (int)v8; /*0x742979*/
        v42 = (unsigned int)v8; /*0x74297b*/
      }
      if ( v21 ) /*0x742981*/
      {
        if ( (v20 & 0x200) != 0 ) /*0x742989*/
        {
          v22 = sub_745D90(*((_DWORD *)v5 + 5), (int)v7, v42); /*0x742995*/
          v21 = v42; /*0x74299a*/
          *((_DWORD *)v5 + 5) = v22; /*0x74299e*/
          v8 = (unsigned __int8 *)v41; /*0x7429a1*/
        }
        v8 -= v21; /*0x7429a8*/
        v7 += v21; /*0x7429aa*/
        *((_DWORD *)v5 + 0xE) -= v21; /*0x7429ac*/
        v41 = (int)v8; /*0x7429af*/
      }
      if ( !*((_DWORD *)v5 + 0xE) ) /*0x7429b3*/
      {
LABEL_145:
        *(_DWORD *)v5 = 6; /*0x7429bd*/
LABEL_64:
        if ( (*((_DWORD *)v5 + 4) & 0x800) == 0 ) /*0x7429ca*/
          goto LABEL_146; /*0x7429ca*/
        if ( v8 ) /*0x7429ce*/
        {
          v23 = 0; /*0x7429d4*/
          do /*0x7429e7*/
          {
            v24 = v7[v23++]; /*0x7429d6*/
            v49 = v24; /*0x7429df*/
          }
          while ( v24 && v23 < (unsigned int)v8 ); /*0x7429e7*/
          v43 = v23; /*0x7429f0*/
          if ( (*((_DWORD *)v5 + 4) & 0x2000) != 0 ) /*0x7429f4*/
          {
            v25 = sub_745D90(*((_DWORD *)v5 + 5), (int)v7, v23); /*0x7429fc*/
            v23 = v43; /*0x742a01*/
            *((_DWORD *)v5 + 5) = v25; /*0x742a05*/
            v8 = (unsigned __int8 *)v41; /*0x742a08*/
          }
          v8 -= v23; /*0x742a0f*/
          v7 += v23; /*0x742a11*/
          v41 = (int)v8; /*0x742a18*/
          if ( !v49 ) /*0x742a1c*/
          {
LABEL_146:
            *(_DWORD *)v5 = 7; /*0x742a22*/
LABEL_73:
            if ( (*((_DWORD *)v5 + 4) & 0x1000) == 0 ) /*0x742a2f*/
              goto LABEL_81; /*0x742a2f*/
            if ( v8 ) /*0x742a33*/
            {
              v26 = 0; /*0x742a39*/
              do /*0x742a51*/
              {
                v27 = v7[v26++]; /*0x742a40*/
                v49 = v27; /*0x742a49*/
              }
              while ( v27 && v26 < (unsigned int)v8 ); /*0x742a51*/
              v44 = v26; /*0x742a5a*/
              if ( (*((_DWORD *)v5 + 4) & 0x2000) != 0 ) /*0x742a5e*/
              {
                v28 = sub_745D90(*((_DWORD *)v5 + 5), (int)v7, v26); /*0x742a68*/
                v26 = v44; /*0x742a6d*/
                *((_DWORD *)v5 + 5) = v28; /*0x742a71*/
                v8 = (unsigned __int8 *)v41; /*0x742a74*/
              }
              v8 -= v26; /*0x742a7b*/
              v7 += v26; /*0x742a7d*/
              if ( !v49 ) /*0x742a88*/
              {
LABEL_81:
                *(_DWORD *)v5 = 8; /*0x742a8e*/
LABEL_82:
                if ( (*((_DWORD *)v5 + 4) & 0x200) == 0 ) /*0x742a9b*/
                  goto LABEL_88; /*0x742a9b*/
                if ( v10 < 0x10 ) /*0x742aa0*/
                {
                  while ( v8 ) /*0x742aa4*/
                  {
                    v29 = *v7 << v10; /*0x742ab0*/
                    --v8; /*0x742ab2*/
                    v10 += 8; /*0x742ab5*/
                    ++v7; /*0x742ab8*/
                    v6 += v29; /*0x742abb*/
                    if ( v10 >= 0x10 ) /*0x742ac8*/
                      goto LABEL_86; /*0x742ac8*/
                  }
                  goto LABEL_107; /*0x742aa4*/
                }
LABEL_86:
                if ( v6 == *((unsigned __int16 *)v5 + 0xA) ) /*0x742ad0*/
                {
LABEL_88:
                  v30 = (unsigned __int8 *)sub_745D90(0, 0, 0); /*0x742af0*/
                  *((_DWORD *)v5 + 5) = v30; /*0x742af9*/
                  a1[0xC] = v30; /*0x742afc*/
                  *(_DWORD *)v5 = 0xB; /*0x742b06*/
                  goto LABEL_140; /*0x742b0c*/
                }
                a1[6] = "header crc mismatch"; /*0x742ad6*/
LABEL_141:
                JUMPOUT(0x74379D); /*0x74379d*/
              }
            }
          }
        }
      }
LABEL_107:
      a1[3] = (unsigned __int8 *)Dst; /*0x743801*/
      a1[4] = v46; /*0x743810*/
      *a1 = v7; /*0x743813*/
      a1[1] = v8; /*0x743815*/
      v19 = *((_DWORD *)v5 + 8) == 0; /*0x743818*/
      *((_DWORD *)v5 + 0xC) = v6; /*0x74381c*/
      *((_DWORD *)v5 + 0xD) = v10; /*0x74381f*/
      if ( v19 && (*(int *)v5 >= 0x18 || (unsigned __int8 *)v50 == a1[4]) || !sub_7424B0(v50, (int)a1) )
      {
        v39 = v52 - (_DWORD)a1[1]; /*0x74385e*/
        v40 = v50 - (_DWORD)a1[4]; /*0x743865*/
        a1[2] += v39; /*0x743868*/
        a1[5] += v40; /*0x74386b*/
        *((_DWORD *)v5 + 6) += v40; /*0x74386e*/
        if ( *((_DWORD *)v5 + 2) ) /*0x743873*/
        {
          if ( v40 ) /*0x74387a*/
          {
            *((_DWORD *)v5 + 5) = 0; /*0x74387c*/
            a1[0xC] = 0; /*0x74387f*/
          }
        }
        a1[0xB] = (unsigned __int8 *)(*((_DWORD *)v5 + 0xD)
                                    + (*(_DWORD *)v5 != 0xB ? 0 : 0x80)
                                    + (*((_DWORD *)v5 + 1) != 0 ? 0x40 : 0));
        if ( (v39 || v40) && a2 != 4 ) /*0x7438b2*/
        {
          return v51; /*0x7438cd*/
        }
        else
        {
          if ( v51 ) /*0x7438ba*/
            JUMPOUT(0x7437B3); /*0x7437b3*/
          return 0xFFFFFFFB; /*0x7438c3*/
        }
      }
      else
      {
        *(_DWORD *)v5 = 0x1C; /*0x743843*/
        return 0xFFFFFFFC; /*0x743849*/
      }
    case 2:
      if ( v10 < 0x20 ) /*0x742814*/
        goto LABEL_36; /*0x742814*/
      goto LABEL_38; /*0x742814*/
    case 3:
      if ( v10 < 0x10 ) /*0x742889*/
        goto LABEL_42; /*0x742889*/
      goto LABEL_44; /*0x742889*/
    case 4:
      goto LABEL_47;
    case 5:
      goto LABEL_55;
    case 6:
      goto LABEL_64;
    case 7:
      goto LABEL_73;
    case 8:
      goto LABEL_82;
    case 9:
      if ( v10 >= 0x20 ) /*0x742b14*/
        goto LABEL_92; /*0x742b14*/
      do /*0x742b3c*/
      {
        if ( !v8 ) /*0x742b18*/
          goto LABEL_107; /*0x742b18*/
        v31 = *v7 << v10; /*0x742b24*/
        --v8; /*0x742b26*/
        v10 += 8; /*0x742b29*/
        ++v7; /*0x742b2c*/
        v6 += v31; /*0x742b2f*/
        v41 = (int)v8; /*0x742b34*/
        v45 = BYTE2(v6); /*0x742b38*/
      }
      while ( v10 < 0x20 ); /*0x742b3c*/
LABEL_92:
      LOBYTE(v32) = 0; /*0x742b3e*/
      HIBYTE(v32) = v45; /*0x742b4f*/
      v33 = (unsigned __int8 *)(HIBYTE(v6) + v32 + (((v6 << 0x10) + (v6 & 0xFF00)) << 8)); /*0x742b5f*/
      *((_DWORD *)v5 + 5) = v33; /*0x742b61*/
      a1[0xC] = v33; /*0x742b64*/
      v6 = 0; /*0x742b67*/
      v10 = 0; /*0x742b69*/
      *(_DWORD *)v5 = 0xA; /*0x742b6b*/
LABEL_93:
      if ( !*((_DWORD *)v5 + 3) ) /*0x742b75*/
      {
        a1[3] = (unsigned __int8 *)Dst; /*0x7437c3*/
        *a1 = v7; /*0x7437ca*/
        a1[1] = v8; /*0x7437cc*/
        a1[4] = v46; /*0x7437cf*/
        *((_DWORD *)v5 + 0xD) = v10; /*0x7437d2*/
        *((_DWORD *)v5 + 0xC) = v6; /*0x7437d7*/
        return 2; /*0x7437e4*/
      }
      v34 = (unsigned __int8 *)sub_7459B0(0, 0, 0); /*0x742b81*/
      *((_DWORD *)v5 + 5) = v34; /*0x742b8a*/
      a1[0xC] = v34; /*0x742b8d*/
      v8 = (unsigned __int8 *)v41; /*0x742b90*/
      *(_DWORD *)v5 = 0xB; /*0x742b97*/
LABEL_95:
      if ( a2 == 5 ) /*0x742ba2*/
        goto LABEL_107; /*0x742ba2*/
LABEL_96:
      if ( !*((_DWORD *)v5 + 1) ) /*0x742bac*/
      {
        if ( v10 >= 3 ) /*0x742bc9*/
        {
LABEL_101:
          v36 = v6 & 1; /*0x742bf6*/
          v37 = v6 >> 1; /*0x742bf9*/
          *((_DWORD *)v5 + 1) = v36; /*0x742bfb*/
          switch ( v37 & 3 ) /*0x742c0b*/
          {
            case 0u: /*0x742c0b*/
              *(_DWORD *)v5 = 0xD; /*0x742c15*/
              goto LABEL_140; /*0x742c22*/
            case 1u: /*0x742c0b*/
              *((_DWORD *)v5 + 0x11) = &unk_A81CA8; /*0x742c2a*/
              *((_DWORD *)v5 + 0x13) = 9; /*0x742c31*/
              *((_DWORD *)v5 + 0x12) = &unk_A824A8; /*0x742c38*/
              *((_DWORD *)v5 + 0x14) = 5; /*0x742c3f*/
              *(_DWORD *)v5 = 0x12; /*0x742c46*/
              goto LABEL_140; /*0x742c53*/
            case 2u: /*0x742c0b*/
              *(_DWORD *)v5 = 0xF; /*0x742c5b*/
              goto LABEL_140; /*0x742c68*/
            case 3u: /*0x742c0b*/
              a1[6] = "invalid block type"; /*0x742c71*/
              *(_DWORD *)v5 = 0x1B; /*0x742c78*/
              return def_742C0B(v37, v5, (int)a1, a2, a3, a4, a5); /*0x742c79*/
            default:
              JUMPOUT(0x742C7E); /*0x742c7e*/
          }
        }
        while ( v8 ) /*0x742bd2*/
        {
          v35 = *v7 << v10; /*0x742bde*/
          --v8; /*0x742be0*/
          v10 += 8; /*0x742be3*/
          ++v7; /*0x742be6*/
          v6 += v35; /*0x742be9*/
          if ( v10 >= 3 ) /*0x742bf2*/
            goto LABEL_101; /*0x742bf2*/
        }
        goto LABEL_107; /*0x742bd2*/
      }
      *(_DWORD *)v5 = 0x18; /*0x742bb7*/
      goto LABEL_140; /*0x742bc1*/
    case 0xA:
      goto LABEL_93;
    case 0xB:
      goto LABEL_95;
    case 0xC:
      goto LABEL_96;
    case 0xD:
      JUMPOUT(0x742C8D); /*0x742c8d*/
    case 0xE:
      JUMPOUT(0x742CFC); /*0x742cfc*/
    case 0xF:
      JUMPOUT(0x742D5C); /*0x742d5c*/
    case 0x10:
      JUMPOUT(0x742DDC); /*0x742ddc*/
    case 0x11:
      JUMPOUT(0x742ED3); /*0x742ed3*/
    case 0x12:
      JUMPOUT(0x7431DC); /*0x7431dc*/
    case 0x13:
      JUMPOUT(0x7433DC); /*0x7433dc*/
    case 0x14:
      JUMPOUT(0x743427); /*0x743427*/
    case 0x15:
      JUMPOUT(0x743597); /*0x743597*/
    case 0x16:
      JUMPOUT(0x743606); /*0x743606*/
    case 0x17:
      JUMPOUT(0x7436C2); /*0x7436c2*/
    case 0x18:
      JUMPOUT(0x7436ED); /*0x7436ed*/
    case 0x19:
      JUMPOUT(0x74374C); /*0x74374c*/
    case 0x1A:
      JUMPOUT(0x7437EF); /*0x7437ef*/
    case 0x1B:
      JUMPOUT(0x7437F9); /*0x7437f9*/
    case 0x1C:
      return 0xFFFFFFFC;
    default:
      JUMPOUT(0x7437AE); /*0x7437ae*/
  }
}
