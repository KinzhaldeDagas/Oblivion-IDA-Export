// Actor reference default idle variant initialization. Seeds default idle/animation choices during actor setup; observed from actor initialization path.
Ni2DBuffer *__userpurge ObservedActorRef_InitDefaultIdleVariants@<eax>(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        char a4)
{
  Ni2DBuffer **v5; // ebp
  Ni2DBuffer **v6; // eax
  Ni2DBuffer **NiNode; // eax
  NiNode *v8; // esi
  NiTimeController *m_controller; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  Ni2DBuffer *v14; // eax
  volatile LONG *v15; // esi
  float *v16; // eax
  NiNode *v17; // eax
  BSFaceGenAnimationData *v18; // eax
  BSFaceGenAnimationData *v19; // esi
  Ni2DBuffer *v20; // ecx
  int (__thiscall *v21)(Ni2DBuffer *, const char *); // edx
  NiObject *v22; // eax
  NiObject *v23; // edi
  int v24; // eax
  NiObject *(__thiscall *Unk_02)(NiObject *); // edx
  NiObject *v26; // eax
  NiObject *v27; // edi
  NiNode *v28; // esi
  NiNode *v29; // edi
  int v30; // eax
  Ni2DBuffer *v31; // ecx
  int v32; // eax
  NiAVObject *ChildAtIndex; // eax
  int v34; // eax
  unsigned __int16 *v35; // esi
  unsigned int v36; // eax
  volatile LONG *v37; // edi
  int v38; // eax
  unsigned __int16 *v39; // esi
  unsigned int v40; // eax
  BSFaceGenAnimationData *v41; // edi
  ActorAnimData *v42; // eax
  ActorAnimData *v43; // eax
  TESObjectREFRVtbl *vtbl; // edx
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // eax
  CHAR *FormModelPAth; // eax
  char *v47; // eax
  char *v48; // esi
  volatile LONG *v49; // esi
  NiTimeController *v50; // esi
  char *v52; // eax
  const char **v53; // edi
  const char *v54; // esi
  CHAR *v55; // eax
  char *v56; // edx
  CHAR v57; // cl
  char *v58; // eax
  const char *v59; // esi
  CHAR *v60; // eax
  char *v61; // edx
  CHAR v62; // cl
  char *v63; // eax
  BSExtraDataVtbl *Light; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  ShadowSceneNode_DecodedLayout *v66; // eax
  int v67; // ecx
  volatile LONG *v68; // esi
  NiTimeController *v69; // esi
  unsigned int v70; // esi
  Ni2DBuffer *v71; // esi
  void (__thiscall ***v72)(_DWORD, int); // ecx
  NiNode *v73; // [esp+6Ch] [ebp-2B0h]
  void (__thiscall *v74)(BSExtraData *); // [esp+6Ch] [ebp-2B0h]
  Ni2DBuffer *a5; // [esp+70h] [ebp-2ACh]
  _DWORD *v76; // [esp+74h] [ebp-2A8h]
  float v77; // [esp+88h] [ebp-294h]
  int v78; // [esp+88h] [ebp-294h]
  unsigned int i; // [esp+88h] [ebp-294h]
  unsigned int j; // [esp+88h] [ebp-294h]
  BSSimpleList_VoidPtr *v81; // [esp+88h] [ebp-294h]
  char v82; // [esp+8Fh] [ebp-28Dh]
  volatile LONG *v83; // [esp+90h] [ebp-28Ch] BYREF
  volatile LONG *v84; // [esp+94h] [ebp-288h] BYREF
  NiTimeController *a2; // [esp+98h] [ebp-284h]
  BSFaceGenAnimationData *v86; // [esp+9Ch] [ebp-280h] BYREF
  NiTPointerMap<NiObject *,NiObject *> *v87; // [esp+A0h] [ebp-27Ch] BYREF
  void (__thiscall ***v88)(_DWORD, int); // [esp+A4h] [ebp-278h]
  float v89; // [esp+B0h] [ebp-26Ch]
  float v90; // [esp+B4h] [ebp-268h]
  float v91; // [esp+B8h] [ebp-264h]
  float v92[9]; // [esp+BCh] [ebp-260h] BYREF
  float v93[9]; // [esp+E0h] [ebp-23Ch] BYREF
  char v94[260]; // [esp+104h] [ebp-218h] BYREF
  char Str[260]; // [esp+208h] [ebp-114h] BYREF
  unsigned int v96; // [esp+318h] [ebp-4h]

  v5 = (Ni2DBuffer **)(this + 0x11); /*0x668d47*/
  if ( !a4 ) /*0x668d4d*/
  {
    if ( *v5 ) /*0x6695fb*/
    {
      v70 = *((_DWORD *)this + 0x177); /*0x669600*/
      if ( v70 ) /*0x669608*/
      {
        DisposeActorAnimData(*((ActorAnimData **)this + 0x177)); /*0x66960c*/
        FormHeapFree(v70); /*0x669612*/
      }
      *((_DWORD *)this + 0x177) = 0; /*0x66961a*/
      v71 = *v5; /*0x669620*/
      if ( *v5 ) /*0x669620*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v71->members) ) /*0x66962b*/
        {
          if ( v71 ) /*0x669637*/
            (*(void (__thiscall **)(Ni2DBuffer *, int))v71->__vftable)(v71, 1); /*0x669641*/
        }
        *v5 = 0; /*0x669643*/
      }
      v72 = *((void (__thiscall ****)(_DWORD, int))this + 0x178); /*0x669646*/
      if ( v72 ) /*0x66964e*/
      {
        (**v72)(v72, 1); /*0x669656*/
        *((_DWORD *)this + 0x178) = 0; /*0x669658*/
      }
    }
    return *v5; /*0x669658*/
  }
  if ( *v5 ) /*0x668d53*/
    return *v5; /*0x66965e*/
  v82 = unk_B45DA4; /*0x668d66*/
  unk_B45DA4 = 1; /*0x668d6a*/
  sub_679060((int *)&qword_B3BB2C[0x75]); /*0x668d71*/
  ActorProcessManager_UpdateTempEffects((int *)&qword_B3BB2C[0x75], COERCE_INT(0.0)); /*0x668d81*/
  v6 = (Ni2DBuffer **)this->vtbl->GetNiNode(this); /*0x668d90*/
  sub_8B8700(v6); /*0x668d93*/
  NiNode = (Ni2DBuffer **)TESObjectREFR::GetNiNode(this); /*0x668d9d*/
  sub_8B8700(NiNode); /*0x668da3*/
  v8 = TESObjectREFR::GetNiNode(this); /*0x668db2*/
  m_controller = (NiTimeController *)v8->members.super.super.m_controller; /*0x668db4*/
  a2 = m_controller; /*0x668db9*/
  if ( m_controller ) /*0x668dbd*/
    InterlockedIncrement((volatile LONG *)&m_controller->members); /*0x668dc3*/
  v96 = 0; /*0x668dcb*/
  sub_6FFFD0(v8); /*0x668dd6*/
  OB_NiCloningProcess_ctor(&v87); /*0x668ddf*/
  v91 = 1.0; /*0x668de6*/
  v90 = 1.0; /*0x668dea*/
  v89 = 1.0; /*0x668dee*/
  LOBYTE(v96) = 1; /*0x668df9*/
  v10 = sub_700610(v8, (int)&v87); /*0x668e01*/
  v11 = v10; /*0x668e06*/
  if ( v10 ) /*0x668e0a*/
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x668e13*/
    if ( v12 ) /*0x668e17*/
    {
      v73 = (NiNode *)v12; /*0x668e1b*/
      ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(1); /*0x668e1e*/
      ShadowSceneNode_RegisterOrRemovePointLightsInSubtree(ShadowSceneNode, v73, 0); /*0x668e28*/
    }
  }
  sub_478300(v8, a2); /*0x668e34*/
  if ( v11 ) /*0x668e3b*/
    v14 = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x668e44*/
  else
    v14 = 0; /*0x668e48*/
  NiSmartPointer_Set__(v5, v14); /*0x668e4d*/
  sub_6FFFD0(*v5); /*0x668e55*/
  sub_473120(*v5); /*0x668e5e*/
  sub_6FFAC0(*v5, off_A3FA90); /*0x668e6e*/
  sub_708560((int ***)*v5, &v83, 0); /*0x668e7d*/
  if ( v83 ) /*0x668e88*/
  {
    v15 = v83; /*0x668e8a*/
    if ( !InterlockedDecrement(v83 + 1) ) /*0x668e90*/
      (**(void (__thiscall ***)(volatile LONG *, int))v15)(v15, 1); /*0x668ea6*/
  }
  NiAVObject_InitializePropertyState((NiAVObject *)*v5); /*0x668eab*/
  sub_4A2A90((int)*v5, 1.0); /*0x668eba*/
  sub_664D70((int)*v5); /*0x668ec8*/
  v16 = (float *)*v5; /*0x668ecd*/
  v16[0x15] = g_zeroNiPoint3.x; /*0x668ed6*/
  v16[0x16] = g_zeroNiPoint3.y; /*0x668edf*/
  v16[0x17] = g_zeroNiPoint3.z; /*0x668ee8*/
  a5 = *v5; /*0x668ef0*/
  ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *))this->vtbl->GetBaseForm)(this, this); /*0x668efa*/
  sub_524510((TESObjectREFR *)a5, v76); /*0x668efe*/
  v17 = (NiNode *)(*((int (__thiscall **)(Ni2DBuffer *, char *))(*v5)->__vftable + 0x16))(*v5, off_B06568[0]); /*0x668f11*/
  Actor_RefreshQuiverArrowVisibility((Actor *)this, 0, v17); /*0x668f18*/
  qmemcpy(v92, &stru_B26AF0[0xA].unk2C, sizeof(v92)); /*0x668f2d*/
  qmemcpy(&(*v5)[2].members.width, sub_4D7C50(this, v93, v92, 0), 0x24u); /*0x668f4d*/
  NiObjectNET_SetName((NiObjectNET *)*v5, "PlayerInventoryPC"); /*0x668f57*/
  v18 = (BSFaceGenAnimationData *)FormHeapAlloc(0x1E0u); /*0x668f61*/
  v86 = v18; /*0x668f69*/
  LOBYTE(v96) = 2; /*0x668f6f*/
  if ( v18 ) /*0x668f77*/
    v19 = BSFaceGenAnimationData::BSFaceGenAnimationData(v18); /*0x668f80*/
  else
    v19 = 0; /*0x668f84*/
  v83 = (volatile LONG *)v19; /*0x668f88*/
  if ( v19 ) /*0x668f8c*/
    InterlockedIncrement((volatile LONG *)v19 + 1); /*0x668f92*/
  v20 = *v5; /*0x668f98*/
  v21 = *((int (__thiscall **)(Ni2DBuffer *, const char *))(*v5)->__vftable + 0x16); /*0x668f9d*/
  LOBYTE(v96) = 3; /*0x668fa5*/
  v22 = (NiObject *)v21(v20, "BSFaceGenNiNodeBiped"); /*0x668fad*/
  v23 = NiRTTI_Cast((BSStringT *)&stru_B39DB8, v22); /*0x668fba*/
  if ( v23 ) /*0x668fc1*/
  {
    v24 = ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x45); /*0x668fcf*/
    Unk_02 = v23->__vftable[2].Unk_02; /*0x668fdb*/
    v77 = (float)v24; /*0x668fe1*/
    *((float *)v19 + 0x77) = v77; /*0x668fec*/
    ((void (__thiscall *)(NiObject *, BSFaceGenAnimationData *))Unk_02)(v23, v19); /*0x668ff2*/
  }
  v26 = (NiObject *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v5)->__vftable + 0x16))( /*0x669001*/
                      *v5,
                      "BSFaceGenNiNodeSkinned");
  v27 = NiRTTI_Cast((BSStringT *)&stru_B39DB8, v26); /*0x66900e*/
  if ( v27 ) /*0x669015*/
  {
    ((void (__thiscall *)(NiObject *, BSFaceGenAnimationData *))v27->__vftable[2].Unk_02)(v27, v19); /*0x669022*/
    sub_55D1B0(v27, 1); /*0x669028*/
  }
  if ( v19 ) /*0x66902f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v19 + 1) ) /*0x669035*/
      (**(void (__thiscall ***)(BSFaceGenAnimationData *, int))v19)(v19, 1); /*0x669047*/
    v83 = 0; /*0x669049*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16)) )
  {
    if ( (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xEC))(*((_DWORD *)this + 0x16), 1) )
    {
      v28 = (NiNode *)(*((int (__thiscall **)(Ni2DBuffer *, char *))(*v5)->__vftable + 0x16))(*v5, off_B065B0[0]); /*0x669096*/
      v29 = (NiNode *)(*((int (__thiscall **)(Ni2DBuffer *, char *))(*v5)->__vftable + 0x16))(*v5, off_B065B4[0]); /*0x6690a5*/
      v30 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xEC))(*((_DWORD *)this + 0x16), 1); /*0x6690af*/
      v31 = *v5; /*0x6690bb*/
      v32 = *(_BYTE *)(*(_DWORD *)(v30 + 8) + 0x90) == 5
          ? (*((int (__thiscall **)(Ni2DBuffer *, _DWORD))v31->__vftable + 0x16))(v31, *(_DWORD *)off_B065C0)
          : (*((int (__thiscall **)(Ni2DBuffer *, _DWORD))v31->__vftable + 0x16))(v31, *(_DWORD *)off_B065AC);
      v78 = v32; /*0x6690df*/
      if ( v32 ) /*0x6690e3*/
      {
        ChildAtIndex = 0; /*0x6690e5*/
        if ( v28 ) /*0x6690e9*/
          ChildAtIndex = NiNode_GetChildAtIndex(v28, 0); /*0x6690ee*/
        if ( v29 ) /*0x6690f5*/
        {
          if ( ChildAtIndex ) /*0x6690f9*/
          {
LABEL_39:
            ChildAtIndex->members.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x669107*/
            ChildAtIndex->members.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x669116*/
            ChildAtIndex->members.m_localTransform.pos.z = g_zeroNiPoint3.z; /*0x66911f*/
            qmemcpy(&ChildAtIndex->members.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x66912f*/
            (*(void (__thiscall **)(int, NiAVObject *, int))(*(_DWORD *)v78 + 0x84))(v78, ChildAtIndex, 1); /*0x669140*/
            goto LABEL_40; /*0x669140*/
          }
          ChildAtIndex = NiNode_GetChildAtIndex(v29, 0); /*0x6690fe*/
        }
        if ( !ChildAtIndex ) /*0x669105*/
          goto LABEL_40; /*0x669105*/
        goto LABEL_39; /*0x669105*/
      }
    }
  }
