int __cdecl _output_l(FILE *a1, unsigned __int8 *a2, struct localeinfo_struct *a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  _BYTE *v5; // eax
  _DWORD *v6; // esi
  char *v7; // eax
  unsigned __int8 v8; // dl
  bool v9; // zf
  char *v10; // ebx
  int v11; // eax
  char v13; // al
  char v14; // al
  int v15; // ecx
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
  int v41; // [esp-4h] [ebp-90h]
  wchar_t v42; // [esp+0h] [ebp-8Ch]
  _DWORD v43[2]; // [esp+Ch] [ebp-80h] BYREF
  int v44; // [esp+14h] [ebp-78h]
  int v45; // [esp+18h] [ebp-74h]
  int v46; // [esp+1Ch] [ebp-70h] BYREF
  int v47; // [esp+24h] [ebp-68h]
  struct localeinfo_struct Locale; // [esp+28h] [ebp-64h] BYREF
  int v49; // [esp+30h] [ebp-5Ch]
  char v50; // [esp+34h] [ebp-58h]
  void *Memory; // [esp+38h] [ebp-54h]
  int v52; // [esp+3Ch] [ebp-50h]
  int v53; // [esp+40h] [ebp-4Ch]
  _BYTE *v54; // [esp+44h] [ebp-48h]
  int v55; // [esp+48h] [ebp-44h]
  int v56; // [esp+4Ch] [ebp-40h]
  int v57; // [esp+50h] [ebp-3Ch]
  char v58[4]; // [esp+54h] [ebp-38h] BYREF
  int v59; // [esp+58h] [ebp-34h] BYREF
  FILE *File; // [esp+5Ch] [ebp-30h]
  _DWORD *v61; // [esp+60h] [ebp-2Ch]
  int SizeConverted; // [esp+64h] [ebp-28h] BYREF
  char *v63; // [esp+68h] [ebp-24h]
  int v64; // [esp+6Ch] [ebp-20h]
  unsigned __int8 v65; // [esp+73h] [ebp-19h]
  int v66; // [esp+74h] [ebp-18h]
  char MbCh[512]; // [esp+78h] [ebp-14h] BYREF
  char v68[8]; // [esp+278h] [ebp+1ECh] BYREF

  File = a1;
  v61 = a4;
  v53 = 0;
  v66 = 0;
  v56 = 0;
  v64 = 0;
  v57 = 0;
  v52 = 0;
  v55 = 0;
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
    if ( v50 )
      *(_DWORD *)(v49 + 0x70) &= ~2u;
    JUMPOUT(0x98EA44);
  }
  v8 = *a2;
  v9 = *a2 == 0;
  v59 = 0;
  SizeConverted = 0;
  Memory = 0;
  v65 = v8;
  if ( v9 )
    JUMPOUT(0x98EA34);
  v10 = (char *)(a2 + 1);
  v54 = a2 + 1;
  if ( (unsigned __int8)(v8 - 0x20) > 0x58u )
    v11 = 0;
  else
    v11 = aInitializecrit[(char)v8 + 0x18] & 0xF;
  v45 = byte_AA4FA0[8 * v11] >> 4;
  switch ( v45 )
  {
    case 0:
      goto __output_l___$NORMAL_STATE$25379;
    case 1:
      v64 = 0xFFFFFFFF;
      v44 = 0;
      v52 = 0;
      v56 = 0;
      v57 = 0;
      v66 = 0;
      v55 = 0;
      return _output_l_::def_98E289(7);
    case 2:
      switch ( v8 )
      {
        case ' ':
          v66 |= 2u;
          return _output_l_::def_98E289(7);
        case '#':
          v66 |= 0x80u;
          return _output_l_::def_98E289(7);
        case '+':
          v66 |= 1u;
          return _output_l_::def_98E289(7);
        case '-':
          v66 |= 4u;
          return _output_l_::def_98E289(7);
        case '0':
          v66 |= 8u;
          return _output_l_::def_98E289(7);
        default:
__output_l___def_98E289:
          JUMPOUT(0x98EA04);
      }
    case 3:
      if ( v8 == 0x2A )
      {
        v61 = a4 + 1;
        v56 = *a4;
        if ( v56 >= 0 )
          goto __output_l___def_98E289;
        v66 |= 4u;
        v56 = -v56;
        return _output_l_::def_98E289(7);
      }
      else
      {
        v56 = 0xA * v56 + (char)v8 - 0x30;
        return _output_l_::def_98E289((char)v8);
      }
    case 4:
      v64 = 0;
      return _output_l_::def_98E289(7);
    case 5:
      if ( v8 == 0x2A )
      {
        v61 = a4 + 1;
        v64 = *a4;
        if ( v64 >= 0 )
          goto __output_l___def_98E289;
        v64 = 0xFFFFFFFF;
        return _output_l_::def_98E289(7);
      }
      else
      {
        v64 = 0xA * v64 + (char)v8 - 0x30;
        return _output_l_::def_98E289((char)v8);
      }
    case 6:
      if ( v8 != 0x49 )
      {
        switch ( v8 )
        {
          case 'h':
            v66 |= 0x20u;
            return _output_l_::def_98E289(7);
          case 'l':
            if ( *v10 == 0x6C )
            {
              v66 |= 0x1000u;
              v54 = a2 + 2;
            }
            else
            {
              v66 |= 0x10u;
            }
            return _output_l_::def_98E289(7);
          case 'w':
            v66 |= 0x800u;
            return _output_l_::def_98E289(7);
          default:
            goto __output_l___def_98E289;
        }
      }
      v13 = *v10;
      if ( *v10 == 0x36 && a2[2] == 0x34 )
      {
        v66 |= 0x8000u;
        v54 = a2 + 3;
        return _output_l_::def_98E289(7);
      }
      if ( v13 == 0x33 && a2[2] == 0x32 )
      {
        v66 &= ~0x8000u;
        v54 = a2 + 3;
        return _output_l_::def_98E289(7);
      }
      if ( v13 == 0x64 || v13 == 0x69 || v13 == 0x6F || v13 == 0x75 || v13 == 0x78 || v13 == 0x58 )
        goto __output_l___def_98E289;
      v45 = 0;
__output_l___$NORMAL_STATE$25379:
      v55 = 0;
      if ( !_isleadbyte_l(v8, (_locale_t)&Locale) || (write_char(File), v14 = *v10, v54 = a2 + 2, v14) )
      {
        write_char(File);
        return _output_l_::def_98E289(v15);
      }
      goto LABEL_191;
    case 7:
      if ( (char)v8 > 0x64 )
      {
        if ( (char)v8 > 0x70 )
        {
          if ( v8 == 0x73 )
          {
LABEL_83:
            v17 = v64;
            if ( v64 == 0xFFFFFFFF )
              v17 = 0x7FFFFFFF;
            v61 = a4 + 1;
            v18 = *a4;
            v63 = (char *)*a4;
            if ( (v66 & 0x810) != 0 )
            {
              if ( !v18 )
                v63 = (char *)off_B31364;
              v19 = v63;
              v55 = 1;
              while ( v17 )
              {
                --v17;
                if ( !*(_WORD *)v19 )
                  break;
                v19 += 2;
              }
              v22 = (v19 - v63) >> 1;
            }
            else
            {
              if ( !v18 )
                v63 = off_B31360;
              for ( i = v63; v17; ++i )
              {
                --v17;
                if ( !*i )
                  break;
              }
              v22 = i - v63;
            }
            goto LABEL_155;
          }
          if ( v8 != 0x75 )
          {
            if ( v8 == 0x78 )
            {
              v53 = 0x27;
              return _output_l_::_COMMON_HEX_25540();
            }
            goto LABEL_156;
          }
LABEL_120:
          SizeConverted = 0xA;
          return _output_l_::_COMMON_INT_25533();
        }
        if ( v8 == 0x70 )
        {
          v64 = 8;
          goto LABEL_139;
        }
        if ( (char)v8 < 0x65 )
          goto LABEL_156;
        if ( (char)v8 <= 0x67 )
          goto LABEL_77;
        if ( v8 != 0x69 )
        {
          if ( v8 == 0x6E )
          {
            v23 = (_WORD *)*a4;
            v61 = a4 + 1;
            if ( !_get_printf_count_output() )
LABEL_191:
              JUMPOUT(0x98EA1D);
            if ( (v66 & 0x20) != 0 )
              *v23 = v59;
            else
              *(_DWORD *)v23 = v59;
            v52 = 1;
            goto LABEL_182;
          }
          if ( v8 == 0x6F )
          {
            SizeConverted = 8;
            if ( (char)v66 < 0 )
              v66 |= 0x200u;
            return _output_l_::_COMMON_INT_25533();
          }
          goto LABEL_156;
        }
LABEL_119:
        v66 |= 0x40u;
        goto LABEL_120;
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
            v61 = a4 + 1;
            if ( v20 && (v21 = *((char **)v20 + 1)) != 0 )
            {
              v22 = *v20;
              v63 = v21;
              if ( (v66 & 0x800) != 0 )
              {
                v22 /= 2;
                v55 = 1;
              }
              else
              {
                v55 = 0;
              }
            }
            else
            {
              v63 = off_B31360;
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
        v53 = 7;
        return _output_l_::_COMMON_HEX_25540();
      }
      switch ( v8 )
      {
        case 'S':
          if ( (v66 & 0x830) == 0 )
            v66 |= 0x800u;
          goto LABEL_83;
        case 'A':
LABEL_76:
          v8 += 0x20;
          v44 = 1;
          v65 = v8;
LABEL_77:
          v66 |= 0x40u;
          v16 = MbCh;
          v63 = MbCh;
          v47 = 0x200;
          if ( v64 >= 0 )
          {
            if ( v64 )
            {
              if ( v64 > 0x200 )
                v64 = 0x200;
              if ( v64 > 0xA3 )
              {
                v24 = v64 + 0x15D;
                v25 = (char *)unknown_libname_72();
                v8 = v65;
                Memory = v25;
                if ( v25 )
                {
                  v63 = v25;
                  v47 = v24;
                  v16 = v25;
                }
                else
                {
                  v64 = 0xA3;
                }
              }
            }
            else
            {
              v64 = v8 == 0x67;
            }
          }
          else
          {
            v64 = 6;
          }
          v43[0] = *a4;
          v43[1] = a4[1];
          v39 = v44;
          v37 = v64;
          v61 = a4 + 2;
          v36 = (char)v8;
          v35 = v47;
          v26 = (void (__cdecl *)(_DWORD *, char *, int, int, int, int, struct localeinfo_struct *))_decode_pointer(off_B312B8[0]);
          v26(v43, v16, v35, v36, v37, v39, &Locale);
          v27 = v66 & 0x80;
          if ( (v66 & 0x80) != 0 && !v64 )
          {
            v28 = (void (__cdecl *)(char *, struct localeinfo_struct *))_decode_pointer(off_B312C4);
            v28(v16, &Locale);
          }
          if ( v65 == 0x67 && !v27 )
          {
            v29 = (void (__cdecl *)(char *, struct localeinfo_struct *))_decode_pointer(off_B312C0[0]);
            v29(v16, &Locale);
          }
          if ( *v16 == 0x2D )
          {
            v66 |= 0x100u;
            v63 = ++v16;
          }
          v22 = strlen(v16);
LABEL_155:
          SizeConverted = v22;
          break;
        case 'C':
          if ( (v66 & 0x830) == 0 )
            v66 |= 0x800u;
LABEL_93:
          v61 = a4 + 1;
          if ( (v66 & 0x810) != 0 )
          {
            HIDWORD(v38) = *(unsigned __int16 *)a4;
            LODWORD(v38) = 0x200;
            if ( wctomb_s(&SizeConverted, MbCh, v38, v42) )
              v52 = 1;
          }
          else
          {
            MbCh[0] = *(_BYTE *)a4;
            SizeConverted = 1;
          }
          v63 = MbCh;
          break;
        case 'E':
        case 'G':
          goto LABEL_76;
      }
LABEL_156:
      if ( !v52 )
      {
        if ( (v66 & 0x40) != 0 )
        {
          if ( (v66 & 0x100) != 0 )
          {
            v58[0] = 0x2D;
LABEL_164:
            v57 = 1;
            goto LABEL_165;
          }
          if ( (v66 & 1) != 0 )
          {
            v58[0] = 0x2B;
            goto LABEL_164;
          }
          if ( (v66 & 2) != 0 )
          {
            v58[0] = 0x20;
            goto LABEL_164;
          }
        }
LABEL_165:
        v31 = v56 - SizeConverted - v57;
        if ( (v66 & 0xC) == 0 )
          write_multi_char(0x20, v56 - SizeConverted - v57, File);
        v32 = File;
        write_string(&v59, (int)v58, (int)File, v57);
        if ( (v66 & 8) != 0 && (v66 & 4) == 0 )
          write_multi_char(0x30, v31, v32);
        if ( v55 && SizeConverted > 0 )
        {
          v33 = v63;
          v47 = SizeConverted;
          while ( 1 )
          {
            v34 = *(unsigned __int16 *)v33;
            --v47;
            HIDWORD(v40) = v34;
            LODWORD(v40) = 6;
            v33 += 2;
            if ( wctomb_s(&v46, v68, v40, v42) || !v46 )
              break;
            write_string(&v59, (int)v68, (int)v32, v46);
            if ( !v47 )
              goto LABEL_179;
          }
          v59 = 0xFFFFFFFF;
        }
        else
        {
          write_string(&v59, (int)v63, (int)v32, SizeConverted);
        }
LABEL_179:
        if ( v59 >= 0 && (v66 & 4) != 0 )
          write_multi_char(0x20, v31, v32);
      }
LABEL_182:
      if ( !Memory )
        goto __output_l___def_98E289;
      free(Memory);
      Memory = 0;
      return _output_l_::def_98E289(v41);
    default:
      goto __output_l___def_98E289;
  }
}
