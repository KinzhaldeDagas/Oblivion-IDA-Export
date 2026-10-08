// Oblivion authoritative detection pipeline. Computes this detector's level against a target actor: obtains cached/physical LOS and distance, target light, boot weight, movement/running/sneak/combat/underwater/exterior state, Luck-modified Sneak values, detector Blindness AV 0x2D, target Chameleon AV 0x2E, and target Invisibility AV 0x2F; then calls Calc_DetectionLevel and updates the detector's process entry. Positive means detected. Fallout only corroborates the GetDetectionLevelAgainstActor terminology.
void __userpurge Actor_GetDetectionLevelAgainstActor(
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
  int v13; // eax
  double v14; // st7
  double v15; // st7
  char v16; // al
  TESObjectREFRVtbl *vtbl; // edx
  int v18; // eax
  _DWORD *v19; // eax
  SInt32 BaseCalcAVi; // eax
  char v21; // al
  SInt32 v22; // eax
  bool IsSneaking; // al
  float *v24; // eax
  char IsUnderwater; // al
  bool v26; // zf
  TESObjectCELL *DwordAtOffset40; // eax
  double v28; // st7
  int v29; // eax
  double v30; // st7
  SInt32 v31; // eax
  double v32; // st7
  int v33; // esi
  void (__thiscall *Unk_38)(TESObjectREFR *); // eax
  double v35; // st7
  int v36; // eax
  double v37; // st7
  SInt32 v38; // eax
  double v39; // st7
  int v40; // edi
  int v41; // eax
  int v42; // eax
  double v43; // st7
  int v44; // eax
  int v45; // esi
  _DWORD *Singleton; // eax
  double v47; // st7
  int v48; // esi
  int v49; // edi
  char *Name; // eax
  char *v51; // eax
  char *v52; // eax
  char *v53; // eax
  int v54; // eax
  TESObjectREFR *v55; // ebx
  char *v56; // eax
  char *v57; // eax
  char *v58; // eax
  char *v59; // eax
  int v60; // edi
  int v61; // edi
  int v62; // edi
  int v63; // edi
  int v64; // edi
  int v65; // edi
  int v66; // edi
  char *v67; // eax
  int v68; // [esp+38h] [ebp-140h]
  int v69; // [esp+3Ch] [ebp-13Ch]
  float v70; // [esp+40h] [ebp-138h]
  int v71; // [esp+44h] [ebp-134h]
  size_t v72; // [esp+44h] [ebp-134h]
  int v73; // [esp+48h] [ebp-130h]
  int v74; // [esp+54h] [ebp-124h]
  float v75; // [esp+54h] [ebp-124h]
  float v76; // [esp+54h] [ebp-124h]
  size_t v77; // [esp+54h] [ebp-124h]
  float v78; // [esp+54h] [ebp-124h]
  size_t v79; // [esp+54h] [ebp-124h]
  float v80; // [esp+54h] [ebp-124h]
  float v81; // [esp+54h] [ebp-124h]
  size_t v82; // [esp+54h] [ebp-124h]
  float v83; // [esp+54h] [ebp-124h]
  size_t v84; // [esp+54h] [ebp-124h]
  int v85; // [esp+58h] [ebp-120h]
  float v86; // [esp+58h] [ebp-120h]
  size_t var120c; // [esp+58h] [ebp-120h]
  float v88; // [esp+58h] [ebp-120h]
  float v89; // [esp+58h] [ebp-120h]
  float v90; // [esp+58h] [ebp-120h]
  float v91; // [esp+58h] [ebp-120h]
  float v92; // [esp+58h] [ebp-120h]
  size_t var120i; // [esp+58h] [ebp-120h]
  float v94; // [esp+58h] [ebp-120h]
  size_t var120k; // [esp+58h] [ebp-120h]
  float v96; // [esp+58h] [ebp-120h]
  size_t var120m; // [esp+58h] [ebp-120h]
  float v98; // [esp+58h] [ebp-120h]
  size_t var120o; // [esp+58h] [ebp-120h]
  float v100; // [esp+58h] [ebp-120h]
  float v101; // [esp+58h] [ebp-120h]
  float v102; // [esp+58h] [ebp-120h]
  size_t v103; // [esp+58h] [ebp-120h]
  float v104; // [esp+58h] [ebp-120h]
  float v105; // [esp+58h] [ebp-120h]
  float v106; // [esp+58h] [ebp-120h]
  float v107; // [esp+58h] [ebp-120h]
  float v108; // [esp+58h] [ebp-120h]
  float v109; // [esp+58h] [ebp-120h]
  char *Formatf; // [esp+5Ch] [ebp-11Ch]
  char *Formatg; // [esp+5Ch] [ebp-11Ch]
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
  TESChildCELL *v130; // [esp+60h] [ebp-118h]
  float v131; // [esp+60h] [ebp-118h]
  int v132; // [esp+60h] [ebp-118h]
  char *v133; // [esp+60h] [ebp-118h]
  char *v134; // [esp+60h] [ebp-118h]
  SInt32 v135; // [esp+64h] [ebp-114h]
  int v136; // [esp+64h] [ebp-114h]
  int v137; // [esp+64h] [ebp-114h]
  int v138; // [esp+64h] [ebp-114h]
  int v139; // [esp+64h] [ebp-114h]
  int v140; // [esp+64h] [ebp-114h]
  char *v141; // [esp+64h] [ebp-114h]
  char *v142; // [esp+64h] [ebp-114h]
  char *v143; // [esp+64h] [ebp-114h]
  char *v144; // [esp+64h] [ebp-114h]
  char *v145; // [esp+64h] [ebp-114h]
  char *v146; // [esp+64h] [ebp-114h]
  char *v147; // [esp+64h] [ebp-114h]
  int v148; // [esp+68h] [ebp-110h]
  int v149; // [esp+6Ch] [ebp-10Ch]
  int v150; // [esp+74h] [ebp-104h]
  int v151; // [esp+74h] [ebp-104h]
  int v152; // [esp+74h] [ebp-104h]
  int v153; // [esp+74h] [ebp-104h]
  int v154; // [esp+78h] [ebp-100h]
  int v155; // [esp+78h] [ebp-100h]
  int v156; // [esp+78h] [ebp-100h]
  int v157; // [esp+78h] [ebp-100h]
  int v158; // [esp+78h] [ebp-100h]
  int v159; // [esp+7Ch] [ebp-FCh]
  int v160; // [esp+7Ch] [ebp-FCh]
  TESChildCELL *v161; // [esp+80h] [ebp-F8h]
  TESChildCELL *v162; // [esp+80h] [ebp-F8h]
  TESChildCELL *v163; // [esp+84h] [ebp-F4h] BYREF
  int v164; // [esp+88h] [ebp-F0h]
  int v165; // [esp+8Ch] [ebp-ECh]
  int v166; // [esp+90h] [ebp-E8h]
  int v167; // [esp+94h] [ebp-E4h]
  int v168; // [esp+98h] [ebp-E0h]
  int BootWeight; // [esp+9Ch] [ebp-DCh]
  int v170; // [esp+A0h] [ebp-D8h]
  int v171; // [esp+A4h] [ebp-D4h]
  int v172; // [esp+A8h] [ebp-D0h]
  int v173; // [esp+ACh] [ebp-CCh]
  char Dest[4]; // [esp+B0h] [ebp-C8h] BYREF
  char v175[192]; // [esp+B4h] [ebp-C4h] BYREF

  if ( a1[1].vtbl ) /*0x5f655f*/
  {
    *a8 = 0; /*0x5f6574*/
    v13 = (*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, TESObjectREFR *, int, double@<st0>, double@<st1>, double@<st2>))a1[1].vtbl->super.super.InitializeComponent /*0x5f658d*/
           + 0xEC))(
            a1[1].vtbl,
            a7,
            a2,
            a5,
            st6_0,
            st5_0);
    if ( v13 ) /*0x5f6591*/
    {
      v159 = *(_DWORD *)(v13 + 0xC); /*0x5f6599*/
      *a8 = *(_BYTE *)(v13 + 8); /*0x5f659d*/
    }
    if ( a7->vtbl->GetNiNode(a7) ) /*0x5f65aa*/
    {
      if ( (_BYTE)a7 || v159 == 0x7FFFFFFF ) /*0x5f65c2*/
      {
        *(float *)&v168 = TesObjectREF_GetDistance(a1, a7, 0); /*0x5f65d2*/
        ++unk_B333C0; /*0x5f65d6*/
        v14 = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))*((_DWORD *)a7[1].vtbl->super.super.InitializeComponent /*0x5f65eb*/
                                                                                    + 0xEB))(
                a7[1].vtbl,
                a7,
                0);
        v164 = Double_To_SInt32(v14); /*0x5f65f2*/
        v15 = ((double (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_38)(a1, 0x29); /*0x5f6602*/
        if ( v15 > *(float *)&SrcStr ) /*0x5f660f*/
        {
          v15 = (double)v164 * MEMORY[0xB37A50]; /*0x5f6615*/
          v164 = Double_To_SInt32(v15); /*0x5f6623*/
          if ( v164 > 0x64 ) /*0x5f6627*/
            v164 = 0x64; /*0x5f6629*/
        }
        v163 = (TESChildCELL *)3; /*0x5f663f*/
        v16 = Actor_LineOfSight((Actor *)a1, v15, 1, a7, 1, &v163, 0); /*0x5f6647*/
        vtbl = a1->vtbl; /*0x5f664c*/
        LOBYTE(v166) = v16; /*0x5f664e*/
        if ( ((int (__thiscall *)(TESObjectREFR *))vtbl[1].IsMobileObject)(a1) ) /*0x5f665a*/
        {
          v18 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1); /*0x5f666a*/
          if ( (TESObjectREFR *)CombatController_GetCurrentTarget(v18) == a7 ) /*0x5f6675*/
          {
            v130 = v163; /*0x5f6683*/
            v19 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1); /*0x5f6686*/
            sub_612810(v19, (int)v130); /*0x5f668a*/
          }
        }
        *a8 = v166; /*0x5f6693*/
        BootWeight = Actor_GetBootWeight((int)a7, (int)a1); /*0x5f669e*/
        if ( Actor_IsSneaking(a7) ) /*0x5f66a2*/
        {
          BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a7, (int)a1, 0x7FFFFFFF, (int)a8, 0x1F); /*0x5f66af*/
          if ( Calc_MasteryFromSkill(BaseCalcAVi) >= kSkillMastery_Journeyman ) /*0x5f66c0*/
            BootWeight = 0; /*0x5f66c2*/
        }
        if ( !a7[1].vtbl /*0x5f66e4*/
          || (v21 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0xB0))(a7[1].vtbl),
              LOBYTE(v167) = 1,
              (v21 & 0xF) == 0) )
        {
          LOBYTE(v167) = 0; /*0x5f66e6*/
        }
        LOBYTE(v165) = ((*((int (__thiscall **)(TESObjectREFRVtbl *))a7[1].vtbl->super.super.InitializeComponent + 0xB0))(a7[1].vtbl) /*0x5f6703*/
                      & 0x200) != 0;
        if ( Actor_IsSneaking(a7) ) /*0x5f670a*/
        {
          v22 = Actor_GetBaseCalcAVi((int *)a7, (int)a1, 0x7FFFFFFF, (int)a8, 0x1F); /*0x5f6717*/
          if ( Calc_MasteryFromSkill(v22) >= kSkillMastery_Expert ) /*0x5f6728*/
          {
            LOBYTE(v167) = 0; /*0x5f672a*/
            LOBYTE(v165) = 0; /*0x5f672f*/
          }
        }
        IsSneaking = Actor_IsSneaking(a7); /*0x5f6736*/
        v131 = flt_A6E688; /*0x5f6744*/
        LOBYTE(v170) = IsSneaking; /*0x5f6747*/
        Formatf = (char *)Shared_GetDwordAtOffset40(a1); /*0x5f6752*/
        v24 = a1->vtbl->GetPos(a1); /*0x5f675b*/
        IsUnderwater = Actor_IsUnderwater__(a1, (int)v24, (ExtraDataList *)Formatf, v131); /*0x5f6760*/
        v26 = a1[1].vtbl == 0; /*0x5f6765*/
        LOBYTE(v172) = IsUnderwater; /*0x5f6769*/
        LOBYTE(v163) = !v26 /*0x5f6786*/
                    && (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xDB))(a1[1].vtbl) == 9;
        LOBYTE(v161) = 1; /*0x5f6793*/
        if ( (_BYTE)a10 ) /*0x5f6798*/
          LOBYTE(v170) = 0; /*0x5f679a*/
        if ( Shared_GetDwordAtOffset40(a7) ) /*0x5f67a1*/
        {
          DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a7); /*0x5f67ac*/
          LOBYTE(v161) = TESObjectCELL_IsInterior(DwordAtOffset40) == 0; /*0x5f67bd*/
        }
        v28 = ((double (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_38)(a1, 7); /*0x5f67cd*/
        v29 = Double_To_SInt32(v28); /*0x5f67cf*/
        v30 = ((double (__thiscall *)(TESObjectREFR *, int, int))a1->vtbl[1].Unk_38)(a1, 0x1F, v29); /*0x5f67e1*/
        v31 = Double_To_SInt32(v30); /*0x5f67e3*/
        v32 = Calc_LuckModifiedSkill(v31, v135);// AVU hook site: detector Sneak. Oblivion has just rounded detector Luck and Sneak via Double_To_SInt32 and calls Calc_LuckModifiedSkill(skill, luck); the original post-call Double_To_SInt32 remains. /*0x5f67e9*/
        v33 = Double_To_SInt32(v32); /*0x5f67f9*/
        Unk_38 = a7->vtbl[1].Unk_38; /*0x5f67fb*/
        v172 = v33; /*0x5f6805*/
        v35 = ((double (__thiscall *)(TESObjectREFR *))Unk_38)(a7); /*0x5f6809*/
        v36 = Double_To_SInt32(v35); /*0x5f680b*/
        v37 = ((double (__thiscall *)(TESObjectREFR *, int, int))a7->vtbl[1].Unk_38)(a7, 0x1F, v36); /*0x5f681e*/
        v38 = Double_To_SInt32(v37); /*0x5f6820*/
        v39 = Calc_LuckModifiedSkill(v38, 7);   // AVU hook site: target Sneak. Oblivion has just rounded target Luck and Sneak via Double_To_SInt32 and calls Calc_LuckModifiedSkill(skill, luck); the original post-call Double_To_SInt32 remains. /*0x5f6826*/
        v40 = Double_To_SInt32(v39); /*0x5f6836*/
        v136 = 0x2F;                            // Target Invisibility AV 0x2F check. If current integer invisibility is positive, Oblivion skips normal detection, stores chameleon/invis marker 100, and forces detection result -100. /*0x5f683e*/
        if ( ((int (__thiscall *)(TESObjectREFR *))a7->vtbl[1].Unk_37)(a7) <= 0 ) /*0x5f684a*/
        {
          v41 = ((int (__thiscall *)(TESObjectREFR *, int))a7->vtbl[1].Unk_37)(a7, 0x2E);// AVU hook site: target Chameleon. Vanilla reads current integer AV 0x2E, stores it as the detection invisibility/chameleon parameter, and forces result -100 when value >= 100. /*0x5f686e*/
          v173 = v41; /*0x5f6873*/
          if ( v41 < 0x64 ) /*0x5f6877*/
          {
            Formatg = (char *)v163; /*0x5f6890*/
            v85 = v172; /*0x5f6895*/
            v74 = v165; /*0x5f689d*/
            v73 = v170; /*0x5f68af*/
            v71 = v167; /*0x5f68b4*/
            v70 = *(float *)&BootWeight; /*0x5f68b9*/
            v69 = v41; /*0x5f68ba*/
            v68 = v164; /*0x5f68bd*/
            v42 = ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_37)(a1, 0x2D);// AVU hook site: detector Blindness. Vanilla reads current integer AV 0x2D and passes it into Calc_DetectionLevel. /*0x5f68c8*/
            v160 = Calc_DetectionLevel( /*0x5f68e3*/
                     v33,
                     v40,
                     COERCE_FLOAT((unsigned __int8)v166),
                     v168,
                     v42,
                     v68,
                     v69,
                     v70,
                     v71,
                     v73,
                     a11,
                     a10,
                     v74,
                     v85,
                     (int)Formatg,
                     (int)v161,
                     0x2F,
                     v148,
                     v149);
          }
          else
          {
            v160 = 0xFFFFFF9C; /*0x5f6879*/
          }
        }
        else
        {
          v173 = 0x64; /*0x5f684c*/
          v160 = 0xFFFFFF9C; /*0x5f6854*/
        }
        if ( *(float *)&v168 <= dbl_A6C820 ) /*0x5f68f6*/
        {
          v43 = ((double (__thiscall *)(TESObjectREFRVtbl *))*((_DWORD *)a7[1].vtbl->super.super.InitializeComponent /*0x5f6903*/
                                                             + 0xD7))(a7[1].vtbl);
          v160 = Double_To_SInt32(v43 + (double)v160); /*0x5f690e*/
        }
        if ( !(_BYTE)a7 || (_BYTE)a11 ) /*0x5f6924*/
        {
          v44 = 0; /*0x5f692a*/
          if ( v160 > 0 ) /*0x5f692e*/
            v44 = 3; /*0x5f6930*/
          if ( a1 != (TESObjectREFR *)reference ) /*0x5f693b*/
            (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int, int, int))a1[1].vtbl->super.super.InitializeComponent /*0x5f6950*/
             + 0x2A))(
              a1[1].vtbl,
              a7,
              v44,
              v166,
              v160);
        }
        if ( BYTE2(qword_B3BB2C[0x9B]) ) /*0x5f6952*/
        {
          if ( !LODWORD(qword_B3BB2C[0x9C]) && a7 == (TESObjectREFR *)reference /*0x5f6972*/
            || (TESObjectREFR *)LODWORD(qword_B3BB2C[0x9C]) == a7 )
          {
            v162 = 0; /*0x5f6980*/
            if ( MEMORY[0xB333B4] ) /*0x5f6978*/
            {
              if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))MEMORY[0xB333B4]->vtbl + 0x64))(MEMORY[0xB333B4]) ) /*0x5f6992*/
                v162 = MEMORY[0xB333B4]; /*0x5f699e*/
            }
            v45 = dword_B12DB4 - 1; /*0x5f69a8*/
            Singleton = FontManager_GetSingleton(); /*0x5f69ab*/
            v47 = sub_404FB0((_DWORD *)Singleton[v45]); /*0x5f69b3*/
            v48 = Double_To_SInt32(v47 + dbl_A30E48); /*0x5f69c9*/
            v49 = v48 + 0xA; /*0x5f69cb*/
            if ( v162 == (TESChildCELL *)a1 ) /*0x5f69d2*/
            {
              v86 = (float)(v48 + 0xA); /*0x5f69ee*/
              v75 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f69fa*/
              Name = TESObjectREFR_GetName((TESObjectREFR *)v162); /*0x5f69fd*/
              InterfaceMgr_DebugTextLine(Name, v75, v86, 3, 0xFFFFFFFF); /*0x5f6a03*/
              v51 = TESObjectREFR_GetName(a7); /*0x5f6a13*/
              HIDWORD(var120c) = "Running Detection Against %s"; /*0x5f6a19*/
              LODWORD(var120c) = 0xC8; /*0x5f6a22*/
              _snprintf(Dest, var120c, v51); /*0x5f6a28*/
              v88 = (float)(v48 + v49); /*0x5f6a46*/
              v76 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6a56*/
              InterfaceMgr_DebugTextLine(Dest, v76, v88, 3, 0xFFFFFFFF); /*0x5f6a5a*/
              v132 = v171; /*0x5f6a6c*/
              v150 = v48 + v48 + v49; /*0x5f6a6d*/
              v52 = TESObjectREFR_GetName((TESObjectREFR *)v162); /*0x5f6a71*/
              HIDWORD(v77) = "%s sneak value %i"; /*0x5f6a77*/
              LODWORD(v77) = 0xC8; /*0x5f6a80*/
              _snprintf(Dest, v77, v52, v132); /*0x5f6a86*/
              v89 = (float)v150; /*0x5f6aa4*/
              v171 = 0x500 - iDebugTextLeftRightOffset; /*0x5f6aa8*/
              v78 = (float)v171; /*0x5f6ab4*/
              InterfaceMgr_DebugTextLine(Dest, v78, v89, 3, 0xFFFFFFFF); /*0x5f6ab8*/
              v151 = v48 + v150; /*0x5f6ac9*/
              v53 = TESObjectREFR_GetName(a7); /*0x5f6acd*/
              HIDWORD(v79) = "%s sneak value %i"; /*0x5f6ad3*/
              LODWORD(v79) = 0xC8; /*0x5f6adc*/
              _snprintf(Dest, v79, v53, 0x7FFFFFFF); /*0x5f6ae2*/
              v90 = (float)v151; /*0x5f6b00*/
              v80 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6b10*/
              InterfaceMgr_DebugTextLine(Dest, v80, v90, 3, 0xFFFFFFFF); /*0x5f6b14*/
              HIDWORD(v72) = "Line of sight %i"; /*0x5f6b1f*/
              LODWORD(v72) = 0xC8; /*0x5f6b28*/
              v152 = v48 + v151; /*0x5f6b30*/
              _snprintf(Dest, v72, (const char *)(unsigned __int8)v166); /*0x5f6b34*/
              v91 = (float)v152; /*0x5f6b56*/
              v81 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6b62*/
              InterfaceMgr_DebugTextLine(Dest, v81, v91, 3, 0xFFFFFFFF); /*0x5f6b66*/
              HIDWORD(v82) = "Distance between %.0f"; /*0x5f6b75*/
              LODWORD(v82) = 0xC8; /*0x5f6b7e*/
              v153 = v48 + v152; /*0x5f6b86*/
              _snprintf( /*0x5f6b8a*/
                Dest,
                v82,
                (const char *)COERCE_UNSIGNED_INT64(*(float *)&v168),
                (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v168)));
              v92 = (float)v153; /*0x5f6ba8*/
              v154 = 0x500 - iDebugTextLeftRightOffset; /*0x5f6bac*/
              v83 = (float)v154; /*0x5f6bb8*/
              InterfaceMgr_DebugTextLine(Dest, v83, v92, 3, 0xFFFFFFFF); /*0x5f6bbc*/
              v54 = ((int (__thiscall *)(TESObjectREFR *, int, int))a1->vtbl[1].Unk_37)(a1, 0x2D, v136);// AVU hook site: detection debug text only. Vanilla rereads detector Blindness AV 0x2D for the debug line; AVU keeps this display consistent with its optional Blindness DR. /*0x5f6bd6*/
              v55 = (TESObjectREFR *)v163; /*0x5f6bd8*/
              v137 = v54; /*0x5f6bdc*/
              v56 = TESObjectREFR_GetName((TESObjectREFR *)v163); /*0x5f6bdf*/
              HIDWORD(var120i) = "%s blindess value %i"; /*0x5f6be5*/
              LODWORD(var120i) = 0xC8; /*0x5f6bee*/
              _snprintf(v175, var120i, v56, v137); /*0x5f6bf4*/
              Formath = (float)v154; /*0x5f6c0c*/
              v94 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6c22*/
              InterfaceMgr_DebugTextLine(v175, v94, Formath, 3, 0xFFFFFFFF); /*0x5f6c26*/
              v138 = v165; /*0x5f6c34*/
              v155 = v48 + v48 + v153; /*0x5f6c37*/
              v57 = TESObjectREFR_GetName(a7); /*0x5f6c3b*/
              HIDWORD(var120k) = "Light level on %s is  %i"; /*0x5f6c41*/
              LODWORD(var120k) = 0xC8; /*0x5f6c4a*/
              _snprintf(v175, var120k, v57, v138); /*0x5f6c50*/
              Formati = (float)v155; /*0x5f6c6e*/
              v96 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6c7e*/
              InterfaceMgr_DebugTextLine(v175, v96, Formati, 3, 0xFFFFFFFF); /*0x5f6c82*/
              v139 = *(_DWORD *)Dest; /*0x5f6c8e*/
              v156 = v48 + v155; /*0x5f6c93*/
              v58 = TESObjectREFR_GetName(a7); /*0x5f6c97*/
              HIDWORD(var120m) = "Invisiblity level %s is  %i"; /*0x5f6c9d*/
              LODWORD(var120m) = 0xC8; /*0x5f6ca6*/
              _snprintf(v175, var120m, v58, v139); /*0x5f6cac*/
              Formatj = (float)v156; /*0x5f6cca*/
              v98 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6cda*/
              InterfaceMgr_DebugTextLine(v175, v98, Formatj, 3, 0xFFFFFFFF); /*0x5f6cde*/
              v140 = v170; /*0x5f6cec*/
              v157 = v48 + v156; /*0x5f6cef*/
              v59 = TESObjectREFR_GetName(a7); /*0x5f6cf3*/
              HIDWORD(var120o) = "%s boot weight is  %i"; /*0x5f6cf9*/
              LODWORD(var120o) = 0xC8; /*0x5f6d02*/
              _snprintf(v175, var120o, v59, v140); /*0x5f6d08*/
              Formatk = (float)v157; /*0x5f6d20*/
              v100 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6d36*/
              InterfaceMgr_DebugTextLine(v175, v100, Formatk, 3, 0xFFFFFFFF); /*0x5f6d3a*/
              v60 = v48 + v157; /*0x5f6d3f*/
              v158 = v48 + v157; /*0x5f6d46*/
              v141 = TESObjectREFR_GetName(a7); /*0x5f6d54*/
              if ( (_BYTE)v168 ) /*0x5f6d55*/
                HIDWORD(Format) = "%s is moving"; /*0x5f6d57*/
              else
                HIDWORD(Format) = "%s is not moving"; /*0x5f6d68*/
              LODWORD(Format) = 0xC8; /*0x5f6d5c*/
              _snprintf(v175, Format, v141); /*0x5f6d66*/
              Formatl = (float)v158; /*0x5f6d95*/
              v101 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6da5*/
              InterfaceMgr_DebugTextLine(v175, v101, Formatl, 3, 0xFFFFFFFF); /*0x5f6da9*/
              v61 = v48 + v60; /*0x5f6dae*/
              v142 = TESObjectREFR_GetName(a7); /*0x5f6dc3*/
              if ( (_BYTE)v171 ) /*0x5f6dc4*/
                HIDWORD(Formata) = "%s is sneaking"; /*0x5f6dc6*/
              else
                HIDWORD(Formata) = "%s is not sneaking"; /*0x5f6dd7*/
              LODWORD(Formata) = 0xC8; /*0x5f6dcb*/
              _snprintf(v175, Formata, v142); /*0x5f6dd5*/
              Formatm = (float)v61; /*0x5f6e04*/
              v102 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6e14*/
              InterfaceMgr_DebugTextLine(v175, v102, Formatm, 3, 0xFFFFFFFF); /*0x5f6e18*/
              v62 = v48 + v61; /*0x5f6e1d*/
              v143 = TESObjectREFR_GetName(v55); /*0x5f6e2d*/
              v133 = TESObjectREFR_GetName(a7); /*0x5f6e3d*/
              if ( a12 ) /*0x5f6e3e*/
                HIDWORD(v103) = "%s attaked %s"; /*0x5f6e40*/
              else
                HIDWORD(v103) = "%s did not attack %s "; /*0x5f6e51*/
              LODWORD(v103) = 0xC8; /*0x5f6e45*/
              _snprintf(v175, v103, v133, v143); /*0x5f6e4f*/
              Formatn = (float)v62; /*0x5f6e7e*/
              v104 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6e8e*/
              InterfaceMgr_DebugTextLine(v175, v104, Formatn, 3, 0xFFFFFFFF); /*0x5f6e92*/
              v63 = v48 + v62; /*0x5f6e97*/
              v144 = TESObjectREFR_GetName(a7); /*0x5f6eaf*/
              if ( (_BYTE)a11 ) /*0x5f6eb0*/
                HIDWORD(Formatb) = "%s is in combat"; /*0x5f6eb2*/
              else
                HIDWORD(Formatb) = "%s is not in combat "; /*0x5f6ec3*/
              LODWORD(Formatb) = 0xC8; /*0x5f6eb7*/
              _snprintf(v175, Formatb, v144); /*0x5f6ec1*/
              Formato = (float)v63; /*0x5f6ef0*/
              v105 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6f00*/
              InterfaceMgr_DebugTextLine(v175, v105, Formato, 3, 0xFFFFFFFF); /*0x5f6f04*/
              v64 = v48 + v63; /*0x5f6f09*/
              v145 = TESObjectREFR_GetName(a7); /*0x5f6f1e*/
              if ( (_BYTE)v166 ) /*0x5f6f1f*/
                HIDWORD(Formatc) = "%s is running"; /*0x5f6f21*/
              else
                HIDWORD(Formatc) = "%s is not running"; /*0x5f6f32*/
              LODWORD(Formatc) = 0xC8; /*0x5f6f26*/
              _snprintf(v175, Formatc, v145); /*0x5f6f30*/
              Formatp = (float)v64; /*0x5f6f5f*/
              v106 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6f6f*/
              InterfaceMgr_DebugTextLine(v175, v106, Formatp, 3, 0xFFFFFFFF); /*0x5f6f73*/
              v65 = v48 + v64; /*0x5f6f78*/
              v146 = TESObjectREFR_GetName(a7); /*0x5f6f8d*/
              if ( (_BYTE)v173 ) /*0x5f6f8e*/
                HIDWORD(Formatd) = "%s is underwater"; /*0x5f6f90*/
              else
                HIDWORD(Formatd) = "%s is not underwater"; /*0x5f6fa1*/
              LODWORD(Formatd) = 0xC8; /*0x5f6f95*/
              _snprintf(v175, Formatd, v146); /*0x5f6f9f*/
              Formatq = (float)v65; /*0x5f6fce*/
              v107 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f6fde*/
              InterfaceMgr_DebugTextLine(v175, v107, Formatq, 3, 0xFFFFFFFF); /*0x5f6fe2*/
              v66 = v48 + v65; /*0x5f6fe7*/
              v147 = TESObjectREFR_GetName(v55); /*0x5f6ffc*/
              if ( (_BYTE)v164 ) /*0x5f6ffd*/
                HIDWORD(Formate) = "%s is sleeping"; /*0x5f6fff*/
              else
                HIDWORD(Formate) = "%s is not sleeping"; /*0x5f7010*/
              LODWORD(Formate) = 0xC8; /*0x5f7004*/
              _snprintf(v175, Formate, v147); /*0x5f700e*/
              Formatr = (float)v66; /*0x5f703d*/
              v108 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f704d*/
              InterfaceMgr_DebugTextLine(v175, v108, Formatr, 3, 0xFFFFFFFF); /*0x5f7051*/
              v134 = TESObjectREFR_GetName(a7); /*0x5f7065*/
              v67 = TESObjectREFR_GetName(v55); /*0x5f7068*/
              HIDWORD(v84) = "%s detection level to %s is  %i"; /*0x5f706e*/
              LODWORD(v84) = 0xC8; /*0x5f7077*/
              _snprintf(v175, v84, v67, v134, v162); /*0x5f707d*/
              Formats = (float)(v48 + v66); /*0x5f70a1*/
              v109 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f70b1*/
              InterfaceMgr_DebugTextLine(v175, v109, Formats, 3, 0xFFFFFFFF); /*0x5f70b5*/
            }
          }
        }
      }
      Actor_GetDetectionLevelAgainstActor_ReturnResult(a6, (int)a7, (int)a8, a9, a10, a11); /*0x5f70bd*/
    }
    else
    {
      Actor_GetDetectionLevelAgainstActor_ReturnNegativeOne(a6, (int)a7, (int)a8, a9, a10, a11); /*0x5f65ae*/
    }
  }
  else
  {
    Actor_GetDetectionLevelAgainstActor_Epilogue(a6, (int)a7, (int)a8, a9, a10, a11); /*0x5f656f*/
  }
}
