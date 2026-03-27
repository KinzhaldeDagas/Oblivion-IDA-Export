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
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // edx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // edx
  int v28; // eax
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

  if ( !a1 )
    return 0xFFFFFFFE;
  v5 = a1[7];
  if ( !v5 || !a1[3] || !*a1 && a1[1] )
    return 0xFFFFFFFE;
  if ( *(_DWORD *)v5 == 0xB )
    *(_DWORD *)v5 = 0xC;
  v6 = *((_DWORD *)v5 + 0xC);
  Dst = a1[3];
  v7 = *a1;
  v8 = a1[1];
  v46 = a1[4];
  v50 = (int)v46;
  v9 = *(_DWORD *)v5;
  v10 = *((_DWORD *)v5 + 0xD);
  v41 = (int)v8;
  v45 = BYTE2(v6);
  v52 = (int)v8;
  v51 = 0;
  switch ( v9 )
  {
    case 0:
      if ( !*((_DWORD *)v5 + 2) )
      {
        *(_DWORD *)v5 = 0xC;
        goto LABEL_140;
      }
      if ( v10 < 0x10 )
      {
        while ( v8 )
        {
          v11 = *v7 << v10;
          --v8;
          v10 += 8;
          ++v7;
          v6 += v11;
          if ( v10 >= 0x10 )
            goto LABEL_14;
        }
        goto LABEL_107;
      }
LABEL_14:
      v12 = *((_DWORD *)v5 + 2);
      if ( (v12 & 2) != 0 && v6 == 0x8B1F )
      {
        *((_DWORD *)v5 + 5) = sub_745D90(0, 0, 0);
        LOWORD(v47) = 0x8B1F;
        *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 2u);
        *(_DWORD *)v5 = 1;
        goto LABEL_140;
      }
      *((_DWORD *)v5 + 4) = 0;
      if ( (v12 & 1) != 0 && !(((v6 >> 8) + ((unsigned __int8)v6 << 8)) % 0x1F) )
      {
        if ( (v6 & 0xF) != 8 )
        {
          a1[6] = "unknown compression method";
          goto LABEL_141;
        }
        v13 = v6 >> 4;
        if ( (v13 & 0xF) + 8 > *((_DWORD *)v5 + 7) )
        {
          a1[6] = "invalid window size";
          goto LABEL_141;
        }
        v14 = (unsigned __int8 *)sub_7459B0(0, 0, 0);
        *((_DWORD *)v5 + 5) = v14;
        a1[0xC] = v14;
        *(_DWORD *)v5 = ~BYTE1(v13) & 2 | 9;
LABEL_140:
        JUMPOUT(0x7437A3);
      }
      a1[6] = "incorrect header check";
      goto LABEL_141;
    case 1:
      if ( v10 >= 0x10 )
        goto LABEL_28;
      do
      {
        if ( !v8 )
          goto LABEL_107;
        v15 = *v7 << v10;
        --v8;
        v10 += 8;
        ++v7;
        v6 += v15;
        v41 = (int)v8;
      }
      while ( v10 < 0x10 );
LABEL_28:
      *((_DWORD *)v5 + 4) = v6;
      if ( (_BYTE)v6 != 8 )
      {
        a1[6] = "unknown compression method";
        goto LABEL_141;
      }
      if ( (v6 & 0xE000) != 0 )
      {
        a1[6] = "unknown header flags set";
        goto LABEL_141;
      }
      if ( (v6 & 0x200) != 0 )
      {
        LOBYTE(v47) = 8;
        BYTE1(v47) = BYTE1(v6);
        *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 2u);
        v8 = (unsigned __int8 *)v41;
      }
      v6 = 0;
      v10 = 0;
      *(_DWORD *)v5 = 2;
      do
      {
LABEL_36:
        if ( !v8 )
          goto LABEL_107;
        v16 = *v7 << v10;
        --v8;
        v10 += 8;
        ++v7;
        v6 += v16;
        v41 = (int)v8;
      }
      while ( v10 < 0x20 );
LABEL_38:
      if ( (*((_DWORD *)v5 + 4) & 0x200) != 0 )
      {
        v47 = v6;
        *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 4u);
        v8 = (unsigned __int8 *)v41;
      }
      v6 = 0;
      v10 = 0;
      *(_DWORD *)v5 = 3;
      do
      {
LABEL_42:
        if ( !v8 )
          goto LABEL_107;
        v17 = *v7 << v10;
        --v8;
        v10 += 8;
        ++v7;
        v6 += v17;
        v41 = (int)v8;
      }
      while ( v10 < 0x10 );
LABEL_44:
      if ( (*((_DWORD *)v5 + 4) & 0x200) != 0 )
      {
        LOWORD(v47) = v6;
        *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 2u);
        v8 = (unsigned __int8 *)v41;
      }
      v6 = 0;
      v10 = 0;
      *(_DWORD *)v5 = 4;
