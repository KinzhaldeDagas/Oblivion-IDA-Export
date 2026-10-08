// World/cell transition path used by fast travel relocation after cell resolution. Leaves normal exterior refresh/SpeedTree/weather side effects intact.
void __userpurge PlayerCharacter_ChangeCellAndPosition(
        TESObjectREFR *a1@<ecx>,
        double st7_0@<st0>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st0_0@<st7>,
        double st3_0@<st4>,
        double a8@<st6>,
        double a9@<st5>,
        void (__thiscall *a10)(NiAVObject *this, NiMatrix33 *Mat, NiPoint3 *Trn, bool OnLeft),
        NiAVObject *(__thiscall *a11)(NiAVObject *this, const char *Name),
        void *(__thiscall *a12)(NiAVObject *this),
        int a13,
        int a14,
        int a15,
        TESObjectCELL *a16,
        char a17)
{
  TESWorldSpace *WorldSpace; // eax
  TESObjectCELL *CellAtCellCoord; // ebx
  int v20; // esi
  void *v21; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  int v23; // eax
  float *sound; // edi
  TESObjectREFR *v25; // esi
  TESObjectCELL *v26; // eax
  __int16 MusicType; // ax
  int XCoordinate; // esi
  __int16 v29; // ax
  Sky *GlobalObject; // eax
  double v31; // st7
  double v32; // st6
  double v33; // st5
  double v34; // st6
  double v35; // rt1
  double v36; // st5
  double v37; // st7
  double v38; // st5
  double v39; // st6
  double v40; // rt0
  double v41; // st5
  double v42; // st7
  NiTransform *p_m_localTransform; // edi
  NiMatrix33 *v44; // eax
  int v45; // ecx
  _DWORD *v46; // eax
  NiAVObject *v47; // ecx
  double v48; // st7
  float *v49; // edi
  double v50; // st7
  TESObjectCELL **v51; // eax
  BSShaderAccumulator *Global; // eax
  float *v53; // eax
  double v54; // st7
  TESObjectREFRVtbl *vtbl; // eax
  int i; // esi
  float *v57; // eax
  double v58; // st7
  int v59; // ecx
  int v60; // edx
  float v61; // eax
  float y; // edx
  float z; // eax
  float *v64; // eax
  int v65; // ecx
  int v66; // edx
  double v67; // st7
  double v68; // st7
  unsigned int v69; // esi
  TES *v70; // ecx
  float v71; // [esp+10h] [ebp-D0h]
  float a2; // [esp+14h] [ebp-CCh]
  float angleZ; // [esp+18h] [ebp-C8h]
  char v74; // [esp+2Eh] [ebp-B2h]
  bool v75; // [esp+2Fh] [ebp-B1h]
  TESWorldSpace *v76; // [esp+30h] [ebp-B0h]
  float v77; // [esp+30h] [ebp-B0h]
  float v78; // [esp+30h] [ebp-B0h]
  float *v79; // [esp+34h] [ebp-ACh]
  float v80; // [esp+34h] [ebp-ACh]
  float v81; // [esp+34h] [ebp-ACh]
  TESObjectREFR *v82; // [esp+38h] [ebp-A8h]
  float v83; // [esp+38h] [ebp-A8h]
  float v84; // [esp+38h] [ebp-A8h]
  signed int cellY; // [esp+3Ch] [ebp-A4h] BYREF
  TESWorldSpace *v86; // [esp+40h] [ebp-A0h]
  float v87[2]; // [esp+44h] [ebp-9Ch] BYREF
  float v88; // [esp+4Ch] [ebp-94h]
  int v89; // [esp+50h] [ebp-90h]
  int v90; // [esp+54h] [ebp-8Ch]
  float v91; // [esp+58h] [ebp-88h]
  NiPoint3 v92; // [esp+5Ch] [ebp-84h] BYREF
  int v93; // [esp+68h] [ebp-78h]
  int v94; // [esp+6Ch] [ebp-74h]
  float v95; // [esp+70h] [ebp-70h]
  NiMatrix33 right; // [esp+74h] [ebp-6Ch] BYREF
  NiMatrix33 v97; // [esp+98h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+BCh] [ebp-24h] BYREF

  WorldSpace = TESObjectREFR_GetWorldSpace(a1); /*0x66eafc*/
  CellAtCellCoord = a16; /*0x66eb01*/
  v20 = (int)WorldSpace; /*0x66eb08*/
  v76 = WorldSpace; /*0x66eb0c*/
  v86 = TESObjectCELL_GetWorldSpace(a16); /*0x66eb17*/
  sub_4835D0(v20, v86); /*0x66eb1b*/
  v75 = sub_40FDA0(v21); /*0x66eb2a*/
  v74 = 0; /*0x66eb2e*/
  if ( Shared_GetDwordAtOffset40(a1) ) /*0x66eb33*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x66eb3f*/
    TESObjectCELL_RemoveReference(DwordAtOffset40, a1); /*0x66eb46*/
  }
  ((void (__thiscall *)(TESObjectREFR *, void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool)))a1->vtbl[1].super.Unk_09)( /*0x66eb5e*/
    a1,
    &a10);
  sub_4D89A0((int *)a1, a13, a14, a15); /*0x66eb84*/
  v23 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1); /*0x66eb94*/
  sound = (float *)MEMORY[0xB33398]->sound; /*0x66eb9c*/
  v25 = (TESObjectREFR *)v23; /*0x66eb9f*/
  v82 = (TESObjectREFR *)v23; /*0x66eba4*/
  v79 = sound; /*0x66eba8*/
  TESObjectREFR_ChangeCell(a1, CellAtCellCoord);// 3DTheft decode: ChangeCellAndPosition commits the target cell through TESObjectREFR_ChangeCell before position/scenegraph finalization. /*0x66ebac*/
  if ( v25 ) /*0x66ebb3*/
  {
    if ( Shared_GetDwordAtOffset40(v25) ) /*0x66ebb7*/
    {
      v26 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v25); /*0x66ebc3*/
      TESObjectCELL_RemoveReference(v26, v25); /*0x66ebca*/
    }
  }
  if ( CellAtCellCoord && TESObjectCELL_IsInterior(CellAtCellCoord) ) /*0x66ebd5*/
  {
    if ( sound ) /*0x66ebe0*/
    {
      MusicType = (unsigned __int16)TESObjectCELL_GetMusicType(CellAtCellCoord, 0); /*0x66ebea*/
      if ( SoundManager_OpenMusicFile((char *)sound, MusicType, 0, 0) ) /*0x66ebf2*/
      {
        if ( v75 ) /*0x66ec00*/
        {
          v74 = 1; /*0x66ec12*/
        }
        else
        {
          sub_6A8D50(sound); /*0x66ec04*/
          SoundManager_PlayMusic((int)sound, (int)sound); /*0x66ec0b*/
        }
      }
    }
    sub_4455E0( /*0x66ec26*/
      (unsigned int)MEMORY[0xB333A0],
      st7_0,
      st4_0,
      st5_0,
      st6_0,
      st0_0,
      st3_0,
      a8,
      a9,
      (int)sound,
      (TESObjectREFR *)CellAtCellCoord,
      (float *)&a10);
    BSTreeManager_ClearCanopyShadow(); /*0x66ec2b*/
  }
  else
  {
    XCoordinate = 0x7FFFFFFF; /*0x66ec37*/
    *(float *)&cellY = NAN; /*0x66ec3c*/
    if ( CellAtCellCoord ) /*0x66ec40*/
    {
      XCoordinate = TESObjectCELL_GetXCoordinate(CellAtCellCoord); /*0x66ec4b*/
      *(float *)&cellY = COERCE_FLOAT(TESObjectCELL_GetYCoordinate(CellAtCellCoord)); /*0x66ec52*/
    }
    if ( v76 ) /*0x66ec5c*/
    {
      if ( v76 != v86 && !sub_45A500(g_TESSaveLoadGame) ) /*0x66ec6a*/
      {
        if ( CellAtCellCoord ) /*0x66ec75*/
          sub_4400A0((int)MEMORY[0xB333A0], st5_0, st6_0, st7_0, CellAtCellCoord, 0); /*0x66ec80*/
        sub_442630(MEMORY[0xB333A0], 0, 1u); /*0x66ec8f*/
        sub_43FC20(MEMORY[0xB333A0], 0); /*0x66ec9c*/
      }
    }
    if ( CellAtCellCoord ) /*0x66eca3*/
    {
      if ( sound ) /*0x66eca7*/
      {
        v29 = (unsigned __int16)TESObjectCELL_GetMusicType(CellAtCellCoord, (int)&a10); /*0x66ecb7*/
        if ( !SoundManager_OpenMusicFile((char *)sound, v29, 0, 0) || v75 ) /*0x66eccd*/
          v74 = 1; /*0x66ecd8*/
        else
          SoundManager_PlayMusic((int)sound, (int)sound); /*0x66ecd1*/
      }
      BSTreeManager_GetCanopyShadow(); /*0x66ecdd*/
      sub_4431F0(MEMORY[0xB333A0], st5_0, st6_0, st7_0, v86); /*0x66eced*/
    }
    sub_445A10( /*0x66ed00*/
      (unsigned int)MEMORY[0xB333A0],
      (int)sound,
      st4_0,
      st5_0,
      st6_0,
      st7_0,
      st0_0,
      st3_0,
      a8,
      a9,
      (float *)&a10);
    CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v86, XCoordinate, cellY); /*0x66ed14*/
  }
  if ( sound ) /*0x66ed18*/
  {
    sub_6AC210(sound); /*0x66ed1c*/
    sub_6AC3C0(sound); /*0x66ed23*/
    if ( (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3C))( /*0x66ed35*/
           a1[1].vtbl,
           1) )
    {
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent + 0xD2))( /*0x66ed47*/
        a1[1].vtbl,
        a1);
    }
  }
  if ( a17 ) /*0x66ed51*/
  {
    GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x66ed53*/
    st7_0 = sub_540380(GlobalObject); /*0x66ed5a*/
  }
  TESObjectREFR_ChangeCell(a1, 0);              // 3DTheft decode: ChangeCellAndPosition also calls ChangeCell(player, nullptr); this null transition does not reach the 0x66765A non-null cell hook. /*0x66ed63*/
  TESObjectCELL_AddReference(CellAtCellCoord, a1); /*0x66ed6b*/
  if ( !a1->vtbl->GetNiNode(a1) && !sub_45A500(g_TESSaveLoadGame) ) /*0x66ed87*/
    sub_434020(MEMORY[0xB33A10], st5_0, st6_0, st7_0, 5); /*0x66ed98*/
  v31 = *(float *)&a15; /*0x66ed9d*/
  v32 = dbl_A3D5B8; /*0x66eda9*/
  qmemcpy(&v97, &stru_B26AF0[0xA].unk2C, sizeof(v97)); /*0x66edba*/
  v33 = dbl_A3D5B0; /*0x66edbe*/
  if ( v32 < *(float *)&a15 ) /*0x66edc7*/
  {
    while ( 1 ) /*0x66edd1*/
    {
      v35 = v33; /*0x66edd1*/
      v36 = v31 - v33; /*0x66edd1*/
      v37 = v35; /*0x66edd1*/
      *(float *)&a15 = v36; /*0x66edd3*/
      if ( *(float *)&a15 <= v32 ) /*0x66ede8*/
        break; /*0x66ede8*/
      v33 = v37; /*0x66edcd*/
      v31 = *(float *)&a15; /*0x66edcd*/
    }
    v34 = v37; /*0x66edec*/
    v31 = *(float *)&a15; /*0x66edec*/
  }
  else
  {
    v34 = v33; /*0x66edc9*/
  }
  v38 = dbl_A491E0; /*0x66edee*/
  if ( v38 > v31 ) /*0x66edfb*/
  {
    while ( 1 ) /*0x66ee05*/
    {
      v40 = v38; /*0x66ee05*/
      v41 = v31; /*0x66ee05*/
      v42 = v40; /*0x66ee05*/
      *(float *)&a15 = v41 + v34; /*0x66ee09*/
      v38 = *(float *)&a15; /*0x66ee10*/
      if ( *(float *)&a15 >= v40 ) /*0x66ee1e*/
        break; /*0x66ee1e*/
      v38 = v42; /*0x66ee03*/
      v31 = *(float *)&a15; /*0x66ee03*/
    }
    v39 = *(float *)&a15; /*0x66ee20*/
    v31 = *(float *)&a15; /*0x66ee22*/
  }
  else
  {
    v39 = v38; /*0x66edfd*/
  }
  angleZ = v31; /*0x66ee29*/
  NiMatrix33_InitRotationZ(&right, angleZ); /*0x66ee2c*/
  qmemcpy(&v97, NiMAtrix33_Multiply(&v97, &out, &right), sizeof(v97)); /*0x66ee5e*/
  if ( *(float *)&a15 < 0.0 ) /*0x66ee6a*/
    v77 = *(float *)&a14 + *(float *)&a13; /*0x66ee92*/
  else
    v77 = *(float *)&a13 - *(float *)&a14; /*0x66ee7a*/
  NiMatrix33_InitRotationXTransposed(&right, v77); /*0x66ee9d*/
  if ( a1->vtbl->GetNiNode(a1) ) /*0x66eead*/
  {
    p_m_localTransform = &a1->vtbl->GetNiNode(a1)->members.super.m_localTransform; /*0x66eec0*/
    qmemcpy(p_m_localTransform, &right, 0x24u); /*0x66eecc*/
  }
  v44 = NiMAtrix33_Multiply(&right, &out, &v97); /*0x66eedf*/
  qmemcpy(&v97, v44, sizeof(v97)); /*0x66eeef*/
  if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x66eef7*/
    v45 = **((_DWORD **)g_WorldSceneReceiverRoot + 0x2C); /*0x66ef0b*/
  else
    v45 = 0; /*0x66ef01*/
  qmemcpy((void *)(v45 + 0x30), v44, 0x24u); /*0x66ef17*/
  if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x66ef1e*/
    v46 = **((_DWORD ***)g_WorldSceneReceiverRoot + 0x2C); /*0x66ef32*/
  else
    v46 = 0; /*0x66ef28*/
  v46[0x15] = a10;                              // Scene graph position is written from the ChangeCellAndPosition pos args after the cell change machinery has run. /*0x66ef3b*/
  v46[0x16] = a11; /*0x66ef45*/
  v46[0x17] = a12; /*0x66ef4f*/
  if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x66ef57*/
    v47 = **((NiAVObject ***)g_WorldSceneReceiverRoot + 0x2C); /*0x66ef6b*/
  else
    v47 = 0; /*0x66ef61*/
  v48 = 0.0; /*0x66ef6d*/
  NiAVObject_UpdateNiAVObject(v47, 0.0, 0); /*0x66ef75*/
  NiAVObject_InitializePropertyState((NiAVObject *)MEMORY[0xB333A0]->ObjectLODRoot); /*0x66ef82*/
  NiNode_UpdateDynamicEffectState(MEMORY[0xB333A0]->ObjectLODRoot); /*0x66ef90*/
  v49 = v79; /*0x66ef95*/
  if ( v79 ) /*0x66ef9b*/
  {
    sub_6A8E10(v79, *(float *)&a10, *(float *)&a11, *(float *)&a12); /*0x66efc6*/
    v80 = cos(((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_0E)(a1)); /*0x66efdd*/
    v78 = ((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_0E)(a1); /*0x66eff6*/
    a2 = v80; /*0x66f007*/
    v81 = sin(v78); /*0x66f013*/
    v48 = v81; /*0x66f017*/
    sub_6A8E40(v49, v81, a2, 0.0); /*0x66f021*/
  }
  v50 = sub_665260(a1, v48, (PlayerCharacter *)a1); /*0x66f029*/
  if ( v82 ) /*0x66f034*/
  {
    TESObjectREFR_SetPosition(v82, *(float *)&a10, *(float *)&a11, *(float *)&a12); /*0x66f05a*/
    v51 = (TESObjectCELL **)TESObjectCELL_GetWorldSpace(CellAtCellCoord); /*0x66f061*/
    sub_4DD4B0((int)CellAtCellCoord, v38, v39, v50, (Actor *)v82, CellAtCellCoord, v51); /*0x66f069*/
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))v82->vtbl->Unk_5E)(v82, 0); /*0x66f07d*/
  }
  Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x66f07f*/
  if ( Global ) /*0x66f086*/
    sub_7AA4D0(Global); /*0x66f08a*/
  if ( *(_DWORD *)&a1[0x10].member.baseExtraList.members.m_presenceBitfield[4] ) /*0x66f08f*/
  {
    if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x66f0a2*/
    {
      v53 = a1->vtbl->GetPos(a1); /*0x66f0ba*/
      v87[0] = *v53; /*0x66f0c0*/
      v87[1] = v53[1]; /*0x66f0c7*/
      v88 = v53[2]; /*0x66f0ce*/
      if ( CellAtCellCoord ) /*0x66f0d2*/
      {
        if ( !TESObjectCELL_IsInterior(CellAtCellCoord) ) /*0x66f0d6*/
        {
          *(float *)&cellY = 0.0; /*0x66f0e6*/
          if ( sub_4D1E10(CellAtCellCoord, v87, (float *)&cellY) ) /*0x66f0f1*/
          {
            v54 = *(float *)&cellY + dbl_A46970; /*0x66f0fe*/
            v39 = v88; /*0x66f104*/
            if ( v88 < v54 ) /*0x66f10f*/
            {
              vtbl = a1->vtbl; /*0x66f111*/
              v88 = v54; /*0x66f114*/
              ((void (__thiscall *)(TESObjectREFR *, float *))vtbl[1].super.Unk_09)(a1, v87); /*0x66f125*/
            }
          }
        }
      }
      for ( i = 0; i < 0x64; ++i ) /*0x66f12b*/
      {
        v57 = a1->vtbl->GetPos(a1); /*0x66f13b*/
        v58 = flt_A73DE4; /*0x66f13d*/
        v59 = *(_DWORD *)v57; /*0x66f143*/
        v60 = *((_DWORD *)v57 + 1); /*0x66f145*/
        v61 = v57[2]; /*0x66f148*/
        v93 = v59; /*0x66f14b*/
        v92.x = g_zeroNiPoint3.x; /*0x66f155*/
        v94 = v60; /*0x66f160*/
        y = g_zeroNiPoint3.y; /*0x66f164*/
        v95 = v61; /*0x66f16a*/
        z = g_zeroNiPoint3.z; /*0x66f16e*/
        v71 = v58; /*0x66f176*/
        v92.y = y; /*0x66f179*/
        v92.z = z; /*0x66f17d*/
        MobileObject_Move((MobileObject *)a1, v71, &v92, 0); /*0x66f181*/
        v64 = a1->vtbl->GetPos(a1); /*0x66f191*/
        v65 = *(_DWORD *)v64; /*0x66f193*/
        v66 = *((_DWORD *)v64 + 1); /*0x66f195*/
        v91 = v64[2]; /*0x66f19b*/
        v89 = v65; /*0x66f1a7*/
        v90 = v66; /*0x66f1ab*/
        v83 = v91 - v95; /*0x66f1af*/
        v84 = fabs(v83); /*0x66f1b9*/
        if ( v84 < dbl_A2FC80 ) /*0x66f1cc*/
          break; /*0x66f1cc*/
      }
      if ( i == 0x64 ) /*0x66f1dd*/
        ((void (__thiscall *)(TESObjectREFR *, float *))a1->vtbl[1].super.Unk_09)(a1, v87); /*0x66f1ef*/
    }
    LOBYTE(a1[0x10].member.super.flags) = LOBYTE(a1[0x10].member.super.flags) == 0; /*0x66f203*/
    sub_603CA0((Actor *)a1, v38, v39, 0.0, 0.0); /*0x66f209*/
    LOBYTE(a1[0x10].member.super.flags) = LOBYTE(a1[0x10].member.super.flags) == 0; /*0x66f21a*/
    sub_603CA0((Actor *)a1, v38, v39, 0.0, 0.0); /*0x66f226*/
    sub_66B710((PlayerCharacter *)a1, 0.0, 0); /*0x66f22f*/
  }
  BSTreeManager_Update(*((NiCamera **)g_WorldSceneReceiverRoot + 0x37), 0);// Fast travel reaches the normal SpeedTree refresh path only after PlayerCharacter_ChangeCellAndPosition has performed the player cell/position change. Encounter interruption should occur before the 0x66FAFA relocation call if the destination move is to be replaced by a midpoint move. /*0x66f243*/
  sub_4424D0((ExtraDataList **)MEMORY[0xB333A0], *(float *)&MEMORY[0xB33E90][0xC]);// ModernWindowsCompatible decode: PlayerCharacter_ChangeCellAndPosition caller passes flt_B33E9C into shared TES global scene update sub_4424D0 after transition refresh work. /*0x66f25b*/
  if ( LOBYTE(a1[0x17].member.super.modlist.data) ) /*0x66f260*/
  {
    v67 = flt_A3744C; /*0x66f26d*/
    sub_5732D0((NiNode **)unk_B3A6B0, v38, v39, v67, 2, flt_A3744C); /*0x66f27f*/
    sub_440AF0((int)MEMORY[0xB333A0], v38, v39, v67, 0, 0, 0); /*0x66f290*/
    v68 = sub_57B7E0(v38, v67); /*0x66f295*/
    LOBYTE(a1[0x17].member.super.modlist.data) = 0; /*0x66f29c*/
    sub_572EC0(v38, v39, v68, 2, 0); /*0x66f2ab*/
    sub_6A8D00(v49); /*0x66f2b2*/
    sub_6A9B40((int)v49); /*0x66f2b9*/
    sub_410BA0(*(const char **)off_B030A4, 1, 1, 0, 0, COERCE_FLOAT(1), 0); /*0x66f2d1*/
    sub_6A8D50(v49); /*0x66f2db*/
    sub_6A9C00((int)v49); /*0x66f2e2*/
    LOBYTE(a1[0x17].member.super.modlist.data) = 0; /*0x66f2e7*/
  }
  if ( v75 ) /*0x66f2f3*/
  {
    sub_40FDD0(); /*0x66f2f5*/
    if ( v74 ) /*0x66f2ff*/
      sub_6A8D50(v49); /*0x66f303*/
  }
  v69 = LODWORD(a1[0x15].member.pos[0]); /*0x66f308*/
  if ( v69 ) /*0x66f312*/
  {
    sub_6B73E0((_DWORD *)LODWORD(a1[0x15].member.pos[0])); /*0x66f316*/
    FormHeapFree(v69); /*0x66f31c*/
    a1[0x15].member.pos[0] = 0.0; /*0x66f324*/
    a1[0x15].member.rot.z = 0.0; /*0x66f32a*/
  }
  MEMORY[0xB33398]->unk18 = 0; /*0x66f336*/
  v70 = MEMORY[0xB333A0]; /*0x66f339*/
  if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x66f33f*/
  {
    if ( v70->waterManager ) /*0x66f344*/
    {
      sub_498F40((float *)v70->waterManager); /*0x66f34d*/
      v70 = MEMORY[0xB333A0]; /*0x66f352*/
    }
  }
  sub_444A10((Ni2DBuffer ***)v70); /*0x66f358*/
}
