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
  NiNode *NodeByPerspective; // eax
  NiAVObject *v15; // eax
  NiNode *v16; // eax
  void (__thiscall *v17)(NiRefObject *, bool); // edi
  NiNode *v18; // eax
  NiAVObject *v19; // eax
  NiNode *v20; // eax

  if ( a2 && a2->member.niNode ) /*0x4ceae0*/
  {
    if ( !a2->vtbl->IsActor(a2) ) /*0x4ceafa*/
    {
      baseForm = a2->member.baseForm; /*0x4ceb82*/
      if ( baseForm && ((unsigned __int8 (__thiscall *)(TESForm *))baseForm->vtbl[1].Unk_06)(baseForm) ) /*0x4ceb91*/
      {
        v9 = sub_4417D0(this, 1u); /*0x4ceb9b*/
      }
      else
      {
        v10 = 0; /*0x4ceba2*/
        if ( (this->members.flags0 & 1) == 0 ) /*0x4ceba8*/
          v10 = sub_4C9BE0(a2); /*0x4cebb3*/
        v11 = (NiObjectNET *)a2->vtbl->GetNiNode(a2); /*0x4cebc4*/
        ExtraData = NiObjectNET_GetExtraData(v11, dword_A7D0EC); /*0x4cebc8*/
        if ( ExtraData && ((int)ExtraData[1].__vftable & 1) != 0 /*0x4cebf7*/
          || a2->vtbl->GetBaseForm(a2) && a2->vtbl->GetBaseForm(a2)->member.type == kFormType_Tree )
        {
          v9 = sub_441800(this, v10, 3u); /*0x4cebfb*/
        }
        else
        {
          v9 = sub_441800(this, v10, 2u); /*0x4cec02*/
        }
      }
      vtbl = (NiAVObjectVtbl *)v9; /*0x4cec07*/
      goto LABEL_25; /*0x4cec07*/
    }
    niNode = this->members.niNode; /*0x4ceb00*/
    if ( niNode && niNode->members.children.end ) /*0x4ceb07*/
      vtbl = niNode->members.children.data->vtbl; /*0x4ceb17*/
    else
      vtbl = 0; /*0x4ceb1b*/
    if ( !((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.Unk_0C)(a2) /*0x4ceb37*/
      || a2->vtbl->GetSleepState(a2) == kSitSleep_None )
    {
      v5 = a2->member.niNode; /*0x4ceb41*/
      if ( v5 ) /*0x4ceb46*/
      {
        if ( sub_8AA350((float *)v5 + 0x15, &g_zeroNiPoint3.x) ) /*0x4ceb56*/
        {
          v6 = *((_DWORD *)v5 + 0x23); /*0x4ceb69*/
          v7 = *((_DWORD *)v5 + 0x24); /*0x4ceb6f*/
          *((_DWORD *)v5 + 0x15) = *((_DWORD *)v5 + 0x22); /*0x4ceb75*/
          *((_DWORD *)v5 + 0x16) = v6; /*0x4ceb77*/
          *((_DWORD *)v5 + 0x17) = v7; /*0x4ceb7a*/
        }
      }
LABEL_25:
      if ( vtbl ) /*0x4cec0b*/
      {
        if ( a2 == (TESObjectREFR *)reference ) /*0x4cec1b*/
        {
          Destructor = vtbl->super.super.Destructor; /*0x4cec21*/
          NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x4cec25*/
          (*((void (__thiscall **)(NiAVObjectVtbl *, NiNode *, int))Destructor + 0x21))(vtbl, NodeByPerspective, 1); /*0x4cec33*/
          v15 = (NiAVObject *)PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x4cec3d*/
          NiAVObject_InitializePropertyState(v15); /*0x4cec44*/
          v16 = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x4cec51*/
          NiNode_UpdateDynamicEffectState(v16); /*0x4cec58*/
          v17 = vtbl->super.super.Destructor; /*0x4cec63*/
          v18 = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x4cec69*/
          (*((void (__thiscall **)(NiAVObjectVtbl *, NiNode *, int))v17 + 0x21))(vtbl, v18, 1); /*0x4cec77*/
          v19 = (NiAVObject *)PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x4cec81*/
          NiAVObject_InitializePropertyState(v19); /*0x4cec88*/
          v20 = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x4cec95*/
          NiNode_UpdateDynamicEffectState(v20); /*0x4cec9c*/
        }
        else
        {
          (*((void (__thiscall **)(NiAVObjectVtbl *, void *, int))vtbl->super.super.Destructor + 0x21))( /*0x4cecb6*/
            vtbl,
            a2->member.niNode,
            1);
          NiAVObject_InitializePropertyState((NiAVObject *)a2->member.niNode); /*0x4cecbb*/
          NiNode_UpdateDynamicEffectState((NiNode *)a2->member.niNode); /*0x4cecc3*/
        }
      }
    }
  }
}
