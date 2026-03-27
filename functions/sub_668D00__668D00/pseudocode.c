Ni2DBuffer *__userpurge sub_668D00@<eax>(int *this@<ecx>, double st5_0@<st2>, double a3@<st1>, char a4)
{
  Ni2DBuffer **v5; // ebp
  _DWORD *v6; // eax
  NiNode *NiNode; // eax
  NiNode *v8; // esi
  NiTimeController *m_controller; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *ShadowSceneNode; // eax
  Ni2DBuffer *v14; // eax
  volatile LONG *v15; // esi
  float *v16; // eax
  int v17; // eax
  BSFaceGenAnimationData *v18; // eax
  volatile LONG *v19; // esi
  Ni2DBuffer *v20; // ecx
  int (__thiscall *v21)(Ni2DBuffer *, const char *); // edx
  NiObject *v22; // eax
  NiObject *v23; // edi
  int v24; // eax
  NiObject *(__thiscall *Unk_02)(NiObject *); // edx
  NiObject *v26; // eax
  NiObject *v27; // edi
  int v28; // esi
  int v29; // edi
  int v30; // eax
  Ni2DBuffer *v31; // ecx
  int v32; // eax
  float *v33; // eax
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
  int v44; // edx
  int (__thiscall *v45)(int *); // eax
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
  BSExtraDataVtbl *v64; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  _DWORD *v66; // eax
  int v67; // ecx
  volatile LONG *v68; // esi
  NiTimeController *v69; // esi
  unsigned int v70; // esi
  Ni2DBuffer *v71; // esi
  void (__thiscall ***v72)(_DWORD, int); // ecx
  int v73; // [esp+6Ch] [ebp-2B0h]
  int v74; // [esp+6Ch] [ebp-2B0h]
  Ni2DBuffer *a5; // [esp+70h] [ebp-2ACh]
  _DWORD *v76; // [esp+74h] [ebp-2A8h]
  float v77; // [esp+88h] [ebp-294h]
  int v78; // [esp+88h] [ebp-294h]
  unsigned int i; // [esp+88h] [ebp-294h]
  unsigned int j; // [esp+88h] [ebp-294h]
  char **v81; // [esp+88h] [ebp-294h]
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

  v5 = (Ni2DBuffer **)(this + 0x176);
  if ( !a4 )
  {
    if ( *v5 )
    {
      v70 = *(this + 0x177);
      if ( v70 )
      {
        DisposeActorAnimData((ActorAnimData *)*(this + 0x177));
        FormHeapFree(v70);
      }
      *(this + 0x177) = 0;
      v71 = *v5;
      if ( *v5 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v71->members) )
        {
          if ( v71 )
            (*(void (__thiscall **)(Ni2DBuffer *, int))v71->__vftable)(v71, 1);
        }
        *v5 = 0;
      }
      v72 = (void (__thiscall ***)(_DWORD, int))*(this + 0x178);
      if ( v72 )
      {
        (**v72)(v72, 1);
        *(this + 0x178) = 0;
      }
    }
    return *v5;
  }
  if ( *v5 )
    return *v5;
  v82 = byte_B45DA4;
  byte_B45DA4 = 1;
  sub_679060((int *)&ActorProcessManager_ptr);
  sub_67ACA0((int *)&ActorProcessManager_ptr, COERCE_INT(0.0));
  v6 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x154))(this);
  sub_8B8700(v6);
  NiNode = TESObjectREFR::GetNiNode((TESObjectREFR *)this);
  sub_8B8700(NiNode);
  v8 = TESObjectREFR::GetNiNode((TESObjectREFR *)this);
  m_controller = (NiTimeController *)v8->members.super.super.m_controller;
  a2 = m_controller;
  if ( m_controller )
    InterlockedIncrement((volatile LONG *)&m_controller->members);
  v96 = 0;
  sub_6FFFD0(v8);
  sub_478B90(&v87);
  v91 = 1.0;
  v90 = 1.0;
  v89 = 1.0;
  LOBYTE(v96) = 1;
  v10 = sub_700610(v8, (int)&v87);
  v11 = v10;
  if ( v10 )
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
    if ( v12 )
    {
      v73 = v12;
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(1);
      sub_7C7F90(ShadowSceneNode, v73, 0);
    }
  }
  sub_478300(v8, a2);
  if ( v11 )
    v14 = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
  else
    v14 = 0;
  NiSmartPointer_Set__(v5, v14);
  sub_6FFFD0(*v5);
  sub_473120(*v5);
  sub_6FFAC0(*v5, off_A3FA90);
  sub_708560(*v5, &v83, 0);
  if ( v83 )
  {
    v15 = v83;
    if ( !InterlockedDecrement(v83 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v15)(v15, 1);
  }
  NiAVObject_InitializePropertyState((NiAVObject *)*v5);
  sub_4A2A90((int)*v5, 1.0);
  sub_664D70((int)*v5);
  v16 = (float *)*v5;
  v16[0x15] = Vector3_InitValue_;
  v16[0x16] = *(&Vector3_InitValue_ + 1);
  v16[0x17] = dword_B3F9B0;
  a5 = *v5;
  (*(void (__thiscall **)(int *, int *))(*this + 0x170))(this, this);
  sub_524510((TESObjectREFR *)a5, v76);
  v17 = (*((int (__thiscall **)(Ni2DBuffer *, char *))(*v5)->__vftable + 0x16))(*v5, off_B06568[0]);
  sub_5F8300((TESObjectREFR *)this, 0, v17);
  qmemcpy(v92, &stru_B26AF0[0xA].unk2C, sizeof(v92));
  qmemcpy(&(*v5)[2].members.width, sub_4D7C50(this, v93, v92, 0), 0x24u);
  NiObjectNET_SetName((NiObjectNET *)*v5, "PlayerInventoryPC");
  v18 = (BSFaceGenAnimationData *)FormHeapAlloc(0x1E0u);
  v86 = v18;
  LOBYTE(v96) = 2;
  if ( v18 )
    v19 = (volatile LONG *)BSFaceGenAnimationData::BSFaceGenAnimationData(v18);
  else
    v19 = 0;
  v83 = v19;
  if ( v19 )
    InterlockedIncrement(v19 + 1);
  v20 = *v5;
  v21 = *((int (__thiscall **)(Ni2DBuffer *, const char *))(*v5)->__vftable + 0x16);
  LOBYTE(v96) = 3;
  v22 = (NiObject *)v21(v20, "BSFaceGenNiNodeBiped");
  v23 = NiRTTI_Cast((BSStringT *)dword_B39DB8, v22);
  if ( v23 )
  {
    v24 = (*(int (__thiscall **)(int *, int))(*this + 0x284))(this, 0x45);
    Unk_02 = v23->__vftable[2].Unk_02;
    v77 = (float)v24;
    *((float *)v19 + 0x77) = v77;
    ((void (__thiscall *)(NiObject *, volatile LONG *))Unk_02)(v23, v19);
  }
  v26 = (NiObject *)(*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v5)->__vftable + 0x16))(
                      *v5,
                      "BSFaceGenNiNodeSkinned");
  v27 = NiRTTI_Cast((BSStringT *)dword_B39DB8, v26);
  if ( v27 )
  {
    ((void (__thiscall *)(NiObject *, volatile LONG *))v27->__vftable[2].Unk_02)(v27, v19);
    sub_55D1B0(v27, 1);
  }
  if ( v19 )
  {
    if ( !InterlockedDecrement(v19 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v19)(v19, 1);
    v83 = 0;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x304))(*(this + 0x16)) )
  {
    if ( (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0x16) + 0xEC))(*(this + 0x16), 1) )
    {
      v28 = (*((int (__thiscall **)(Ni2DBuffer *, char *))(*v5)->__vftable + 0x16))(*v5, off_B065B0[0]);
      v29 = (*((int (__thiscall **)(Ni2DBuffer *, char *))(*v5)->__vftable + 0x16))(*v5, off_B065B4[0]);
      v30 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0x16) + 0xEC))(*(this + 0x16), 1);
      v31 = *v5;
      v32 = *(_BYTE *)(*(_DWORD *)(v30 + 8) + 0x90) == 5
          ? (*((int (__thiscall **)(Ni2DBuffer *, _DWORD))v31->__vftable + 0x16))(v31, *(_DWORD *)off_B065C0)
          : (*((int (__thiscall **)(Ni2DBuffer *, _DWORD))v31->__vftable + 0x16))(v31, *(_DWORD *)off_B065AC);
      v78 = v32;
      if ( v32 )
      {
        v33 = 0;
        if ( v28 )
          v33 = (float *)sub_405790(v28, 0);
        if ( v29 )
        {
          if ( v33 )
          {
LABEL_39:
            v33[0x15] = Vector3_InitValue_;
            v33[0x16] = *(&Vector3_InitValue_ + 1);
            v33[0x17] = dword_B3F9B0;
            qmemcpy(v33 + 0xC, &stru_B26AF0[0xA].unk2C, 0x24u);
            (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v78 + 0x84))(v78, v33, 1);
            goto LABEL_40;
          }
          v33 = (float *)sub_405790(v29, 0);
        }
        if ( !v33 )
          goto LABEL_40;
        goto LABEL_39;
      }
    }
  }
