// TESObjectREFR vtable GenerateNiNode base implementation. Native ABI has no stack/x87 inputs and returns the generated NiNode*. Prior ST0/ST1/ST2 parameters were decompiler artifacts.
NiNode *__thiscall TESObjectREFR_GenerateNiNode(TESObjectREFR *this)
{
  double v1; // st5
  double v2; // st6
  double v3; // st7
  TESForm::FormFlags flags; // ecx
  UInt32 v6; // ebx
  TESForm *baseForm; // esi
  Ni2DBuffer *v8; // eax
  bool (__thiscall *IsActor)(TESObjectREFR *); // eax
  UInt32 refID; // esi
  char *Name; // eax
  TESObjectREFRVtbl *vtbl; // esi
  int v13; // eax
  NiExtraData *ExtraData; // eax
  NiObject *v15; // eax
  NiObject *v16; // eax
  NiObject *v17; // eax
  unsigned int *v18; // eax
  TESForm *v19; // eax
  ExtraDataList *p_baseExtraList; // esi
  TeleportData *Teleport; // eax
  TeleportData *v22; // eax
  TESObjectCELL *v23; // eax
  void (__thiscall *v24)(UInt32); // edx
  double x; // st7
  int v26; // edx
  int *v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // ecx
  _DWORD *v31; // esi
  ActorAnimData *v32; // eax
  ActorAnimData *v33; // esi
  BSAnimGroupSequence *NormalizedSequenceSlot; // edi
  NiTransform *v35; // eax
  UInt32 easeOutTime; // [esp+20h] [ebp-6Ch]
  void *easeOutTimea; // [esp+20h] [ebp-6Ch]
  float easeOutTimeb; // [esp+20h] [ebp-6Ch]
  TESForm *v40; // [esp+38h] [ebp-54h]
  float v41; // [esp+38h] [ebp-54h]
  UInt32 niNode; // [esp+3Ch] [ebp-50h] BYREF
  TESObjectREFR *v43; // [esp+40h] [ebp-4Ch]
  NiPoint3 Src; // [esp+44h] [ebp-48h] BYREF
  NiTransform v45; // [esp+50h] [ebp-3Ch] BYREF
  unsigned int v46; // [esp+88h] [ebp-4h]

  flags = this->member.super.flags; /*0x4e40a9*/
  if ( (flags & 0x20) != 0 || (flags & 0x800) != 0 ) /*0x4e40c1*/
    return 0; /*0x4e467a*/
  niNode = (UInt32)this->member.niNode; /*0x4e40ce*/
  v6 = niNode; /*0x4e40c7*/
  if ( niNode ) /*0x4e40d2*/
    InterlockedIncrement((volatile LONG *)(niNode + 4)); /*0x4e40d8*/
  v46 = 0; /*0x4e40e0*/
  if ( !niNode ) /*0x4e40e4*/
  {
    baseForm = this->member.baseForm; /*0x4e40ea*/
    v40 = baseForm; /*0x4e40ef*/
    if ( baseForm ) /*0x4e40f3*/
    {
      v8 = (Ni2DBuffer *)((int (__thiscall *)(TESForm *, TESObjectREFR *))baseForm->vtbl[1].Unk_0E)(baseForm, this); /*0x4e4104*/
      NiSmartPointer_Set__((Ni2DBuffer **)&niNode, v8); /*0x4e410b*/
      v6 = niNode; /*0x4e4110*/
      MobileObject_SetNiNode((MobileObject *)this, (NiAVObject *)niNode); /*0x4e4117*/
      sub_4D9800(v6); /*0x4e411d*/
      if ( v6 ) /*0x4e4127*/
      {
        IsActor = this->vtbl->IsActor; /*0x4e4130*/
        v43 = 0; /*0x4e4138*/
        if ( IsActor(this) ) /*0x4e413c*/
        {
          Src.x = 0.0; /*0x4e4142*/
          Src.y = 0.0; /*0x4e4146*/
          refID = this->member.super.refID; /*0x4e4156*/
          easeOutTime = this->member.baseForm->member.refID; /*0x4e4159*/
          LOBYTE(v46) = 1; /*0x4e415c*/
          Name = TESObjectREFR_GetName(this); /*0x4e4161*/
          BSStringT_Static_Format((BSStringT *)&Src, "(%08X) -> %s (%08X)", refID, Name, easeOutTime); /*0x4e4172*/
          NiObjectNET_SetName((NiObjectNET *)v6, (char *)LODWORD(Src.x)); /*0x4e4181*/
          if ( this->member.baseForm->member.type == kFormType_Creature ) /*0x4e418d*/
          {
            vtbl = this->vtbl; /*0x4e4192*/
            easeOutTimea = this->member.niNode; /*0x4e4195*/
            v43 = this; /*0x4e4198*/
            LOBYTE(v13) = sub_625850((int)easeOutTimea); /*0x4e41a2*/
            ((void (__thiscall *)(TESObjectREFR *, int))vtbl[1].super.Unk_33)(this, v13); /*0x4e41ac*/
          }
          LOBYTE(v46) = 0; /*0x4e41b2*/
          BSStringT_Clear((unsigned int *)&Src); /*0x4e41b7*/
          baseForm = v40; /*0x4e41bc*/
        }
        ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v6, dword_A7D0EC); /*0x4e41c7*/
        if ( ExtraData && ((int)ExtraData[1].__vftable & 0x10) != 0 ) /*0x4e41d8*/
        {
          if ( (this->member.super.flags & 0x80) != 0 ) /*0x4e41e4*/
            sub_4DE1C0((int)baseForm, v6); /*0x4e41f0*/
          else
            sub_4E26F0((int)baseForm, v6); /*0x4e41e6*/
        }
        else if ( sub_4D6700(this) ) /*0x4e41fc*/
        {
          v41 = (double)(Game_RandomLargeInteger(0) % 0x3E8) / fCostant_100; /*0x4e4221*/
          v3 = v41; /*0x4e4225*/
          sub_4DE3C0((NiNode *)v6, v41); /*0x4e422d*/
        }
        if ( baseForm->member.type == kFormType_Weapon ) /*0x4e4239*/
          NiNode_RemoveScbChildAlongFadeNodeChain((NiNode *)v6);// Standalone reference 3D generation strips Scb only when the base form type is WEAP (0x21). An AMMO-backed projectile proxy does not enter this WEAP-only branch. /*0x4e423c*/
        *(float *)(v6 + 0x54) = this->member.pos[0]; /*0x4e4247*/
        *(float *)(v6 + 0x58) = this->member.pos[1]; /*0x4e424d*/
        *(float *)(v6 + 0x5C) = this->member.pos[2]; /*0x4e4257*/
        qmemcpy((void *)(v6 + 0x30), sub_4D7AF0((float *)this, (NiMatrix33 *)v45.rot.data[1]), 0x24u); /*0x4e426c*/
        if ( sub_4D6F20(this) ) /*0x4e4270*/
        {
          sub_88CEB0((NiObjectNET *)v6, 0, 1, 1); /*0x4e4280*/
          NiAVObject_UpdateNiAVObject((NiAVObject *)v6, 0.0, 0); /*0x4e4292*/
          v3 = 0.0; /*0x4e4297*/
          NiAVObject_UpdateNiAVObject((NiAVObject *)v6, 0.0, 0); /*0x4e42a1*/
          sub_88CEB0((NiObjectNET *)v6, 1u, 1, 1); /*0x4e42ad*/
          sub_4121A0(this->member.pos, &Src.x, (float *)(v6 + 0x20)); /*0x4e42c3*/
          sub_4121D0(this->member.pos, &Src.x); /*0x4e42cf*/
          *(float *)(v6 + 0x54) = this->member.pos[0]; /*0x4e42d6*/
          *(float *)(v6 + 0x58) = this->member.pos[1]; /*0x4e42dc*/
          *(float *)(v6 + 0x5C) = this->member.pos[2]; /*0x4e42e2*/
        }
        sub_897A20(v6, 1); /*0x4e42e8*/
        v15 = (NiObject *)NiObjectNET_GetExtraData((NiObjectNET *)v6, off_A3CEB0); /*0x4e42f7*/
        v16 = NiRTTI_Cast((BSStringT *)&stru_B35ACC, v15); /*0x4e4302*/
        if ( v16 ) /*0x4e430c*/
        {
          v16[1].members.m_uiRefCount = (UInt32)this; /*0x4e430e*/
        }
        else
        {
          v17 = (NiObject *)FormHeapAlloc(0x10u); /*0x4e4315*/
          LODWORD(Src.x) = v17; /*0x4e431d*/
          LOBYTE(v46) = 2; /*0x4e4323*/
          if ( v17 ) /*0x4e4328*/
            v18 = (unsigned int *)sub_4D67C0(v17, (unsigned int)this); /*0x4e432d*/
          else
            v18 = 0; /*0x4e4334*/
          LOBYTE(v46) = 0; /*0x4e4339*/
          NiObjectNET_AddExtraData((const void **)v6, v6, v18); /*0x4e433e*/
        }
        sub_7B8910((NiNode *)v6); /*0x4e4344*/
        v19 = this->member.baseForm; /*0x4e4349*/
        if ( v19 == (TESForm *)MEMORY[0xB35EA4] || v19 == (TESForm *)MEMORY[0xB35EB4] ) /*0x4e435d*/
          *(_WORD *)(v6 + 0x18) |= 1u; /*0x4e435f*/
        if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_NPC ) /*0x4e4375*/
          this->vtbl->GetBaseForm(this); /*0x4e4382*/
        p_baseExtraList = &this->member.baseExtraList; /*0x4e4384*/
        if ( ExtraDataList_GetTeleport(&this->member.baseExtraList) ) /*0x4e438d*/
        {
          Teleport = ExtraDataList_GetTeleport(&this->member.baseExtraList); /*0x4e4398*/
          if ( sub_42B460(&Teleport->linkedDoor) ) /*0x4e439f*/
          {
            v22 = ExtraDataList_GetTeleport(&this->member.baseExtraList); /*0x4e43aa*/
            v23 = sub_42B460(&v22->linkedDoor); /*0x4e43b3*/
            sub_4CCA60(v23, 1); /*0x4e43ba*/
          }
        }
        Actor_SetupAnimationData(this, v1, v2, v3); /*0x4e43c1*/
        Src.x = TESObjectREFR_GetScale(this); /*0x4e43cd*/
        v24 = *(void (__thiscall **)(UInt32))(*(_DWORD *)v6 + 0x50); /*0x4e43d7*/
        Src.x = fabs(Src.x); /*0x4e43dc*/
        x = Src.x; /*0x4e43e2*/
        *(float *)(v6 + 0x60) = Src.x; /*0x4e43e6*/
        v24(v6); /*0x4e43e9*/
        if ( this->vtbl->IsActor(this) && this->member.baseForm->member.type == kFormType_NPC ) /*0x4e4403*/
        {
          v27 = (int *)((int (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Unk_4F)(this, 0); /*0x4e4414*/
          if ( v27 ) /*0x4e4418*/
          {
            v28 = *v27; /*0x4e4423*/
            v29 = ((int (__thiscall *)(TESObjectREFR *, _DWORD, int))this->vtbl->IsDead)(this, 0, 1); /*0x4e442b*/
            (*(void (__thiscall **)(int *, int))(v28 + 0x9C))(v27, v29); /*0x4e4436*/
          }
          TESNPC_RefreshFaceGenForActor3D((unsigned int)this->member.baseForm, v26, (int)this); /*0x4e443c*/
          p_baseExtraList = &this->member.baseExtraList; /*0x4e4441*/
        }
        NiAVObject_InitializePropertyState((NiAVObject *)v6); /*0x4e4447*/
        if ( this->vtbl->IsActor(this) ) /*0x4e4457*/
        {
          sub_5EA1A0((int)this, (int)this, (_DWORD *)this->member.niNode); /*0x4e4467*/
          v30 = *((_DWORD *)this + 0x16); /*0x4e446c*/
          if ( v30 ) /*0x4e4471*/
          {
            if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 8))(v30) ) /*0x4e4478*/
            {
              v31 = *((_DWORD **)this + 0x16); /*0x4e447e*/
              if ( v31 ) /*0x4e4483*/
              {
                sub_634CB0(v31, this); /*0x4e4488*/
                (*(void (__thiscall **)(_DWORD *))(*v31 + 0x5C))(v31); /*0x4e4494*/
              }
            }
          }
          if ( v43 ) /*0x4e449c*/
            sub_6258D0((Actor *)v43); /*0x4e449e*/
          if ( this->vtbl->IsDead(this, 0) ) /*0x4e44b0*/
          {
            if ( this->vtbl->GetAnimData(this) ) /*0x4e44c5*/
            {
              v32 = this->vtbl->GetAnimData(this); /*0x4e44dc*/
              if ( ActorAnimData_HasAnimKey(v32, 0x20u) ) /*0x4e44e0*/
              {
                v33 = this->vtbl->GetAnimData(this); /*0x4e4500*/
                ActorAnimData_ClearSlot(v33, 5, 0.0); /*0x4e4506*/
                x = 0.0; /*0x4e450b*/
                ActorAnimData_RestorePlaySavedSlot((int)v33, 0, 0x20u, 0xFFFFFFFF, 0.0, 0xFFFFFFFF); /*0x4e451b*/
                NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v33, 0); /*0x4e4529*/
                if ( NormalizedSequenceSlot ) /*0x4e452d*/
                {
                  if ( this->vtbl[1].super.GetName(this) ) /*0x4e453e*/
                  {
                    easeOutTimeb = TESAnimGroup_GetRequiredNoteTime( /*0x4e458d*/
                                     *((CAS_TESAnimGroup_Decoded **)NormalizedSequenceSlot + 0x1A),
                                     1);
                    ActorAnimData_Update(v33, (Actor *)this, 0.0, easeOutTimeb); /*0x4e4599*/
                    ActorAnimData_ApplyToActor(v33, this); /*0x4e45a1*/
                    NiMatrix33_InitRotationZ((NiMatrix33 *)v45.rot.data[1], this->member.rot.z); /*0x4e45b1*/
                    Src.x = 0.0; /*0x4e45b8*/
                    v2 = 1.0; /*0x4e45c0*/
                    Src.y = 1.0; /*0x4e45c7*/
                    Src.z = 0.0; /*0x4e45d0*/
                    v35 = sub_7101F0((NiTransform *)v45.rot.data[1], &v45, &Src); /*0x4e45d4*/
                    x = 0.0; /*0x4e45db*/
                    Src.x = v35->rot.data[0][0]; /*0x4e45dd*/
                    Src.y = v35->rot.data[0][1]; /*0x4e45ea*/
                    Src.z = v35->rot.data[0][2]; /*0x4e45f9*/
                    sub_8AB440((_DWORD *)v6, &Src.x, 1, 0.0, 0); /*0x4e45fd*/
                  }
                  else
                  {
                    Src.x = *((float *)NormalizedSequenceSlot + 0xC); /*0x4e454a*/
                    *((float *)NormalizedSequenceSlot + 0x12) = Src.x; /*0x4e4554*/
                    Src.x = *((float *)NormalizedSequenceSlot + 0xC); /*0x4e455a*/
                    x = 0.0; /*0x4e4566*/
                    ActorAnimData_Update(v33, (Actor *)this, 0.0, Src.x); /*0x4e456c*/
                    ActorAnimData_ApplyToActor(v33, this); /*0x4e4574*/
                  }
                }
              }
            }
          }
          if ( this->vtbl->IsDead(this, 0) || this->vtbl->GetKnockedState(this) ) /*0x4e4623*/
            sub_4DE100(this, 0); /*0x4e462d*/
          p_baseExtraList = &this->member.baseExtraList; /*0x4e4632*/
        }
        ExtraDataList_RestoreSavedAnimationData(p_baseExtraList, v1, v2, x, (int)this); /*0x4e4639*/
      }
    }
  }
  v46 = 0xFFFFFFFF; /*0x4e4642*/
  if ( v6 ) /*0x4e464a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x4e4650*/
      (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1); /*0x4e4662*/
  }
  return (NiNode *)v6; /*0x4e4666*/
}
