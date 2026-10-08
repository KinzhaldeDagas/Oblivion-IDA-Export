int __cdecl _output_s_l(FILE *a1, unsigned __int8 *a2, struct localeinfo_struct *a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  _BYTE *v5; // eax
  _DWORD *v6; // esi
  char *v7; // eax
  unsigned __int8 v8; // dl
  bool v9; // zf
  unsigned __int8 *v10; // ebx
  int v11; // eax
  int v12; // eax
  unsigned __int8 v14; // al
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
  void *v25; // eax
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
  unsigned __int8 *v52; // [esp+40h] [ebp-4Ch]
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
  char MbCh[20]; // [esp+78h] [ebp-14h] BYREF
  _BYTE v67[492]; // [esp+8Ch] [ebp+0h] BYREF
  char v68[8]; // [esp+278h] [ebp+1ECh] BYREF

  File = a1; /*0x997d09*/
  v60 = a4; /*0x997d0c*/
  v47 = 0; /*0x997d0f*/
  v65 = 0; /*0x997d12*/
  v55 = 0; /*0x997d15*/
  v63 = 0; /*0x997d18*/
  v56 = 0; /*0x997d1b*/
  v46 = 0; /*0x997d1e*/
  v54 = 0; /*0x997d21*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&Locale, a3); /*0x997d24*/
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
    *_errno() = 0x16; /*0x997d37*/
    _invalid_parameter((int)a2, (int)a4, 0); /*0x997d3e*/
    if ( v51 ) /*0x997d4a*/
      *(_DWORD *)(v50 + 0x70) &= ~2u; /*0x997d4f*/
    JUMPOUT(0x998646); /*0x998646*/
  }
  v8 = *a2; /*0x997e14*/
  v9 = *a2 == 0; /*0x997e16*/
  v58 = 0; /*0x997e18*/
  SizeConverted = 0; /*0x997e1b*/
  v53 = 0; /*0x997e1e*/
  Memory = 0; /*0x997e21*/
  v64 = v8; /*0x997e24*/
  if ( v9 ) /*0x997e27*/
    JUMPOUT(0x998636); /*0x998636*/
  v10 = a2 + 1; /*0x997e2d*/
  v11 = 0; /*0x997e2e*/
  v52 = a2 + 1; /*0x997e33*/
  if ( (unsigned __int8)(v8 - 0x20) <= 0x58u ) /*0x997e44*/
    v11 = *((_BYTE *)&qword_AAFBB0 + (char)v8) & 0xF; /*0x997e50*/
  v12 = (unsigned __int8)byte_AAFBD0[9 * v11 + v53] >> 4; /*0x997e63*/
  v53 = v12; /*0x997e69*/
  if ( v12 == 8 ) /*0x997e6c*/
    goto LABEL_192; /*0x997e6c*/
  switch ( v12 ) /*0x997e7d*/
  {
    case 0: /*0x997e7d*/
      goto __output_s_l___$NORMAL_STATE$25383;
    case 1: /*0x997e7d*/
      v63 = 0xFFFFFFFF; /*0x997e86*/
      v44 = 0; /*0x997e8a*/
      v46 = 0; /*0x997e8d*/
      v55 = 0; /*0x997e90*/
      v56 = 0; /*0x997e93*/
      v65 = 0; /*0x997e96*/
      v54 = 0; /*0x997e99*/
      return _output_s_l_::def_997E7D((int)v67); /*0x997e9c*/
    case 2: /*0x997e7d*/
      switch ( v8 ) /*0x997ea7*/
      {
        case ' ': /*0x997ea7*/
          v65 |= 2u; /*0x997ee5*/
          return _output_s_l_::def_997E7D((int)v67); /*0x997ee9*/
        case '#': /*0x997ea7*/
          v65 |= 0x80u; /*0x997ed9*/
          return _output_s_l_::def_997E7D((int)v67); /*0x997ee0*/
        case '+': /*0x997ea7*/
          v65 |= 1u; /*0x997ed0*/
          return _output_s_l_::def_997E7D((int)v67); /*0x997ed4*/
        case '-': /*0x997ea7*/
          v65 |= 4u; /*0x997ec7*/
          return _output_s_l_::def_997E7D((int)v67); /*0x997ecb*/
        case '0': /*0x997ea7*/
          v65 |= 8u; /*0x997ebf*/
          return _output_s_l_::def_997E7D((int)v67); /*0x997ec2*/
        default:
__output_s_l___def_997E7D:
          JUMPOUT(0x9985F8); /*0x9985f8*/
      }
    case 3: /*0x997e7d*/
      if ( v8 == 0x2A ) /*0x997ef1*/
      {
        v60 = a4 + 1; /*0x997ef6*/
        v55 = *a4; /*0x997efe*/
        if ( v55 >= 0 ) /*0x997f01*/
          goto __output_s_l___def_997E7D; /*0x997f01*/
        v65 |= 4u; /*0x997f07*/
        v55 = -v55; /*0x997f0b*/
        return _output_s_l_::def_997E7D((int)v67); /*0x997f0e*/
      }
      else
      {
        v55 = 0xA * v55 + (char)v8 - 0x30; /*0x997f20*/
        return _output_s_l_::def_997E7D((int)v67); /*0x997f23*/
      }
    case 4: /*0x997e7d*/
      v63 = 0; /*0x997f28*/
      return _output_s_l_::def_997E7D((int)v67); /*0x997f2c*/
    case 5: /*0x997e7d*/
      if ( v8 == 0x2A ) /*0x997f34*/
      {
        v60 = a4 + 1; /*0x997f39*/
        v63 = *a4; /*0x997f41*/
        if ( v63 >= 0 ) /*0x997f44*/
          goto __output_s_l___def_997E7D; /*0x997f44*/
        v63 = 0xFFFFFFFF; /*0x997f4a*/
        return _output_s_l_::def_997E7D((int)v67); /*0x997f4e*/
      }
      else
      {
        v63 = 0xA * v63 + (char)v8 - 0x30; /*0x997f60*/
        return _output_s_l_::def_997E7D((int)v67); /*0x997f63*/
      }
    case 6: /*0x997e7d*/
      if ( v8 != 0x49 ) /*0x997f6b*/
      {
        switch ( v8 ) /*0x997f70*/
        {
          case 'h': /*0x997f70*/
            v65 |= 0x20u; /*0x997faa*/
            return _output_s_l_::def_997E7D((int)v67); /*0x997fae*/
          case 'l': /*0x997f70*/
            if ( *v10 == 0x6C ) /*0x997f8f*/
            {
              v65 |= 0x1000u; /*0x997f92*/
              v52 = a2 + 2; /*0x997f99*/
            }
            else
            {
              v65 |= 0x10u; /*0x997fa1*/
            }
            return _output_s_l_::def_997E7D((int)v67); /*0x997f9c*/
          case 'w': /*0x997f70*/
            v65 |= 0x800u; /*0x997f80*/
            return _output_s_l_::def_997E7D((int)v67); /*0x997f87*/
          default:
            goto __output_s_l___def_997E7D; /*0x997f7a*/
        }
      }
      v14 = *v10; /*0x997fb3*/
      if ( *v10 == 0x36 && a2[2] == 0x34 ) /*0x997fbd*/
      {
        v65 |= 0x8000u; /*0x997fc1*/
        v52 = a2 + 3; /*0x997fc8*/
        return _output_s_l_::def_997E7D((int)v67); /*0x997fcb*/
      }
      if ( v14 == 0x33 && a2[2] == 0x32 ) /*0x997fd8*/
      {
        v65 &= ~0x8000u; /*0x997fdc*/
        v52 = a2 + 3; /*0x997fe3*/
        return _output_s_l_::def_997E7D((int)v67); /*0x997fe6*/
      }
      if ( v14 == 0x64 || v14 == 0x69 || v14 == 0x6F || v14 == 0x75 || v14 == 0x78 || v14 == 0x58 ) /*0x998015*/
        goto __output_s_l___def_997E7D; /*0x998015*/
      v53 = 0; /*0x99801b*/
__output_s_l___$NORMAL_STATE$25383:
      v54 = 0; /*0x99801f*/
      v15 = _isleadbyte_l(v8, (_locale_t)&Locale); /*0x99802b*/
      v9 = v15 == 0; /*0x998031*/
      LOBYTE(v15) = v64; /*0x998033*/
      if ( v9 || (v15 = write_char(File, v15, &v58), LOBYTE(v15) = *v10, v52 = a2 + 2, (_BYTE)v15) ) /*0x99804c*/
      {
        write_char(File, v15, &v58); /*0x998058*/
        return _output_s_l_::def_997E7D((int)v67); /*0x99805d*/
      }
      goto LABEL_192; /*0x99804c*/
    case 7: /*0x997e7d*/
      if ( (char)v8 > 0x64 ) /*0x998068*/
      {
        if ( (char)v8 > 0x70 ) /*0x9981e5*/
        {
          if ( v8 == 0x73 ) /*0x99836e*/
          {
LABEL_83:
            v17 = v63; /*0x9980e9*/
            if ( v63 == 0xFFFFFFFF ) /*0x9980ef*/
              v17 = 0x7FFFFFFF; /*0x9980f1*/
            v60 = a4 + 1; /*0x9980ff*/
            v18 = *a4; /*0x998102*/
            v62 = (char *)*a4; /*0x998105*/
            if ( (v65 & 0x810) != 0 ) /*0x998108*/
            {
              if ( !v18 ) /*0x998110*/
                v62 = (char *)off_B31364; /*0x998117*/
              v19 = v62; /*0x99811a*/
              v54 = 1; /*0x99811d*/
              while ( v17 ) /*0x9984b5*/
              {
                --v17; /*0x9984aa*/
                if ( !*(_WORD *)v19 ) /*0x9984ab*/
                  break; /*0x9984ab*/
                v19 += 2; /*0x9984b2*/
              }
              v22 = (v19 - v62) >> 1; /*0x9984ba*/
            }
            else
            {
              if ( !v18 ) /*0x9984c0*/
                v62 = off_B31360; /*0x9984c7*/
              for ( i = v62; v17; ++i ) /*0x9984ca*/
              {
                --v17; /*0x9984cf*/
                if ( !*i ) /*0x9984d0*/
                  break; /*0x9984d0*/
              }
              v22 = i - v62; /*0x9984da*/
            }
            goto LABEL_155; /*0x9984bc*/
          }
          if ( v8 != 0x75 ) /*0x998376*/
          {
            if ( v8 == 0x78 ) /*0x99837f*/
            {
              v47 = 0x27; /*0x998385*/
              return _output_s_l_::_COMMON_HEX_25544((int)v67, (int)a4, 8); /*0x998386*/
            }
            goto LABEL_156; /*0x99837f*/
          }
LABEL_120:
          SizeConverted = 0xA; /*0x998261*/
          return _output_s_l_::_COMMON_INT_25537((int)v67, (int)a4, 8); /*0x998262*/
        }
        if ( v8 == 0x70 ) /*0x9981eb*/
        {
          v63 = 8; /*0x998363*/
          goto LABEL_139; /*0x998363*/
        }
        if ( (char)v8 < 0x65 ) /*0x9981f4*/
          goto LABEL_156; /*0x9981f4*/
        if ( (char)v8 <= 0x67 ) /*0x9981fd*/
          goto LABEL_77; /*0x9981fd*/
        if ( v8 == 0x69 ) /*0x998206*/
        {
LABEL_119:
          v65 |= 0x40u; /*0x99825d*/
          goto LABEL_120; /*0x99825d*/
        }
        if ( v8 != 0x6E ) /*0x99820b*/
        {
          if ( v8 == 0x6F ) /*0x998210*/
          {
            SizeConverted = 8; /*0x99821a*/
            if ( (char)v65 < 0 ) /*0x99821d*/
              v65 |= 0x200u; /*0x99821f*/
            return _output_s_l_::_COMMON_INT_25537((int)v67, (int)a4, 8); /*0x998226*/
          }
          goto LABEL_156; /*0x998210*/
        }
        v23 = (_WORD *)*a4; /*0x998228*/
        v60 = a4 + 1; /*0x99822d*/
        if ( _get_printf_count_output() ) /*0x998230*/
        {
          if ( (v65 & 0x20) != 0 ) /*0x998241*/
            *v23 = v58; /*0x998247*/
          else
            *(_DWORD *)v23 = v58; /*0x99824f*/
          v46 = 1; /*0x998251*/
          goto LABEL_182; /*0x998258*/
        }
LABEL_192:
        JUMPOUT(0x99860E); /*0x99860e*/
      }
      if ( v8 == 0x64 ) /*0x99806e*/
        goto LABEL_119; /*0x99806e*/
      if ( (char)v8 > 0x53 ) /*0x998077*/
      {
        if ( v8 != 0x58 ) /*0x99812c*/
        {
          if ( v8 == 0x5A ) /*0x998134*/
          {
            v20 = (__int16 *)*a4; /*0x998193*/
            v60 = a4 + 1; /*0x99819a*/
            if ( v20 && (v21 = *((char **)v20 + 1)) != 0 ) /*0x9981a4*/
            {
              v22 = *v20; /*0x9981ac*/
              v62 = v21; /*0x9981af*/
              if ( (v65 & 0x800) != 0 ) /*0x9981b2*/
              {
                v22 /= 2; /*0x9981b7*/
                v54 = 1; /*0x9981b9*/
              }
              else
              {
                v54 = 0; /*0x9981c5*/
              }
            }
            else
            {
              v62 = off_B31360; /*0x9981d3*/
              v22 = strlen(off_B31360); /*0x9981d7*/
            }
            goto LABEL_155; /*0x9981c0*/
          }
          if ( v8 == 0x61 ) /*0x998138*/
            goto LABEL_77; /*0x998138*/
          if ( v8 != 0x63 ) /*0x998140*/
            goto LABEL_156; /*0x998140*/
          goto LABEL_93; /*0x998140*/
        }
LABEL_139:
        v47 = 7; /*0x998366*/
        return _output_s_l_::_COMMON_HEX_25544((int)v67, (int)a4, 8); /*0x998369*/
      }
      switch ( v8 ) /*0x99807d*/
      {
        case 'S': /*0x99807d*/
          if ( (v65 & 0x830) == 0 ) /*0x9980e0*/
            v65 |= 0x800u; /*0x9980e2*/
          goto LABEL_83; /*0x9980e2*/
        case 'A': /*0x99807d*/
LABEL_76:
          v8 += 0x20; /*0x998094*/
          v44 = 1; /*0x998097*/
          v64 = v8; /*0x99809e*/
LABEL_77:
          v65 |= 0x40u; /*0x9980a1*/
          v16 = MbCh; /*0x9980a9*/
          v62 = MbCh; /*0x9980b1*/
          v45 = 0x200; /*0x9980b4*/
          if ( v63 >= 0 ) /*0x9980b7*/
          {
            if ( v63 ) /*0x998281*/
            {
              if ( v63 > 0x200 ) /*0x998294*/
                v63 = 0x200; /*0x998296*/
              if ( v63 > 0xA3 ) /*0x9982a0*/
              {
                v24 = v63 + 0x15D; /*0x9982a5*/
                v25 = unknown_libname_72(v63 + 0x15D); /*0x9982ac*/
                v8 = v64; /*0x9982b3*/
                Memory = v25; /*0x9982b7*/
                if ( v25 ) /*0x9982bc*/
                {
                  v62 = (char *)v25; /*0x9982be*/
                  v45 = v24; /*0x9982c1*/
                  v16 = (char *)v25; /*0x9982c4*/
                }
                else
                {
                  v63 = 0xA3; /*0x9982c8*/
                }
              }
            }
            else
            {
              v63 = v8 == 0x67; /*0x998288*/
            }
          }
          else
          {
            v63 = 6; /*0x9980bd*/
          }
          v42[0] = *a4; /*0x9982d5*/
          v42[1] = a4[1]; /*0x9982db*/
          v39 = v44; /*0x9982e2*/
          v37 = v63; /*0x9982e8*/
          v60 = a4 + 2; /*0x9982eb*/
          v36 = (char)v8; /*0x9982ee*/
          v35 = v45; /*0x9982ef*/
          v26 = (void (__cdecl *)(_DWORD *, char *, int, int, int, int, struct localeinfo_struct *))_decode_pointer(off_B312B8[0]); /*0x9982fd*/
          v26(v42, v16, v35, v36, v37, v39, &Locale); /*0x998303*/
          v27 = v65 & 0x80; /*0x99830b*/
          if ( (v65 & 0x80) != 0 && !v63 ) /*0x998317*/
          {
            v28 = (void (__cdecl *)(char *, struct localeinfo_struct *))_decode_pointer(off_B312C4); /*0x998324*/
            v28(v16, &Locale); /*0x99832a*/
          }
          if ( v64 == 0x67 && !v27 ) /*0x998336*/
          {
            v29 = (void (__cdecl *)(char *, struct localeinfo_struct *))_decode_pointer(off_B312C0[0]); /*0x998343*/
            v29(v16, &Locale); /*0x998349*/
          }
          if ( *v16 == 0x2D ) /*0x998350*/
          {
            v65 |= 0x100u; /*0x998352*/
            v62 = ++v16; /*0x99835a*/
          }
          v22 = strlen(v16); /*0x99835e*/
LABEL_155:
          SizeConverted = v22; /*0x9984dd*/
          break; /*0x9984dd*/
        case 'C': /*0x99807d*/
          if ( (v65 & 0x830) == 0 ) /*0x9980cf*/
            v65 |= 0x800u; /*0x9980d1*/
LABEL_93:
          v60 = a4 + 1; /*0x998146*/
          if ( (v65 & 0x810) != 0 ) /*0x998152*/
          {
            HIDWORD(v38) = *(unsigned __int16 *)a4; /*0x998158*/
            LODWORD(v38) = 0x200; /*0x998159*/
            if ( wctomb_s(&SizeConverted, MbCh, v38, v41) ) /*0x998166*/
              v46 = 1; /*0x998172*/
          }
          else
          {
            MbCh[0] = *(_BYTE *)a4; /*0x99817e*/
            SizeConverted = 1; /*0x998181*/
          }
          v62 = MbCh; /*0x99818b*/
          break; /*0x99818e*/
        case 'E': /*0x99807d*/
        case 'G': /*0x99807d*/
          goto LABEL_76; /*0x99808e*/
      }
LABEL_156:
      if ( !v46 ) /*0x9984e4*/
      {
        if ( (v65 & 0x40) != 0 ) /*0x9984ef*/
        {
          if ( (v65 & 0x100) != 0 ) /*0x9984f5*/
          {
            v57[0] = 0x2D; /*0x9984f7*/
LABEL_164:
            v56 = 1; /*0x99850f*/
            goto LABEL_165; /*0x99850f*/
          }
          if ( (v65 & 1) != 0 ) /*0x9984ff*/
          {
            v57[0] = 0x2B; /*0x998501*/
            goto LABEL_164; /*0x998505*/
          }
          if ( (v65 & 2) != 0 ) /*0x998509*/
          {
            v57[0] = 0x20; /*0x99850b*/
            goto LABEL_164; /*0x99850b*/
          }
        }
LABEL_165:
        v31 = v55 - SizeConverted - v56; /*0x998516*/
        if ( (v65 & 0xC) == 0 ) /*0x998523*/
          write_multi_char(&v58, 0x20, v55 - SizeConverted - v56, File); /*0x99852e*/
        v32 = File; /*0x998539*/
        write_string(&v58, v57, (int)File, v56); /*0x998542*/
        if ( (v65 & 8) != 0 && (v65 & 4) == 0 ) /*0x998552*/
          write_multi_char(&v58, 0x30, v31, v32); /*0x99855b*/
        if ( v54 && SizeConverted > 0 ) /*0x99856e*/
        {
          v33 = v62; /*0x998570*/
          v45 = SizeConverted; /*0x998573*/
          while ( 1 ) /*0x998576*/
          {
            v34 = *(unsigned __int16 *)v33; /*0x998576*/
            --v45; /*0x998579*/
            HIDWORD(v40) = v34; /*0x99857c*/
            LODWORD(v40) = 6; /*0x99857d*/
            v33 += 2; /*0x99858b*/
            if ( wctomb_s(&v43, v68, v40, v41) || !v43 ) /*0x99859b*/
              break; /*0x99859b*/
            write_string(&v58, v68, (int)v32, v43); /*0x9985a9*/
            if ( !v45 ) /*0x9985b3*/
              goto LABEL_179; /*0x9985b3*/
          }
          v58 = 0xFFFFFFFF; /*0x9985b7*/
        }
        else
        {
          write_string(&v58, v62, (int)v32, SizeConverted); /*0x9985c4*/
        }
LABEL_179:
        if ( v58 >= 0 && (v65 & 4) != 0 ) /*0x9985d4*/
          write_multi_char(&v58, 0x20, v31, v32); /*0x9985dd*/
      }
LABEL_182:
      if ( !Memory ) /*0x9985e9*/
        goto __output_s_l___def_997E7D; /*0x9985e9*/
      free(Memory); /*0x9985ee*/
      Memory = 0; /*0x9985f3*/
      return _output_s_l_::def_997E7D((int)v67);
    default:
      goto __output_s_l___def_997E7D;
  }
}