LABEL_40:
  v34 = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v5)->__vftable + 0x16))(*v5, "ArrowBone");
  if ( v34 )
  {
    v35 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34);
    if ( v35 )
    {
      v36 = 0;
      for ( i = 0; i < v35[0x5B]; v36 = ++i )
      {
        (*(void (__thiscall **)(unsigned __int16 *, volatile LONG **, unsigned int))(*(_DWORD *)v35 + 0x8C))(
          v35,
          &v84,
          v36);
        if ( v84 )
        {
          v37 = v84;
          if ( !InterlockedDecrement(v84 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v37)(v37, 1);
        }
      }
    }
  }
  v38 = (*((int (__thiscall **)(Ni2DBuffer *, const char *))(*v5)->__vftable + 0x16))(*v5, "magicNode");
  if ( v38 )
  {
    v39 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v38 + 8))(v38);
    if ( v39 )
    {
      v40 = 0;
      for ( j = 0; j < v39[0x5B]; v40 = ++j )
      {
        (*(void (__thiscall **)(unsigned __int16 *, BSFaceGenAnimationData **, unsigned int))(*(_DWORD *)v39 + 0x8C))(
          v39,
          &v86,
          v40);
        if ( v86 )
        {
          v41 = v86;
          if ( !InterlockedDecrement((volatile LONG *)v86 + 1) )
            (**(void (__thiscall ***)(BSFaceGenAnimationData *, int))v41)(v41, 1);
        }
      }
    }
  }
  sub_7D92C0((NiNode *)*v5, 0, 0.0, 0, 0.0);
  v42 = (ActorAnimData *)FormHeapAlloc(0xDCu);
  LOBYTE(v96) = 4;
  if ( v42 )
    v43 = NewActorAnimData(v42);
  else
    v43 = 0;
  v44 = *this;
  *(this + 0x177) = (int)v43;
  v45 = *(int (__thiscall **)(int *))(v44 + 0x170);
  LOBYTE(v96) = 3;
  v84 = (volatile LONG *)v45(this);
  FormModelPAth = GetFormModelPAth((void *)v84);
  _sprintf(Str, "%s", FormModelPAth);
  v47 = strrchr(Str, 0x5C);
  v48 = v47;
  if ( v47 )
  {
    *(_DWORD *)v47 = dword_A370DC;
    *((_DWORD *)v47 + 1) = dword_A370E0;
    v47[8] = byte_A370E4;
    _sprintf(v94, "Data\\%s\\%s", "Meshes", Str);
    v52 = GetFormModelPAth((void *)v84);
    v81 = sub_434850(v94, v52, 0);
    *v48 = 0;
    v53 = (const char **)off_B102CC;
    do
    {
      _sprintf(v94, "Data\\%s\\%s\\%sIdle.KF", "Meshes", Str, *v53);
      if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v94, 0, 0, 0xFFFFFFFF) )
      {
        v54 = (const char *)FormHeapAlloc(0x104u);
        v55 = GetFormModelPAth((void *)v84);
        v56 = (char *)v54;
        do
        {
          v57 = *v55;
          *v56++ = *v55++;
        }
        while ( v57 );
        v58 = strrchr(v54, 0x5C);
        if ( v58 )
        {
          _sprintf(v58 + 1, "%sIdle.KF", *v53);
          BSSimpleList_PushBack(v81, (int)v54);
        }
      }
      _sprintf(v94, "Data\\%s\\%s\\%sTorchIdle.KF", "Meshes", Str, *v53);
      if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v94, 0, 0, 0xFFFFFFFF) )
      {
        v59 = (const char *)FormHeapAlloc(0x104u);
        v60 = GetFormModelPAth((void *)v84);
        v61 = (char *)v59;
        do
        {
          v62 = *v60;
          *v61++ = *v60++;
        }
        while ( v62 );
        v63 = strrchr(v59, 0x5C);
        if ( v63 )
        {
          _sprintf(v63 + 1, "%sTorchIdle.KF", *v53);
          BSSimpleList_PushBack(v81, (int)v59);
        }
      }
      ++v53;
    }
    while ( (int)v53 < (int)animGroupInfos_ptr );
    Menu_PickIdles__((AnimSequenceSingle *)*(this + 0x177), st5_0, a3, 0.0, (volatile LONG *)v81, (NiNode *)*v5, this);
    v64 = sub_41E650((ExtraDataList *)(this + 0x11));
    if ( v64 )
    {
      Destructor = v64->Destructor;
      if ( Destructor )
      {
        v74 = (int)Destructor;
        v66 = (_DWORD *)GetShadowSceneNode(1);
        sub_7C6AE0(v66, v74, 0);
      }
    }
    byte_B45DA4 = v82;
    (*((void (__thiscall **)(Ni2DBuffer *))(*v5)->__vftable + 0x1E))(*v5);
    (*((void (__thiscall **)(Ni2DBuffer *))(*v5)->__vftable + 0x14))(*v5);
    v67 = *(this + 0x16);
    if ( v67 )
      (*(void (__thiscall **)(int, int *, int, _DWORD, _DWORD))(*(_DWORD *)v67 + 0x42C))(v67, this, 1, 0, 0);
    v68 = v83;
    LOBYTE(v96) = 1;
    if ( v83 )
    {
      if ( !InterlockedDecrement(v83 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v68)(v68, 1);
    }
    LOBYTE(v96) = 0;
    if ( v87 )
      (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v87)(v87, 1);
    if ( v88 )
      (**v88)(v88, 1);
    v69 = a2;
    v96 = 0xFFFFFFFF;
    if ( a2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&a2->members) )
        v69->vtbl->super.super.Destructor((NiRefObject *)v69, 1);
    }
    return *v5;
  }
  v49 = v83;
  LOBYTE(v96) = 1;
  if ( v83 )
  {
    if ( !InterlockedDecrement(v83 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v49)(v49, 1);
  }
  LOBYTE(v96) = 0;
  if ( v87 )
    (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v87)(v87, 1);
  if ( v88 )
    (**v88)(v88, 1);
  v50 = a2;
  v96 = 0xFFFFFFFF;
  if ( a2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&a2->members) )
      v50->vtbl->super.super.Destructor((NiRefObject *)v50, 1);
  }
  return 0;
}
