int __cdecl _output_l(FILE *a1, unsigned __int8 *a2, struct localeinfo_struct *a3, __int64 *a4)
{
  _DWORD *v4; // esi
  _BYTE *v5; // eax
  _DWORD *v6; // esi
  char *v7; // eax
  unsigned __int8 v8; // dl
  bool v9; // zf
  unsigned __int8 *v10; // ebx
  int v11; // eax
  unsigned __int8 v13; // al
  int v14; // eax
  char *v15; // ebx
  int v16; // ecx
  int v17; // edi
  char *v18; // eax
  __int16 *v19; // eax
  char *v20; // ecx
  int v21; // eax
  _WORD *v22; // esi
  int v23; // esi
  void *v24; // eax
  void (__cdecl *v25)(_DWORD *, char *, int, int, int, int, struct localeinfo_struct *); // eax
  int v26; // edi
  void (__cdecl *v27)(char *, struct localeinfo_struct *); // eax
  void (__cdecl *v28)(char *, struct localeinfo_struct *); // eax
  char *i; // eax
  int v30; // ebx
  FILE *v31; // edi
  char *v32; // esi
  int v33; // eax
  int v34; // [esp-14h] [ebp-A0h]
  int v35; // [esp-10h] [ebp-9Ch]
  int v36; // [esp-Ch] [ebp-98h]
  rsize_t v37; // [esp-8h] [ebp-94h]
  int v38; // [esp-8h] [ebp-94h]
  rsize_t v39; // [esp-8h] [ebp-94h]
  wchar_t v40; // [esp+0h] [ebp-8Ch]
  _DWORD v41[2]; // [esp+Ch] [ebp-80h] BYREF
  int v42; // [esp+14h] [ebp-78h]
  int v43; // [esp+18h] [ebp-74h]
  int v44; // [esp+1Ch] [ebp-70h] BYREF
  int v45; // [esp+24h] [ebp-68h]
  struct localeinfo_struct Locale; // [esp+28h] [ebp-64h] BYREF
  int v47; // [esp+30h] [ebp-5Ch]
  char v48; // [esp+34h] [ebp-58h]
  void *Memory; // [esp+38h] [ebp-54h]
  int v50; // [esp+3Ch] [ebp-50h]
  int v51; // [esp+40h] [ebp-4Ch]
  unsigned __int8 *v52; // [esp+44h] [ebp-48h]
  int v53; // [esp+48h] [ebp-44h]
  int v54; // [esp+4Ch] [ebp-40h]
  int v55; // [esp+50h] [ebp-3Ch]
  char v56[4]; // [esp+54h] [ebp-38h] BYREF
  int v57; // [esp+58h] [ebp-34h] BYREF
  FILE *File; // [esp+5Ch] [ebp-30h]
  __int64 *v59; // [esp+60h] [ebp-2Ch]
  int SizeConverted; // [esp+64h] [ebp-28h] BYREF
  char *v61; // [esp+68h] [ebp-24h]
  int v62; // [esp+6Ch] [ebp-20h]
  unsigned __int8 v63; // [esp+73h] [ebp-19h]
  int v64; // [esp+74h] [ebp-18h]
  char MbCh[20]; // [esp+78h] [ebp-14h] BYREF
  _BYTE v66[492]; // [esp+8Ch] [ebp+0h] BYREF
  char v67[8]; // [esp+278h] [ebp+1ECh] BYREF

  File = a1; /*0x98e122*/
  v59 = a4; /*0x98e125*/
  v51 = 0; /*0x98e128*/
  v64 = 0; /*0x98e12b*/
  v54 = 0; /*0x98e12e*/
  v62 = 0; /*0x98e131*/
  v55 = 0; /*0x98e134*/
  v50 = 0; /*0x98e137*/
  v53 = 0; /*0x98e13a*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3); /*0x98e13d*/
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
    *_errno() = 0x16; /*0x98e150*/
    _invalid_parameter((int)a2, (int)a4, 0); /*0x98e157*/
    if ( v48 ) /*0x98e163*/
      *(_DWORD *)(v47 + 0x70) &= ~2u; /*0x98e168*/
    JUMPOUT(0x98EA44); /*0x98ea44*/
  }
  v8 = *a2; /*0x98e22d*/
  v9 = *a2 == 0; /*0x98e231*/
  v57 = 0; /*0x98e233*/
  SizeConverted = 0; /*0x98e236*/
  Memory = 0; /*0x98e239*/
  v63 = v8; /*0x98e23c*/
  if ( v9 ) /*0x98e23f*/
    JUMPOUT(0x98EA34); /*0x98ea34*/
  v10 = a2 + 1; /*0x98e245*/
  v52 = a2 + 1; /*0x98e24a*/
  if ( (unsigned __int8)(v8 - 0x20) > 0x58u ) /*0x98e259*/
    v11 = 0; /*0x98e26e*/
  else
    v11 = aInitializecrit[(char)v8 + 0x18] & 0xF; /*0x98e265*/
  v43 = byte_AA4FA0[8 * v11] >> 4; /*0x98e280*/
  switch ( v43 ) /*0x98e289*/
  {
    case 0: /*0x98e289*/
      goto __output_l___$NORMAL_STATE$25379;
    case 1: /*0x98e289*/
      v62 = 0xFFFFFFFF; /*0x98e290*/
      v42 = 0; /*0x98e294*/
      v50 = 0; /*0x98e297*/
      v54 = 0; /*0x98e29a*/
      v55 = 0; /*0x98e29d*/
      v64 = 0; /*0x98e2a0*/
      v53 = 0; /*0x98e2a3*/
      return _output_l_::def_98E289((int)v66); /*0x98e2a6*/
    case 2: /*0x98e289*/
      switch ( v8 ) /*0x98e2b1*/
      {
        case ' ': /*0x98e2b1*/
          v64 |= 2u; /*0x98e2f1*/
          return _output_l_::def_98E289((int)v66); /*0x98e2f5*/
        case '#': /*0x98e2b1*/
          v64 |= 0x80u; /*0x98e2e5*/
          return _output_l_::def_98E289((int)v66); /*0x98e2ec*/
        case '+': /*0x98e2b1*/
          v64 |= 1u; /*0x98e2dc*/
          return _output_l_::def_98E289((int)v66); /*0x98e2e0*/
        case '-': /*0x98e2b1*/
          v64 |= 4u; /*0x98e2d3*/
          return _output_l_::def_98E289((int)v66); /*0x98e2d7*/
        case '0': /*0x98e2b1*/
          v64 |= 8u; /*0x98e2ca*/
          return _output_l_::def_98E289((int)v66); /*0x98e2ce*/
        default:
__output_l___def_98E289:
          JUMPOUT(0x98EA04); /*0x98ea04*/
      }
    case 3: /*0x98e289*/
      if ( v8 == 0x2A ) /*0x98e2fd*/
      {
        v59 = (__int64 *)((char *)a4 + 4); /*0x98e302*/
        v54 = *(_DWORD *)a4; /*0x98e30a*/
        if ( v54 >= 0 ) /*0x98e30d*/
          goto __output_l___def_98E289; /*0x98e30d*/
        v64 |= 4u; /*0x98e313*/
        v54 = -v54; /*0x98e317*/
        return _output_l_::def_98E289((int)v66); /*0x98e31a*/
      }
      else
      {
        v54 = 0xA * v54 + (char)v8 - 0x30; /*0x98e32c*/
        return _output_l_::def_98E289((int)v66); /*0x98e32f*/
      }
    case 4: /*0x98e289*/
      v62 = 0; /*0x98e334*/
      return _output_l_::def_98E289((int)v66); /*0x98e337*/
    case 5: /*0x98e289*/
      if ( v8 == 0x2A ) /*0x98e33f*/
      {
        v59 = (__int64 *)((char *)a4 + 4); /*0x98e344*/
        v62 = *(_DWORD *)a4; /*0x98e34c*/
        if ( v62 >= 0 ) /*0x98e34f*/
          goto __output_l___def_98E289; /*0x98e34f*/
        v62 = 0xFFFFFFFF; /*0x98e355*/
        return _output_l_::def_98E289((int)v66); /*0x98e359*/
      }
      else
      {
        v62 = 0xA * v62 + (char)v8 - 0x30; /*0x98e36b*/
        return _output_l_::def_98E289((int)v66); /*0x98e36e*/
      }
    case 6: /*0x98e289*/
      if ( v8 != 0x49 ) /*0x98e376*/
      {
        switch ( v8 ) /*0x98e37b*/
        {
          case 'h': /*0x98e37b*/
            v64 |= 0x20u; /*0x98e3b5*/
            return _output_l_::def_98E289((int)v66); /*0x98e3b9*/
          case 'l': /*0x98e37b*/
            if ( *v10 == 0x6C ) /*0x98e39a*/
            {
              v64 |= 0x1000u; /*0x98e39d*/
              v52 = a2 + 2; /*0x98e3a4*/
            }
            else
            {
              v64 |= 0x10u; /*0x98e3ac*/
            }
            return _output_l_::def_98E289((int)v66); /*0x98e3a7*/
          case 'w': /*0x98e37b*/
            v64 |= 0x800u; /*0x98e38b*/
            return _output_l_::def_98E289((int)v66); /*0x98e392*/
          default:
            goto __output_l___def_98E289; /*0x98e385*/
        }
      }
      v13 = *v10; /*0x98e3be*/
      if ( *v10 == 0x36 && a2[2] == 0x34 ) /*0x98e3c8*/
      {
        v64 |= 0x8000u; /*0x98e3cc*/
        v52 = a2 + 3; /*0x98e3d3*/
        return _output_l_::def_98E289((int)v66); /*0x98e3d6*/
      }
      if ( v13 == 0x33 && a2[2] == 0x32 ) /*0x98e3e3*/
      {
        v64 &= ~0x8000u; /*0x98e3e7*/
        v52 = a2 + 3; /*0x98e3ee*/
        return _output_l_::def_98E289((int)v66); /*0x98e3f1*/
      }
      if ( v13 == 0x64 || v13 == 0x69 || v13 == 0x6F || v13 == 0x75 || v13 == 0x78 || v13 == 0x58 ) /*0x98e420*/
        goto __output_l___def_98E289; /*0x98e420*/
      v43 = 0; /*0x98e426*/
__output_l___$NORMAL_STATE$25379:
      v53 = 0; /*0x98e429*/
      v14 = _isleadbyte_l(v8, (_locale_t)&Locale); /*0x98e434*/
      v9 = v14 == 0; /*0x98e43a*/
      LOBYTE(v14) = v63; /*0x98e43c*/
      if ( v9 || (v14 = write_char(File, v14, &v57), LOBYTE(v14) = *v10, v52 = a2 + 2, (_BYTE)v14) ) /*0x98e455*/
      {
        write_char(File, v14, &v57); /*0x98e461*/
        return _output_l_::def_98E289((int)v66); /*0x98e466*/
      }
      goto LABEL_191; /*0x98e455*/
    case 7: /*0x98e289*/
      if ( (char)v8 > 0x64 ) /*0x98e471*/
      {
        if ( (char)v8 > 0x70 ) /*0x98e5ec*/
        {
          if ( v8 == 0x73 ) /*0x98e77b*/
          {
LABEL_83:
            v16 = v62; /*0x98e4f1*/
            if ( v62 == 0xFFFFFFFF ) /*0x98e4f7*/
              v16 = 0x7FFFFFFF; /*0x98e4f9*/
            v59 = (__int64 *)((char *)a4 + 4); /*0x98e507*/
            v17 = *(_DWORD *)a4; /*0x98e50a*/
            v61 = *(char **)a4; /*0x98e50d*/
            if ( (v64 & 0x810) != 0 ) /*0x98e510*/
            {
              if ( !v17 ) /*0x98e518*/
                v61 = (char *)off_B31364; /*0x98e51f*/
              v18 = v61; /*0x98e522*/
              v53 = 1; /*0x98e525*/
              while ( v16 ) /*0x98e8c1*/
              {
                --v16; /*0x98e8b7*/
                if ( !*(_WORD *)v18 ) /*0x98e8b8*/
                  break; /*0x98e8b8*/
                v18 += 2; /*0x98e8be*/
              }
              v21 = (v18 - v61) >> 1; /*0x98e8c6*/
            }
            else
            {
              if ( !v17 ) /*0x98e8cc*/
                v61 = off_B31360; /*0x98e8d3*/
              for ( i = v61; v16; ++i ) /*0x98e8d6*/
              {
                --v16; /*0x98e8db*/
                if ( !*i ) /*0x98e8dc*/
                  break; /*0x98e8dc*/
              }
              v21 = i - v61; /*0x98e8e6*/
            }
            goto LABEL_155; /*0x98e8c8*/
          }
          if ( v8 != 0x75 ) /*0x98e783*/
          {
            if ( v8 == 0x78 ) /*0x98e78c*/
            {
              v51 = 0x27; /*0x98e792*/
              return _output_l_::_COMMON_HEX_25540((int)v66, a4, 0); /*0x98e793*/
            }
            goto LABEL_156; /*0x98e78c*/
          }
LABEL_120:
          SizeConverted = 0xA; /*0x98e66c*/
          return _output_l_::_COMMON_INT_25533((int)v66, a4, 0); /*0x98e66d*/
        }
        if ( v8 == 0x70 ) /*0x98e5f2*/
        {
          v62 = 8; /*0x98e76c*/
          goto LABEL_139; /*0x98e76c*/
        }
        if ( (char)v8 < 0x65 ) /*0x98e5fb*/
          goto LABEL_156; /*0x98e5fb*/
        if ( (char)v8 <= 0x67 ) /*0x98e604*/
          goto LABEL_77; /*0x98e604*/
        if ( v8 != 0x69 ) /*0x98e60d*/
        {
          if ( v8 == 0x6E ) /*0x98e612*/
          {
            v22 = *(_WORD **)a4; /*0x98e633*/
            v59 = (__int64 *)((char *)a4 + 4); /*0x98e638*/
            if ( !_get_printf_count_output() ) /*0x98e642*/
LABEL_191:
              JUMPOUT(0x98EA1D); /*0x98ea1d*/
            if ( (v64 & 0x20) != 0 ) /*0x98e64c*/
              *v22 = v57; /*0x98e652*/
            else
              *(_DWORD *)v22 = v57; /*0x98e65a*/
            v50 = 1; /*0x98e65c*/
            goto LABEL_182; /*0x98e663*/
          }
          if ( v8 == 0x6F ) /*0x98e617*/
          {
            SizeConverted = 8; /*0x98e621*/
            if ( (char)v64 < 0 ) /*0x98e628*/
              v64 |= 0x200u; /*0x98e62a*/
            return _output_l_::_COMMON_INT_25533((int)v66, a4, 0); /*0x98e631*/
          }
          goto LABEL_156; /*0x98e617*/
        }
LABEL_119:
        v64 |= 0x40u; /*0x98e668*/
        goto LABEL_120; /*0x98e668*/
      }
      if ( v8 == 0x64 ) /*0x98e477*/
        goto LABEL_119; /*0x98e477*/
      if ( (char)v8 > 0x53 ) /*0x98e480*/
      {
        if ( v8 != 0x58 ) /*0x98e534*/
        {
          if ( v8 == 0x5A ) /*0x98e53c*/
          {
            v19 = *(__int16 **)a4; /*0x98e59b*/
            v59 = (__int64 *)((char *)a4 + 4); /*0x98e5a2*/
            if ( v19 && (v20 = *((char **)v19 + 1)) != 0 ) /*0x98e5ac*/
            {
              v21 = *v19; /*0x98e5b4*/
              v61 = v20; /*0x98e5b7*/
              if ( (v64 & 0x800) != 0 ) /*0x98e5ba*/
              {
                v21 /= 2; /*0x98e5bf*/
                v53 = 1; /*0x98e5c1*/
              }
              else
              {
                v53 = 0; /*0x98e5cd*/
              }
            }
            else
            {
              v61 = off_B31360; /*0x98e5da*/
              v21 = strlen(off_B31360); /*0x98e5de*/
            }
            goto LABEL_155; /*0x98e5c8*/
          }
          if ( v8 == 0x61 ) /*0x98e540*/
            goto LABEL_77; /*0x98e540*/
          if ( v8 != 0x63 ) /*0x98e548*/
            goto LABEL_156; /*0x98e548*/
          goto LABEL_93; /*0x98e548*/
        }
LABEL_139:
        v51 = 7; /*0x98e773*/
        return _output_l_::_COMMON_HEX_25540((int)v66, a4, 0); /*0x98e776*/
      }
      switch ( v8 ) /*0x98e486*/
      {
        case 'S': /*0x98e486*/
          if ( (v64 & 0x830) == 0 ) /*0x98e4e8*/
            v64 |= 0x800u; /*0x98e4ea*/
          goto LABEL_83; /*0x98e4ea*/
        case 'A': /*0x98e486*/
LABEL_76:
          v8 += 0x20; /*0x98e49d*/
          v42 = 1; /*0x98e4a0*/
          v63 = v8; /*0x98e4a7*/
LABEL_77:
          v64 |= 0x40u; /*0x98e4aa*/
          v15 = MbCh; /*0x98e4b1*/
          v61 = MbCh; /*0x98e4b9*/
          v45 = 0x200; /*0x98e4bc*/
          if ( v62 >= 0 ) /*0x98e4bf*/
          {
            if ( v62 ) /*0x98e68c*/
            {
              if ( v62 > 0x200 ) /*0x98e69f*/
                v62 = 0x200; /*0x98e6a1*/
              if ( v62 > 0xA3 ) /*0x98e6ab*/
              {
                v23 = v62 + 0x15D; /*0x98e6b0*/
                v24 = unknown_libname_72(v62 + 0x15D); /*0x98e6b7*/
                v8 = v63; /*0x98e6be*/
                Memory = v24; /*0x98e6c2*/
                if ( v24 ) /*0x98e6c5*/
                {
                  v61 = (char *)v24; /*0x98e6c7*/
                  v45 = v23; /*0x98e6ca*/
                  v15 = (char *)v24; /*0x98e6cd*/
                }
                else
                {
                  v62 = 0xA3; /*0x98e6d1*/
                }
              }
            }
            else
            {
              v62 = v8 == 0x67; /*0x98e693*/
            }
          }
          else
          {
            v62 = 6; /*0x98e4c5*/
          }
          v41[0] = *(_DWORD *)a4; /*0x98e6df*/
          v41[1] = *((_DWORD *)a4 + 1); /*0x98e6e5*/
          v38 = v42; /*0x98e6ec*/
          v36 = v62; /*0x98e6f2*/
          v59 = a4 + 1; /*0x98e6f5*/
          v35 = (char)v8; /*0x98e6f8*/
          v34 = v45; /*0x98e6f9*/
          v25 = (void (__cdecl *)(_DWORD *, char *, int, int, int, int, struct localeinfo_struct *))_decode_pointer(off_B312B8[0]); /*0x98e707*/
          v25(v41, v15, v34, v35, v36, v38, &Locale); /*0x98e70d*/
          v26 = v64 & 0x80; /*0x98e715*/
          if ( (v64 & 0x80) != 0 && !v62 ) /*0x98e720*/
          {
            v27 = (void (__cdecl *)(char *, struct localeinfo_struct *))_decode_pointer(off_B312C4); /*0x98e72d*/
            v27(v15, &Locale); /*0x98e733*/
          }
          if ( v63 == 0x67 && !v26 ) /*0x98e73f*/
          {
            v28 = (void (__cdecl *)(char *, struct localeinfo_struct *))_decode_pointer(off_B312C0[0]); /*0x98e74c*/
            v28(v15, &Locale); /*0x98e752*/
          }
          if ( *v15 == 0x2D ) /*0x98e759*/
          {
            v64 |= 0x100u; /*0x98e75b*/
            v61 = ++v15; /*0x98e763*/
          }
          v21 = strlen(v15); /*0x98e767*/
LABEL_155:
          SizeConverted = v21; /*0x98e8e9*/
          break; /*0x98e8e9*/
        case 'C': /*0x98e486*/
          if ( (v64 & 0x830) == 0 ) /*0x98e4d7*/
            v64 |= 0x800u; /*0x98e4d9*/
LABEL_93:
          v59 = (__int64 *)((char *)a4 + 4); /*0x98e54e*/
          if ( (v64 & 0x810) != 0 ) /*0x98e55a*/
          {
            HIDWORD(v37) = *(unsigned __int16 *)a4; /*0x98e560*/
            LODWORD(v37) = 0x200; /*0x98e561*/
            if ( wctomb_s(&SizeConverted, MbCh, v37, v40) ) /*0x98e56e*/
              v50 = 1; /*0x98e57a*/
          }
          else
          {
            MbCh[0] = *(_BYTE *)a4; /*0x98e586*/
            SizeConverted = 1; /*0x98e589*/
          }
          v61 = MbCh; /*0x98e593*/
          break; /*0x98e596*/
        case 'E': /*0x98e486*/
        case 'G': /*0x98e486*/
          goto LABEL_76; /*0x98e497*/
      }
LABEL_156:
      if ( !v50 ) /*0x98e8f0*/
      {
        if ( (v64 & 0x40) != 0 ) /*0x98e8fb*/
        {
          if ( (v64 & 0x100) != 0 ) /*0x98e901*/
          {
            v56[0] = 0x2D; /*0x98e903*/
LABEL_164:
            v55 = 1; /*0x98e91b*/
            goto LABEL_165; /*0x98e91b*/
          }
          if ( (v64 & 1) != 0 ) /*0x98e90b*/
          {
            v56[0] = 0x2B; /*0x98e90d*/
            goto LABEL_164; /*0x98e911*/
          }
          if ( (v64 & 2) != 0 ) /*0x98e915*/
          {
            v56[0] = 0x20; /*0x98e917*/
            goto LABEL_164; /*0x98e917*/
          }
        }
LABEL_165:
        v30 = v54 - SizeConverted - v55; /*0x98e922*/
        if ( (v64 & 0xC) == 0 ) /*0x98e92f*/
          write_multi_char(&v57, 0x20, v54 - SizeConverted - v55, File); /*0x98e93a*/
        v31 = File; /*0x98e945*/
        write_string(&v57, v56, (int)File, v55); /*0x98e94e*/
        if ( (v64 & 8) != 0 && (v64 & 4) == 0 ) /*0x98e95e*/
          write_multi_char(&v57, 0x30, v30, v31); /*0x98e967*/
        if ( v53 && SizeConverted > 0 ) /*0x98e97a*/
        {
          v32 = v61; /*0x98e97c*/
          v45 = SizeConverted; /*0x98e97f*/
          while ( 1 ) /*0x98e982*/
          {
            v33 = *(unsigned __int16 *)v32; /*0x98e982*/
            --v45; /*0x98e985*/
            HIDWORD(v39) = v33; /*0x98e988*/
            LODWORD(v39) = 6; /*0x98e989*/
            v32 += 2; /*0x98e997*/
            if ( wctomb_s(&v44, v67, v39, v40) || !v44 ) /*0x98e9a7*/
              break; /*0x98e9a7*/
            write_string(&v57, v67, (int)v31, v44); /*0x98e9b5*/
            if ( !v45 ) /*0x98e9bf*/
              goto LABEL_179; /*0x98e9bf*/
          }
          v57 = 0xFFFFFFFF; /*0x98e9c3*/
        }
        else
        {
          write_string(&v57, v61, (int)v31, SizeConverted); /*0x98e9d0*/
        }
LABEL_179:
        if ( v57 >= 0 && (v64 & 4) != 0 ) /*0x98e9e0*/
          write_multi_char(&v57, 0x20, v30, v31); /*0x98e9e9*/
      }
LABEL_182:
      if ( !Memory ) /*0x98e9f5*/
        goto __output_l___def_98E289; /*0x98e9f5*/
      free(Memory); /*0x98e9fa*/
      Memory = 0; /*0x98e9ff*/
      return _output_l_::def_98E289((int)v66);
    default:
      goto __output_l___def_98E289;
  }
}
