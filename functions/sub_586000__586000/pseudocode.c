char __userpurge sub_586000@<al>(
        int a1@<ecx>,
        double st6_0@<st1>,
        double a3@<st0>,
        double a4@<st2>,
        double a5@<st3>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st5>,
        int a9)
{
  _DWORD *v9; // edi
  bool v10; // cc
  double v11; // st3
  float *v12; // eax
  int i; // edx
  int j; // eax
  int v15; // edx
  int m; // eax
  int v17; // eax
  signed int v18; // ebp
  InterfaceManager *Singleton; // eax
  _DWORD *v20; // ebx
  int v21; // ecx
  int v22; // ebp
  int v23; // eax
  int (__usercall *v24)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>); // eax
  int v25; // esi
  int v26; // edi
  int v27; // eax
  double v28; // st7
  double v29; // st7
  float *v30; // eax
  int v31; // ebp
  TESObjectREFR *v33; // ebp
  char *Name; // eax
  NiObject *v35; // eax
  NiObject *v36; // eax
  int v37; // eax
  char *v38; // esi
  void (__thiscall ***v39)(_DWORD, int); // ecx
  Tile *File; // esi
  Tile *v41; // eax
  Tile *v42; // eax
  Tile *v43; // esi
  bool v44; // c3
  int mm; // eax
  int v46; // eax
  int n; // esi
  int v48; // eax
  char v49; // al
  signed int ii; // eax
  NiNode *v51; // eax
  _DWORD *v52; // edx
  char *v53; // ecx
  InterfaceManager *v54; // eax
  Tile *TileByName; // esi
  int v56; // eax
  UInt32 v57; // edi
  char v58; // al
  InterfaceManager *v59; // eax
  char v60; // al
  void *OpenMenuTile; // eax
  void **v62; // eax
  _DWORD **v63; // eax
  char *v64; // eax
  _DWORD *v65; // edi
  unsigned int jj; // edx
  unsigned int kk; // edx
  InterfaceManager *v68; // eax
  int v69; // edx
  int v70; // edx
  _DWORD *v71; // ecx
  _DWORD *v72; // ecx
  int v73; // eax
  int v74; // ecx
  int **v75; // eax
  int v76; // eax
  int v77; // eax
  const char **v78; // ecx
  bool v79; // zf
  char *m_data; // eax
  char v81; // cl
  char *v82; // eax
  int v83; // edx
  int k; // esi
  int v85; // eax
  float *v86; // eax
  float v87; // [esp+0h] [ebp-1FA8h]
  float v88; // [esp+0h] [ebp-1FA8h]
  float v89; // [esp+4h] [ebp-1FA4h]
  float v90; // [esp+4h] [ebp-1FA4h]
  float v91; // [esp+Ch] [ebp-1F9Ch]
  float v92; // [esp+10h] [ebp-1F98h]
  _DWORD *v93; // [esp+10h] [ebp-1F98h]
  float v94; // [esp+10h] [ebp-1F98h]
  float v95; // [esp+10h] [ebp-1F98h]
  size_t v96; // [esp+14h] [ebp-1F94h]
  size_t v97; // [esp+14h] [ebp-1F94h]
  size_t v98; // [esp+14h] [ebp-1F94h]
  size_t v99; // [esp+14h] [ebp-1F94h]
  _DWORD *refID; // [esp+14h] [ebp-1F94h]
  size_t v101; // [esp+14h] [ebp-1F94h]
  char *v102; // [esp+14h] [ebp-1F94h]
  size_t v103; // [esp+14h] [ebp-1F94h]
  size_t v104; // [esp+14h] [ebp-1F94h]
  size_t v105; // [esp+14h] [ebp-1F94h]
  float v106; // [esp+14h] [ebp-1F94h]
  size_t v107; // [esp+14h] [ebp-1F94h]
  _DWORD *v108; // [esp+14h] [ebp-1F94h]
  size_t v109; // [esp+14h] [ebp-1F94h]
  _DWORD *v110; // [esp+14h] [ebp-1F94h]
  size_t v111; // [esp+14h] [ebp-1F94h]
  size_t v112; // [esp+14h] [ebp-1F94h]
  size_t v113; // [esp+14h] [ebp-1F94h]
  size_t v114; // [esp+14h] [ebp-1F94h]
  size_t v115; // [esp+14h] [ebp-1F94h]
  size_t v116; // [esp+14h] [ebp-1F94h]
  size_t v117; // [esp+14h] [ebp-1F94h]
  size_t v118; // [esp+14h] [ebp-1F94h]
  size_t v119; // [esp+14h] [ebp-1F94h]
  size_t v120; // [esp+14h] [ebp-1F94h]
  size_t v121; // [esp+14h] [ebp-1F94h]
  size_t v122; // [esp+14h] [ebp-1F94h]
  size_t v123; // [esp+14h] [ebp-1F94h]
  _DWORD *v124; // [esp+14h] [ebp-1F94h]
  char v125; // [esp+18h] [ebp-1F90h]
  int v126; // [esp+18h] [ebp-1F90h]
  int v127; // [esp+1Ch] [ebp-1F8Ch]
  int v128; // [esp+1Ch] [ebp-1F8Ch]
  BSStringT v129; // [esp+2Ch] [ebp-1F7Ch] BYREF
  _DWORD *v130; // [esp+34h] [ebp-1F74h] BYREF
  BSStringT v131; // [esp+38h] [ebp-1F70h] BYREF
  BSStringT v132; // [esp+40h] [ebp-1F68h] BYREF
  char *v133; // [esp+48h] [ebp-1F60h]
  _DWORD *v134; // [esp+4Ch] [ebp-1F5Ch]
  char *v135; // [esp+50h] [ebp-1F58h]
  int a2[7]; // [esp+54h] [ebp-1F54h] BYREF
  Script v137; // [esp+70h] [ebp-1F38h] BYREF
  char ArgList[128]; // [esp+F0h] [ebp-1EB8h] BYREF
  char Src[2048]; // [esp+170h] [ebp-1E38h] BYREF
  unsigned __int8 v140[1024]; // [esp+970h] [ebp-1638h] BYREF
  char v141[2600]; // [esp+D70h] [ebp-1238h] BYREF
  unsigned __int8 v142[2048]; // [esp+1798h] [ebp-810h] BYREF
  int v143; // [esp+1FA4h] [ebp-4h]

  v9 = (_DWORD *)a1; /*0x58603f*/
  v10 = *(_BYTE *)(a1 + 0x31) <= 0; /*0x586043*/
  v130 = (_DWORD *)a1; /*0x586047*/
  if ( v10 || LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) == 1 ) /*0x586060*/
    return 0; /*0x587409*/
  if ( !a9 ) /*0x58606f*/
    return 1; /*0x58606f*/
  v92 = (float)unk_B3A704; /*0x586087*/
  v11 = (double)unk_B3A700; /*0x58608b*/
  v91 = v11; /*0x586091*/
  v12 = sub_571F90(1); /*0x586097*/
  sub_571660(v12, (int)v9, v142, v91, v92, 1); /*0x5860a1*/
  LODWORD(v96) = 0x7FE; /*0x5860a6*/
  _mbsnbcpy((unsigned __int8 *)Src, v142, v96); /*0x5860bb*/
  for ( i = 0; Src[i]; ++i ) /*0x5860cc*/
    ; /*0x5860d0*/
  if ( ArgList[i + 0x7F] == 0x7C ) /*0x5860e5*/
    Src[--i] = 0; /*0x5860ea*/
  for ( j = 0; j < i; ++j ) /*0x5860f6*/
  {
    if ( Src[j] == 0x7C ) /*0x586108*/
      break; /*0x586108*/
  }
  if ( j == i ) /*0x586113*/
  {
    Src[j] = 0x7C; /*0x586115*/
    ++i; /*0x58611d*/
  }
  if ( a9 != 0x80000008 )
  {
    switch ( a9 )
    {
      case 0x80000000:
        if ( i ) /*0x587014*/
        {
          if ( j ) /*0x58701c*/
          {
            v69 = i - 1; /*0x587022*/
            if ( j < v69 ) /*0x587027*/
            {
              qmemcpy(&Src[j], &Src[j + 1], v69 - j); /*0x58703b*/
              v9 = v130; /*0x58703d*/
            }
            Src[v69] = 0; /*0x587043*/
            ArgList[j + 0x7F] = 0x7C; /*0x58704b*/
          }
        }
        break;
      case 0x80000007:
        if ( j < i ) /*0x587062*/
        {
          v70 = i - 1; /*0x587068*/
          if ( j < v70 ) /*0x58706d*/
          {
            qmemcpy(&Src[j], &Src[j + 1], v70 - j); /*0x587081*/
            v9 = v130; /*0x587083*/
          }
          Src[v70] = 0; /*0x587089*/
          Src[j] = 0x7C; /*0x587091*/
        }
        break;
      case 0x80000009:
        sub_5855E0(v9, 1 - dword_B1398C); /*0x5870b4*/
        sub_585620(v71); /*0x5870b9*/
        break;
      case 0x8000000A:
        sub_5855E0(v9, dword_B1398C - 1); /*0x5870d7*/
        sub_585620(v72); /*0x5870dc*/
        break;
      case 0x80000003:
        v73 = v9[8]; /*0x5870ee*/
        if ( v73 ) /*0x5870f3*/
        {
          v74 = ++v9[9]; /*0x5870fd*/
          if ( v74 >= v73 - 1 ) /*0x587105*/
            v74 = v73 - 1; /*0x587107*/
          v75 = (int **)v9[6]; /*0x58710c*/
          v9[9] = v74; /*0x58710f*/
          if ( v74 > 0 ) /*0x587112*/
          {
            do /*0x587121*/
            {
              if ( v75 ) /*0x587116*/
                v75 = (int **)*v75; /*0x587118*/
              else
                v75 = 0; /*0x58711c*/
              --v74; /*0x58711e*/
            }
            while ( v74 ); /*0x587121*/
          }
          _sprintf(Src, "%s", (const char *)v75[2]); /*0x587134*/
        }
        break;
      case 0x80000004:
        if ( v9[8] )
        {
          v76 = --v9[9]; /*0x58715c*/
          v129.m_data = 0; /*0x587166*/
          v129.m_dataLen = 0; /*0x58716a*/
          v129.m_bufLen = 0; /*0x58716f*/
          v77 = v76 <= 0 ? 0 : v76;
          v9[9] = v77; /*0x587179*/
          v143 = 5; /*0x58717e*/
          if ( !v77 ) /*0x587189*/
            goto LABEL_172; /*0x587189*/
          v78 = (const char **)v9[6]; /*0x58718b*/
          if ( v77 > 0 ) /*0x58718e*/
          {
            do /*0x58719d*/
            {
              if ( v78 ) /*0x587192*/
                v78 = (const char **)*v78; /*0x587194*/
              else
                v78 = 0; /*0x587198*/
              --v77; /*0x58719a*/
            }
            while ( v77 ); /*0x58719d*/
          }
          if ( v78 ) /*0x5871a1*/
            sub_4FB4C0(&v129, v78 + 2); /*0x5871ab*/
          else
LABEL_172:
            BSStringT_Set(&v129, EmptyString, 0); /*0x5871bc*/
          v79 = BSStringT_GetLen(&v129) == 0; /*0x5871ca*/
          m_data = v129.m_data; /*0x5871cc*/
          if ( v79 ) /*0x5871d0*/
            m_data = EmptyString; /*0x5871d2*/
          _sprintf(Src, "%s", m_data); /*0x5871e5*/
          v143 = 0xFFFFFFFF; /*0x5871f1*/
          BSStringT_Clear((unsigned int *)&v129); /*0x5871f8*/
        }
        break;
      case 0x80000001:
        if ( i ) /*0x58720c*/
        {
          if ( j ) /*0x587214*/
          {
            v81 = ArgList[j + 0x7F]; /*0x58721a*/
            v82 = &Src[j]; /*0x587221*/
            *v82 = v81; /*0x587228*/
            v82[0xFFFFFFFF] = 0x7C; /*0x58722a*/
          }
        }
        break;
      case 0x80000002:
        if ( i ) /*0x58723d*/
        {
          if ( j + 1 < i ) /*0x587248*/
          {
            Src[j] = Src[j + 1]; /*0x58725c*/
            Src[j + 1] = 0x7C; /*0x587263*/
          }
        }
        break;
      case 0x80000005:
        if ( i ) /*0x587275*/
        {
          if ( j ) /*0x58727d*/
          {
            for ( ; j > 0; --j ) /*0x587283*/
              Src[j] = ArgList[j + 0x7F]; /*0x587297*/
            Src[0] = 0x7C; /*0x5872a5*/
          }
        }
        break;
      case 0x80000006:
        if ( i ) /*0x5872b9*/
        {
          if ( j + 1 < i ) /*0x5872c0*/
          {
            if ( j < i - 1 ) /*0x5872c7*/
            {
              qmemcpy(&Src[j], &Src[j + 1], i - 1 - j); /*0x5872d9*/
              v9 = v130; /*0x5872db*/
            }
            ArgList[i + 0x7F] = 0x7C; /*0x5872e1*/
          }
        }
        break;
      default:
        v83 = i + 1; /*0x5872eb*/
        Src[j] = a9; /*0x5872f0*/
        for ( k = v83; k > j; --k ) /*0x5872f9*/
          Src[k + 1] = Src[k]; /*0x587307*/
        Src[v83 + 1] = 0; /*0x587315*/
        Src[j + 1] = 0x7C; /*0x58731d*/
        break;
    }
    v85 = 0; /*0x587325*/
    if ( Src[0] ) /*0x58732e*/
    {
      while ( Src[v85] != 0x7C ) /*0x587338*/
      {
        if ( !Src[++v85] ) /*0x58733d*/
          goto LABEL_202; /*0x587345*/
      }
    }
    else
    {
LABEL_202:
      Src[v85] = 0x7C; /*0x587347*/
      Src[v85 + 1] = 0; /*0x58734f*/
    }
    v129.m_data = 0; /*0x587364*/
    v129.m_dataLen = 0; /*0x587368*/
    v129.m_bufLen = 0; /*0x58736d*/
    BSStringT_Set(&v129, Src, 0); /*0x587372*/
    v79 = v9[8] == 0; /*0x587377*/
    v143 = 6; /*0x58737a*/
    if ( !v79 ) /*0x587385*/
    {
      sub_585AC0((int **)v9 + 5, &v131); /*0x587396*/
      FormHeapFree((unsigned int)v131.m_data); /*0x5873a0*/
    }
    sub_585A70(v9 + 5, (const char **)&v129.m_data); /*0x5873af*/
    v124 = (_DWORD *)dword_B13994; /*0x5873c0*/
    v95 = kTerrainLODQuadRayDirectionZ; /*0x5873c2*/
    v90 = (float)unk_B3A704; /*0x5873d9*/
    v88 = (float)unk_B3A700; /*0x5873e3*/
    v86 = sub_571F90(1); /*0x5873e9*/
    sub_5723E0((char *)v86, Src, v88, v90, 1, 0xFFFFFFFF, v95, (int)v124); /*0x5873f3*/
    FormHeapFree((unsigned int)v129.m_data); /*0x5873fd*/
    return 1; /*0x5873fd*/
  }
  v15 = i + 1; /*0x58612c*/
  for ( m = 0; m < v15; ++m ) /*0x586133*/
  {
    if ( Src[m] == 0x7C ) /*0x58613d*/
    {
      Src[m] = Src[m + 1]; /*0x586146*/
      Src[m + 1] = 0x7C; /*0x58614d*/
    }
  }
  v17 = 0; /*0x58615c*/
  if ( v15 > 0 ) /*0x586160*/
  {
    v18 = 0xFFFFFFFF; /*0x586162*/
    do /*0x5861bb*/
    {
      if ( Src[v17] == 0xA ) /*0x586178*/
      {
        if ( ArgList[v17 + 0x7F] == 0x2D ) /*0x586181*/
        {
          if ( v18 < v15 ) /*0x586185*/
            qmemcpy(&Src[v18], &Src[v18 + 2], v15 - v18); /*0x586195*/
        }
        else
        {
          Src[v17] = 0x20; /*0x586199*/
        }
        if ( Src[v17] == 0xA ) /*0x5861a9*/
          Src[v17] = 0x20; /*0x5861ab*/
      }
      ++v17; /*0x5861b3*/
      ++v18; /*0x5861b6*/
    }
    while ( v17 < v15 ); /*0x5861bb*/
  }
  if ( !Src[0] ) /*0x5861c5*/
    return 1; /*0x587407*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5861cf*/
  v20 = v130; /*0x5861d4*/
  v21 = v130[4]; /*0x5861d8*/
  v22 = (int)Singleton; /*0x5861db*/
  v23 = v21 + v130[0xB]; /*0x5861e0*/
  if ( v23 > v21 ) /*0x5861e7*/
    v23 = v130[4]; /*0x5861e9*/
  if ( v23 - dword_B1398C <= 0 ) /*0x5861f7*/
    v23 = dword_B1398C; /*0x5861f9*/
  if ( v23 > v21 ) /*0x5861fd*/
    v23 = v130[4]; /*0x5861ff*/
  v93 = v130; /*0x586209*/
  v130[0xB] = v23; /*0x58620a*/
  sub_585F40(v93, Src, v125, v127); /*0x58620d*/
  v132.m_data = 0; /*0x586224*/
  v132.m_dataLen = 0; /*0x586228*/
  v132.m_bufLen = 0; /*0x58622d*/
  BSStringT_Set(&v132, Src, 0); /*0x586232*/
  v24 = *(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>))(v20[5] + 4); /*0x58623a*/
  v143 = 0; /*0x58623d*/
  v25 = (int)(v20 + 5); /*0x586244*/
  v26 = v24(v20 + 5, a3, st6_0, a4, a5); /*0x58624f*/
  BSStringT_Set((BSStringT *)(v26 + 8), v132.m_data, 0); /*0x586257*/
  *(_DWORD *)(v26 + 4) = 0; /*0x58625c*/
  *(_DWORD *)v26 = v20[6]; /*0x586266*/
  v27 = v20[6]; /*0x586268*/
  if ( v27 ) /*0x58626d*/
    *(_DWORD *)(v27 + 4) = v26; /*0x58626f*/
  else
    v20[7] = v26; /*0x586274*/
  ++v20[8]; /*0x586277*/
  v28 = kTerrainLODQuadRayDirectionZ; /*0x58627b*/
  v20[6] = v26; /*0x586281*/
  v20[9] = 0; /*0x586284*/
  LODWORD(v97) = dword_B13994; /*0x586291*/
  v94 = v28; /*0x586293*/
  v89 = (float)unk_B3A704; /*0x5862a3*/
  v29 = (double)unk_B3A700; /*0x5862a7*/
  v87 = v29; /*0x5862ad*/
  v30 = sub_571F90(1); /*0x5862b7*/
  sub_5723E0((char *)v30, "|", v87, v89, 1, 0xFFFFFFFF, v94, v97); /*0x5862c1*/
  LODWORD(v97) = 3; /*0x5862c6*/
  if ( !sub_986B26(v26, v25, Src, off_A69F5C, v97) ) /*0x5862d5*/
  {
    *(float *)&v130 = 0.0; /*0x5862e8*/
    sscanf(Src, "dof %f", &v130); /*0x5862f9*/
    v31 = *(_DWORD *)v22; /*0x586302*/
    qmemcpy(a2, (const void *)(*(_DWORD *)(v31 + 0xDC) + 0xEC), sizeof(a2)); /*0x58631a*/
    a2[5] = (int)v130; /*0x58631c*/
    Camera_SetFrustum(*(NiCamera **)(v31 + 0xDC), (int)a2); /*0x58632e*/
    FormHeapFree((unsigned int)v132.m_data); /*0x586338*/
    return 1; /*0x586342*/
  }
  LODWORD(v98) = 3; /*0x586347*/
  if ( !sub_986B26(v26, v25, Src, off_A69F50, v98) ) /*0x586356*/
  {
    v131.m_data = 0; /*0x58636c*/
    sscanf(Src, "usz %i", &v131); /*0x586381*/
    sub_579370(v131.m_data, 0); /*0x586390*/
    FormHeapFree((unsigned int)v132.m_data); /*0x58639d*/
    return 1; /*0x5863a7*/
  }
  if ( !_mbsicmp((const unsigned __int8 *)Src, &off_A69F44) || !_mbscmp((const unsigned __int8 *)Src, &off_A69F40) ) /*0x5863d6*/
  {
    NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(v20 + 1)); /*0x586fe3*/
    v20[0xB] = 0; /*0x586fea*/
    sub_585620(v20); /*0x586ff1*/
    goto LABEL_77; /*0x586ff1*/
  }
  if ( !_mbsicmp((const unsigned __int8 *)Src, &off_A69F3C) ) /*0x5863f3*/
  {
    v33 = *(TESObjectREFR **)(v22 + 0xBC); /*0x586403*/
    if ( v33 ) /*0x58640d*/
    {
      v129.m_data = 0; /*0x586413*/
      v129.m_dataLen = 0; /*0x586417*/
      v129.m_bufLen = 0; /*0x58641c*/
      refID = (_DWORD *)v33->member.super.refID; /*0x586424*/
      LOBYTE(v143) = 1; /*0x586427*/
      Name = TESObjectREFR_GetName(v33); /*0x58642f*/
      BSStringT_Static_Format(&v129, "\"%s\" (%08x)", Name, refID); /*0x58643f*/
      v35 = (NiObject *)v33->vtbl->GetNiNode(v33); /*0x586452*/
      v36 = NiRTTI_Cast((BSStringT *)&parent, v35); /*0x58645a*/
      if ( !v36 ) /*0x586464*/
      {
        v37 = (int)v33->vtbl->GetNiNode(v33); /*0x586471*/
        v36 = NiRTTI_Cast((BSStringT *)&parent, *(NiObject **)(v37 + 0x1C)); /*0x58647c*/
      }
      v38 = v129.m_data; /*0x58648f*/
      sub_572850( /*0x586495*/
        st6_0,
        kTerrainLODQuadRayDirectionZ,
        (const void **)&v36->__vftable,
        v129.m_data,
        0,
        kTerrainLODQuadRayDirectionZ);
      FormHeapFree((unsigned int)v38); /*0x58649b*/
      FormHeapFree((unsigned int)v132.m_data); /*0x5864a8*/
      return 1; /*0x5864b2*/
    }
LABEL_77:
    FormHeapFree((unsigned int)v132.m_data); /*0x586809*/
    return 1; /*0x586818*/
  }
  LODWORD(v99) = 0xE; /*0x5864b7*/
  if ( sub_986B26(v26, v25, Src, "reload strings", v99) )
  {
    LODWORD(v101) = 0x11; /*0x586521*/
    if ( !sub_986B26(v26, v25, Src, "reload HUDReticle", v101) ) /*0x586530*/
    {
      sub_584DB0(); /*0x58653c*/
      sub_578CF0(v22, a4, st6_0, v29, a5, 3); /*0x586543*/
      FormHeapFree((unsigned int)v132.m_data); /*0x586550*/
      return 1; /*0x58655a*/
    }
    LODWORD(v103) = 0x12; /*0x58655f*/
    if ( !sub_986B26(v26, v25, Src, "reload HUDSafeZone", v103) ) /*0x58656e*/
    {
      sub_584DB0(); /*0x58657a*/
      sub_5798F0(a4, st6_0, v29, 3); /*0x586581*/
      FormHeapFree((unsigned int)v132.m_data); /*0x58658e*/
      return 1; /*0x586598*/
    }
    LODWORD(v104) = 3; /*0x58659d*/
    if ( sub_9868DD(v26, v25, Src, off_A69F00, v104) )
    {
      LODWORD(v105) = 7; /*0x58662e*/
      if ( sub_986B26(v26, v25, Src, "reload ", v105) )
      {
        LODWORD(v107) = 7; /*0x5866f5*/
        if ( !sub_986B26(v26, v25, Src, "delete ", v107) ) /*0x586704*/
        {
          sscanf(Src, "delete %s", v140); /*0x586725*/
          v110 = (_DWORD *)TileStringToStringID(v140); /*0x58673a*/
          Menu_GetB3A708(1); /*0x58673d*/
          sub_587440((int)v110); /*0x586747*/
          FormHeapFree((unsigned int)v132.m_data); /*0x586751*/
          return 1; /*0x58675b*/
        }
        LODWORD(v109) = 5; /*0x586760*/
        if ( !sub_9868DD(v26, v25, Src, "front", v109) )
        {
          Menu_GetB3A708(1); /*0x58677d*/
          v46 = sub_5877D0(); /*0x586787*/
          sub_585F40(v20, "Frontmost: %s", *(_DWORD *)(*(_DWORD *)(v46 + 4) + 8), SHIDWORD(v111));
          FormHeapFree((unsigned int)v132.m_data); /*0x5867a6*/
          return 1; /*0x5867b0*/
        }
        LODWORD(v111) = 5; /*0x5867b5*/
        if ( !sub_9868DD(v26, v25, Src, "stack", v111) )
        {
          for ( n = 0; sub_57CFA0((_DWORD *)v22, n); sub_585F40(v20, "%i: %i", n, v48) )
            v48 = sub_57CFA0((_DWORD *)v22, ++n); /*0x5867e8*/
          goto LABEL_77; /*0x586807*/
        }
        LODWORD(v112) = 0xF; /*0x58681d*/
        if ( !sub_9868DD(v26, v25, Src, "close all menus", v112) ) /*0x58682c*/
        {
          CloseAllMenus(st6_0, v22, a4, v29); /*0x586838*/
          FormHeapFree((unsigned int)v132.m_data); /*0x586842*/
          return 1; /*0x58684c*/
        }
        LODWORD(v113) = 7; /*0x586851*/
        if ( !sub_9868DD(v26, v25, Src, "visible", v113) )
        {
          v131.m_data = 0; /*0x58687e*/
          sscanf(Src, "visible %i", &v131); /*0x586886*/
          LODWORD(v114) = v131.m_data; /*0x586892*/
          Menu_GetB3A708(1); /*0x586895*/
          v49 = sub_5878B0(v114); /*0x58689f*/
          sub_585F40(v20, "Is Visible: %i", v49, SHIDWORD(v114));
          FormHeapFree((unsigned int)v132.m_data); /*0x5868bb*/
          return 1; /*0x5868c5*/
        }
        LODWORD(v114) = 0xA; /*0x5868ca*/
        if ( !sub_9868DD(v26, v25, Src, "exit menus", v114) ) /*0x5868d2*/
        {
          for ( ii = InterfaceManager::GetTopVisibleMenuID((_DWORD *)v22); /*0x5868e7*/
                ii;
                ii = InterfaceManager::GetTopVisibleMenuID((_DWORD *)v22) )
          {
            sub_57CFE0(v22, a4, st6_0, v29, a6, a7, a8, v11, ii, 0); /*0x5868f5*/
          }
          goto LABEL_77; /*0x586903*/
        }
        LODWORD(v115) = 0x19; /*0x586919*/
        if ( !sub_9868DD(v26, v25, Src, "emergency texture release", v115) ) /*0x586928*/
        {
          sub_579AE0(a4, st6_0, v29); /*0x586934*/
          sub_585F40(v20, "First change release of hidden textures activated.", SBYTE4(v116), v128); /*0x58693f*/
          FormHeapFree((unsigned int)v132.m_data); /*0x58694c*/
          return 1; /*0x586956*/
        }
        LODWORD(v116) = 9; /*0x58695b*/
        if ( !sub_9868DD(v26, v25, Src, "playerpos", v116) ) /*0x58696a*/
        {
          *(float *)&v131.m_data = 0.0; /*0x586981*/
          *(float *)&v130 = 0.0; /*0x586989*/
          *(float *)&v129.m_data = 0.0; /*0x58698e*/
          sscanf(Src, "playerpos %f %f %f", &v131, &v130, &v129); /*0x5869a4*/
          v133 = v131.m_data; /*0x5869ad*/
          v134 = v130; /*0x5869b9*/
          v135 = v129.m_data; /*0x5869c1*/
          v51 = InterfaceManager_GetSingleton(0, 1)->unk054[3]; /*0x5869ca*/
          v52 = v134; /*0x5869d1*/
          v51->members.super.m_localTransform.pos.x = *(float *)&v133; /*0x5869d5*/
          v53 = v135; /*0x5869d8*/
          LODWORD(v51->members.super.m_localTransform.pos.y) = v52; /*0x5869de*/
          LODWORD(v51->members.super.m_localTransform.pos.z) = v53; /*0x5869e3*/
          v54 = InterfaceManager_GetSingleton(0, 1); /*0x5869e6*/
          NiAVObject_UpdateNiAVObject((NiAVObject *)v54->unk054[3], 0.0, 1); /*0x5869fb*/
          FormHeapFree((unsigned int)v132.m_data); /*0x586a05*/
          return 1; /*0x586a0f*/
        }
        LODWORD(v117) = 6; /*0x586a14*/
        if ( !sub_9868DD(v26, v25, Src, "repair", v117) ) /*0x586a23*/
        {
          v129.m_data = 0; /*0x586a2f*/
          sscanf(Src, "repair %i", &v129); /*0x586a45*/
          RepairMenu_Create(v29, a4, (signed int)v129.m_data, 5, 0, 0); /*0x586a55*/
          FormHeapFree((unsigned int)v132.m_data); /*0x586a62*/
          return 1; /*0x586a6c*/
        }
        LODWORD(v118) = 9; /*0x586a71*/
        if ( sub_9868DD(v26, v25, Src, "set trait", v118) )
        {
          LODWORD(v119) = 5; /*0x586b60*/
          if ( !sub_9868DD(v26, v25, Src, "depth", v119) )
          {
            InterfaceManager_GetDepth(v29); /*0x586b7b*/
            v58 = Double_To_SInt32(v29); /*0x586b80*/
            sub_585F40(v20, "Max Depth: %i", v58, SHIDWORD(v120));
            v59 = InterfaceManager_GetSingleton(0, 1); /*0x586b95*/
            Tile_GetFloat((_DWORD *)v59->cursor, 0xFAB); /*0x586ba7*/
            v60 = Double_To_SInt32(v29); /*0x586bac*/
            sub_585F40(v20, "Cursor Depth: %i", v60, v126);
            FormHeapFree((unsigned int)v132.m_data); /*0x586bc5*/
            return 1; /*0x586bcf*/
          }
          LODWORD(v120) = 9; /*0x586bd4*/
          if ( !sub_9868DD(v26, v25, Src, "new fonts", v120) ) /*0x586be3*/
          {
            *((_BYTE *)FontManager_GetSingleton() + 0x14) = 1; /*0x586bf4*/
            FormHeapFree((unsigned int)v132.m_data); /*0x586bfd*/
            return 1; /*0x586c07*/
          }
          LODWORD(v121) = 9; /*0x586c0c*/
          if ( !sub_9868DD(v26, v25, Src, "old fonts", v121) ) /*0x586c1b*/
          {
            *((_BYTE *)FontManager_GetSingleton() + 0x14) = 0; /*0x586c2c*/
            FormHeapFree((unsigned int)v132.m_data); /*0x586c35*/
            return 1; /*0x586c3f*/
          }
          LODWORD(v122) = 0xC; /*0x586c44*/
          if ( !sub_9868DD(v26, v25, Src, "use workbook", v122) ) /*0x586c53*/
          {
            OpenMenuTile = (void *)Menu_GetOpenMenuTile(0x402); /*0x586c74*/
            v62 = (void **)OblivionDynamicCast( /*0x586c7d*/
                             OpenMenuTile,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                             &TileMenu `RTTI Type Descriptor',
                             0);
            if ( !v62 ) /*0x586c87*/
            {
              sub_585F40(v20, "You must open a book (or scroll) before using the workbook.", SBYTE4(v123), v128); /*0x586ccc*/
              FormHeapFree((unsigned int)v132.m_data); /*0x586cd9*/
              return 1; /*0x586ce3*/
            }
            v63 = (_DWORD **)OblivionDynamicCast( /*0x586c9b*/
                               v62[0x11],
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                               &BookMenu `RTTI Type Descriptor',
                               0);
            if ( v63 ) /*0x586ca5*/
            {
              sub_596150(v63); /*0x586cad*/
              FormHeapFree((unsigned int)v132.m_data); /*0x586cb7*/
              return 1; /*0x586cc1*/
            }
            goto LABEL_77; /*0x586ca5*/
          }
          LODWORD(v123) = 3; /*0x586ce8*/
          if ( !sub_9868DD(v26, v25, Src, off_A69CE8, v123) ) /*0x586cf7*/
          {
            memset(ArgList, 0, sizeof(ArgList)); /*0x586d12*/
            sscanf(Src, "bat %s", ArgList); /*0x586d33*/
            if ( !strlen(ArgList) ) /*0x586d45*/
            {
              Interface_ConsolePrint("You must enter a filename."); /*0x586d57*/
              FormHeapFree((unsigned int)v132.m_data); /*0x586d64*/
              return 1; /*0x586d6e*/
            }
            v64 = (char *)FormHeapAlloc(0x154u); /*0x586d78*/
            v129.m_data = v64; /*0x586d80*/
            LOBYTE(v143) = 2; /*0x586d86*/
            if ( v64 ) /*0x586d8e*/
              v65 = BSFile_constr(v64, ArgList, 0, 0x2800, 0); /*0x586da8*/
            else
              v65 = 0; /*0x586dac*/
            LOBYTE(v143) = 0; /*0x586db0*/
            if ( v65 && (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v65 + 0x18))(v65, 0, 0) ) /*0x586dc9*/
            {
              while ( (*(int (__thiscall **)(_DWORD *, char *, int, int))(*v65 + 0x28))(v65, v141, 0xA28, 0xD) ) /*0x586de9*/
              {
                for ( jj = 0; jj < strlen(v141); ++jj ) /*0x586e00*/
                {
                  if ( v141[jj] == 0xA ) /*0x586e18*/
                    v141[jj] = 0x20; /*0x586e1a*/
                }
                if ( strlen(v141) > 1 ) /*0x586e5e*/
                {
                  Interface_ConsolePrint("> %s", v141); /*0x586e6d*/
                  Script_Constructor(&v137.super); /*0x586e79*/
                  LOBYTE(v143) = 3; /*0x586e82*/
                  TESForm_MakeTemporary(&v137.super); /*0x586e8a*/
                  Script_SetText((void **)&v137.super.vtbl, (int)v65, v141); /*0x586e9b*/
                  Script_CompileAndRun(&v137, a4, st6_0, v29, (void *)*v20, 1, 0); /*0x586eab*/
                  LOBYTE(v143) = 0; /*0x586eb4*/
                  Script_StaticDestructor(&v137.super); /*0x586ebc*/
                }
              }
            }
            else
            {
              Interface_ConsolePrint("The file '%s' could not be opened.", ArgList); /*0x586ef0*/
            }
            if ( v65 ) /*0x586efa*/
            {
              (*(void (__thiscall **)(_DWORD *, int))*v65)(v65, 1); /*0x586f08*/
              FormHeapFree((unsigned int)v132.m_data); /*0x586f0f*/
              return 1; /*0x586f19*/
            }
            goto LABEL_77; /*0x586efa*/
          }
          for ( kk = 0; kk < strlen(Src); ++kk ) /*0x586f30*/
          {
            if ( Src[kk] == 0xA ) /*0x586f48*/
              Src[kk] = 0x20; /*0x586f4a*/
          }
          Script_Constructor(&v137.super); /*0x586f73*/
          LOBYTE(v143) = 4; /*0x586f7c*/
          TESForm_MakeTemporary(&v137.super); /*0x586f84*/
          Script_SetText((void **)&v137.super.vtbl, v26, Src); /*0x586f95*/
          v68 = InterfaceManager_GetSingleton(0, 1); /*0x586f9e*/
          Script_CompileAndRun(&v137, a4, st6_0, v29, (void *)*v20, 1, v68->debugSelection); /*0x586fb6*/
          LOBYTE(v143) = 0; /*0x586fbf*/
          Script_StaticDestructor(&v137.super); /*0x586fc7*/
          FormHeapFree((unsigned int)v132.m_data); /*0x586fd1*/
          return 1; /*0x586fd9*/
        }
        else
        {
          *(float *)&v129.m_data = 0.0; /*0x586a97*/
          sscanf(Src, "set trait %s %s %f", &v137, ArgList, &v129); /*0x586ab5*/
          TileByName = Tile::GetTileByName(0, (const char *)&v137); /*0x586ac6*/
          v56 = TileStringToStringID((unsigned __int8 *)ArgList); /*0x586ad0*/
          v57 = v56; /*0x586ada*/
          if ( TileByName ) /*0x586adc*/
          {
            if ( v56 <= 0 ) /*0x586ae0*/
            {
              Console_FormatPrint(v20, "Unknown trait '%s'", ArgList); /*0x586b22*/
            }
            else
            {
              sub_585F40(v20, "Trait set.", SBYTE4(v119), v128); /*0x586ae8*/
              Tile_SetFloat(TileByName, v57, *(float *)&v129.m_data); /*0x586afa*/
            }
            FormHeapFree((unsigned int)v132.m_data); /*0x586b04*/
            return 1; /*0x586b0c*/
          }
          else
          {
            Console_FormatPrint(v20, "Can't find tile '%s'", (va_list)&v137); /*0x586b47*/
            FormHeapFree((unsigned int)v132.m_data); /*0x586b51*/
            return 1; /*0x586b59*/
          }
        }
      }
      else
      {
        sub_584DB0(); /*0x58664d*/
        sscanf(Src, "reload %s", v140); /*0x586667*/
        if ( v140[0] != 0x26 ) /*0x586679*/
        {
          for ( mm = 0; v140[mm]; ++mm ) /*0x58667f*/
            ; /*0x586681*/
          v140[mm + 2] = 0; /*0x586690*/
          for ( v140[mm + 1] = 0x3B; mm > 0; --mm ) /*0x5866a0*/
            v140[mm] = Src[mm + 0x7FF]; /*0x5866a9*/
          v140[0] = 0x26; /*0x5866b7*/
        }
        v108 = (_DWORD *)TileStringToStringID(v140); /*0x5866cf*/
        Menu_GetB3A708(1); /*0x5866d2*/
        sub_587550((char)v20, v22, st6_0, v29, a4, a5, (int)v108); /*0x5866dc*/
        FormHeapFree((unsigned int)v132.m_data); /*0x5866e6*/
        return 1; /*0x5866ee*/
      }
    }
    else
    {
      v41 = (Tile *)Menu_GetOpenMenuTile(0x3EE); /*0x5865c2*/
      v42 = Tile::GetTileByName(v41, "hudreticle_enemy_health"); /*0x5865cb*/
      v43 = v42; /*0x5865d0*/
      if ( !v42 ) /*0x5865d7*/
        goto LABEL_77; /*0x5865d7*/
      v44 = Tile_GetFloat(v42, 0xFA1) == fConstant_2; /*0x5865e9*/
      v131.m_data = (char *)1; /*0x5865ef*/
      if ( !v44 ) /*0x5865fc*/
        v131.m_data = (char *)2; /*0x5865fe*/
      v106 = (float)(int)v131.m_data; /*0x58660d*/
      Tile_SetFloat(v43, 0xFA1u, v106); /*0x586615*/
      FormHeapFree((unsigned int)v132.m_data); /*0x58661f*/
      return 1; /*0x586627*/
    }
  }
  else
  {
    v39 = *(void (__thiscall ****)(_DWORD, int))(v22 + 0x6C); /*0x5864d2*/
    if ( v39 ) /*0x5864d7*/
      (**v39)(v39, 1); /*0x5864df*/
    sub_584670("Data\\Menus\\strings.xml", 0); /*0x5864e8*/
    File = Tile::ReadFile(*(Tile **)(v22 + 0x68), "Data\\Menus\\strings.xml"); /*0x5864fd*/
    Tile::SetParent(File, 0, 0); /*0x586505*/
    v102 = v132.m_data; /*0x58650e*/
    *(_DWORD *)(v22 + 0x6C) = File; /*0x58650f*/
    FormHeapFree((unsigned int)v102); /*0x586512*/
    return 1; /*0x58651a*/
  }
}
