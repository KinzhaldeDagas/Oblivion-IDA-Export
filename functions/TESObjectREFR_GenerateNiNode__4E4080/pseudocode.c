volatile LONG *__usercall TESObjectREFR_GenerateNiNode@<eax>(
        TESObjectREFR *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>)
{
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
  unsigned int *v17; // eax
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
  PowerListEntry *v34; // edi
  int data; // edi
  NiTransform *v36; // eax
  UInt32 v38; // [esp+20h] [ebp-6Ch]
  void *v39; // [esp+20h] [ebp-6Ch]
  float v40; // [esp+20h] [ebp-6Ch]
  TESForm *v41; // [esp+38h] [ebp-54h]
  float v42; // [esp+38h] [ebp-54h]
  UInt32 niNode; // [esp+3Ch] [ebp-50h] BYREF
  TESObjectREFR *v44; // [esp+40h] [ebp-4Ch]
  NiPoint3 Src; // [esp+44h] [ebp-48h] BYREF
  NiTransform v46; // [esp+50h] [ebp-3Ch] BYREF
  unsigned int v47; // [esp+88h] [ebp-4h]

  flags = this->member.super.flags;
  if ( (flags & 0x20) != 0 || (flags & 0x800) != 0 )
    return 0;
  niNode = (UInt32)this->member.niNode;
  v6 = niNode;
  if ( niNode )
    InterlockedIncrement((volatile LONG *)(niNode + 4));
  v47 = 0;
  if ( !niNode )
  {
    baseForm = this->member.baseForm;
    v41 = baseForm;
    if ( baseForm )
    {
      v8 = (Ni2DBuffer *)((int (__usercall *)@<eax>(TESForm *@<ecx>, TESObjectREFR *, double@<st0>, double@<st1>, double@<st2>))baseForm->vtbl[1].Unk_0E)(
                           baseForm,
                           this,
                           a4,
                           a3,
                           a2);
      NiSmartPointer_Set__((Ni2DBuffer **)&niNode, v8);
      v6 = niNode;
      sub_4D7D10((MobileObject *)this, (volatile LONG *)niNode);
      sub_4D9800(v6);
      if ( v6 )
      {
        IsActor = this->vtbl->IsActor;
        v44 = 0;
        if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))IsActor)(
               this,
               a4,
               a3,
               a2) )
        {
          Src.x = 0.0;
          Src.y = 0.0;
          refID = this->member.super.refID;
          v38 = this->member.baseForm->member.refID;
          LOBYTE(v47) = 1;
          Name = TESObjectREFR_GetName(this);
          BSStringT_Static_Format((BSStringT *)&Src, "(%08X) -> %s (%08X)", refID, Name, v38);
          NiObjectNET_SetName((NiObjectNET *)v6, (char *)LODWORD(Src.x));
          if ( this->member.baseForm->member.type == kFormType_Creature )
          {
            vtbl = this->vtbl;
            v39 = this->member.niNode;
            v44 = this;
            LOBYTE(v13) = sub_625850((int)v39);
            ((void (__thiscall *)(TESObjectREFR *, int))vtbl[1].super.Unk_33)(this, v13);
          }
          LOBYTE(v47) = 0;
          BSStringT_Clear((unsigned int *)&Src);
          baseForm = v41;
        }
        ExtraData = NiObjectNET_GetExtraData((NiObjectNET *)v6, dword_A7D0EC);
        if ( ExtraData && ((int)ExtraData[1].__vftable & 0x10) != 0 )
        {
          if ( (this->member.super.flags & 0x80) != 0 )
            sub_4DE1C0((int)baseForm, v6);
          else
            sub_4E26F0((int)baseForm, v6);
        }
        else if ( sub_4D6700(this) )
        {
          v42 = (double)(GetRandomLargeInteger_(0) % 0x3E8) / fCostant_100;
          a4 = v42;
          sub_4DE3C0((NiNode *)v6, v42);
        }
        if ( baseForm->member.type == kFormType_Weapon )
          sub_480770(v6);
        *(float *)(v6 + 0x54) = this->member.pos[0];
        *(float *)(v6 + 0x58) = this->member.pos[1];
        *(float *)(v6 + 0x5C) = this->member.pos[2];
        qmemcpy((void *)(v6 + 0x30), sub_4D7AF0((float *)this, v46.rot.data[1]), 0x24u);
        if ( sub_4D6F20(this) )
        {
          sub_88CEB0((_WORD *)v6, 0, 1, 1);
          NiAVObject_UpdateNiAVObject((NiAVObject *)v6, 0.0, 0);
          a4 = 0.0;
          NiAVObject_UpdateNiAVObject((NiAVObject *)v6, 0.0, 0);
          sub_88CEB0((_WORD *)v6, 1u, 1, 1);
          sub_4121A0(this->member.pos, &Src.x, (float *)(v6 + 0x20));
          sub_4121D0(this->member.pos, &Src.x);
          *(float *)(v6 + 0x54) = this->member.pos[0];
          *(float *)(v6 + 0x58) = this->member.pos[1];
          *(float *)(v6 + 0x5C) = this->member.pos[2];
        }
        sub_897A20(v6, 1);
        v15 = (NiObject *)NiObjectNET_GetExtraData((NiObjectNET *)v6, off_A3CEB0);
        v16 = NiRTTI_Cast((BSStringT *)dword_B35ACC, v15);
        if ( v16 )
        {
          v16[1].members.m_uiRefCount = (UInt32)this;
        }
        else
        {
          v17 = (unsigned int *)FormHeapAlloc(0x10u);
          LODWORD(Src.x) = v17;
          LOBYTE(v47) = 2;
          if ( v17 )
            v18 = sub_4D67C0(v17, (unsigned int)this);
          else
            v18 = 0;
          LOBYTE(v47) = 0;
          NiNode_AddNiExtraData((const void **)v6, v6, v18);
        }
        sub_7B8910(v6);
        v19 = this->member.baseForm;
        if ( v19 == (TESForm *)TESDataHandler_g_DoorMarker || v19 == (TESForm *)TESDataHandler_g_TravelMarker )
          *(_WORD *)(v6 + 0x18) |= 1u;
        if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_NPC )
          this->vtbl->GetBaseForm(this);
        p_baseExtraList = &this->member.baseExtraList;
        if ( ExtraDataList_GetTeleport(&this->member.baseExtraList) )
        {
          Teleport = ExtraDataList_GetTeleport(&this->member.baseExtraList);
          if ( sub_42B460(&Teleport->linkedDoor) )
          {
            v22 = ExtraDataList_GetTeleport(&this->member.baseExtraList);
            v23 = sub_42B460(&v22->linkedDoor);
            sub_4CCA60(v23, 1);
          }
        }
        sub_4E3490(this, a2, a3, a4);
        Src.x = TESObjectREFR_GetScale(this);
        v24 = *(void (__thiscall **)(UInt32))(*(_DWORD *)v6 + 0x50);
        Src.x = fabs(Src.x);
        x = Src.x;
        *(float *)(v6 + 0x60) = Src.x;
        v24(v6);
        if ( this->vtbl->IsActor(this) && this->member.baseForm->member.type == kFormType_NPC )
        {
          v27 = (int *)((int (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->Unk_4F)(this, 0);
          if ( v27 )
          {
            v28 = *v27;
            v29 = ((int (__thiscall *)(TESObjectREFR *, _DWORD, int))this->vtbl->IsDead)(this, 0, 1);
            (*(void (__thiscall **)(int *, int))(v28 + 0x9C))(v27, v29);
          }
          sub_528550((unsigned int)this->member.baseForm, v26, (int)this);
          p_baseExtraList = &this->member.baseExtraList;
        }
        NiAVObject_InitializePropertyState((NiAVObject *)v6);
        if ( this->vtbl->IsActor(this) )
        {
          sub_5EA1A0((int)this, (int)this, (_DWORD *)this->member.niNode);
          v30 = *((_DWORD *)this + 0x16);
          if ( v30 )
          {
            if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 8))(v30) )
            {
              v31 = *((_DWORD **)this + 0x16);
              if ( v31 )
              {
                sub_634CB0(v31, this);
                (*(void (__thiscall **)(_DWORD *))(*v31 + 0x5C))(v31);
              }
            }
          }
          if ( v44 )
            sub_6258D0(v44);
          if ( this->vtbl->IsDead(this, 0) )
          {
            if ( this->vtbl->GetAnimData(this) )
            {
              v32 = this->vtbl->GetAnimData(this);
              if ( sub_470D00(v32, 0x20) )
              {
                v33 = this->vtbl->GetAnimData(this);
                sub_470FC0(v33, 5, 0.0);
                x = 0.0;
                sub_474AB0((int)v33, a2, a3, 0.0, 0, 0x20, 0xFFFFFFFF, 0.0, 0xFFFFFFFF);
                v34 = sub_4706E0(v33, 0);
                if ( v34 )
                {
                  if ( this->vtbl[1].super.GetName(this) )
                  {
                    data = (int)v34[0xD].data;
                    v40 = sub_51AE20(data, 1);
                    sub_476D10((AnimSequenceSingle *)v33, data, a2, a3, 0.0, (int)this, 0.0, v40);
                    sub_474510(v33, this);
                    NiMatrix33_InitRotationTransform(v46.rot.data[1], this->member.rot.z);
                    Src.x = 0.0;
                    a3 = 1.0;
                    Src.y = 1.0;
                    Src.z = 0.0;
                    v36 = sub_7101F0((NiTransform *)v46.rot.data[1], &v46, &Src);
                    x = 0.0;
                    Src.x = v36->rot.data[0][0];
                    Src.y = v36->rot.data[0][1];
                    Src.z = v36->rot.data[0][2];
                    sub_8AB440(v6, (int)&Src, 1, 0.0, 0);
                  }
                  else
                  {
                    Src.x = *(float *)&v34[6].data;
                    *(float *)&v34[9].data = Src.x;
                    Src.x = *(float *)&v34[6].data;
                    x = 0.0;
                    sub_476D10((AnimSequenceSingle *)v33, (int)v34, a2, a3, 0.0, (int)this, 0.0, Src.x);
                    sub_474510(v33, this);
                  }
                }
              }
            }
          }
          if ( this->vtbl->IsDead(this, 0) || this->vtbl->GetKnockedState(this) )
            sub_4DE100(this, 0);
          p_baseExtraList = &this->member.baseExtraList;
        }
        ExtraDataList_RestoreSavedAnimationData(p_baseExtraList, a2, a3, x, (int)this);
      }
    }
  }
  v47 = 0xFFFFFFFF;
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1);
  }
  return (volatile LONG *)v6;
}
