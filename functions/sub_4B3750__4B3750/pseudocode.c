// Generic bound-object 3D implementation used by many form classes. Obtains/caches the model, clones its NiNode tree for the reference, applies scale, and resets the clone's local transform.
NiNode *__thiscall TESBoundObject_Create3DImpl(TESBoundObject *this, TESObjectREFR *reference, int arg1)
{
  TESObjectREFR *v3; // esi
  NiNode *v5; // ebp
  bool v6; // zf
  int v7; // edi
  NiNode *v8; // eax
  NiNode *v9; // esi
  NiAVObject *ChildAtIndex; // eax
  NiControllerManager *v11; // eax
  unsigned __int16 *v12; // eax
  NiExtraData *ExtraData; // eax
  float (__thiscall *GetScale)(TESObjectREFR *); // eax
  char *Name; // eax
  volatile LONG *v16; // eax
  volatile LONG *v17; // esi
  NiAVObject *v18; // eax
  void (__thiscall *AddObject)(NiNode, NiAVObject *, UInt8); // eax
  int v20; // edx
  int *v21; // eax
  int *v22; // esi
  QueuedTreeBillboard *v23; // ecx
  NiNode *v24; // esi
  NiAVObject *element; // [esp+18h] [ebp-140h] BYREF
  TESObjectREFR *referencea; // [esp+1Ch] [ebp-13Ch]
  float Scale; // [esp+20h] [ebp-138h]
  void *v29; // [esp+24h] [ebp-134h]
  void (__thiscall ***v30)(int (__stdcall ***)(signed int), int); // [esp+28h] [ebp-130h] BYREF
  void (__thiscall ***v31)(_DWORD, int); // [esp+2Ch] [ebp-12Ch]
  float v32; // [esp+38h] [ebp-120h]
  float v33; // [esp+3Ch] [ebp-11Ch]
  float v34; // [esp+40h] [ebp-118h]
  char outPath[260]; // [esp+44h] [ebp-114h] BYREF
  unsigned int v36; // [esp+154h] [ebp-4h]

  v3 = reference; /*0x4b378b*/
  v5 = 0; /*0x4b3794*/
  v6 = this == (TESBoundObject *)MEMORY[0xB35EA4]; /*0x4b3796*/
  referencea = reference; /*0x4b379c*/
  if ( v6 || this == (TESBoundObject *)MEMORY[0xB35EB4] ) /*0x4b37a8*/
  {
    referencea = 0; /*0x4b37aa*/
    v3 = 0; /*0x4b37ae*/
  }
  v7 = ((int (__thiscall *)(TESBoundObject *, TESObjectREFR *))this->vtbl[1].super.super.Unk_0D)(this, v3); /*0x4b37bb*/
  if ( !v7 ) /*0x4b37bf*/
    return v5; /*0x4b37bf*/
  if ( (this->member.super.flags & 0x10) != 0 ) /*0x4b37cd*/
  {
    if ( v3 ) /*0x4b37d1*/
      sub_46A9C0(v3, 1); /*0x4b37d7*/
  }
  if ( !(_BYTE)arg1 && *(_DWORD *)(v7 + 4) == 1 ) /*0x4b37ea*/
  {
    switch ( this->member.super.type ) /*0x4b3803*/
    {
      case kFormType_Activator: /*0x4b3803*/
      case kFormType_Creature: /*0x4b3803*/
        LOBYTE(arg1) = sub_480820((_DWORD *)v7) != 0; /*0x4b3817*/
        goto LABEL_12; /*0x4b3817*/
      case kFormType_Armor: /*0x4b3803*/
        v12 = (unsigned __int16 *)OblivionDynamicCast( /*0x4b38cf*/
                                    this,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                    &TESObjectARMO `RTTI Type Descriptor',
                                    0);
        if ( v12 && TESBipedModelForm_CoversSlot(v12 + 0x32, 0xD, 0) ) /*0x4b38e2*/
          goto LABEL_12; /*0x4b38e9*/
        goto LABEL_26; /*0x4b38e9*/
      case kFormType_Door: /*0x4b3803*/
        v8 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x4b3862*/
        v9 = v8; /*0x4b3864*/
        if ( v8 ) /*0x4b3868*/
        {
          if ( NiNode_GetChildAtIndex(v8, 0) ) /*0x4b3872*/
          {
            if ( NiNode_GetChildAtIndex(v9, 0)->members.super.m_controller ) /*0x4b3884*/
            {
              ChildAtIndex = NiNode_GetChildAtIndex(v9, 0); /*0x4b388d*/
              v11 = (NiControllerManager *)NiRTTI_Cast( /*0x4b389b*/
                                             (BSStringT *)&stru_B3CAC0,
                                             (NiObject *)ChildAtIndex->members.super.m_controller);
              if ( v11 ) /*0x4b38a5*/
              {
                if ( NiControllerManager_FindSequenceByName(v11, "Unequip") ) /*0x4b38ae*/
                {
                  v3 = referencea; /*0x4b38b7*/
                  goto LABEL_12; /*0x4b38bb*/
                }
              }
            }
          }
        }
        v3 = referencea; /*0x4b38f1*/
LABEL_26:
        ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v7, dword_A7D0EC); /*0x4b38f5*/
        if ( ExtraData && ((int)ExtraData[1].__vftable & 0x10) != 0 ) /*0x4b390e*/
          goto LABEL_12; /*0x4b390e*/
        if ( v3 ) /*0x4b3916*/
        {
          GetScale = v3->vtbl->GetScale; /*0x4b391d*/
          element = *(NiAVObject **)(v7 + 0x60); /*0x4b3923*/
          if ( *(float *)&element != ((double (__thiscall *)(TESObjectREFR *))GetScale)(v3) ) /*0x4b3936*/
            goto LABEL_12; /*0x4b3936*/
        }
        v5 = (NiNode *)v7; /*0x4b393c*/
        break; /*0x4b393e*/
      case kFormType_Weapon: /*0x4b3803*/
      case kFormType_Ammo: /*0x4b3803*/
      case kFormType_NPC: /*0x4b3803*/
        goto LABEL_12;
      default:
        goto LABEL_26;
    }
LABEL_68:
    v5->members.super.m_flags &= ~1u; /*0x4b3bec*/
    v6 = v5->members.super.m_parent == 0; /*0x4b3bf4*/
    *(float *)&element = fabs(1.0); /*0x4b3bfa*/
    v5->members.super.m_localTransform.scale = *(float *)&element; /*0x4b3c0a*/
    qmemcpy(&v5->members.super.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x4b3c12*/
    v5->members.super.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x4b3c1a*/
    v5->members.super.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x4b3c23*/
    v5->members.super.m_localTransform.pos.z = g_zeroNiPoint3.z; /*0x4b3c2b*/
    if ( !v6 ) /*0x4b3c2e*/
      v5->members.super.m_parent = 0; /*0x4b3c30*/
    return v5; /*0x4b3c37*/
  }
LABEL_12:
  Scale = 1.0; /*0x4b381f*/
  if ( v3 ) /*0x4b3827*/
    Scale = TESObjectREFR_GetScale(v3); /*0x4b3830*/
  element = *(NiAVObject **)(v7 + 0x60); /*0x4b3837*/
  if ( Scale != *(float *)&element ) /*0x4b384e*/
  {
    if ( 0.0 != Scale ) /*0x4b394c*/
      goto LABEL_34; /*0x4b394c*/
    Name = TESObjectREFR_GetName(v3); /*0x4b3950*/
    PrintError("%s has a scale of 0.  Change it in the editor.", Name); /*0x4b395b*/
  }
  Scale = 1.0; /*0x4b3965*/
LABEL_34:
  OB_NiCloningProcess_ctor(&v30); /*0x4b3969*/
  v34 = Scale; /*0x4b3976*/
  v33 = Scale; /*0x4b397a*/
  v32 = Scale; /*0x4b397e*/
  v36 = 0; /*0x4b398e*/
  if ( (_BYTE)arg1 ) /*0x4b399a*/
  {
    v16 = sub_4430C0((void *)v7, (int)&v30); /*0x4b39a7*/
    v17 = v16; /*0x4b39ac*/
    v29 = (void *)v16; /*0x4b39b0*/
    if ( v16 ) /*0x4b39b4*/
      InterlockedIncrement(v16 + 1); /*0x4b39ba*/
    LOBYTE(v36) = 1; /*0x4b39c2*/
    if ( v17 && (*(int (__thiscall **)(volatile LONG *))(*v17 + 8))(v17) ) /*0x4b39d3*/
    {
      v5 = (NiNode *)v17; /*0x4b39de*/
      sub_405070(&element, (int)v17); /*0x4b39e0*/
      LOBYTE(v36) = 2; /*0x4b39ef*/
      NiTObjectArray_AddFirstEmpty((MEF_RefPointerArray16 *)&stru_B082F0, (void **)&element); /*0x4b39f7*/
      LOBYTE(v36) = 1; /*0x4b3a00*/
      NiPointerSlot_Release((void **)&element); /*0x4b3a08*/
    }
    else
    {
      v18 = (NiAVObject *)FormHeapAlloc(0xDCu); /*0x4b3a14*/
      element = v18; /*0x4b3a1c*/
      LOBYTE(v36) = 3; /*0x4b3a22*/
      if ( v18 ) /*0x4b3a2a*/
        v5 = NiNode::NiNode((NiNode *)v18, 0); /*0x4b3a35*/
      else
        v5 = 0; /*0x4b3a39*/
      AddObject = v5->vtbl->AddObject; /*0x4b3a3e*/
      LOBYTE(v36) = 1; /*0x4b3a49*/
      ((void (__thiscall *)(NiNode *, volatile LONG *, int))AddObject)(v5, v17, 1); /*0x4b3a51*/
    }
    LOBYTE(v36) = 0; /*0x4b3a55*/
    if ( v17 ) /*0x4b3a5d*/
    {
      if ( !InterlockedDecrement(v17 + 1) ) /*0x4b3a63*/
        (**(void (__thiscall ***)(volatile LONG *, int))v17)(v17, 1); /*0x4b3a75*/
    }
    v3 = referencea; /*0x4b3a77*/
  }
  else
  {
    v5 = (NiNode *)sub_700610((void *)v7, (int)&v30); /*0x4b3b0a*/
  }
  if ( Scale == 1.0 || (element = *(NiAVObject **)(v7 + 0x60), 1.0 != *(float *)&element) ) /*0x4b3aa4*/
  {
    v36 = 0xFFFFFFFF; /*0x4b3bc3*/
    if ( v30 ) /*0x4b3bce*/
      (**v30)((int (__stdcall ***)(signed int))v30, 1); /*0x4b3bd6*/
    if ( v31 ) /*0x4b3bde*/
      (**v31)(v31, 1); /*0x4b3be6*/
    if ( !v5 ) /*0x4b3bea*/
      return v5; /*0x4b3bea*/
    goto LABEL_68; /*0x4b3bea*/
  }
  *(float *)&element = fabs(Scale); /*0x4b3ab0*/
  v5->members.super.m_localTransform.scale = *(float *)&element; /*0x4b3abc*/
  TESBoundObject_BuildReferenceModelPath(this, v3, outPath); /*0x4b3abf*/
  if ( !ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], v20, (int)outPath) ) /*0x4b3acf*/
  {
    v21 = (int *)FormHeapAlloc(0xCu); /*0x4b3ada*/
    v29 = v21; /*0x4b3ae2*/
    LOBYTE(v36) = 4; /*0x4b3ae8*/
    if ( v21 ) /*0x4b3af0*/
      v22 = sub_434A70(v21, outPath, (int)v5); /*0x4b3aff*/
    else
      v22 = 0; /*0x4b3b11*/
    v23 = MEMORY[0xB33A1C]; /*0x4b3b13*/
    LOBYTE(v36) = 0; /*0x4b3b1f*/
    if ( (unsigned __int8)sub_434800(v23, (int)outPath, (int)v22) ) /*0x4b3b27*/
    {
      ++unk_B35AC4; /*0x4b3b46*/
    }
    else if ( v22 ) /*0x4b3b32*/
    {
      sub_4349B0((unsigned int *)v22); /*0x4b3b36*/
      FormHeapFree((unsigned int)v22); /*0x4b3b3c*/
    }
    v3 = referencea; /*0x4b3b4d*/
  }
  v24 = (NiNode *)((int (__thiscall *)(TESBoundObject *, TESObjectREFR *, int))this->vtbl[1].super.super.Destroy)( /*0x4b3b66*/
                    this,
                    v3,
                    arg1);
  if ( v5 != v24 ) /*0x4b3b6a*/
  {
    sub_405070(&element, (int)v5); /*0x4b3b71*/
    LOBYTE(v36) = 5; /*0x4b3b80*/
    sub_4B24F0((int)&stru_B082F0, &element); /*0x4b3b88*/
    LOBYTE(v36) = 0; /*0x4b3b91*/
    NiPointerSlot_Release((void **)&element); /*0x4b3b99*/
  }
  v36 = 0xFFFFFFFF; /*0x4b3ba2*/
  sub_4781A0((int (__stdcall ****)(signed int))&v30); /*0x4b3bad*/
  return v24; /*0x4b3c39*/
}
