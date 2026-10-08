int *__thiscall sub_577C10(_DWORD *this, BSStringT *arg0, _DWORD *a3)
{
  unsigned __int16 m_dataLen; // ax
  unsigned int v4; // esi
  unsigned int v5; // esi
  FreeEntry *v6; // edi
  char *m_data; // ecx
  FreeEntry *v8; // edx
  char v9; // al
  _DWORD *v10; // esi
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  char *v15; // eax
  char *v16; // edi
  float *v17; // eax
  unsigned int i; // esi
  unsigned int v19; // eax
  float *v20; // eax
  char *v21; // eax
  unsigned int j; // edi
  unsigned int v23; // eax
  char *v24; // esi
  char *v25; // eax
  unsigned int k; // edi
  unsigned int v27; // eax
  char *v28; // esi
  char *v29; // esi
  char *v30; // edi
  int v31; // esi
  char *v32; // eax
  char v33; // dl
  char *v34; // eax
  unsigned int m; // edi
  unsigned int v36; // eax
  char *v37; // esi
  float *v38; // eax
  char *v39; // esi
  int v40; // esi
  int v41; // edi
  char *v42; // esi
  unsigned int v43; // eax
  int v44; // eax
  char *v45; // edi
  int v46; // esi
  int v47; // eax
  int v48; // eax
  int v49; // esi
  int v50; // eax
  int v51; // eax
  int v52; // esi
  int v53; // eax
  double v54; // rt0
  char *v55; // esi
  int *v56; // edi
  _DWORD *v57; // eax
  int v58; // ecx
  int v60; // edi
  _DWORD *n; // eax
  _DWORD *v62; // ecx
  int v63; // ecx
  signed int v65; // [esp-8h] [ebp-10Ch]
  signed int v66; // [esp-8h] [ebp-10Ch]
  signed int v67; // [esp-8h] [ebp-10Ch]
  char v68; // [esp-4h] [ebp-108h]
  char v69; // [esp-4h] [ebp-108h]
  char v70; // [esp-4h] [ebp-108h]
  int v71; // [esp+0h] [ebp-104h]
  char v72; // [esp+13h] [ebp-F1h]
  signed int v73; // [esp+14h] [ebp-F0h] BYREF
  signed int v74; // [esp+18h] [ebp-ECh]
  int v75; // [esp+1Ch] [ebp-E8h] BYREF
  int v76; // [esp+20h] [ebp-E4h] BYREF
  BSStringT Src; // [esp+24h] [ebp-E0h] BYREF
  _DWORD *v78; // [esp+2Ch] [ebp-D8h]
  FreeEntry *v79; // [esp+30h] [ebp-D4h]
  int v80; // [esp+34h] [ebp-D0h]
  int *v81; // [esp+38h] [ebp-CCh]
  BSStringT v82; // [esp+3Ch] [ebp-C8h] BYREF
  BSStringT Str1; // [esp+44h] [ebp-C0h] BYREF
  int *v84; // [esp+4Ch] [ebp-B8h]
  BSStringT v85; // [esp+50h] [ebp-B4h] BYREF
  BSStringT v86; // [esp+58h] [ebp-ACh] BYREF
  float v87; // [esp+60h] [ebp-A4h]
  float v88; // [esp+64h] [ebp-A0h]
  int v89; // [esp+68h] [ebp-9Ch]
  BSStringT a2; // [esp+6Ch] [ebp-98h] BYREF
  int v91; // [esp+74h] [ebp-90h]
  int v92; // [esp+78h] [ebp-8Ch]
  BSStringT v93; // [esp+7Ch] [ebp-88h] BYREF
  BSStringT v94; // [esp+84h] [ebp-80h] BYREF
  BSStringT v95; // [esp+8Ch] [ebp-78h] BYREF
  BSStringT v96; // [esp+94h] [ebp-70h] BYREF
  BSStringT v97; // [esp+9Ch] [ebp-68h] BYREF
  BSStringT v98; // [esp+A4h] [ebp-60h] BYREF
  float v99; // [esp+ACh] [ebp-58h]
  float v100; // [esp+B0h] [ebp-54h]
  float v101; // [esp+B4h] [ebp-50h]
  float v102; // [esp+B8h] [ebp-4Ch]
  int v103; // [esp+BCh] [ebp-48h] BYREF
  int v104; // [esp+C0h] [ebp-44h]
  float v105; // [esp+C4h] [ebp-40h]
  float v106; // [esp+C8h] [ebp-3Ch]
  float v107; // [esp+CCh] [ebp-38h]
  float v108; // [esp+D0h] [ebp-34h]
  int v109; // [esp+D4h] [ebp-30h]
  BSStringT v110; // [esp+D8h] [ebp-2Ch] BYREF
  char v111; // [esp+E0h] [ebp-24h] BYREF
  char v112; // [esp+E4h] [ebp-20h] BYREF
  int v113; // [esp+E8h] [ebp-1Ch]
  int v114; // [esp+100h] [ebp-4h]
  int savedregs; // [esp+104h] [ebp+0h] BYREF

  v78 = this; /*0x577c42*/
  m_dataLen = arg0->m_dataLen; /*0x577c49*/
  if ( m_dataLen == 0xFFFF ) /*0x577c53*/
    v4 = strlen(arg0->m_data); /*0x577c6b*/
  else
    v4 = m_dataLen; /*0x577c6f*/
  v5 = v4 + 1; /*0x577c74*/
  v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, v5 | 0x100000000LL, v71); /*0x577c83*/
  v79 = v6; /*0x577c87*/
  _memset((int)v6, 0, v5); /*0x577c8b*/
  m_data = arg0->m_data; /*0x577c93*/
  v8 = v6; /*0x577c98*/
  do /*0x577cac*/
  {
    v9 = *m_data; /*0x577ca0*/
    LOBYTE(v8->prev) = *m_data++; /*0x577ca2*/
    v8 = (FreeEntry *)((char *)v8 + 1); /*0x577ca7*/
  }
  while ( v9 ); /*0x577cac*/
  v75 = 0; /*0x577cae*/
  v73 = 0; /*0x577cb2*/
  LOBYTE(v76) = 0; /*0x577cb6*/
  v85.m_data = 0; /*0x577cba*/
  v85.m_dataLen = 0; /*0x577cbe*/
  v85.m_bufLen = 0; /*0x577cc3*/
  v114 = 0; /*0x577cc8*/
  Str1.m_data = 0; /*0x577ccf*/
  Str1.m_dataLen = 0; /*0x577cd3*/
  Str1.m_bufLen = 0; /*0x577cd8*/
  v82.m_data = 0; /*0x577cdd*/
  v82.m_dataLen = 0; /*0x577ce1*/
  v82.m_bufLen = 0; /*0x577ce6*/
  Src.m_data = 0; /*0x577ceb*/
  Src.m_dataLen = 0; /*0x577cef*/
  Src.m_bufLen = 0; /*0x577cf4*/
  a2.m_data = 0; /*0x577cf9*/
  a2.m_dataLen = 0; /*0x577cfd*/
  a2.m_bufLen = 0; /*0x577d02*/
  *(float *)&v86.m_data = flt_A68A90; /*0x577d0d*/
  *(float *)&v86.m_dataLen = flt_A68A8C; /*0x577d1d*/
  v87 = flt_A68A88; /*0x577d30*/
  v88 = 1.0; /*0x577d3c*/
  LOBYTE(v114) = 4; /*0x577d54*/
  sub_576F30((float *)&v103, 0, 0x20, (int)v86.m_data, *(int *)&v86.m_dataLen, SLODWORD(v87), COERCE_INT(1.0), 1); /*0x577d5f*/
  LOBYTE(v114) = 5; /*0x577d81*/
  v72 = 0; /*0x577d89*/
  v74 = 0; /*0x577d8d*/
  LOBYTE(v80) = 0; /*0x577d91*/
  v81 = 0; /*0x577d95*/
  sub_574E00(&v86, (int)v6, &v75, 0, 4, &v73, (char *)&v76, 0); /*0x577d99*/
  FormHeapFree((unsigned int)v86.m_data); /*0x577da3*/
  v10 = a3; /*0x577da8*/
  if ( v73 == 1 )
  {
    v11 = (int *)FormHeapAlloc(0x1Cu); /*0x577dbb*/
    if ( v11 ) /*0x577dc5*/
    {
      v12 = a3[9]; /*0x577dc7*/
      v13 = a3[8]; /*0x577dca*/
      v14 = a3[7]; /*0x577dcd*/
      v11[3] = 0; /*0x577dd0*/
      v11[1] = 0; /*0x577dd3*/
      v11[2] = 0; /*0x577dd6*/
      *v11 = (int)&NiTList<FontManager::TextPage *>::`vftable'; /*0x577dd9*/
      v11[4] = v14; /*0x577ddf*/
      v11[5] = v13; /*0x577de2*/
      v11[6] = v12; /*0x577de5*/
    }
    else
    {
      v11 = 0; /*0x577dea*/
    }
    v84 = v11; /*0x577dec*/
    v81 = v11; /*0x577df0*/
    v75 = 0; /*0x577df4*/
    while ( 1 )
    {
      v15 = sub_574E00(&v95, (int)v79, &v75, 1, 0, &v73, (char *)&v76, 1)->m_data; /*0x577e22*/
      LOBYTE(v114) = 6; /*0x577e2a*/
      BSStringT_Set(&v85, v15, 0); /*0x577e32*/
      LOBYTE(v114) = 5; /*0x577e3f*/
      FormHeapFree((unsigned int)v95.m_data); /*0x577e47*/
      v16 = v85.m_data; /*0x577e4c*/
      v95.m_data = 0; /*0x577e55*/
      v95.m_bufLen = 0; /*0x577e5c*/
      v95.m_dataLen = 0; /*0x577e64*/
      if ( v85.m_data )
      {
        if ( v72 ) /*0x577e76*/
        {
          v68 = v80; /*0x577e80*/
          v65 = v74; /*0x577e81*/
          v72 = 0; /*0x577e89*/
          LOBYTE(v104) = 0; /*0x577e8d*/
          v17 = sub_577060(&v103); /*0x577e94*/
          sub_577B40(v84, (signed int *)v17, v65, v68); /*0x577e9e*/
          v74 = 0; /*0x577eb0*/
          LOBYTE(v80) = 0; /*0x577eb4*/
          BSStringT_Set(&v110, EmptyString, 0); /*0x577eb8*/
        }
        BSStringT_Append(&a2, v16); /*0x577ec2*/
        for ( i = 0; ; ++i )
        {
          v19 = v85.m_dataLen == (__int16)0xFFFF ? strlen(v16) : (unsigned __int16)v85.m_dataLen;
          if ( i >= v19 ) /*0x577ef2*/
            break; /*0x577ef2*/
          sub_577120(&v103, v16[i]); /*0x577f00*/
          v69 = v80; /*0x577f0d*/
          v66 = v74; /*0x577f0e*/
          v20 = sub_577060(&v103); /*0x577f16*/
          sub_577B40(v84, (signed int *)v20, v66, v69); /*0x577f20*/
          v74 = 0; /*0x577f25*/
          LOBYTE(v80) = 0; /*0x577f29*/
        }
      }
      if ( (v73 & 0x20) != 0 ) /*0x577f37*/
        break; /*0x577f37*/
      v21 = sub_574E00(&v96, (int)v79, &v75, 6, 0, &v73, (char *)&v76, 1)->m_data; /*0x577f67*/
      LOBYTE(v114) = 7; /*0x577f6f*/
      BSStringT_Set(&Str1, v21, 0); /*0x577f77*/
      LOBYTE(v114) = 5; /*0x577f84*/
      FormHeapFree((unsigned int)v96.m_data); /*0x577f8c*/
      v96.m_data = 0; /*0x577f94*/
      v96.m_bufLen = 0; /*0x577f9b*/
      v96.m_dataLen = 0; /*0x577fa3*/
      for ( j = 0; ; ++j )
      {
        v23 = Str1.m_dataLen == (__int16)0xFFFF ? strlen(Str1.m_data) : (unsigned __int16)Str1.m_dataLen;
        if ( j >= v23 ) /*0x577fd2*/
          break; /*0x577fd2*/
        v24 = &Str1.m_data[Str1.m_data != 0 ? j : 0];
        *v24 = toupper(*v24); /*0x577ff0*/
      }
      if ( (v73 & 0x20) != 0 ) /*0x577ffd*/
        break; /*0x577ffd*/
      if ( (v73 & 4) != 0 )
      {
        do
        {
          sub_574E00(&v93, (int)v79, &v75, 0, 4, &v73, (char *)&v76, 0); /*0x57802f*/
          FormHeapFree((unsigned int)v93.m_data); /*0x578039*/
          v93.m_data = 0; /*0x578046*/
          v93.m_bufLen = 0; /*0x57804a*/
          v93.m_dataLen = 0; /*0x578052*/
          if ( (v73 & 0x22) != 0 ) /*0x57805a*/
            break; /*0x57805a*/
          v25 = sub_574E00(&v98, (int)v79, &v75, 0x16, 0, &v73, (char *)&v76, 1)->m_data; /*0x57808a*/
          LOBYTE(v114) = 8; /*0x578092*/
          BSStringT_Set(&v82, v25, 0); /*0x57809a*/
          LOBYTE(v114) = 5; /*0x5780a7*/
          FormHeapFree((unsigned int)v98.m_data); /*0x5780af*/
          v98.m_data = 0; /*0x5780b7*/
          v98.m_bufLen = 0; /*0x5780be*/
          v98.m_dataLen = 0; /*0x5780c6*/
          for ( k = 0; ; ++k )
          {
            v27 = v82.m_dataLen == (__int16)0xFFFF ? strlen(v82.m_data) : (unsigned __int16)v82.m_dataLen;
            if ( k >= v27 ) /*0x5780f4*/
              break; /*0x5780f4*/
            v28 = &v82.m_data[v82.m_data != 0 ? k : 0];
            *v28 = toupper(*v28); /*0x578112*/
          }
          if ( (v73 & 0x22) != 0 ) /*0x57811f*/
            break; /*0x57811f*/
          if ( (v73 & 4) != 0 )
          {
            BSStringT_Set(&Src, "true", 0); /*0x578133*/
          }
          else
          {
            sub_574E00(&v97, (int)v79, &v75, 0, 4, &v73, (char *)&v76, 0); /*0x5781bb*/
            FormHeapFree((unsigned int)v97.m_data); /*0x5781c8*/
            v97.m_data = 0; /*0x5781d6*/
            v97.m_bufLen = 0; /*0x5781dd*/
            v97.m_dataLen = 0; /*0x5781e5*/
            if ( (v73 & 0x22) != 0 ) /*0x5781ed*/
              break; /*0x5781ed*/
            if ( v73 == 8 )
            {
              v31 = (int)v79; /*0x5781fe*/
              ++v75; /*0x578206*/
              v32 = sub_574E00(&v94, (int)v79, &v75, 0xA, 0, &v73, (char *)&v76, 1)->m_data; /*0x57822d*/
              LOBYTE(v114) = 9; /*0x578235*/
              BSStringT_Set(&Src, v32, 0); /*0x57823d*/
              LOBYTE(v114) = 5; /*0x57824a*/
              FormHeapFree((unsigned int)v94.m_data); /*0x578252*/
              v33 = *(_BYTE *)(v31 + v75++); /*0x57825b*/
              LOBYTE(v76) = v33; /*0x578268*/
              v94.m_data = 0; /*0x578273*/
              v94.m_bufLen = 0; /*0x57827a*/
              v94.m_dataLen = 0; /*0x578282*/
              v73 = sub_573760(v33); /*0x57828f*/
            }
            else
            {
              v34 = sub_574E00(&v86, (int)v79, &v75, 6, 0, &v73, (char *)&v76, 1)->m_data; /*0x5782bd*/
              LOBYTE(v114) = 0xA; /*0x5782c5*/
              BSStringT_Set(&Src, v34, 0); /*0x5782cd*/
              LOBYTE(v114) = 5; /*0x5782d7*/
              FormHeapFree((unsigned int)v86.m_data); /*0x5782df*/
              v86.m_data = 0; /*0x5782e7*/
              *(_DWORD *)&v86.m_dataLen = 0; /*0x5782f0*/
              for ( m = 0; ; ++m )
              {
                v36 = Src.m_dataLen == (__int16)0xFFFF ? strlen(Src.m_data) : (unsigned __int16)Src.m_dataLen;
                if ( m >= v36 ) /*0x578322*/
                  break; /*0x578322*/
                v37 = &Src.m_data[Src.m_data != 0 ? m : 0];
                *v37 = toupper(*v37); /*0x578344*/
              }
            }
          }
          v29 = Str1.m_data; /*0x578138*/
          if ( !Str1.m_data || CRT_StricmpLocaleDispatch(Str1.m_data, off_A68AF4) ) /*0x57814a*/
          {
            if ( v72 ) /*0x5783b5*/
            {
              v70 = v80; /*0x5783bf*/
              v67 = v74; /*0x5783c0*/
              v72 = 0; /*0x5783c8*/
              LOBYTE(v104) = 0; /*0x5783cc*/
              v38 = sub_577060(&v103); /*0x5783d3*/
              sub_577B40(v84, (signed int *)v38, v67, v70); /*0x5783dd*/
              v74 = 0; /*0x5783ef*/
              LOBYTE(v80) = 0; /*0x5783f3*/
              BSStringT_Set(&v110, EmptyString, 0); /*0x5783f7*/
            }
            v30 = v82.m_data; /*0x5783fc*/
          }
          else
          {
            v30 = v82.m_data; /*0x57815a*/
            v72 = 1; /*0x578160*/
            if ( v82.m_data ) /*0x578165*/
            {
              if ( CRT_StricmpLocaleDispatch(v82.m_data, off_A68AF0) ) /*0x578171*/
              {
                if ( CRT_StricmpLocaleDispatch(v30, "WIDTH") ) /*0x578351*/
                {
                  if ( !CRT_StricmpLocaleDispatch(v30, "HEIGHT") ) /*0x578382*/
                  {
                    sscanf(Src.m_data, "%i", &v112); /*0x5783a0*/
                    v113 = 0; /*0x5783a8*/
                  }
                }
                else
                {
                  sscanf(Src.m_data, "%i", &v111); /*0x57836f*/
                }
              }
              else
              {
                BSStringT_Set(&v110, Src.m_data, 0); /*0x57818e*/
              }
            }
          }
          if ( v29 )
          {
            if ( CRT_StricmpLocaleDispatch(v29, off_A68ADC) )
            {
              if ( !CRT_StricmpLocaleDispatch(v29, "FONT") && v30 )
              {
                if ( !CRT_StricmpLocaleDispatch(v30, "FACE") ) /*0x5784db*/
                {
                  v40 = 0; /*0x5784e7*/
                  while ( CRT_StricmpLocaleDispatch(Src.m_data, *(const char **)(v78[v40] + 4)) ) /*0x578500*/
                  {
                    v41 = v40 + 1; /*0x578511*/
                    if ( v40 + 1 == j__atol(Src.m_data) ) /*0x57851e*/
                      break; /*0x57851e*/
                    ++v40; /*0x578520*/
                    if ( v41 >= 5 ) /*0x578525*/
                      goto LABEL_80; /*0x578525*/
                  }
                  v103 = v40; /*0x578538*/
                  sub_577120(&v103, v104); /*0x57853f*/
                }
LABEL_80:
                if ( !CRT_StricmpLocaleDispatch(v82.m_data, "COLOR") )
                {
                  v42 = Src.m_data; /*0x578567*/
                  if ( Src.m_dataLen == (__int16)0xFFFF ) /*0x57856b*/
                    v43 = strlen(Src.m_data); /*0x57856f*/
                  else
                    v43 = (unsigned __int16)Src.m_dataLen; /*0x57857f*/
                  if ( v43 == 6 )
                  {
                    if ( toupper(*Src.m_data) < 0x41 ) /*0x57859a*/
                      v44 = toupper(*v42) - 0x30; /*0x5785b9*/
                    else
                      v44 = toupper(*v42) - 0x37; /*0x5785a8*/
                    v45 = Src.m_data; /*0x5785bc*/
                    v46 = 0x10 * v44; /*0x5785c8*/
                    if ( toupper(Src.m_data[1]) < 0x41 ) /*0x5785d5*/
                      v47 = toupper(v45[1]) - 0x30; /*0x5785f6*/
                    else
                      v47 = toupper(v45[1]) - 0x37; /*0x5785e4*/
                    v89 = v47 + v46 <= 0 ? 0 : v47 + v46;
                    if ( v89 >= 0xFF ) /*0x578610*/
                      v89 = 0xFF; /*0x578612*/
                    if ( toupper(v45[2]) < 0x41 ) /*0x57862a*/
                      v48 = toupper(v45[2]) - 0x30; /*0x57864b*/
                    else
                      v48 = toupper(v45[2]) - 0x37; /*0x578639*/
                    v49 = 0x10 * v48; /*0x578656*/
                    if ( toupper(v45[3]) < 0x41 ) /*0x578663*/
                      v50 = toupper(v45[3]) - 0x30; /*0x578684*/
                    else
                      v50 = toupper(v45[3]) - 0x37; /*0x578672*/
                    v92 = v50 + v49 <= 0 ? 0 : v50 + v49;
                    if ( v92 >= 0xFF ) /*0x57869e*/
                      v92 = 0xFF; /*0x5786a0*/
                    if ( toupper(v45[4]) < 0x41 ) /*0x5786b8*/
                      v51 = toupper(v45[4]) - 0x30; /*0x5786d9*/
                    else
                      v51 = toupper(v45[4]) - 0x37; /*0x5786c7*/
                    v52 = 0x10 * v51; /*0x5786e4*/
                    if ( toupper(v45[5]) < 0x41 ) /*0x5786f1*/
                      v53 = toupper(v45[5]) - 0x30; /*0x578712*/
                    else
                      v53 = toupper(v45[5]) - 0x37; /*0x578700*/
                    v91 = v53 + v52 <= 0 ? 0 : v53 + v52;
                    if ( v91 >= 0xFF ) /*0x57872c*/
                      v91 = 0xFF; /*0x57872e*/
                    v54 = dbl_A3DDD8; /*0x578742*/
                    v99 = (double)v89 / v54; /*0x578744*/
                    v105 = v99; /*0x578756*/
                    v100 = (double)v92 / v54; /*0x57875f*/
                    v106 = v100; /*0x57876d*/
                    v101 = (double)v91 / v54; /*0x578778*/
                    v102 = 1.0; /*0x578788*/
                    v107 = v101; /*0x57878f*/
                    v108 = 1.0; /*0x57879d*/
                  }
                }
              }
            }
            else
            {
              ++v74; /*0x57841e*/
              if ( v30 ) /*0x578425*/
              {
                if ( !CRT_StricmpLocaleDispatch(v30, "ALIGN") ) /*0x578431*/
                {
                  v39 = Src.m_data; /*0x578441*/
                  if ( Src.m_data ) /*0x578447*/
                  {
                    if ( CRT_StricmpLocaleDispatch(Src.m_data, "LEFT") ) /*0x578453*/
                    {
                      if ( CRT_StricmpLocaleDispatch(v39, "CENTER") ) /*0x578475*/
                      {
                        if ( !CRT_StricmpLocaleDispatch(v39, "RIGHT") ) /*0x578497*/
                          v109 = 4; /*0x5784a7*/
                      }
                      else
                      {
                        v109 = 2; /*0x578481*/
                      }
                    }
                    else
                    {
                      v109 = 1; /*0x57845f*/
                    }
                  }
                }
              }
            }
          }
        }
        while ( (v73 & 0x22) == 0 );
      }
      if ( Str1.m_data ) /*0x5787b3*/
      {
        v55 = Str1.m_data; /*0x5787b9*/
        if ( CRT_StricmpLocaleDispatch(Str1.m_data, "BR") ) /*0x5787c3*/
        {
          if ( CRT_StricmpLocaleDispatch(v55, "P") ) /*0x5787df*/
          {
            if ( CRT_StricmpLocaleDispatch(v55, "HR") ) /*0x5787fb*/
            {
              if ( !CRT_StricmpLocaleDispatch(v55, "/FONT") ) /*0x578831*/
                sub_577690((float *)&v103); /*0x578848*/
            }
            else if ( a3[8] == 0x7FFFFFFF ) /*0x578811*/
            {
              v74 += 2; /*0x578813*/
            }
            else
            {
              LOBYTE(v80) = 1; /*0x57881d*/
              v74 = 0; /*0x578822*/
            }
          }
          else
          {
            v74 += 2; /*0x5787eb*/
          }
        }
        else
        {
          ++v74; /*0x5787cf*/
        }
      }
    }
    BSStringT_Set(arg0, a2.m_data, 0); /*0x57885b*/
    v10 = a3; /*0x578860*/
    v6 = v79; /*0x578863*/
  }
  MemoryHeap_Free_checked(v6); /*0x57886d*/
  v56 = v81; /*0x578872*/
  if ( v81 ) /*0x578878*/
  {
    *((_BYTE *)v10 + 0x34) = 1; /*0x57887a*/
    v10[0xB] = v56[3]; /*0x578881*/
    if ( v56[3] ) /*0x578884*/
    {
      v57 = (_DWORD *)v56[1]; /*0x578889*/
      v58 = v56[6]; /*0x57888e*/
      if ( v57 ) /*0x578891*/
      {
        while ( v58-- ) /*0x578893*/
        {
          v57 = (_DWORD *)*v57; /*0x57889c*/
          if ( !v57 ) /*0x5788a0*/
            goto LABEL_136; /*0x5788a0*/
        }
        v60 = v57[2]; /*0x5788a8*/
        if ( v60 ) /*0x5788ad*/
        {
          v10[8] = 0; /*0x5788af*/
          v10[7] = 0; /*0x5788b2*/
          for ( n = *(_DWORD **)(v60 + 4); n; v10[7] = v63 ) /*0x5788ba*/
          {
            v62 = (_DWORD *)n[2]; /*0x5788c3*/
            n = (_DWORD *)*n; /*0x5788cb*/
            v10[8] += v62[6] + v62[8]; /*0x5788cd*/
            v63 = v62[4]; /*0x5788d3*/
            if ( v10[7] > v63 ) /*0x5788d8*/
              v63 = v10[7]; /*0x5788da*/
          }
          v10[0xC] = *(_DWORD *)(v60 + 0xC); /*0x5788e6*/
        }
        v56 = v81; /*0x5788e9*/
      }
    }
  }
LABEL_136:
  FormHeapFree((unsigned int)v110.m_data); /*0x5788ed*/
  v110.m_data = 0; /*0x5788ff*/
  v110.m_bufLen = 0; /*0x578906*/
  v110.m_dataLen = 0; /*0x57890e*/
  FormHeapFree((unsigned int)a2.m_data); /*0x578916*/
  FormHeapFree((unsigned int)Src.m_data); /*0x578920*/
  FormHeapFree((unsigned int)v82.m_data); /*0x57892a*/
  FormHeapFree((unsigned int)Str1.m_data); /*0x578934*/
  FormHeapFree((unsigned int)v85.m_data); /*0x57893e*/
  return v56; /*0x578948*/
}
