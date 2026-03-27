void __thiscall TESObjectCELL::AttachReference3DToQuad(TESObjectCELL *this, TESObjectREFR *a2)
{
  NiNode *niNode; // eax
  NiAVObjectVtbl *vtbl; // esi
  void *v5; // ebp
  int v6; // edx
  int v7; // eax
  TESForm *baseForm; // ecx
  int v9; // eax
  signed int v10; // ebx
  NiObjectNET *v11; // eax
  NiExtraData *ExtraData; // eax
  void (__thiscall *Destructor)(NiRefObject *, bool); // edi
  NiNode *PlayerNode; // eax
  NiAVObject *v15; // eax
  NiNode *v16; // eax
  void (__thiscall *v17)(NiRefObject *, bool); // edi
  NiNode *v18; // eax
  NiAVObject *v19; // eax
  NiNode *v20; // eax

  if ( a2 && a2->member.niNode )
  {
    if ( !a2->vtbl->IsActor(a2) )
    {
      baseForm = a2->member.baseForm;
      if ( baseForm && ((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm) )
      {
        v9 = sub_4417D0(this, 1u);
      }
      else
      {
        v10 = 0;
        if ( (this->members.flags0 & 1) == 0 )
          v10 = sub_4C9BE0(a2);
        v11 = (NiObjectNET *)a2->vtbl->GetNiNode(a2);
        ExtraData = NiObjectNET_GetExtraData(v11, dword_A7D0EC);
        if ( ExtraData && ((int)ExtraData[1].__vftable & 1) != 0
          || a2->vtbl->GetBaseForm(a2) && a2->vtbl->GetBaseForm(a2)->member.type == kFormType_Tree )
        {
          v9 = sub_441800(this, v10, 3u);
        }
        else
        {
          v9 = sub_441800(this, v10, 2u);
        }
      }
      vtbl = (NiAVObjectVtbl *)v9;
      goto LABEL_25;
    }
    niNode = this->members.niNode;
    if ( niNode && niNode->members.children.end )
      vtbl = niNode->members.children.data->vtbl;
    else
      vtbl = 0;
    if ( !((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2)
      || a2->vtbl->GetSleepState(a2) == kSitSleep_None )
    {
      v5 = a2->member.niNode;
      if ( v5 )
      {
        if ( sub_8AA350((float *)v5 + 0x15, &Vector3_InitValue_) )
        {
          v6 = *((_DWORD *)v5 + 0x23);
          v7 = *((_DWORD *)v5 + 0x24);
          *((_DWORD *)v5 + 0x15) = *((_DWORD *)v5 + 0x22);
          *((_DWORD *)v5 + 0x16) = v6;
          *((_DWORD *)v5 + 0x17) = v7;
        }
      }
LABEL_25:
      if ( vtbl )
      {
        if ( a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        {
          Destructor = vtbl->super.super.Destructor;
          PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
          (*((void (__thiscall **)(NiAVObjectVtbl *, NiNode *, int))Destructor + 0x21))(vtbl, PlayerNode, 1);
          v15 = (NiAVObject *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
          NiAVObject_InitializePropertyState(v15);
          v16 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
          NiNode_UpdateDynamicEffectState(v16);
          v17 = vtbl->super.super.Destructor;
          v18 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
          (*((void (__thiscall **)(NiAVObjectVtbl *, NiNode *, int))v17 + 0x21))(vtbl, v18, 1);
          v19 = (NiAVObject *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
          NiAVObject_InitializePropertyState(v19);
          v20 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
          NiNode_UpdateDynamicEffectState(v20);
        }
        else
        {
          (*((void (__thiscall **)(NiAVObjectVtbl *, void *, int))vtbl->super.super.Destructor + 0x21))(
            vtbl,
            a2->member.niNode,
            1);
          NiAVObject_InitializePropertyState((NiAVObject *)a2->member.niNode);
          NiNode_UpdateDynamicEffectState((NiNode *)a2->member.niNode);
        }
      }
    }
  }
}
