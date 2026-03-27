int __cdecl _output_s_l(FILE *a1, unsigned __int8 *a2, struct localeinfo_struct *a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  _BYTE *v5; // eax
  _DWORD *v6; // esi
  char *v7; // eax
  unsigned __int8 v8; // dl
  bool v9; // zf
  char *v10; // ebx
  int v11; // eax
  int v12; // eax
  char v14; // al
  int v15; // eax
  char *v16; // ebx
  int v17; // ecx
  int v18; // edi
  char *v19; // eax
  __int16 *v20; // eax
  char *v21; // ecx
  int v22; // eax
  _WORD *v23; // esi
  int v24; // esi
  char *v25; // eax
  void (__cdecl *v26)(_DWORD *, char *, int, int, int, int, struct localeinfo_struct *); // eax
  int v27; // edi
  void (__cdecl *v28)(char *, struct localeinfo_struct *); // eax
  void (__cdecl *v29)(char *, struct localeinfo_struct *); // eax
  char *i; // eax
  int v31; // ebx
  FILE *v32; // edi
  char *v33; // esi
  int v34; // eax
  int v35; // [esp-14h] [ebp-A0h]
  int v36; // [esp-10h] [ebp-9Ch]
  int v37; // [esp-Ch] [ebp-98h]
  rsize_t v38; // [esp-8h] [ebp-94h]
  int v39; // [esp-8h] [ebp-94h]
  rsize_t v40; // [esp-8h] [ebp-94h]
  wchar_t v41; // [esp+0h] [ebp-8Ch]
  _DWORD v42[2]; // [esp+Ch] [ebp-80h] BYREF
  int v43; // [esp+14h] [ebp-78h] BYREF
  int v44; // [esp+18h] [ebp-74h]
  int v45; // [esp+20h] [ebp-6Ch]
  int v46; // [esp+24h] [ebp-68h]
  int v47; // [esp+28h] [ebp-64h]
  void *Memory; // [esp+2Ch] [ebp-60h]
  struct localeinfo_struct Locale; // [esp+30h] [ebp-5Ch] BYREF
  int v50; // [esp+38h] [ebp-54h]
  char v51; // [esp+3Ch] [ebp-50h]
  _BYTE *v52; // [esp+40h] [ebp-4Ch]
  int v53; // [esp+44h] [ebp-48h]
  int v54; // [esp+48h] [ebp-44h]
  int v55; // [esp+4Ch] [ebp-40h]
  int v56; // [esp+50h] [ebp-3Ch]
  char v57[4]; // [esp+54h] [ebp-38h] BYREF
  int v58; // [esp+58h] [ebp-34h] BYREF
  FILE *File; // [esp+5Ch] [ebp-30h]
  _DWORD *v60; // [esp+60h] [ebp-2Ch]
  int SizeConverted; // [esp+64h] [ebp-28h] BYREF
  char *v62; // [esp+68h] [ebp-24h]
  int v63; // [esp+6Ch] [ebp-20h]
  unsigned __int8 v64; // [esp+73h] [ebp-19h]
  int v65; // [esp+74h] [ebp-18h]
  char MbCh[512]; // [esp+78h] [ebp-14h] BYREF
  char v67[8]; // [esp+278h] [ebp+1ECh] BYREF

  File = a1;
  v60 = a4;
  v47 = 0;
  v65 = 0;
  v55 = 0;
  v63 = 0;
  v56 = 0;
  v46 = 0;
  v54 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3);
  if ( !File
    || (File->_flag & 0x40) == 0
    && (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
      ? (v5 = &aA_1)
      : (v4 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v5 = (_BYTE *)(*v4 + 0x28 * (_fileno(File) & 0x1F))),
        (v5[0x24] & 0x7F) != 0
     || (_fileno(File) == 0xFFFFFFFF || _fileno(File) == 0xFFFFFFFE
       ? (v7 = (char *)&aA_1)
       : (v6 = (_DWORD *)(4 * (_fileno(File) >> 5) + 0xBAAAC0), v7 = (char *)(*v6 + 0x28 * (_fileno(File) & 0x1F))),
         v7[0x24] < 0))
    || !a2 )
  {
    *_errno() = 0x16;
    _invalid_parameter((int)a2, (int)a4, 0);
    if ( v51 )
      *(_DWORD *)(v50 + 0x70) &= ~2u;
    JUMPOUT(0x998646);
  }
  v8 = *a2;
  v9 = *a2 == 0;
  v58 = 0;
  SizeConverted = 0;
  v53 = 0;
  Memory = 0;
  v64 = v8;
  if ( v9 )
    JUMPOUT(0x998636);
  v10 = (char *)(a2 + 1);
  v11 = 0;
  v52 = a2 + 1;
  if ( (unsigned __int8)(v8 - 0x20) <= 0x58u )
    v11 = *((_BYTE *)&qword_AAFBB0 + (char)v8) & 0xF;
  v12 = (unsigned __int8)byte_AAFBD0[9 * v11 + v53] >> 4;
  v53 = v12;
  if ( v12 == 8 )
    goto LABEL_192;
  switch ( v12 )
  {
    case 0:
      goto __output_s_l___$NORMAL_STATE$25383;
    case 1:
      v63 = 0xFFFFFFFF;
      v44 = 0;
      v46 = 0;
      v55 = 0;
      v56 = 0;
      v65 = 0;
      v54 = 0;
      return _output_s_l_::def_997E7D(7);
    case 2:
      switch ( v8 )
      {
        case ' ':
          v65 |= 2u;
          return _output_s_l_::def_997E7D(7);
        case '#':
          v65 |= 0x80u;
          return _output_s_l_::def_997E7D(7);
        case '+':
          v65 |= 1u;
          return _output_s_l_::def_997E7D(7);
        case '-':
          v65 |= 4u;
          return _output_s_l_::def_997E7D(7);
        case '0':
          v65 |= 8u;
          return _output_s_l_::def_997E7D(7);
        default:
__output_s_l___def_997E7D:
          JUMPOUT(0x9985F8);
      }
    case 3:
      if ( v8 == 0x2A )
      {
        v60 = a4 + 1;
        v55 = *a4;
        if ( v55 >= 0 )
          goto __output_s_l___def_997E7D;
        v65 |= 4u;
        v55 = -v55;
        return _output_s_l_::def_997E7D(7);
      }
      else
      {
        v55 = 0xA * v55 + (char)v8 - 0x30;
        return _output_s_l_::def_997E7D((char)v8);
      }
    case 4:
      v63 = 0;
      return _output_s_l_::def_997E7D(7);
    case 5:
      if ( v8 == 0x2A )
      {
        v60 = a4 + 1;
        v63 = *a4;
        if ( v63 >= 0 )
          goto __output_s_l___def_997E7D;
        v63 = 0xFFFFFFFF;
        return _output_s_l_::def_997E7D(7);
      }
      else
      {
        v63 = 0xA * v63 + (char)v8 - 0x30;
        return _output_s_l_::def_997E7D((char)v8);
      }
    case 6:
      if ( v8 != 0x49 )
      {
        switch ( v8 )
        {
          case 'h':
            v65 |= 0x20u;
            return _output_s_l_::def_997E7D(7);
          case 'l':
            if ( *v10 == 0x6C )
            {
              v65 |= 0x1000u;
              v52 = a2 + 2;
            }
            else
            {
              v65 |= 0x10u;
            }
            return _output_s_l_::def_997E7D(7);
          case 'w':
            v65 |= 0x800u;
            return _output_s_l_::def_997E7D(7);
          default:
            goto __output_s_l___def_997E7D;
        }
      }
      v14 = *v10;
      if ( *v10 == 0x36 && a2[2] == 0x34 )
      {
        v65 |= 0x8000u;
        v52 = a2 + 3;
        return _output_s_l_::def_997E7D(7);
      }
      if ( v14 == 0x33 && a2[2] == 0x32 )
      {
        v65 &= ~0x8000u;
        v52 = a2 + 3;
        return _output_s_l_::def_997E7D(7);
      }
      if ( v14 == 0x64 || v14 == 0x69 || v14 == 0x6F || v14 == 0x75 || v14 == 0x78 || v14 == 0x58 )
        goto __output_s_l___def_997E7D;
      v53 = 0;
__output_s_l___$NORMAL_STATE$25383:
      v54 = 0;
      v15 = _isleadbyte_l(v8, (_locale_t)&Locale);
      v9 = v15 == 0;
      LOBYTE(v15) = v64;
      if ( v9 || (v15 = write_char(File, v15, &v58), LOBYTE(v15) = *v10, v52 = a2 + 2, (_BYTE)v15) )
      {
        write_char(File, v15, &v58);
        return ((int (*)(void))_output_s_l_::def_997E7D)();
      }
      goto LABEL_192;
    case 7:
      if ( (char)v8 > 0x64 )
      {
        if ( (char)v8 > 0x70 )
        {
          if ( v8 == 0x73 )
          {
LABEL_83:
            v17 = v63;
            if ( v63 == 0xFFFFFFFF )
              v17 = 0x7FFFFFFF;
            v60 = a4 + 1;
            v18 = *a4;
            v62 = (char *)*a4;
            if ( (v65 & 0x810) != 0 )
            {
              if ( !v18 )
                v62 = (char *)off_B31364;
              v19 = v62;
              v54 = 1;
              while ( v17 )
              {
                --v17;
                if ( !*(_WORD *)v19 )
                  break;
                v19 += 2;
              }
              v22 = (v19 - v62) >> 1;
            }
            else
            {
              if ( !v18 )
                v62 = off_B31360;
              for ( i = v62; v17; ++i )
              {
                --v17;
                if ( !*i )
                  break;
              }
              v22 = i - v62;
            }
            goto LABEL_155;
          }
          if ( v8 != 0x75 )
          {
            if ( v8 == 0x78 )
            {
              v47 = 0x27;
              return _output_s_l_::_COMMON_HEX_25544(7);
            }
            goto LABEL_156;
          }
LABEL_120:
          SizeConverted = 0xA;
          return _output_s_l_::_COMMON_INT_25537(7);
        }
        if ( v8 == 0x70 )
        {
          v63 = 8;
          goto LABEL_139;
        }
        if ( (char)v8 < 0x65 )
          goto LABEL_156;
        if ( (char)v8 <= 0x67 )
          goto LABEL_77;
        if ( v8 == 0x69 )
        {
LABEL_119:
          v65 |= 0x40u;
          goto LABEL_120;
        }
        if ( v8 != 0x6E )
        {
          if ( v8 == 0x6F )
          {
            SizeConverted = 8;
            if ( (char)v65 < 0 )
              v65 |= 0x200u;
            return _output_s_l_::_COMMON_INT_25537(7);
          }
          goto LABEL_156;
        }
        v23 = (_WORD *)*a4;
        v60 = a4 + 1;
        if ( _get_printf_count_output() )
        {
          if ( (v65 & 0x20) != 0 )
            *v23 = v58;
          else
            *(_DWORD *)v23 = v58;
          v46 = 1;
          goto LABEL_182;
        }
LABEL_192:
        JUMPOUT(0x99860E);
      }
      if ( v8 == 0x64 )
        goto LABEL_119;
      if ( (char)v8 > 0x53 )
      {
        if ( v8 != 0x58 )
        {
          if ( v8 == 0x5A )
          {
            v20 = (__int16 *)*a4;
            v60 = a4 + 1;
            if ( v20 && (v21 = *((char **)v20 + 1)) != 0 )
            {
              v22 = *v20;
              v62 = v21;
              if ( (v65 & 0x800) != 0 )
              {
                v22 /= 2;
                v54 = 1;
              }
              else
              {
                v54 = 0;
              }
            }
            else
            {
              v62 = off_B31360;
              v22 = strlen(off_B31360);
            }
            goto LABEL_155;
          }
          if ( v8 == 0x61 )
            goto LABEL_77;
          if ( v8 != 0x63 )
            goto LABEL_156;
          goto LABEL_93;
        }
LABEL_139:
        v47 = 7;
        return _output_s_l_::_COMMON_HEX_25544(7);
      }
      switch ( v8 )
      {
        case 'S':
          if ( (v65 & 0x830) == 0 )
            v65 |= 0x800u;
          goto LABEL_83;
        case 'A':
LABEL_76:
          v8 += 0x20;
          v44 = 1;
          v64 = v8;
LABEL_77:
          v65 |= 0x40u;
          v16 = MbCh;
          v62 = MbCh;
          v45 = 0x200;
          if ( v63 >= 0 )
          {
            if ( v63 )
            {
              if ( v63 > 0x200 )
                v63 = 0x200;
              if ( v63 > 0xA3 )
              {
                v24 = v63 + 0x15D;
                v25 = (char *)unknown_libname_72();
                v8 = v64;
                Memory = v25;
                if ( v25 )
                {
                  v62 = v25;
                  v45 = v24;
                  v16 = v25;
                }
                else
                {
                  v63 = 0xA3;
                }
              }
            }
            else
            {
              v63 = v8 == 0x67;
            }
          }
          else
          {
            v63 = 6;
          }
          v42[0] = *a4;
          v42[1] = a4[1];
          v39 = v44;
          v37 = v63;
          v60 = a4 + 2;
          v36 = (char)v8;
          v35 = v45;
          v26 = (void (__cdecl *)(_DWORD *, char *, int, int, int, int, struct localeinfo_struct *))_decode_pointer(off_B312B8[0]);
          v26(v42, v16, v35, v36, v37, v39, &Locale);
          v27 = v65 & 0x80;
          if ( (v65 & 0x80) != 0 && !v63 )
          {
            v28 = (void (__cdecl *)(char *, struct localeinfo_struct *))_decode_pointer(off_B312C4);
            v28(v16, &Locale);
          }
          if ( v64 == 0x67 && !v27 )
          {
            v29 = (void (__cdecl *)(char *, struct localeinfo_struct *))_decode_pointer(off_B312C0[0]);
            v29(v16, &Locale);
          }
          if ( *v16 == 0x2D )
          {
            v65 |= 0x100u;
            v62 = ++v16;
          }
          v22 = strlen(v16);
LABEL_155:
          SizeConverted = v22;
          break;
        case 'C':
          if ( (v65 & 0x830) == 0 )
            v65 |= 0x800u;
LABEL_93:
          v60 = a4 + 1;
          if ( (v65 & 0x810) != 0 )
          {
            HIDWORD(v38) = *(unsigned __int16 *)a4;
            LODWORD(v38) = 0x200;
            if ( wctomb_s(&SizeConverted, MbCh, v38, v41) )
              v46 = 1;
          }
          else
          {
            MbCh[0] = *(_BYTE *)a4;
            SizeConverted = 1;
          }
          v62 = MbCh;
          break;
        case 'E':
        case 'G':
          goto LABEL_76;
      }
LABEL_156:
      if ( !v46 )
      {
        if ( (v65 & 0x40) != 0 )
        {
          if ( (v65 & 0x100) != 0 )
          {
            v57[0] = 0x2D;
LABEL_164:
            v56 = 1;
            goto LABEL_165;
          }
          if ( (v65 & 1) != 0 )
          {
            v57[0] = 0x2B;
            goto LABEL_164;
          }
          if ( (v65 & 2) != 0 )
          {
            v57[0] = 0x20;
            goto LABEL_164;
          }
        }
LABEL_165:
        v31 = v55 - SizeConverted - v56;
        if ( (v65 & 0xC) == 0 )
          write_multi_char(&v58, 0x20, v55 - SizeConverted - v56, File);
        v32 = File;
        write_string(&v58, (int)v57, (int)File, v56);
        if ( (v65 & 8) != 0 && (v65 & 4) == 0 )
          write_multi_char(&v58, 0x30, v31, v32);
        if ( v54 && SizeConverted > 0 )
        {
          v33 = v62;
          v45 = SizeConverted;
          while ( 1 )
          {
            v34 = *(unsigned __int16 *)v33;
            --v45;
            HIDWORD(v40) = v34;
            LODWORD(v40) = 6;
            v33 += 2;
            if ( wctomb_s(&v43, v67, v40, v41) || !v43 )
              break;
            write_string(&v58, (int)v67, (int)v32, v43);
            if ( !v45 )
              goto LABEL_179;
          }
          v58 = 0xFFFFFFFF;
        }
        else
        {
          write_string(&v58, (int)v62, (int)v32, SizeConverted);
        }
LABEL_179:
        if ( v58 >= 0 && (v65 & 4) != 0 )
          write_multi_char(&v58, 0x20, v31, v32);
      }
LABEL_182:
      if ( !Memory )
        goto __output_s_l___def_997E7D;
      free(Memory);
      Memory = 0;
      return ((int (*)(void))_output_s_l_::def_997E7D)();
    default:
      goto __output_s_l___def_997E7D;
  }
}
