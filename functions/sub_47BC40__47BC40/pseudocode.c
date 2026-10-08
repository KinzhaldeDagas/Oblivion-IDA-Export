LONG __usercall sub_47BC40@<eax>(ActorSkinInfo *ecx0@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  PlayerCharacter *v5; // ecx
  bool v6; // zf
  int v7; // eax
  signed int v8; // ebx
  int v9; // edi
  char *v10; // esi
  NiObject *v11; // eax
  NiObject *v12; // ebx
  int m_uiRefCount_high; // eax
  unsigned int v14; // esi
  NiNode *v15; // eax
  Actor *owner; // eax
  LowProcess *process; // ecx
  const char *v18; // eax
  NiObjectNET *ModelData; // esi
  Ni2DBuffer *v20; // eax
  UInt32 v21; // esi
  UInt32 v22; // ebx
  int v23; // eax
  int v24; // eax
  char v25; // al
  unsigned int v26; // edi
  NiGeometry *v27; // esi
  const TESNPC *v28; // edi
  NiGeometryData *geomData; // ecx
  int *v30; // eax
  TESObjectREFR *v31; // esi
  void (__thiscall **v32)(TESObjectREFRVtbl *, int, ActorSkinInfo *, ActorAnimData *, TESObjectREFR *); // edi
  int v33; // eax
  void (__thiscall **v34)(TESObjectREFRVtbl *, int, ActorSkinInfo *, ActorAnimData *, TESObjectREFR *); // edi
  int v35; // eax
  _DWORD *v36; // ecx
  int (__thiscall *v37)(_DWORD *, int); // eax
  const char *v38; // eax
  NiObjectNET *v39; // edi
  BSExtraDataVtbl *Light; // eax
  PlayerCharacter *v41; // ecx
  void (__thiscall *Destructor)(BSExtraData *); // ebx
  UInt32 m_uiRefCount; // ebx
  int v44; // esi
  char *Name; // eax
  const char *v46; // eax
  CHAR *v47; // eax
  void *v49; // [esp+8h] [ebp-190h]
  ActorAnimData *morphScale; // [esp+Ch] [ebp-18Ch]
  ActorAnimData *morphScalea; // [esp+Ch] [ebp-18Ch]
  int angleY; // [esp+10h] [ebp-188h]
  int angleYa; // [esp+10h] [ebp-188h]
  char angleYb; // [esp+10h] [ebp-188h]
  char angleYc; // [esp+10h] [ebp-188h]
  const char *angleYd; // [esp+10h] [ebp-188h]
  char *angleYe; // [esp+10h] [ebp-188h]
  int modelType; // [esp+2Ch] [ebp-16Ch]
  bool v59; // [esp+33h] [ebp-165h]
  int v60; // [esp+34h] [ebp-164h]
  unsigned int i; // [esp+38h] [ebp-160h]
  TESObjectREFRVtbl *vtbl; // [esp+38h] [ebp-160h]
  TESObjectREFRVtbl *v63; // [esp+38h] [ebp-160h]
  NiObjectNET *v64; // [esp+3Ch] [ebp-15Ch]
  UInt32 v65; // [esp+40h] [ebp-158h] BYREF
  __int16 v66; // [esp+44h] [ebp-154h]
  BSStringT Src; // [esp+48h] [ebp-150h] BYREF
  char *v68; // [esp+50h] [ebp-148h]
  NiObjectNET *v69; // [esp+54h] [ebp-144h]
  BSStringT v70; // [esp+58h] [ebp-140h] BYREF
  void *v71; // [esp+60h] [ebp-138h] BYREF
  void *slot; // [esp+64h] [ebp-134h] BYREF
  void *v73; // [esp+68h] [ebp-130h] BYREF
  int v74; // [esp+6Ch] [ebp-12Ch]
  volatile LONG **v75; // [esp+70h] [ebp-128h] BYREF
  void *v76; // [esp+74h] [ebp-124h] BYREF
  void *v77; // [esp+78h] [ebp-120h]
  void (__thiscall ***v78)(_DWORD, int); // [esp+7Ch] [ebp-11Ch] BYREF
  void (__thiscall ***v79)(_DWORD, int); // [esp+80h] [ebp-118h]
  float v80; // [esp+8Ch] [ebp-10Ch]
  float v81; // [esp+90h] [ebp-108h]
  float v82; // [esp+94h] [ebp-104h]
  NiMatrix33 right; // [esp+98h] [ebp-100h] BYREF
  float v84[9]; // [esp+BCh] [ebp-DCh] BYREF
  NiMatrix33 out; // [esp+E0h] [ebp-B8h] BYREF
  float v86[9]; // [esp+104h] [ebp-94h] BYREF
  FaceGenHeadParameters a1; // [esp+128h] [ebp-70h] BYREF
  int v88; // [esp+194h] [ebp-4h]

  v5 = reference; /*0x47bc75*/
  v6 = ecx0->owner == (Actor *)reference; /*0x47bc7b*/
  LOBYTE(v66) = 0; /*0x47bc81*/
  if ( v6 ) /*0x47bc86*/
    LOBYTE(v66) = sub_65D770(v5, (int)ecx0); /*0x47bc92*/
  if ( LOBYTE(MEMORY[0xB33D80]) ) /*0x47bc97*/
  {
    v7 = ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))ecx0->owner->vtbl->super.super.GetBaseForm)( /*0x47bcae*/
           ecx0->owner,
           a4,
           a3,
           a2);
    sub_550240(*(_DWORD *)(v7 + 0xC)); /*0x47bcb4*/
  }
  v8 = 0; /*0x47bcbc*/
  for ( modelType = 0; ; v8 = modelType ) /*0x47bcbe*/
  {
    v68 = (char *)(&ecx0->unk050 + 4 * v8); /*0x47bcd0*/
    if ( *(_DWORD *)v68 && (v9 = 0x10 * v8, v60 = 0x10 * v8, *(_DWORD *)v68 == unk_B33C84[4 * v8]) ) /*0x47bced*/
    {
      *(&ecx0->unk04C + 4 * v8) = unk_B33C80[4 * v8]; /*0x47bcf9*/
      v10 = (char *)&ecx0->unk04C + v9; /*0x47bd03*/
      *((_DWORD *)v10 + 1) = unk_B33C84[4 * v8]; /*0x47bd07*/
      *((_DWORD *)v10 + 2) = unk_B33C88[4 * v8]; /*0x47bd10*/
      *((_DWORD *)v10 + 3) = unk_B33C8C[4 * v8]; /*0x47bd1e*/
      unk_B33C80[4 * v8] = 0; /*0x47bd21*/
      unk_B33C84[4 * v8] = 0; /*0x47bd27*/
      unk_B33C88[4 * v8] = 0; /*0x47bd2d*/
      v59 = 0; /*0x47bd33*/
      unk_B33C8C[4 * v8] = 0; /*0x47bd38*/
      if ( v8 >= 6 && v8 <= 8 ) /*0x47bd43*/
      {
        if ( sub_478290((void **)&ecx0->Bip01Node, v8) ) /*0x47bd48*/
        {
          ActorSkinInfo_ClearOrReplaceEquipmentSlot( /*0x47bd9a*/
            ecx0,
            (ActorSkinInfoEquipmentSlot *)((char *)&ecx0->unk04C + v9),
            0,
            0);
          goto LABEL_106; /*0x47bd9f*/
        }
        v59 = *(Actor **)((char *)&ecx0->Actor054 + v9) == 0; /*0x47bd58*/
      }
      if ( LOBYTE(MEMORY[0xB33D80]) ) /*0x47bd5d*/
      {
        v11 = NiRTTI_Cast((BSStringT *)&parent, *(NiObject **)((char *)&ecx0->Actor054 + v9)); /*0x47bd70*/
        v12 = v11; /*0x47bd75*/
        if ( v11 ) /*0x47bd7c*/
        {
          m_uiRefCount_high = HIWORD(v11[0x16].members.m_uiRefCount); /*0x47bd7e*/
          v14 = 0; /*0x47bd85*/
          if ( HIWORD(v12[0x16].members.m_uiRefCount) ) /*0x47bd7e*/
          {
            if ( !m_uiRefCount_high ) /*0x47bd8d*/
            {
              v15 = 0; /*0x47bd8f*/
              goto LABEL_20; /*0x47bd91*/
            }
            do /*0x47bdc1*/
            {
              v15 = *((NiNode **)&v12[0x16].__vftable->super.Destructor + v14); /*0x47bdaa*/
LABEL_20:
              sub_47AC20(ecx0, v15); /*0x47bdad*/
              ++v14; /*0x47bdbc*/
            }
            while ( HIWORD(v12[0x16].members.m_uiRefCount) > v14 ); /*0x47bdc1*/
          }
        }
      }
      if ( *((_BYTE *)&ecx0->unk058 + v9) ) /*0x47bdc3*/
      {
        if ( *(Actor **)((char *)&ecx0->Actor054 + v9) ) /*0x47bdca*/
        {
          qmemcpy(v86, &stru_B26AF0[0xA].unk2C, sizeof(v86)); /*0x47bde6*/
          qmemcpy( /*0x47be11*/
            &(*(Actor **)((char *)&ecx0->Actor054 + v9))->members.super.super.pos[1],
            sub_4D7C50(&ecx0->owner->vtbl, (float *)&right, v86, 1),
            0x24u);
        }
      }
      if ( !v59 ) /*0x47be18*/
        goto LABEL_106; /*0x47be18*/
      v8 = modelType; /*0x47be1e*/
    }
    else
    {
      v60 = 0x10 * v8; /*0x47be30*/
      if ( unk_B33C88[4 * v8] ) /*0x47be29*/
        ActorSkinInfo_ClearOrReplaceEquipmentSlot(ecx0, (ActorSkinInfoEquipmentSlot *)&unk_B33C80[4 * v8], 1, 0); /*0x47be43*/
    }
    if ( (v8 < 6 || v8 > 8 || !sub_478290((void **)&ecx0->Bip01Node, v8)) /*0x47be73*/
      && *(_DWORD *)v68
      && *(_DWORD *)v68 != 0xFFFFFFFF )
    {
      if ( (_BYTE)v66 ) /*0x47be7e*/
      {
        switch ( modelType ) /*0x47be97*/
        {
          case 2: /*0x47be97*/
          case 4: /*0x47be97*/
          case 6: /*0x47be97*/
          case 7: /*0x47be97*/
          case 9: /*0x47be97*/
          case 0xC: /*0x47be97*/
          case 0xD: /*0x47be97*/
          case 0xE: /*0x47be97*/
            goto LABEL_35;
          default:
            break;
        }
      }
      else
      {
LABEL_35:
        if ( modelType == 1 ) /*0x47bea5*/
        {
          if ( (PlayerCharacter *)ecx0->owner != reference /*0x47becc*/
            && !ecx0->unk064
            && bLoadHelmentsBackground
            && useFaceGenHeads
            && sub_477ED0() )
          {
            sub_4781D0(ecx0, &v75, 0, 0); /*0x47bee0*/
            sub_4BDDC0((int *)&v75); /*0x47bee9*/
            goto LABEL_106; /*0x47beee*/
          }
        }
        else if ( modelType == 0xE ) /*0x47bef6*/
        {
          owner = ecx0->owner; /*0x47bef8*/
          if ( owner ) /*0x47bf00*/
          {
            process = owner->members.super.process; /*0x47bf02*/
            if ( process ) /*0x47bf07*/
              ((void (__thiscall *)(LowProcess *, Actor *))process->PlaySoundITMTorchHeldLP)(process, ecx0->owner); /*0x47bf12*/
          }
        }
        v74 = *(_DWORD *)(4 * modelType + 0xB065C8); /*0x47bf1f*/
        v18 = (const char *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)v68 + 0x14))( /*0x47bf30*/
                              *(_DWORD *)v68,
                              a4,
                              a3,
                              a2);
        ModelData = (NiObjectNET *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v18, 1, (void *)3, 1); /*0x47bf3e*/
        v69 = ModelData; /*0x47bf44*/
        OB_NiCloningProcess_ctor(&v78); /*0x47bf48*/
        a4 = 1.0; /*0x47bf4d*/
        v82 = 1.0; /*0x47bf4f*/
        v81 = 1.0; /*0x47bf56*/
        v80 = 1.0; /*0x47bf5a*/
        v88 = 1; /*0x47bf60*/
        v65 = 0; /*0x47bf67*/
        if ( sub_480820(ModelData) ) /*0x47bf74*/
        {
          v20 = (Ni2DBuffer *)sub_4430C0(ModelData, (int)&v78); /*0x47bf8e*/
          NiSmartPointer_Set__((Ni2DBuffer **)&v65, v20); /*0x47bf98*/
          v21 = v65; /*0x47bf9d*/
          v22 = v65; /*0x47bfa1*/
        }
        else
        {
          v23 = sub_700610(ModelData, (int)&v78); /*0x47bfaa*/
          v21 = v65; /*0x47bfaf*/
          v22 = v23; /*0x47bfb3*/
        }
        if ( v22 ) /*0x47bfb7*/
        {
          v24 = (*(int (__usercall **)@<eax>(UInt32@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v22 + 4))( /*0x47bfc4*/
                  v22,
                  1.0,
                  a3,
                  a2);
          if ( v24 ) /*0x47bfc8*/
          {
            while ( (char *)v24 != &MEMORY[0xB33E90][0x13F8] ) /*0x47bfd5*/
            {
              v24 = *(_DWORD *)(v24 + 4); /*0x47bfd7*/
              if ( !v24 ) /*0x47bfdc*/
                goto LABEL_55; /*0x47bfdc*/
            }
            sub_4A01B0((_BYTE *)v22, 7); /*0x47bfe4*/
          }
LABEL_55:
          sub_6FFAC0((_WORD *)v22, off_A3CEB0); /*0x47bfe9*/
          *(float *)(v22 + 0x54) = g_zeroNiPoint3.x; /*0x47bffa*/
          v25 = v66; /*0x47c003*/
          *(float *)(v22 + 0x58) = g_zeroNiPoint3.y; /*0x47c007*/
          *(float *)(v22 + 0x5C) = g_zeroNiPoint3.z; /*0x47c012*/
          qmemcpy((void *)(v22 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x47c022*/
          v64 = (NiObjectNET *)sub_47B5B0((int **)ecx0, v22, modelType, v25, 0); /*0x47c034*/
          if ( !v64 ) /*0x47c038*/
          {
            v64 = (NiObjectNET *)v22; /*0x47c043*/
            if ( modelType == 1 ) /*0x47c047*/
            {
              v77 = sub_478A40((int **)ecx0); /*0x47c056*/
              if ( v77 ) /*0x47c05a*/
              {
                v26 = 0; /*0x47c060*/
                for ( i = 0; v26 < *(unsigned __int16 *)(v22 + 0xB6); i = ++v26 ) /*0x47c062*/
                {
                  if ( *(unsigned __int16 *)(v22 + 0xB6) > v26 ) /*0x47c089*/
                  {
                    v27 = *(NiGeometry **)(*(_DWORD *)(v22 + 0xB0) + 4 * v26); /*0x47c095*/
                    if ( v27 ) /*0x47c09a*/
                    {
                      if ( v27->member.geomData ) /*0x47c0a0*/
                      {
                        if ( ecx0->owner ) /*0x47c0ad*/
                        {
                          if ( ecx0->owner->vtbl->super.super.GetBaseForm(ecx0->owner) ) /*0x47c0c8*/
                          {
                            if ( ecx0->owner->vtbl->super.super.GetBaseForm(ecx0->owner)->member.type == kFormType_NPC ) /*0x47c0e6*/
                            {
                              v28 = (const TESNPC *)ecx0->owner->vtbl->super.super.GetBaseForm(ecx0->owner); /*0x47c112*/
                              ArrayConstructor( /*0x47c114*/
                                (char *)&a1,
                                0x18u,
                                4,
                                (void (__thiscall *)(char *))FaceGenMatrix_Construct,
                                (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
                              geomData = v27->member.geomData; /*0x47c119*/
                              LOBYTE(v88) = 2; /*0x47c124*/
                              v30 = sub_700790(geomData, (int *)&slot); /*0x47c12c*/
                              sub_405070(&v71, *v30); /*0x47c138*/
                              LOBYTE(v88) = 3; /*0x47c141*/
                              NiPointerSlot_Release(&slot); /*0x47c149*/
                              v27->__vftable->SetGeomData(v27, (NiObject *)v71); /*0x47c15d*/
                              TESNPC_BuildAbsoluteFaceGenParameters(v28, &a1); /*0x47c169*/
                              if ( !useFaceGenHeads || (a4 = 1.0, BSFaceGenModel_ApplyEGMMorph(v77, &a1, v27, 1.0, 0)) ) /*0x47c18c*/
                              {
                                a4 = flt_A3721C; /*0x47c195*/
                                NiMatrix33_InitRotationY(&right, flt_A3721C); /*0x47c1a6*/
                                qmemcpy( /*0x47c1cc*/
                                  &v27->member.super.m_localTransform,
                                  NiMAtrix33_Multiply(&v27->member.super.m_localTransform.rot, &out, &right),
                                  0x24u);
                              }
                              LOBYTE(v88) = 2; /*0x47c1d2*/
                              NiPointerSlot_Release(&v71); /*0x47c1da*/
                              LOBYTE(v88) = 1; /*0x47c1f0*/
                              _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x47c1f8*/
                              v26 = i; /*0x47c1fd*/
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            AttachModelUsingPrnExtraData(ecx0->Bip01Node, (NiAVObject *)v22, 0, (unsigned int)ecx0, modelType, 0); /*0x47c226*/
            if ( !sub_45A500(g_TESSaveLoadGame) && modelType == 9 ) /*0x47c246*/
            {
              v31 = (TESObjectREFR *)ecx0->owner; /*0x47c248*/
              if ( v31[1].vtbl ) /*0x47c24e*/
              {
                if ( v31 == (TESObjectREFR *)reference && ecx0 == Actor_GetSkinInfoByPerspective((Actor *)reference, 1) ) /*0x47c267*/
                {
                  vtbl = v31[1].vtbl; /*0x47c277*/
                  v32 = (void (__thiscall **)(TESObjectREFRVtbl *, int, ActorSkinInfo *, ActorAnimData *, TESObjectREFR *))((char *)vtbl->super.super.InitializeComponent + 0x150); /*0x47c27b*/
                  morphScale = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x47c286*/
                  LOBYTE(v33) = Actor_IsWeaponOut(v31); /*0x47c28a*/
                  (*v32)(vtbl, v33, ecx0, morphScale, v31); /*0x47c296*/
                }
                else
                {
                  v63 = v31[1].vtbl; /*0x47c2a2*/
                  v34 = (void (__thiscall **)(TESObjectREFRVtbl *, int, ActorSkinInfo *, ActorAnimData *, TESObjectREFR *))((char *)v63->super.super.InitializeComponent + 0x150); /*0x47c2a6*/
                  morphScalea = TESObjectREFR_GetAnimData(v31); /*0x47c2b1*/
                  LOBYTE(v35) = Actor_IsWeaponOut(v31); /*0x47c2b5*/
                  (*v34)(v63, v35, ecx0, morphScalea, v31); /*0x47c2c1*/
                }
              }
            }
          }
          Src.m_data = 0; /*0x47c2c5*/
          *(_DWORD *)&Src.m_dataLen = 0; /*0x47c2c9*/
          v36 = *(_DWORD **)((char *)&ecx0->unk04C + v60); /*0x47c2d7*/
          angleY = v36[3]; /*0x47c2e0*/
          v37 = *(int (__thiscall **)(_DWORD *, int))(*v36 + 0xD4); /*0x47c2e1*/
          LOBYTE(v88) = 4; /*0x47c2e7*/
          v38 = (const char *)v37(v36, angleY); /*0x47c2ef*/
          BSStringT_Static_Format(&Src, "%s %s (%08X)", *(const char **)(4 * modelType + 0xB06588), v38, angleYa); /*0x47c308*/
          v39 = v64; /*0x47c311*/
          NiObjectNET_SetName(v64, Src.m_data); /*0x47c31b*/
          if ( *((_BYTE *)&ecx0->unk058 + v60) ) /*0x47c324*/
          {
            qmemcpy(v84, &v64[2], sizeof(v84)); /*0x47c33e*/
            qmemcpy(&v64[2], sub_4D7C50(&ecx0->owner->vtbl, (float *)&out, v84, 1), 0x24u); /*0x47c369*/
            v39 = v64; /*0x47c36b*/
          }
          sub_478220(v69, v22, modelType, (TESObjectREFR *)ecx0->owner); /*0x47c383*/
          if ( modelType == 0xE && (PlayerCharacter *)ecx0->owner == reference ) /*0x47c3a0*/
          {
            Light = ExtraDataList_GetLight(&reference->super.super.super.super.baseExtraList); /*0x47c3a5*/
            v41 = reference; /*0x47c3ac*/
            if ( Light ) /*0x47c3b2*/
            {
              Destructor = ExtraDataList_GetLight(&v41->super.super.super.super.baseExtraList)->Destructor; /*0x47c3c2*/
              angleYb = sub_65D770(reference, (int)ecx0); /*0x47c3ca*/
              sub_663870((Ni2DBuffer **)reference, (Ni2DBuffer *)Destructor, angleYb); /*0x47c3cc*/
            }
            else
            {
              angleYc = sub_65D770(v41, (int)ecx0); /*0x47c3d4*/
              sub_663870((Ni2DBuffer **)reference, 0, angleYc); /*0x47c3dc*/
            }
          }
          if ( !*((_BYTE *)&ecx0->unk058 + v60) ) /*0x47c3e5*/
          {
            if ( (*((int (__thiscall **)(NiObjectNET *))v39->vtbl + 2))(v39) ) /*0x47c3f7*/
            {
              m_uiRefCount = v39[1].members.super.m_uiRefCount; /*0x47c408*/
              if ( v74 == 0xFFFFFFFF ) /*0x47c40b*/
              {
                v44 = *(_DWORD *)v68; /*0x47c417*/
                Name = TESObjectREFR_GetName((TESObjectREFR *)ecx0->owner); /*0x47c419*/
                v46 = (const char *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v44 + 0x14))(v44, Name); /*0x47c426*/
                PrintError("The biped part '%s' should be skinned for '%s'.", v46, angleYd); /*0x47c42e*/
                if ( m_uiRefCount ) /*0x47c439*/
                {
                  (*(void (__thiscall **)(UInt32, void **, NiObjectNET *))(*(_DWORD *)m_uiRefCount + 0x88))( /*0x47c44a*/
                    m_uiRefCount,
                    &v76,
                    v39);
                  NiPointerSlot_Release(&v76); /*0x47c450*/
                }
                else
                {
                  sub_405070(&v73, (int)v39); /*0x47c462*/
                  NiPointerSlot_Release(&v73); /*0x47c46b*/
                }
                v39 = 0; /*0x47c455*/
              }
              else if ( m_uiRefCount ) /*0x47c47b*/
              {
                if ( v74 == 3 && (PlayerCharacter *)ecx0->owner == reference && !(_BYTE)v66 ) /*0x47c4a0*/
                {
                  v70.m_data = 0; /*0x47c4a6*/
                  *(_DWORD *)&v70.m_dataLen = 0; /*0x47c4aa*/
                  v49 = *(void **)((char *)&ecx0->unk04C + v60); /*0x47c4be*/
                  LOBYTE(v88) = 5; /*0x47c4bf*/
                  v47 = sub_4702D0(v49, 0); /*0x47c4c7*/
                  BSStringT_Static_Format(&v70, "\\%s\\%s", "Icons", v47); /*0x47c4df*/
                  sub_57B190((unsigned __int8 *)v70.m_data); /*0x47c4e9*/
                  LOBYTE(v88) = 4; /*0x47c4f5*/
                  BSStringT_Clear((unsigned int *)&v70); /*0x47c4fd*/
                }
              }
              else if ( *((_DWORD *)&ecx0->HeadNode + 2 * v74) ) /*0x47c504*/
              {
                (*(void (__thiscall **)(_DWORD, NiObjectNET *, int))(**((_DWORD **)&ecx0->HeadNode + 2 * v74) + 0x84))( /*0x47c522*/
                  *((_DWORD *)&ecx0->HeadNode + 2 * v74),
                  v39,
                  1);
              }
            }
          }
          angleYe = Src.m_data; /*0x47c52c*/
          *(Actor **)((char *)&ecx0->Actor054 + v60) = (Actor *)v39; /*0x47c52d*/
          FormHeapFree((unsigned int)angleYe); /*0x47c531*/
          Src.m_data = 0; /*0x47c536*/
          *(_DWORD *)&Src.m_dataLen = 0; /*0x47c53f*/
          v21 = v65; /*0x47c544*/
        }
        LOBYTE(v88) = 0; /*0x47c54d*/
        if ( v21 ) /*0x47c555*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v21 + 4)) ) /*0x47c55b*/
            (**(void (__thiscall ***)(UInt32, int))v21)(v21, 1); /*0x47c56d*/
        }
        v88 = 0xFFFFFFFF; /*0x47c575*/
        if ( v78 ) /*0x47c580*/
          (**v78)(v78, 1); /*0x47c588*/
        if ( v79 ) /*0x47c590*/
          (**v79)(v79, 1); /*0x47c598*/
      }
    }
LABEL_106:
    if ( ++modelType >= 0x10 ) /*0x47c5a8*/
      break; /*0x47c5a8*/
  }
  NiAVObject_InitializePropertyState((NiAVObject *)ecx0->owner->members.super.super.niNode); /*0x47c5b7*/
  return NiNode_UpdateDynamicEffectState((NiNode *)ecx0->owner->members.super.super.niNode); /*0x47c5ca*/
}