LABEL_40:
  v34 = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v5)->__vftable + 0x16))(*v5, "ArrowBone"); /*0x669142*/
  if ( v34 ) /*0x669153*/
  {
    v35 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x66915e*/
    if ( v35 ) /*0x669162*/
    {
      v36 = 0; /*0x669164*/
      for ( i = 0; i < v35[0x5B]; v36 = ++i ) /*0x669166*/
      {
        (*(void (__thiscall **)(unsigned __int16 *, volatile LONG **, unsigned int))(*(_DWORD *)v35 + 0x8C))( /*0x669183*/
          v35,
          &v84,
          v36);
        if ( v84 ) /*0x66918b*/
        {
          v37 = v84; /*0x66918d*/
          if ( !InterlockedDecrement(v84 + 1) ) /*0x669193*/
            (**(void (__thiscall ***)(volatile LONG *, int))v37)(v37, 1); /*0x6691a9*/
        }
      }
    }
  }
  v38 = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v5)->__vftable + 0x16))(*v5, "magicNode"); /*0x6691ce*/
  if ( v38 ) /*0x6691d2*/
  {
    v39 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v38 + 8))(v38); /*0x6691dd*/
    if ( v39 ) /*0x6691e1*/
    {
      v40 = 0; /*0x6691e3*/
      for ( j = 0; j < v39[0x5B]; v40 = ++j ) /*0x6691e5*/
      {
        (*(void (__thiscall **)(unsigned __int16 *, BSFaceGenAnimationData **, unsigned int))(*(_DWORD *)v39 + 0x8C))( /*0x669202*/
          v39,
          &v86,
          v40);
        if ( v86 ) /*0x66920a*/
        {
          v41 = v86; /*0x66920c*/
          if ( !InterlockedDecrement((volatile LONG *)v86 + 1) ) /*0x669212*/
            (**(void (__thiscall ***)(BSFaceGenAnimationData *, int))v41)(v41, 1); /*0x669228*/
        }
      }
    }
  }
  NiAVObject_SetShaderRefractionStateRecursive((NiNode *)*v5, 0, 0.0, 0, 0.0); /*0x669252*/
  v42 = (ActorAnimData *)FormHeapAlloc(0xDCu); /*0x66925c*/
  LOBYTE(v96) = 4; /*0x66926a*/
  if ( v42 ) /*0x669272*/
    v43 = NewActorAnimData(v42); /*0x669276*/
  else
    v43 = 0; /*0x66927d*/
  vtbl = this->vtbl; /*0x66927f*/
  *((_DWORD *)this + 0x177) = v43; /*0x669281*/
  GetBaseForm = vtbl->GetBaseForm; /*0x669287*/
  LOBYTE(v96) = 3; /*0x66928f*/
  v84 = (volatile LONG *)GetBaseForm(this); /*0x66929a*/
  FormModelPAth = GetFormModelPAth((void *)v84); /*0x66929e*/
  _sprintf(Str, "%s", FormModelPAth); /*0x6692b1*/
  v47 = strrchr(Str, 0x5C); /*0x6692c0*/
  v48 = v47; /*0x6692c5*/
  if ( v47 ) /*0x6692cc*/
  {
    *(_DWORD *)v47 = dword_A370DC; /*0x66935a*/
    *((_DWORD *)v47 + 1) = dword_A370E0; /*0x66936a*/
    v47[8] = byte_A370E4; /*0x669384*/
    _sprintf(v94, "Data\\%s\\%s", "Meshes", Str); /*0x669387*/
    v52 = GetFormModelPAth((void *)v84); /*0x669396*/
    v81 = (BSSimpleList_VoidPtr *)ModelLoader_BuildFileListWithArchives(v94, v52, 0); /*0x6693b2*/
    *v48 = 0; /*0x6693b6*/
    v53 = (const char **)off_B102CC; /*0x6693b9*/
    do /*0x669504*/
    {
      _sprintf(v94, "Data\\%s\\%s\\%sIdle.KF", "Meshes", Str, *v53);// Default idle variant auto-detect: checks Data\Meshes\<model dir>\<weaponPrefix>Idle.KF and queues existing files. /*0x6693dd*/
      if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v94, 0, 0, 0xFFFFFFFF) ) /*0x6693fe*/
      {
        v54 = (const char *)FormHeapAlloc(0x104u); /*0x66940e*/
        v55 = GetFormModelPAth((void *)v84); /*0x669415*/
        v56 = (char *)v54; /*0x66941d*/
        do /*0x66942c*/
        {
          v57 = *v55; /*0x669420*/
          *v56++ = *v55++; /*0x669422*/
        }
        while ( v57 ); /*0x66942c*/
        v58 = strrchr(v54, 0x5C); /*0x669431*/
        if ( v58 ) /*0x66943b*/
        {
          _sprintf(v58 + 1, "%sIdle.KF", *v53); /*0x669449*/
          BSSimpleList_PushBack(v81, (int)v54); /*0x669456*/
        }
      }
      _sprintf(v94, "Data\\%s\\%s\\%sTorchIdle.KF", "Meshes", Str, *v53);// Default torch idle variant auto-detect: checks Data\Meshes\<model dir>\<weaponPrefix>TorchIdle.KF and queues existing files. /*0x669478*/
      if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v94, 0, 0, 0xFFFFFFFF) ) /*0x669499*/
      {
        v59 = (const char *)FormHeapAlloc(0x104u); /*0x6694a9*/
        v60 = GetFormModelPAth((void *)v84); /*0x6694b0*/
        v61 = (char *)v59; /*0x6694b8*/
        do /*0x6694cc*/
        {
          v62 = *v60; /*0x6694c0*/
          *v61++ = *v60++; /*0x6694c2*/
        }
        while ( v62 ); /*0x6694cc*/
        v63 = strrchr(v59, 0x5C); /*0x6694d1*/
        if ( v63 ) /*0x6694db*/
        {
          _sprintf(v63 + 1, "%sTorchIdle.KF", *v53); /*0x6694e9*/
          BSSimpleList_PushBack(v81, (int)v59); /*0x6694f6*/
        }
      }
      ++v53; /*0x6694fb*/
    }
    while ( (int)v53 < (int)animGroupInfos_ptr );// Interior callsite in actor default idle variant initialization; same setup path as ObservedActorRef_InitDefaultIdleVariants. /*0x669504*/
    Menu_PickIdles(*((AnimSequenceSingle **)this + 0x177), st5_0, a3, 0.0, v81, (NiNode *)*v5, this);// Initializes actor/player idle animation data from default Idle/TorchIdle files gathered from the model directory. /*0x66951a*/
    Light = ExtraDataList_GetLight(&this->member.baseExtraList); /*0x669522*/
    if ( Light ) /*0x669529*/
    {
      Destructor = Light->Destructor; /*0x66952b*/
      if ( Destructor ) /*0x66952f*/
      {
        v74 = Destructor; /*0x669533*/
        v66 = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(1); /*0x669536*/
        ShadowSceneNode_FindOrCreateFullLightForSource(v66, v74, 0);// Actor/equipped ExtraLight registration uses trackBackingPosition=false. /*0x669540*/
      }
    }
    unk_B45DA4 = v82; /*0x669549*/
    (*((void (__thiscall **)(Ni2DBuffer *))(*v5)->__vftable + 0x1E))(*v5); /*0x669556*/
    (*((void (__thiscall **)(Ni2DBuffer *))(*v5)->__vftable + 0x14))(*v5); /*0x669560*/
    v67 = *((_DWORD *)this + 0x16); /*0x669562*/
    if ( v67 ) /*0x669567*/
      (*(void (__thiscall **)(int, TESObjectREFR *, int, _DWORD, _DWORD))(*(_DWORD *)v67 + 0x42C))(v67, this, 1, 0, 0); /*0x669578*/
    v68 = v83; /*0x66957a*/
    LOBYTE(v96) = 1; /*0x669580*/
    if ( v83 ) /*0x669588*/
    {
      if ( !InterlockedDecrement(v83 + 1) ) /*0x66958e*/
        (**(void (__thiscall ***)(volatile LONG *, int))v68)(v68, 1); /*0x6695a0*/
    }
    LOBYTE(v96) = 0; /*0x6695a8*/
    if ( v87 ) /*0x6695b0*/
      (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v87)(v87, 1); /*0x6695b8*/
    if ( v88 ) /*0x6695c0*/
      (**v88)(v88, 1); /*0x6695c8*/
    v69 = a2; /*0x6695ca*/
    v96 = 0xFFFFFFFF; /*0x6695d0*/
    if ( a2 ) /*0x6695db*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&a2->members) ) /*0x6695e5*/
        v69->vtbl->super.super.Destructor((NiRefObject *)v69, 1); /*0x6695f7*/
    }
    return *v5; /*0x6695f9*/
  }
  v49 = v83; /*0x6692d2*/
  LOBYTE(v96) = 1; /*0x6692d8*/
  if ( v83 ) /*0x6692e0*/
  {
    if ( !InterlockedDecrement(v83 + 1) ) /*0x6692e6*/
      (**(void (__thiscall ***)(volatile LONG *, int))v49)(v49, 1); /*0x6692f8*/
  }
  LOBYTE(v96) = 0; /*0x669300*/
  if ( v87 ) /*0x669308*/
    (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v87)(v87, 1); /*0x669310*/
  if ( v88 ) /*0x669318*/
    (**v88)(v88, 1); /*0x669320*/
  v50 = a2; /*0x669322*/
  v96 = 0xFFFFFFFF; /*0x669328*/
  if ( a2 ) /*0x669333*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&a2->members) ) /*0x669339*/
      v50->vtbl->super.super.Destructor((NiRefObject *)v50, 1); /*0x66934b*/
  }
  return 0; /*0x669661*/
}