LABEL_47:
      if ( (*((_DWORD *)v5 + 4) & 0x400) != 0 )
      {
        if ( v10 < 0x10 )
        {
          while ( v8 )
          {
            v18 = *v7 << v10;
            --v8;
            v10 += 8;
            ++v7;
            v6 += v18;
            v41 = (int)v8;
            if ( v10 >= 0x10 )
              goto LABEL_51;
          }
          goto LABEL_107;
        }
LABEL_51:
        v19 = (*((_DWORD *)v5 + 4) & 0x200) == 0;
        *((_DWORD *)v5 + 0xE) = v6;
        if ( !v19 )
        {
          LOWORD(v47) = v6;
          *((_DWORD *)v5 + 5) = sub_745D90(*((_DWORD *)v5 + 5), (int)&v47, 2u);
          v8 = (unsigned __int8 *)v41;
        }
        v6 = 0;
        v10 = 0;
      }
      *(_DWORD *)v5 = 5;
LABEL_55:
      v20 = *((_DWORD *)v5 + 4);
      if ( (v20 & 0x400) == 0 )
        goto LABEL_145;
      v21 = *((_DWORD *)v5 + 0xE);
      v42 = v21;
      if ( v21 > (unsigned int)v8 )
      {
        v21 = (int)v8;
        v42 = (unsigned int)v8;
      }
      if ( v21 )
      {
        if ( (v20 & 0x200) != 0 )
        {
          v22 = sub_745D90(*((_DWORD *)v5 + 5), (int)v7, v42);
          v21 = v42;
          *((_DWORD *)v5 + 5) = v22;
          v8 = (unsigned __int8 *)v41;
        }
        v8 -= v21;
        v7 += v21;
        *((_DWORD *)v5 + 0xE) -= v21;
        v41 = (int)v8;
      }
      if ( !*((_DWORD *)v5 + 0xE) )
      {
LABEL_145:
        *(_DWORD *)v5 = 6;
LABEL_64:
        if ( (*((_DWORD *)v5 + 4) & 0x800) == 0 )
          goto LABEL_146;
        if ( v8 )
        {
          v23 = 0;
          do
          {
            v24 = v7[v23++];
            v49 = v24;
          }
          while ( v24 && v23 < (unsigned int)v8 );
          v43 = v23;
          if ( (*((_DWORD *)v5 + 4) & 0x2000) != 0 )
          {
            v25 = sub_745D90(*((_DWORD *)v5 + 5), (int)v7, v23);
            v23 = v43;
            *((_DWORD *)v5 + 5) = v25;
            v8 = (unsigned __int8 *)v41;
          }
          v8 -= v23;
          v7 += v23;
          v41 = (int)v8;
          if ( !v49 )
          {
LABEL_146:
            *(_DWORD *)v5 = 7;
LABEL_73:
            if ( (*((_DWORD *)v5 + 4) & 0x1000) == 0 )
              goto LABEL_81;
            if ( v8 )
            {
              v26 = 0;
              do
              {
                v27 = v7[v26++];
                v49 = v27;
              }
              while ( v27 && v26 < (unsigned int)v8 );
              v44 = v26;
              if ( (*((_DWORD *)v5 + 4) & 0x2000) != 0 )
              {
                v28 = sub_745D90(*((_DWORD *)v5 + 5), (int)v7, v26);
                v26 = v44;
                *((_DWORD *)v5 + 5) = v28;
                v8 = (unsigned __int8 *)v41;
              }
              v8 -= v26;
              v7 += v26;
              if ( !v49 )
              {
LABEL_81:
                *(_DWORD *)v5 = 8;
LABEL_82:
                if ( (*((_DWORD *)v5 + 4) & 0x200) == 0 )
                  goto LABEL_88;
                if ( v10 < 0x10 )
                {
                  while ( v8 )
                  {
                    v29 = *v7 << v10;
                    --v8;
                    v10 += 8;
                    ++v7;
                    v6 += v29;
                    if ( v10 >= 0x10 )
                      goto LABEL_86;
                  }
                  goto LABEL_107;
                }
LABEL_86:
                if ( v6 == *((unsigned __int16 *)v5 + 0xA) )
                {
LABEL_88:
                  v30 = (unsigned __int8 *)sub_745D90(0, 0, 0);
                  *((_DWORD *)v5 + 5) = v30;
                  a1[0xC] = v30;
                  *(_DWORD *)v5 = 0xB;
                  goto LABEL_140;
                }
                a1[6] = "header crc mismatch";
LABEL_141:
                JUMPOUT(0x74379D);
              }
            }
          }
        }
      }
