char __userpurge sub_586000@<al>(
        int a1@<ecx>,
        double st6_0@<st1>,
        double a3@<st0>,
        double a4@<st2>,
        double a5@<st3>,
        int a6)
{
  _DWORD *v7; // edi
  bool v8; // cc
  float *v9; // eax
  int i; // edx
  int j; // eax
  int v12; // edx
  int m; // eax
  int v14; // eax
  signed int v15; // ebp
  InterfaceManager *Singleton; // eax
  _DWORD *v17; // ebx
  int v18; // ecx
  unsigned int v19; // ebp
  int v20; // eax
  int (__usercall *v21)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>); // eax
  int v22; // edi
  int v23; // eax
  double v24; // st7
  double v25; // st7
  float *v26; // eax
  int v27; // ebp
  TESObjectREFR *v29; // ebp
  char *Name; // eax
  NiObject *v31; // eax
  float *v32; // eax
  int v33; // eax
  char *v34; // esi
  void (__thiscall ***v35)(_DWORD, int); // ecx
  float *XML; // esi
  int v37; // eax
  Tile *v38; // eax
  Tile *v39; // esi
  bool v40; // c3
  int mm; // eax
  int v42; // eax
  int n; // esi
  int v44; // eax
  char v45; // al
  signed int ii; // eax
  NiNode *v47; // eax
  _DWORD *v48; // edx
  char *v49; // ecx
  InterfaceManager *v50; // eax
  Tile *v51; // esi
  int v52; // eax
  _DWORD *v53; // edi
  double Depth; // st7
  char v55; // al
  InterfaceManager *v56; // eax
  char v57; // al
  void *OpenMenuTile; // eax
  void **v59; // eax
  _DWORD **v60; // eax
  double v61; // st5
  char *v62; // eax
  _DWORD *v63; // edi
  unsigned int jj; // edx
  unsigned int kk; // edx
  InterfaceManager *v66; // eax
  int v67; // edx
  int v68; // edx
  _DWORD *v69; // ecx
  _DWORD *v70; // ecx
  int v71; // eax
  int v72; // ecx
  int **v73; // eax
  int v74; // eax
  int v75; // eax
  const char **v76; // ecx
  bool v77; // zf
  char *m_data; // eax
  char v79; // cl
  char *v80; // eax
  int v81; // edx
  int k; // esi
  int v83; // eax
  double v84; // st7
  float *v85; // eax
  float v86; // [esp+0h] [ebp-1FA8h]
  float v87; // [esp+0h] [ebp-1FA8h]
  float v88; // [esp+4h] [ebp-1FA4h]
  float v89; // [esp+4h] [ebp-1FA4h]
  float v90; // [esp+Ch] [ebp-1F9Ch]
  float v91; // [esp+10h] [ebp-1F98h]
  _DWORD *v92; // [esp+10h] [ebp-1F98h]
  float v93; // [esp+10h] [ebp-1F98h]
  float v94; // [esp+10h] [ebp-1F98h]
  size_t v95; // [esp+14h] [ebp-1F94h]
  size_t v96; // [esp+14h] [ebp-1F94h]
  size_t v97; // [esp+14h] [ebp-1F94h]
  size_t v98; // [esp+14h] [ebp-1F94h]
  _DWORD *refID; // [esp+14h] [ebp-1F94h]
  size_t v100; // [esp+14h] [ebp-1F94h]
  char *v101; // [esp+14h] [ebp-1F94h]
  size_t v102; // [esp+14h] [ebp-1F94h]
  size_t v103; // [esp+14h] [ebp-1F94h]
  size_t v104; // [esp+14h] [ebp-1F94h]
  float v105; // [esp+14h] [ebp-1F94h]
  size_t v106; // [esp+14h] [ebp-1F94h]
  _DWORD *v107; // [esp+14h] [ebp-1F94h]
  size_t v108; // [esp+14h] [ebp-1F94h]
  _DWORD *v109; // [esp+14h] [ebp-1F94h]
  size_t v110; // [esp+14h] [ebp-1F94h]
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
  _DWORD *v123; // [esp+14h] [ebp-1F94h]
  char v124; // [esp+18h] [ebp-1F90h]
  int v125; // [esp+18h] [ebp-1F90h]
  int v126; // [esp+1Ch] [ebp-1F8Ch]
  int v127; // [esp+1Ch] [ebp-1F8Ch]
  BSStringT v128; // [esp+2Ch] [ebp-1F7Ch] BYREF
  _DWORD *v129; // [esp+34h] [ebp-1F74h] BYREF
  BSStringT v130; // [esp+38h] [ebp-1F70h] BYREF
  BSStringT v131; // [esp+40h] [ebp-1F68h] BYREF
  char *v132; // [esp+48h] [ebp-1F60h]
  _DWORD *v133; // [esp+4Ch] [ebp-1F5Ch]
  char *v134; // [esp+50h] [ebp-1F58h]
  int a2[7]; // [esp+54h] [ebp-1F54h] BYREF
  Script v136; // [esp+70h] [ebp-1F38h] BYREF
  char ArgList[128]; // [esp+F0h] [ebp-1EB8h] BYREF
  char Src[2048]; // [esp+170h] [ebp-1E38h] BYREF
  unsigned __int8 v139[1024]; // [esp+970h] [ebp-1638h] BYREF
  char v140[2600]; // [esp+D70h] [ebp-1238h] BYREF
  unsigned __int8 v141[2048]; // [esp+1798h] [ebp-810h] BYREF
  int v142; // [esp+1FA4h] [ebp-4h]

  v7 = (_DWORD *)a1;
  v8 = *(_BYTE *)(a1 + 0x31) <= 0;
  v129 = (_DWORD *)a1;
  if ( v8 || LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]) == 1 )
    return 0;
  if ( !a6 )
    return 1;
  v91 = (float)dword_B3A704;
  v90 = (float)dword_B3A700;
  v9 = sub_571F90(1);
  sub_571660(v9, (int)v7, v141, v90, v91, 1);
  LODWORD(v95) = 0x7FE;
  _mbsnbcpy((unsigned __int8 *)Src, v141, v95);
  for ( i = 0; Src[i]; ++i )
    ;
  if ( ArgList[i + 0x7F] == 0x7C )
    Src[--i] = 0;
  for ( j = 0; j < i; ++j )
  {
    if ( Src[j] == 0x7C )
      break;
  }
  if ( j == i )
  {
    Src[j] = 0x7C;
    ++i;
  }
  if ( a6 != 0x80000008 )
  {
    switch ( a6 )
    {
      case 0x80000000:
        if ( i )
        {
          if ( j )
          {
            v67 = i - 1;
            if ( j < v67 )
            {
              qmemcpy(&Src[j], &Src[j + 1], v67 - j);
              v7 = v129;
            }
            Src[v67] = 0;
            ArgList[j + 0x7F] = 0x7C;
          }
        }
        break;
      case 0x80000007:
        if ( j < i )
        {
          v68 = i - 1;
          if ( j < v68 )
          {
            qmemcpy(&Src[j], &Src[j + 1], v68 - j);
            v7 = v129;
          }
          Src[v68] = 0;
          Src[j] = 0x7C;
        }
        break;
      case 0x80000009:
        sub_5855E0(v7, 1 - dword_B1398C);
        sub_585620(v69, 0, st6_0, a3);
        break;
      case 0x8000000A:
        sub_5855E0(v7, dword_B1398C - 1);
        sub_585620(v70, 0, st6_0, a3);
        break;
      case 0x80000003:
        v71 = v7[8];
        if ( v71 )
        {
          v72 = ++v7[9];
          if ( v72 >= v71 - 1 )
            v72 = v71 - 1;
          v73 = (int **)v7[6];
          v7[9] = v72;
          if ( v72 > 0 )
          {
            do
            {
              if ( v73 )
                v73 = (int **)*v73;
              else
                v73 = 0;
              --v72;
            }
            while ( v72 );
          }
          _sprintf(Src, "%s", (const char *)v73[2]);
        }
        break;
      case 0x80000004:
        if ( v7[8] )
        {
          v74 = --v7[9];
          v128.m_data = 0;
          v128.m_dataLen = 0;
          v128.m_bufLen = 0;
          v75 = v74 <= 0 ? 0 : v74;
          v7[9] = v75;
          v142 = 5;
          if ( !v75 )
            goto LABEL_172;
          v76 = (const char **)v7[6];
          if ( v75 > 0 )
          {
            do
            {
              if ( v76 )
                v76 = (const char **)*v76;
              else
                v76 = 0;
              --v75;
            }
            while ( v75 );
          }
          if ( v76 )
            sub_4FB4C0(&v128, v76 + 2);
          else
LABEL_172:
            BSStringT_Set(&v128, EmptyString, 0);
          v77 = BSStringT_GetLen(&v128) == 0;
          m_data = v128.m_data;
          if ( v77 )
            m_data = EmptyString;
          _sprintf(Src, "%s", m_data);
          v142 = 0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v128);
        }
        break;
      case 0x80000001:
        if ( i )
        {
          if ( j )
          {
            v79 = ArgList[j + 0x7F];
            v80 = &Src[j];
            *v80 = v79;
            v80[0xFFFFFFFF] = 0x7C;
          }
        }
        break;
      case 0x80000002:
        if ( i )
        {
          if ( j + 1 < i )
          {
            Src[j] = Src[j + 1];
            Src[j + 1] = 0x7C;
          }
        }
        break;
      case 0x80000005:
        if ( i )
        {
          if ( j )
          {
            for ( ; j > 0; --j )
              Src[j] = ArgList[j + 0x7F];
            Src[0] = 0x7C;
          }
        }
        break;
      case 0x80000006:
        if ( i )
        {
          if ( j + 1 < i )
          {
            if ( j < i - 1 )
            {
              qmemcpy(&Src[j], &Src[j + 1], i - 1 - j);
              v7 = v129;
            }
            ArgList[i + 0x7F] = 0x7C;
          }
        }
        break;
      default:
        v81 = i + 1;
        Src[j] = a6;
        for ( k = v81; k > j; --k )
          Src[k + 1] = Src[k];
        Src[v81 + 1] = 0;
        Src[j + 1] = 0x7C;
        break;
    }
    v83 = 0;
    if ( Src[0] )
    {
      while ( Src[v83] != 0x7C )
      {
        if ( !Src[++v83] )
          goto LABEL_202;
      }
    }
    else
    {
LABEL_202:
      Src[v83] = 0x7C;
      Src[v83 + 1] = 0;
    }
    v128.m_data = 0;
    v128.m_dataLen = 0;
    v128.m_bufLen = 0;
    BSStringT_Set(&v128, Src, 0);
    v77 = v7[8] == 0;
    v142 = 6;
    if ( !v77 )
    {
      sub_585AC0((int **)v7 + 5, &v130);
      FormHeapFree((unsigned int)v130.m_data);
    }
    sub_585A70(v7 + 5, (const char **)&v128.m_data);
    v123 = (_DWORD *)dword_B13994;
    v94 = flt_A30634;
    v89 = (float)dword_B3A704;
    v84 = (double)dword_B3A700;
    v87 = v84;
    v85 = sub_571F90(1);
    sub_5723E0((char *)v85, 0, a4, st6_0, v84, Src, v87, v89, 1, 0xFFFFFFFF, v94, (int)v123);
    FormHeapFree((unsigned int)v128.m_data);
    return 1;
  }
  v12 = i + 1;
  for ( m = 0; m < v12; ++m )
  {
    if ( Src[m] == 0x7C )
    {
      Src[m] = Src[m + 1];
      Src[m + 1] = 0x7C;
    }
  }
  v14 = 0;
  if ( v12 > 0 )
  {
    v15 = 0xFFFFFFFF;
    do
    {
      if ( Src[v14] == 0xA )
      {
        if ( ArgList[v14 + 0x7F] == 0x2D )
        {
          if ( v15 < v12 )
            qmemcpy(&Src[v15], &Src[v15 + 2], v12 - v15);
        }
        else
        {
          Src[v14] = 0x20;
        }
        if ( Src[v14] == 0xA )
          Src[v14] = 0x20;
      }
      ++v14;
      ++v15;
    }
    while ( v14 < v12 );
  }
  if ( !Src[0] )
    return 1;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  v17 = v129;
  v18 = v129[4];
  v19 = (unsigned int)Singleton;
  v20 = v18 + v129[0xB];
  if ( v20 > v18 )
    v20 = v129[4];
  if ( v20 - dword_B1398C <= 0 )
    v20 = dword_B1398C;
  if ( v20 > v18 )
    v20 = v129[4];
  v92 = v129;
  v129[0xB] = v20;
  sub_585F40(v92, Src, v124, v126);
  v131.m_data = 0;
  v131.m_dataLen = 0;
  v131.m_bufLen = 0;
  BSStringT_Set(&v131, Src, 0);
  v21 = *(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>))(v17[5] + 4);
  v142 = 0;
  v22 = v21(v17 + 5, a3, st6_0, a4, a5);
  BSStringT_Set((BSStringT *)(v22 + 8), v131.m_data, 0);
  *(_DWORD *)(v22 + 4) = 0;
  *(_DWORD *)v22 = v17[6];
  v23 = v17[6];
  if ( v23 )
    *(_DWORD *)(v23 + 4) = v22;
  else
    v17[7] = v22;
  ++v17[8];
  v24 = flt_A30634;
  v17[6] = v22;
  v17[9] = 0;
  LODWORD(v96) = dword_B13994;
  v93 = v24;
  v88 = (float)dword_B3A704;
  v25 = (double)dword_B3A700;
  v86 = v25;
  v26 = sub_571F90(1);
  sub_5723E0((char *)v26, v19, a4, st6_0, v25, "|", v86, v88, 1, 0xFFFFFFFF, v93, v96);
  LODWORD(v96) = 3;
  if ( !sub_986B26(Src, off_A69F5C, v96) )
  {
    *(float *)&v129 = 0.0;
    sscanf(Src, "dof %f", &v129);
    v27 = *(_DWORD *)v19;
    qmemcpy(a2, (const void *)(*(_DWORD *)(v27 + 0xDC) + 0xEC), sizeof(a2));
    a2[5] = (int)v129;
    Camera_SetFrustum(*(NiCamera **)(v27 + 0xDC), (int)a2);
    FormHeapFree((unsigned int)v131.m_data);
    return 1;
  }
  LODWORD(v97) = 3;
  if ( !sub_986B26(Src, off_A69F50, v97) )
  {
    v130.m_data = 0;
    sscanf(Src, "usz %i", &v130);
    sub_579370((int)v130.m_data, 0);
    FormHeapFree((unsigned int)v131.m_data);
    return 1;
  }
  if ( !_mbsicmp((const unsigned __int8 *)Src, &off_A69F44) || !_mbscmp((const unsigned __int8 *)Src, &off_A69F40) )
  {
    NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(v17 + 1));
    v17[0xB] = 0;
    sub_585620(v17, v19, st6_0, v25);
    goto LABEL_77;
  }
  if ( !_mbsicmp((const unsigned __int8 *)Src, &off_A69F3C) )
  {
    v29 = *(TESObjectREFR **)(v19 + 0xBC);
    if ( v29 )
    {
      v128.m_data = 0;
      v128.m_dataLen = 0;
      v128.m_bufLen = 0;
      refID = (_DWORD *)v29->member.super.refID;
      LOBYTE(v142) = 1;
      Name = TESObjectREFR_GetName(v29);
      BSStringT_Static_Format(&v128, "\"%s\" (%08x)", Name, refID);
      v31 = (NiObject *)v29->vtbl->GetNiNode(v29);
      v32 = (float *)NiRTTI_Cast((BSStringT *)dword_B3FAB0, v31);
      if ( !v32 )
      {
        v33 = (int)v29->vtbl->GetNiNode(v29);
        v32 = (float *)NiRTTI_Cast((BSStringT *)dword_B3FAB0, *(NiObject **)(v33 + 0x1C));
      }
      v34 = v128.m_data;
      sub_572850(a4, st6_0, v32, v128.m_data, 0, flt_A30634);
      FormHeapFree((unsigned int)v34);
      FormHeapFree((unsigned int)v131.m_data);
      return 1;
    }
LABEL_77:
    FormHeapFree((unsigned int)v131.m_data);
    return 1;
  }
  LODWORD(v98) = 0xE;
  if ( sub_986B26(Src, "reload strings", v98) )
  {
    LODWORD(v100) = 0x11;
    if ( !sub_986B26(Src, "reload HUDReticle", v100) )
    {
      sub_584DB0();
      sub_578CF0(v19, a4, st6_0, v25, a5, 3);
      FormHeapFree((unsigned int)v131.m_data);
      return 1;
    }
    LODWORD(v102) = 0x12;
    if ( !sub_986B26(Src, "reload HUDSafeZone", v102) )
    {
      sub_584DB0();
      sub_5798F0(v19, a4, st6_0, v25, 3);
      FormHeapFree((unsigned int)v131.m_data);
      return 1;
    }
    LODWORD(v103) = 3;
    if ( sub_9868DD(Src, off_A69F00, v103) )
    {
      LODWORD(v104) = 7;
      if ( sub_986B26(Src, "reload ", v104) )
      {
        LODWORD(v106) = 7;
        if ( !sub_986B26(Src, "delete ", v106) )
        {
          sscanf(Src, "delete %s", v139);
          v109 = (_DWORD *)TileStringToStringID(v139);
          Menu_GetB3A708(1);
          sub_587440((int)v109);
          FormHeapFree((unsigned int)v131.m_data);
          return 1;
        }
        LODWORD(v108) = 5;
        if ( !sub_9868DD(Src, "front", v108) )
        {
          Menu_GetB3A708(1);
          v42 = sub_5877D0(v19, a4, st6_0);
          sub_585F40(v17, "Frontmost: %s", *(_DWORD *)(*(_DWORD *)(v42 + 4) + 8), SHIDWORD(v110));
          FormHeapFree((unsigned int)v131.m_data);
          return 1;
        }
        LODWORD(v110) = 5;
        if ( !sub_9868DD(Src, "stack", v110) )
        {
          for ( n = 0; sub_57CFA0((_DWORD *)v19, n); sub_585F40(v17, "%i: %i", n, v44) )
            v44 = sub_57CFA0((_DWORD *)v19, ++n);
          goto LABEL_77;
        }
        LODWORD(v111) = 0xF;
        if ( !sub_9868DD(Src, "close all menus", v111) )
        {
          CloseAllMenus(st6_0, v19, a4, v25);
          FormHeapFree((unsigned int)v131.m_data);
          return 1;
        }
        LODWORD(v112) = 7;
        if ( !sub_9868DD(Src, "visible", v112) )
        {
          v130.m_data = 0;
          sscanf(Src, "visible %i", &v130);
          LODWORD(v113) = v130.m_data;
          Menu_GetB3A708(1);
          v45 = sub_5878B0(v19, a4, st6_0, v25, v113);
          sub_585F40(v17, "Is Visible: %i", v45, SHIDWORD(v113));
          FormHeapFree((unsigned int)v131.m_data);
          return 1;
        }
        LODWORD(v113) = 0xA;
        if ( !sub_9868DD(Src, "exit menus", v113) )
        {
          for ( ii = InterfaceManager::GetTopVisibleMenuID((_DWORD *)v19);
                ii;
                ii = InterfaceManager::GetTopVisibleMenuID((_DWORD *)v19) )
          {
            sub_57CFE0(v19, a4, st6_0, v25, ii, 0);
          }
          goto LABEL_77;
        }
        LODWORD(v114) = 0x19;
        if ( !sub_9868DD(Src, "emergency texture release", v114) )
        {
          sub_579AE0(a4, v19, st6_0, v25);
          sub_585F40(v17, "First change release of hidden textures activated.", SBYTE4(v115), v127);
          FormHeapFree((unsigned int)v131.m_data);
          return 1;
        }
        LODWORD(v115) = 9;
        if ( !sub_9868DD(Src, "playerpos", v115) )
        {
          *(float *)&v130.m_data = 0.0;
          *(float *)&v129 = 0.0;
          *(float *)&v128.m_data = 0.0;
          sscanf(Src, "playerpos %f %f %f", &v130, &v129, &v128);
          v132 = v130.m_data;
          v133 = v129;
          v134 = v128.m_data;
          v47 = InterfaceManager_GetSingleton(0, 1)->unk054[3];
          v48 = v133;
          v47->members.super.m_localTransform.pos.x = *(float *)&v132;
          v49 = v134;
          LODWORD(v47->members.super.m_localTransform.pos.y) = v48;
          LODWORD(v47->members.super.m_localTransform.pos.z) = v49;
          v50 = InterfaceManager_GetSingleton(0, 1);
          NiAVObject_UpdateNiAVObject((NiAVObject *)v50->unk054[3], 0.0, 1);
          FormHeapFree((unsigned int)v131.m_data);
          return 1;
        }
        LODWORD(v116) = 6;
        if ( !sub_9868DD(Src, "repair", v116) )
        {
          v128.m_data = 0;
          sscanf(Src, "repair %i", &v128);
          sub_5D2070(v19, v22, (int)(v17 + 5), a4, v25, st6_0, (signed int)v128.m_data, 5, 0, 0);
          FormHeapFree((unsigned int)v131.m_data);
          return 1;
        }
        LODWORD(v117) = 9;
        if ( sub_9868DD(Src, "set trait", v117) )
        {
          LODWORD(v118) = 5;
          if ( !sub_9868DD(Src, "depth", v118) )
          {
            Depth = InterfaceManager_GetDepth(v19, a4, st6_0);
            v55 = Double_To_SInt32(Depth);
            sub_585F40(v17, "Max Depth: %i", v55, SHIDWORD(v119));
            v56 = InterfaceManager_GetSingleton(0, 1);
            Tile_GetFloat((_DWORD *)v56->cursor, 0xFAB);
            v57 = Double_To_SInt32(Depth);
            sub_585F40(v17, "Cursor Depth: %i", v57, v125);
            FormHeapFree((unsigned int)v131.m_data);
            return 1;
          }
          LODWORD(v119) = 9;
          if ( !sub_9868DD(Src, "new fonts", v119) )
          {
            *((_BYTE *)FontManager_GetSingleton() + 0x14) = 1;
            FormHeapFree((unsigned int)v131.m_data);
            return 1;
          }
          LODWORD(v120) = 9;
          if ( !sub_9868DD(Src, "old fonts", v120) )
          {
            *((_BYTE *)FontManager_GetSingleton() + 0x14) = 0;
            FormHeapFree((unsigned int)v131.m_data);
            return 1;
          }
          LODWORD(v121) = 0xC;
          if ( !sub_9868DD(Src, "use workbook", v121) )
          {
            OpenMenuTile = (void *)Menu_GetOpenMenuTile(0x402);
            v59 = (void **)OblivionDynamicCast(
                             OpenMenuTile,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                             &TileMenu `RTTI Type Descriptor',
                             0);
            if ( !v59 )
            {
              sub_585F40(v17, "You must open a book (or scroll) before using the workbook.", SBYTE4(v122), v127);
              FormHeapFree((unsigned int)v131.m_data);
              return 1;
            }
            v60 = (_DWORD **)OblivionDynamicCast(
                               v59[0x11],
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                               &BookMenu `RTTI Type Descriptor',
                               0);
            if ( v60 )
            {
              sub_596150(v60, v19, a4, st6_0, v25);
              FormHeapFree((unsigned int)v131.m_data);
              return 1;
            }
            goto LABEL_77;
          }
          LODWORD(v122) = 3;
          if ( !sub_9868DD(Src, off_A69CE8, v122) )
          {
            ArgList[0] = 0;
            v61 = _memset(&ArgList[1], 0, 0x7F);
            sscanf(Src, "bat %s", ArgList);
            if ( !strlen(ArgList) )
            {
              Interface_ConsolePrint("You must enter a filename.");
              FormHeapFree((unsigned int)v131.m_data);
              return 1;
            }
            v62 = (char *)FormHeapAlloc(0x154u);
            v128.m_data = v62;
            LOBYTE(v142) = 2;
            if ( v62 )
              v63 = BSFile_constr(v62, ArgList, 0, 0x2800, 0);
            else
              v63 = 0;
            LOBYTE(v142) = 0;
            if ( v63 && (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v63 + 0x18))(v63, 0, 0) )
            {
              while ( (*(int (__thiscall **)(_DWORD *, char *, int, int))(*v63 + 0x28))(v63, v140, 0xA28, 0xD) )
              {
                for ( jj = 0; jj < strlen(v140); ++jj )
                {
                  if ( v140[jj] == 0xA )
                    v140[jj] = 0x20;
                }
                if ( strlen(v140) > 1 )
                {
                  Interface_ConsolePrint("> %s", v140);
                  Script_Constructor(&v136.super);
                  LOBYTE(v142) = 3;
                  TESForm_MakeTemporary(&v136.super);
                  Script_SetText((void **)&v136.super.vtbl, (int)v63, v140);
                  Script_CompileAndRun(&v136, v61, st6_0, v25, (void *)*v17, 1, 0);
                  LOBYTE(v142) = 0;
                  Script_StaticDestructor(&v136.super);
                }
              }
            }
            else
            {
              Interface_ConsolePrint("The file '%s' could not be opened.", ArgList);
            }
            if ( v63 )
            {
              (*(void (__thiscall **)(_DWORD *, int))*v63)(v63, 1);
              FormHeapFree((unsigned int)v131.m_data);
              return 1;
            }
            goto LABEL_77;
          }
          for ( kk = 0; kk < strlen(Src); ++kk )
          {
            if ( Src[kk] == 0xA )
              Src[kk] = 0x20;
          }
          Script_Constructor(&v136.super);
          LOBYTE(v142) = 4;
          TESForm_MakeTemporary(&v136.super);
          Script_SetText((void **)&v136.super.vtbl, v22, Src);
          v66 = InterfaceManager_GetSingleton(0, 1);
          Script_CompileAndRun(&v136, a4, st6_0, v25, (void *)*v17, 1, v66->debugSelection);
          LOBYTE(v142) = 0;
          Script_StaticDestructor(&v136.super);
          FormHeapFree((unsigned int)v131.m_data);
          return 1;
        }
        else
        {
          *(float *)&v128.m_data = 0.0;
          sscanf(Src, "set trait %s %s %f", &v136, ArgList, &v128);
          v51 = (Tile *)sub_58B800(v19, 0.0, st6_0, v25, 0, (unsigned __int8 *)&v136);
          v52 = TileStringToStringID((unsigned __int8 *)ArgList);
          v53 = (_DWORD *)v52;
          if ( v51 )
          {
            if ( v52 <= 0 )
            {
              Console_FormatPrint(v17, "Unknown trait '%s'", ArgList);
            }
            else
            {
              sub_585F40(v17, "Trait set.", SBYTE4(v118), v127);
              Tile_SetFloat(v51, v53, *(float *)&v128.m_data);
            }
            FormHeapFree((unsigned int)v131.m_data);
            return 1;
          }
          else
          {
            Console_FormatPrint(v17, "Can't find tile '%s'", (va_list)&v136);
            FormHeapFree((unsigned int)v131.m_data);
            return 1;
          }
        }
      }
      else
      {
        sub_584DB0();
        sscanf(Src, "reload %s", v139);
        if ( v139[0] != 0x26 )
        {
          for ( mm = 0; v139[mm]; ++mm )
            ;
          v139[mm + 2] = 0;
          for ( v139[mm + 1] = 0x3B; mm > 0; --mm )
            v139[mm] = Src[mm + 0x7FF];
          v139[0] = 0x26;
        }
        v107 = (_DWORD *)TileStringToStringID(v139);
        Menu_GetB3A708(1);
        sub_587550((int)v17, v19, st6_0, v25, a4, (int)v107);
        FormHeapFree((unsigned int)v131.m_data);
        return 1;
      }
    }
    else
    {
      v37 = Menu_GetOpenMenuTile(0x3EE);
      v38 = (Tile *)sub_58B800(v19, a4, st6_0, v25, v37, "hudreticle_enemy_health");
      v39 = v38;
      if ( !v38 )
        goto LABEL_77;
      v40 = Tile_GetFloat(v38, 0xFA1) == fConstant_2;
      v130.m_data = (char *)1;
      if ( !v40 )
        v130.m_data = (char *)2;
      v105 = (float)(int)v130.m_data;
      Tile_SetFloat(v39, (_DWORD *)0xFA1, v105);
      FormHeapFree((unsigned int)v131.m_data);
      return 1;
    }
  }
  else
  {
    v35 = *(void (__thiscall ****)(_DWORD, int))(v19 + 0x6C);
    if ( v35 )
      (**v35)(v35, 1);
    sub_584670("Data\\Menus\\strings.xml", 0);
    XML = (float *)Menu_LoadXML(*(TileWindow **)(v19 + 0x68), a4, st6_0, v25, "Data\\Menus\\strings.xml");
    sub_58D1C0(XML, 0.0, 0);
    v101 = v131.m_data;
    *(_DWORD *)(v19 + 0x6C) = XML;
    FormHeapFree((unsigned int)v101);
    return 1;
  }
}
