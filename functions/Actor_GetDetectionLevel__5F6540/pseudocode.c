int __userpurge Actor_GetDetectionLevel@<eax>(
        TESObjectREFR *a1@<ecx>,
        int a2@<edi>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a5@<st0>,
        int a6,
        TESObjectREFR *a7,
        _BYTE *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  int v14; // eax
  double v15; // st7
  double v16; // st7
  char v17; // al
  TESObjectREFRVtbl *vtbl; // edx
  int v19; // eax
  _DWORD *v20; // eax
  int BaseCalcAVi; // eax
  char v22; // al
  int v23; // eax
  bool IsSneaking; // al
  int v25; // eax
  char IsUnderwater; // al
  bool v27; // zf
  TESObjectCELL *ParentCell; // eax
  double v29; // st7
  int v30; // eax
  double v31; // st7
  int v32; // eax
  double v33; // st7
  int v34; // esi
  void (__thiscall *Unk_38)(TESObjectREFR *); // eax
  double v36; // st7
  int v37; // eax
  double v38; // st7
  int v39; // eax
  double v40; // st7
  int v41; // edi
  int v42; // eax
  int v43; // eax
  double v44; // st7
  int v45; // eax
  int v46; // esi
  _DWORD *Singleton; // eax
  double v48; // st7
  int v49; // esi
  int v50; // edi
  double v51; // st7
  char *Name; // eax
  char *v53; // eax
  double v54; // st7
  char *v55; // eax
  double v56; // st7
  char *v57; // eax
  double v58; // st7
  double v59; // st7
  double v60; // st7
  int v61; // eax
  TESObjectREFR *v62; // ebx
  char *v63; // eax
  double v64; // st7
  char *v65; // eax
  double v66; // st7
  char *v67; // eax
  double v68; // st7
  char *v69; // eax
  double v70; // st7
  int v71; // edi
  double v72; // st7
  int v73; // edi
  double v74; // st7
  int v75; // edi
  double v76; // st7
  int v77; // edi
  double v78; // st7
  int v79; // edi
  double v80; // st7
  int v81; // edi
  double v82; // st7
  int v83; // edi
  double v84; // st7
  char *v85; // eax
  double v86; // st7
  int v87; // [esp+38h] [ebp-140h]
  int v88; // [esp+3Ch] [ebp-13Ch]
  float v89; // [esp+40h] [ebp-138h]
  int v90; // [esp+44h] [ebp-134h]
  size_t v91; // [esp+44h] [ebp-134h]
  int v92; // [esp+48h] [ebp-130h]
  int v93; // [esp+54h] [ebp-124h]
  float v94; // [esp+54h] [ebp-124h]
  float v95; // [esp+54h] [ebp-124h]
  size_t v96; // [esp+54h] [ebp-124h]
  float v97; // [esp+54h] [ebp-124h]
  size_t v98; // [esp+54h] [ebp-124h]
  float v99; // [esp+54h] [ebp-124h]
  float v100; // [esp+54h] [ebp-124h]
  size_t v101; // [esp+54h] [ebp-124h]
  float v102; // [esp+54h] [ebp-124h]
  size_t v103; // [esp+54h] [ebp-124h]
  int v104; // [esp+58h] [ebp-120h]
  float v105; // [esp+58h] [ebp-120h]
  size_t var120c; // [esp+58h] [ebp-120h]
  float v107; // [esp+58h] [ebp-120h]
  float v108; // [esp+58h] [ebp-120h]
  float v109; // [esp+58h] [ebp-120h]
  float v110; // [esp+58h] [ebp-120h]
  float v111; // [esp+58h] [ebp-120h]
  size_t var120i; // [esp+58h] [ebp-120h]
  float v113; // [esp+58h] [ebp-120h]
  size_t var120k; // [esp+58h] [ebp-120h]
  float v115; // [esp+58h] [ebp-120h]
  size_t var120m; // [esp+58h] [ebp-120h]
  float v117; // [esp+58h] [ebp-120h]
  size_t var120o; // [esp+58h] [ebp-120h]
  float v119; // [esp+58h] [ebp-120h]
  float v120; // [esp+58h] [ebp-120h]
  float v121; // [esp+58h] [ebp-120h]
  size_t v122; // [esp+58h] [ebp-120h]
  float v123; // [esp+58h] [ebp-120h]
  float v124; // [esp+58h] [ebp-120h]
  float v125; // [esp+58h] [ebp-120h]
  float v126; // [esp+58h] [ebp-120h]
  float v127; // [esp+58h] [ebp-120h]
  float v128; // [esp+58h] [ebp-120h]
  char *Formatf; // [esp+5Ch] [ebp-11Ch]
  char Formatg; // [esp+5Ch] [ebp-11Ch]
  float Formath; // [esp+5Ch] [ebp-11Ch]
  float Formati; // [esp+5Ch] [ebp-11Ch]
  float Formatj; // [esp+5Ch] [ebp-11Ch]
  float Formatk; // [esp+5Ch] [ebp-11Ch]
  size_t Format; // [esp+5Ch] [ebp-11Ch]
  float Formatl; // [esp+5Ch] [ebp-11Ch]
  size_t Formata; // [esp+5Ch] [ebp-11Ch]
  float Formatm; // [esp+5Ch] [ebp-11Ch]
  float Formatn; // [esp+5Ch] [ebp-11Ch]
  size_t Formatb; // [esp+5Ch] [ebp-11Ch]
  float Formato; // [esp+5Ch] [ebp-11Ch]
  size_t Formatc; // [esp+5Ch] [ebp-11Ch]
  float Formatp; // [esp+5Ch] [ebp-11Ch]
  size_t Formatd; // [esp+5Ch] [ebp-11Ch]
  float Formatq; // [esp+5Ch] [ebp-11Ch]
  size_t Formate; // [esp+5Ch] [ebp-11Ch]
  float Formatr; // [esp+5Ch] [ebp-11Ch]
  float Formats; // [esp+5Ch] [ebp-11Ch]
  TESChildCELL *v149; // [esp+60h] [ebp-118h]
  float v150; // [esp+60h] [ebp-118h]
  int v151; // [esp+60h] [ebp-118h]
  char *v152; // [esp+60h] [ebp-118h]
  char *v153; // [esp+60h] [ebp-118h]
  signed int v154; // [esp+64h] [ebp-114h]
  int v155; // [esp+64h] [ebp-114h]
  int v156; // [esp+64h] [ebp-114h]
  int v157; // [esp+64h] [ebp-114h]
  int v158; // [esp+64h] [ebp-114h]
  int v159; // [esp+64h] [ebp-114h]
  char *v160; // [esp+64h] [ebp-114h]
  char *v161; // [esp+64h] [ebp-114h]
  char *v162; // [esp+64h] [ebp-114h]
  char *v163; // [esp+64h] [ebp-114h]
  char *v164; // [esp+64h] [ebp-114h]
  char *v165; // [esp+64h] [ebp-114h]
  char *v166; // [esp+64h] [ebp-114h]
  int v167; // [esp+68h] [ebp-110h]
  int v168; // [esp+6Ch] [ebp-10Ch]
  char v169; // [esp+70h] [ebp-108h]
  int v170; // [esp+74h] [ebp-104h]
  int v171; // [esp+74h] [ebp-104h]
  int v172; // [esp+74h] [ebp-104h]
  int v173; // [esp+74h] [ebp-104h]
  int v174; // [esp+78h] [ebp-100h]
  int v175; // [esp+78h] [ebp-100h]
  int v176; // [esp+78h] [ebp-100h]
  int v177; // [esp+78h] [ebp-100h]
  int v178; // [esp+7Ch] [ebp-FCh]
  int v179; // [esp+7Ch] [ebp-FCh]
  TESChildCELL *v180; // [esp+80h] [ebp-F8h]
  TESChildCELL *v181; // [esp+80h] [ebp-F8h]
  TESChildCELL *v182; // [esp+84h] [ebp-F4h] BYREF
  int v183; // [esp+88h] [ebp-F0h]
  int v184; // [esp+8Ch] [ebp-ECh]
  int v185; // [esp+90h] [ebp-E8h]
  int v186; // [esp+94h] [ebp-E4h]
  int v187; // [esp+98h] [ebp-E0h]
  int v188; // [esp+9Ch] [ebp-DCh]
  int v189; // [esp+A0h] [ebp-D8h]
  int v190; // [esp+A4h] [ebp-D4h]
  int v191; // [esp+A8h] [ebp-D0h]
  int v192; // [esp+ACh] [ebp-CCh]
  char Dest[4]; // [esp+B0h] [ebp-C8h] BYREF
  char v194[192]; // [esp+B4h] [ebp-C4h] BYREF

  if ( !a1[1].vtbl )
    return Actor_GetDetectionLevel_::Return(a6, a7, a8, a9, a10, a11);
  *a8 = 0;
  v14 = (*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, TESObjectREFR *, int, double@<st0>, double@<st1>))a1[1].vtbl->super.super.InitializeComponent
         + 0xEC))(
          a1[1].vtbl,
          a7,
          a2,
          a5,
          st6_0);
  if ( v14 )
  {
    v178 = *(_DWORD *)(v14 + 0xC);
    *a8 = *(_BYTE *)(v14 + 8);
  }
  if ( !a7->vtbl->GetNiNode(a7) )
    return Actor_GetDetectionLevel_::Return_Neg1(a6, (int)a7, (int)a8, a9, a10, a11);
  if ( (_BYTE)a7 || v178 == 0x7FFFFFFF )
  {
    *(float *)&v187 = TesObjectREF_GetDistance(a1, a7, 0);
    ++dword_B333C0;
    v15 = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))*((_DWORD *)a7[1].vtbl->super.super.InitializeComponent
                                                                                + 0xEB))(
            a7[1].vtbl,
            a7,
            0);
    v183 = Double_To_SInt32(v15);
    v16 = ((double (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_38)(a1, 0x29);
    if ( v16 > *(float *)&SrcStr )
    {
      v16 = (double)v183 * fDetectionNightEyeBonus;
      v183 = Double_To_SInt32(v16);
      if ( v183 > 0x64 )
        v183 = 0x64;
    }
    v182 = (TESChildCELL *)3;
    v17 = sub_5F2820((Actor *)a1, v16, 1, a7, 1, &v182, 0);
    vtbl = a1->vtbl;
    LOBYTE(v185) = v17;
    if ( ((int (__thiscall *)(TESObjectREFR *))vtbl[1].IsMobileObject)(a1) )
    {
      v19 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1);
      if ( (TESObjectREFR *)sub_6135F0(v19) == a7 )
      {
        v149 = v182;
        v20 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1);
        sub_612810(v20, (int)v149);
      }
    }
    *a8 = v185;
    v188 = sub_5F3B50((int)a7, (int)a1);
    if ( Actor_IsSneaking(a7) )
    {
      BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a7, (int)a1, 0x7FFFFFFF, (int)a8, 0x1F);
      if ( Calc_MasteryFromSkill(BaseCalcAVi) >= 2 )
        v188 = 0;
    }
    if ( !a7[1].vtbl
      || (v22 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0xB0))(a7[1].vtbl),
          LOBYTE(v186) = 1,
          (v22 & 0xF) == 0) )
    {
      LOBYTE(v186) = 0;
    }
    LOBYTE(v184) = ((*((int (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0xB0))(a7[1].vtbl)
                  & 0x200) != 0;
    if ( Actor_IsSneaking(a7) )
    {
      v23 = Actor_GetBaseCalcAVi((int *)a7, (int)a1, 0x7FFFFFFF, (int)a8, 0x1F);
      if ( Calc_MasteryFromSkill(v23) >= 3 )
      {
        LOBYTE(v186) = 0;
        LOBYTE(v184) = 0;
      }
    }
    IsSneaking = Actor_IsSneaking(a7);
    v150 = flt_A6E688;
    LOBYTE(v189) = IsSneaking;
    Formatf = (char *)TESObjectREFR_GetParentCell(a1);
    v25 = (int)a1->vtbl->GetPos(a1);
    IsUnderwater = Actor_IsUnderwater__(a1, v25, (ExtraDataList *)Formatf, v150);
    v27 = a1[1].vtbl == 0;
    LOBYTE(v191) = IsUnderwater;
    LOBYTE(v182) = !v27
                && (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xDB))(a1[1].vtbl) == 9;
    LOBYTE(v180) = 1;
    if ( (_BYTE)a10 )
      LOBYTE(v189) = 0;
    if ( TESObjectREFR_GetParentCell(a7) )
    {
      ParentCell = TESObjectREFR_GetParentCell(a7);
      LOBYTE(v180) = TESObjectCELL_IsInterior(ParentCell) == 0;
    }
    v29 = ((double (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_38)(a1, 7);
    v30 = Double_To_SInt32(v29);
    v31 = ((double (__thiscall *)(TESObjectREFR *, int, int))a1->vtbl[1].Unk_38)(a1, 0x1F, v30);
    v32 = Double_To_SInt32(v31);
    v33 = Calc_LuckModifiedSkill(v32, v154);
    v34 = Double_To_SInt32(v33);
    Unk_38 = a7->vtbl[1].Unk_38;
    v191 = v34;
    v36 = ((double (__thiscall *)(TESObjectREFR *))Unk_38)(a7);
    v37 = Double_To_SInt32(v36);
    v38 = ((double (__thiscall *)(TESObjectREFR *, int, int))a7->vtbl[1].Unk_38)(a7, 0x1F, v37);
    v39 = Double_To_SInt32(v38);
    v40 = Calc_LuckModifiedSkill(v39, 7);
    v41 = Double_To_SInt32(v40);
    v155 = 0x2F;
    if ( ((int (__thiscall *)(TESObjectREFR *))a7->vtbl[1].Unk_37)(a7) <= 0 )
    {
      v42 = ((int (__thiscall *)(TESObjectREFR *, int))a7->vtbl[1].Unk_37)(a7, 0x2E);
      v192 = v42;
      if ( v42 < 0x64 )
      {
        Formatg = (char)v182;
        v104 = v191;
        v93 = v184;
        v92 = v189;
        v90 = v186;
        v89 = *(float *)&v188;
        v88 = v42;
        v87 = v183;
        v43 = ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_37)(a1, 0x2D);
        v179 = Calc_DetectionLevel(
                 v34,
                 v41,
                 (unsigned __int8)v185,
                 v187,
                 v43,
                 v87,
                 v88,
                 v89,
                 v90,
                 v92,
                 a11,
                 a10,
                 v93,
                 v104,
                 Formatg,
                 (int)v180,
                 0x2F,
                 v167,
                 v168,
                 v169);
      }
      else
      {
        v179 = 0xFFFFFF9C;
      }
    }
    else
    {
      v192 = 0x64;
      v179 = 0xFFFFFF9C;
    }
    if ( *(float *)&v187 <= dbl_A6C820 )
    {
      v44 = ((double (__thiscall *)(TESObjectREFRVtbl *))*((_DWORD *)a7[1].vtbl->super.super.InitializeComponent + 0xD7))(a7[1].vtbl);
      v179 = Double_To_SInt32(v44 + (double)v179);
    }
    if ( !(_BYTE)a7 || (_BYTE)a11 )
    {
      v45 = 0;
      if ( v179 > 0 )
        v45 = 3;
      if ( a1 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int, int, int))a1[1].vtbl->super.super.InitializeComponent
         + 0x2A))(
          a1[1].vtbl,
          a7,
          v45,
          v185,
          v179);
    }
    if ( byte_B3BD9A )
    {
      if ( !dword_B3BD9C && a7 == (TESObjectREFR *)TESDataHandler_g_PlayerRef || (TESObjectREFR *)dword_B3BD9C == a7 )
      {
        v181 = 0;
        if ( srcObj )
        {
          if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))srcObj->vtbl + 0x64))(srcObj) )
            v181 = srcObj;
        }
        v46 = dword_B12DB4 - 1;
        Singleton = FontManager_GetSingleton();
        v48 = sub_404FB0((_DWORD *)Singleton[v46]);
        v49 = Double_To_SInt32(v48 + dbl_A30E48);
        v50 = v49 + 0xA;
        if ( v181 == (TESChildCELL *)a1 )
        {
          v105 = (float)(v49 + 0xA);
          v51 = (double)(0x500 - iDebugTextLeftRightOffset);
          v94 = v51;
          Name = TESObjectREFR_GetName((TESObjectREFR *)v181);
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v51, Name, v94, v105, 3, 0xFFFFFFFF);
          v53 = TESObjectREFR_GetName(a7);
          HIDWORD(var120c) = "Running Detection Against %s";
          LODWORD(var120c) = 0xC8;
          _snprintf(Dest, var120c, v53);
          v107 = (float)(v49 + v50);
          v54 = (double)(0x500 - iDebugTextLeftRightOffset);
          v95 = v54;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v54, Dest, v95, v107, 3, 0xFFFFFFFF);
          v151 = v190;
          v170 = v49 + v49 + v50;
          v55 = TESObjectREFR_GetName((TESObjectREFR *)v181);
          HIDWORD(v96) = "%s sneak value %i";
          LODWORD(v96) = 0xC8;
          _snprintf(Dest, v96, v55, v151);
          v108 = (float)v170;
          v190 = 0x500 - iDebugTextLeftRightOffset;
          v56 = (double)v190;
          v97 = v56;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v56, Dest, v97, v108, 3, 0xFFFFFFFF);
          v171 = v49 + v170;
          v57 = TESObjectREFR_GetName(a7);
          HIDWORD(v98) = "%s sneak value %i";
          LODWORD(v98) = 0xC8;
          _snprintf(Dest, v98, v57, 0x7FFFFFFF);
          v109 = (float)v171;
          v58 = (double)(0x500 - iDebugTextLeftRightOffset);
          v99 = v58;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v58, Dest, v99, v109, 3, 0xFFFFFFFF);
          HIDWORD(v91) = "Line of sight %i";
          LODWORD(v91) = 0xC8;
          v172 = v49 + v171;
          _snprintf(Dest, v91, (const char *)(unsigned __int8)v185);
          v110 = (float)v172;
          v59 = (double)(0x500 - iDebugTextLeftRightOffset);
          v100 = v59;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v59, Dest, v100, v110, 3, 0xFFFFFFFF);
          HIDWORD(v101) = "Distance between %.0f";
          LODWORD(v101) = 0xC8;
          v173 = v49 + v172;
          _snprintf(
            Dest,
            v101,
            (const char *)COERCE_UNSIGNED_INT64(*(float *)&v187),
            (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v187)));
          v111 = (float)v173;
          v60 = (double)(0x500 - iDebugTextLeftRightOffset);
          v102 = v60;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v60, Dest, v102, v111, 3, 0xFFFFFFFF);
          v61 = ((int (__thiscall *)(TESObjectREFR *, int, int))a1->vtbl[1].Unk_37)(a1, 0x2D, v155);
          v62 = (TESObjectREFR *)v182;
          v156 = v61;
          v63 = TESObjectREFR_GetName((TESObjectREFR *)v182);
          HIDWORD(var120i) = "%s blindess value %i";
          LODWORD(var120i) = 0xC8;
          _snprintf(v194, var120i, v63, v156);
          Formath = v60;
          v64 = (double)(0x500 - iDebugTextLeftRightOffset);
          v113 = v64;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v64, v194, v113, Formath, 3, 0xFFFFFFFF);
          v157 = v184;
          v174 = v49 + v49 + v173;
          v65 = TESObjectREFR_GetName(a7);
          HIDWORD(var120k) = "Light level on %s is  %i";
          LODWORD(var120k) = 0xC8;
          _snprintf(v194, var120k, v65, v157);
          Formati = (float)v174;
          v66 = (double)(0x500 - iDebugTextLeftRightOffset);
          v115 = v66;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v66, v194, v115, Formati, 3, 0xFFFFFFFF);
          v158 = *(_DWORD *)Dest;
          v175 = v49 + v174;
          v67 = TESObjectREFR_GetName(a7);
          HIDWORD(var120m) = "Invisiblity level %s is  %i";
          LODWORD(var120m) = 0xC8;
          _snprintf(v194, var120m, v67, v158);
          Formatj = (float)v175;
          v68 = (double)(0x500 - iDebugTextLeftRightOffset);
          v117 = v68;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v68, v194, v117, Formatj, 3, 0xFFFFFFFF);
          v159 = v189;
          v176 = v49 + v175;
          v69 = TESObjectREFR_GetName(a7);
          HIDWORD(var120o) = "%s boot weight is  %i";
          LODWORD(var120o) = 0xC8;
          _snprintf(v194, var120o, v69, v159);
          Formatk = (float)v176;
          v70 = (double)(0x500 - iDebugTextLeftRightOffset);
          v119 = v70;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v70, v194, v119, Formatk, 3, 0xFFFFFFFF);
          v71 = v49 + v176;
          v177 = v49 + v176;
          v160 = TESObjectREFR_GetName(a7);
          if ( (_BYTE)v187 )
            HIDWORD(Format) = "%s is moving";
          else
            HIDWORD(Format) = "%s is not moving";
          LODWORD(Format) = 0xC8;
          _snprintf(v194, Format, v160);
          Formatl = (float)v177;
          v72 = (double)(0x500 - iDebugTextLeftRightOffset);
          v120 = v72;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v72, v194, v120, Formatl, 3, 0xFFFFFFFF);
          v73 = v49 + v71;
          v161 = TESObjectREFR_GetName(a7);
          if ( (_BYTE)v190 )
            HIDWORD(Formata) = "%s is sneaking";
          else
            HIDWORD(Formata) = "%s is not sneaking";
          LODWORD(Formata) = 0xC8;
          _snprintf(v194, Formata, v161);
          Formatm = (float)v73;
          v74 = (double)(0x500 - iDebugTextLeftRightOffset);
          v121 = v74;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v74, v194, v121, Formatm, 3, 0xFFFFFFFF);
          v75 = v49 + v73;
          v162 = TESObjectREFR_GetName(v62);
          v152 = TESObjectREFR_GetName(a7);
          if ( a12 )
            HIDWORD(v122) = "%s attaked %s";
          else
            HIDWORD(v122) = "%s did not attack %s ";
          LODWORD(v122) = 0xC8;
          _snprintf(v194, v122, v152, v162);
          Formatn = (float)v75;
          v76 = (double)(0x500 - iDebugTextLeftRightOffset);
          v123 = v76;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v76, v194, v123, Formatn, 3, 0xFFFFFFFF);
          v77 = v49 + v75;
          v163 = TESObjectREFR_GetName(a7);
          if ( (_BYTE)a11 )
            HIDWORD(Formatb) = "%s is in combat";
          else
            HIDWORD(Formatb) = "%s is not in combat ";
          LODWORD(Formatb) = 0xC8;
          _snprintf(v194, Formatb, v163);
          Formato = (float)v77;
          v78 = (double)(0x500 - iDebugTextLeftRightOffset);
          v124 = v78;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v78, v194, v124, Formato, 3, 0xFFFFFFFF);
          v79 = v49 + v77;
          v164 = TESObjectREFR_GetName(a7);
          if ( (_BYTE)v185 )
            HIDWORD(Formatc) = "%s is running";
          else
            HIDWORD(Formatc) = "%s is not running";
          LODWORD(Formatc) = 0xC8;
          _snprintf(v194, Formatc, v164);
          Formatp = (float)v79;
          v80 = (double)(0x500 - iDebugTextLeftRightOffset);
          v125 = v80;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v80, v194, v125, Formatp, 3, 0xFFFFFFFF);
          v81 = v49 + v79;
          v165 = TESObjectREFR_GetName(a7);
          if ( (_BYTE)v192 )
            HIDWORD(Formatd) = "%s is underwater";
          else
            HIDWORD(Formatd) = "%s is not underwater";
          LODWORD(Formatd) = 0xC8;
          _snprintf(v194, Formatd, v165);
          Formatq = (float)v81;
          v82 = (double)(0x500 - iDebugTextLeftRightOffset);
          v126 = v82;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v82, v194, v126, Formatq, 3, 0xFFFFFFFF);
          v83 = v49 + v81;
          v166 = TESObjectREFR_GetName(v62);
          if ( (_BYTE)v183 )
            HIDWORD(Formate) = "%s is sleeping";
          else
            HIDWORD(Formate) = "%s is not sleeping";
          LODWORD(Formate) = 0xC8;
          _snprintf(v194, Formate, v166);
          Formatr = (float)v83;
          v84 = (double)(0x500 - iDebugTextLeftRightOffset);
          v127 = v84;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v84, v194, v127, Formatr, 3, 0xFFFFFFFF);
          v153 = TESObjectREFR_GetName(a7);
          v85 = TESObjectREFR_GetName(v62);
          HIDWORD(v103) = "%s detection level to %s is  %i";
          LODWORD(v103) = 0xC8;
          _snprintf(v194, v103, v85, v153, v181);
          Formats = (float)(v49 + v83);
          v86 = (double)(0x500 - iDebugTextLeftRightOffset);
          v128 = v86;
          InterfaceMgr_DebugTextLine((char)a7, st5_0, st6_0, v86, v194, v128, Formats, 3, 0xFFFFFFFF);
        }
      }
    }
  }
  return Actor_GetDetectionLevel_::ReturnDetectionLevel(a6, (int)a7, (int)a8, a9, a10, a11);
}