LABEL_107:
      a1[3] = (unsigned __int8 *)Dst;
      a1[4] = v46;
      *a1 = v7;
      a1[1] = v8;
      v19 = *((_DWORD *)v5 + 8) == 0;
      *((_DWORD *)v5 + 0xC) = v6;
      *((_DWORD *)v5 + 0xD) = v10;
      if ( v19 && (*(int *)v5 >= 0x18 || (unsigned __int8 *)v50 == a1[4]) || !sub_7424B0(v50, (int)a1) )
      {
        v39 = v52 - (_DWORD)a1[1];
        v40 = v50 - (_DWORD)a1[4];
        a1[2] += v39;
        a1[5] += v40;
        *((_DWORD *)v5 + 6) += v40;
        if ( *((_DWORD *)v5 + 2) )
        {
          if ( v40 )
          {
            *((_DWORD *)v5 + 5) = 0;
            a1[0xC] = 0;
          }
        }
        a1[0xB] = (unsigned __int8 *)(*((_DWORD *)v5 + 0xD)
                                    + (*(_DWORD *)v5 != 0xB ? 0 : 0x80)
                                    + (*((_DWORD *)v5 + 1) != 0 ? 0x40 : 0));
        if ( (v39 || v40) && a2 != 4 )
        {
          return v51;
        }
        else
        {
          if ( v51 )
            JUMPOUT(0x7437B3);
          return 0xFFFFFFFB;
        }
      }
      else
      {
        *(_DWORD *)v5 = 0x1C;
        return 0xFFFFFFFC;
      }
    case 2:
      if ( v10 < 0x20 )
        goto LABEL_36;
      goto LABEL_38;
    case 3:
      if ( v10 < 0x10 )
        goto LABEL_42;
      goto LABEL_44;
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
      if ( v10 >= 0x20 )
        goto LABEL_92;
      do
      {
        if ( !v8 )
          goto LABEL_107;
        v31 = *v7 << v10;
        --v8;
        v10 += 8;
        ++v7;
        v6 += v31;
        v41 = (int)v8;
        v45 = BYTE2(v6);
      }
      while ( v10 < 0x20 );
LABEL_92:
      LOBYTE(v32) = 0;
      HIBYTE(v32) = v45;
      v33 = (unsigned __int8 *)(HIBYTE(v6) + v32 + (((v6 << 0x10) + (v6 & 0xFF00)) << 8));
      *((_DWORD *)v5 + 5) = v33;
      a1[0xC] = v33;
      v6 = 0;
      v10 = 0;
      *(_DWORD *)v5 = 0xA;
LABEL_93:
      if ( !*((_DWORD *)v5 + 3) )
      {
        a1[3] = (unsigned __int8 *)Dst;
        *a1 = v7;
        a1[1] = v8;
        a1[4] = v46;
        *((_DWORD *)v5 + 0xD) = v10;
        *((_DWORD *)v5 + 0xC) = v6;
        return 2;
      }
      v34 = (unsigned __int8 *)sub_7459B0(0, 0, 0);
      *((_DWORD *)v5 + 5) = v34;
      a1[0xC] = v34;
      v8 = (unsigned __int8 *)v41;
      *(_DWORD *)v5 = 0xB;
LABEL_95:
      if ( a2 == 5 )
        goto LABEL_107;
LABEL_96:
      if ( !*((_DWORD *)v5 + 1) )
      {
        if ( v10 >= 3 )
        {
LABEL_101:
          v36 = v6 & 1;
          v37 = v6 >> 1;
          *((_DWORD *)v5 + 1) = v36;
          switch ( v37 & 3 )
          {
            case 0u:
              *(_DWORD *)v5 = 0xD;
              goto LABEL_140;
            case 1u:
              *((_DWORD *)v5 + 0x11) = &unk_A81CA8;
              *((_DWORD *)v5 + 0x13) = 9;
              *((_DWORD *)v5 + 0x12) = &unk_A824A8;
              *((_DWORD *)v5 + 0x14) = 5;
              *(_DWORD *)v5 = 0x12;
              goto LABEL_140;
            case 2u:
              *(_DWORD *)v5 = 0xF;
              goto LABEL_140;
            case 3u:
              a1[6] = "invalid block type";
              *(_DWORD *)v5 = 0x1B;
              return def_742C0B(v37, v5, (int)a1, a2, a3, a4, a5);
            default:
              JUMPOUT(0x742C7E);
          }
        }
        while ( v8 )
        {
          v35 = *v7 << v10;
          --v8;
          v10 += 8;
          ++v7;
          v6 += v35;
          if ( v10 >= 3 )
            goto LABEL_101;
        }
        goto LABEL_107;
      }
      *(_DWORD *)v5 = 0x18;
      goto LABEL_140;
    case 0xA:
      goto LABEL_93;
    case 0xB:
      goto LABEL_95;
    case 0xC:
      goto LABEL_96;
    case 0xD:
      JUMPOUT(0x742C8D);
    case 0xE:
      JUMPOUT(0x742CFC);
    case 0xF:
      JUMPOUT(0x742D5C);
    case 0x10:
      JUMPOUT(0x742DDC);
    case 0x11:
      JUMPOUT(0x742ED3);
    case 0x12:
      JUMPOUT(0x7431DC);
    case 0x13:
      JUMPOUT(0x7433DC);
    case 0x14:
      JUMPOUT(0x743427);
    case 0x15:
      JUMPOUT(0x743597);
    case 0x16:
      JUMPOUT(0x743606);
    case 0x17:
      JUMPOUT(0x7436C2);
    case 0x18:
      JUMPOUT(0x7436ED);
    case 0x19:
      JUMPOUT(0x74374C);
    case 0x1A:
      JUMPOUT(0x7437EF);
    case 0x1B:
      JUMPOUT(0x7437F9);
    case 0x1C:
      return 0xFFFFFFFC;
    default:
      JUMPOUT(0x7437AE);
  }
}
