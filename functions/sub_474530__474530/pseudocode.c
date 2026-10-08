// Plays a selected BSAnimGroupSequence. Resolves default slot from fixed group metadata, maps physical slot 5->0 and 6->3 while retaining the requested alias for clear semantics, handles menu/full reset conditions, records active key +0x3C and sequence +0xA0, chooses morph only for matching nonzero morph keys and equal controller counts, otherwise cross-fades or blends from a temporary pose, applies the maximum old/new Blend byte as transition time, and initializes slot action state.
BSAnimGroupSequence *__thiscall ActorAnimData_PlaySequence(
        ActorAnimData *this,
        BSAnimGroupSequence *sequence,
        unsigned int encodedKey,
        int slotSelector)
{
  int GroupID; // ecx
  BSAnimGroupSequence *v6; // edi
  int v7; // ebx
  BSAnimGroupSequence *v8; // ebp
  BSAnimGroupSequence *v10; // eax
  BSAnimGroupSequence *v11; // eax
  int v12; // ebx
  _BYTE *v13; // ebx
  char MorphKey; // bl
  int v15; // ebx
  unsigned __int8 v16; // al
  int v17; // edx
  NiNode *RootNode; // edi
  float weight; // [esp+8h] [ebp-38h]
  int v20; // [esp+28h] [ebp-18h]
  int slot; // [esp+2Ch] [ebp-14h]
  int v22; // [esp+30h] [ebp-10h]

  GroupID = AnimKey_GetGroupID(encodedKey); /*0x474563*/
  v22 = GroupID; /*0x47456f*/
  v20 = slotSelector; /*0x474573*/
  if ( slotSelector == 0xFFFFFFFF ) /*0x474577*/
    v20 = *(_DWORD *)(0x24 * GroupID + 0xB102E8); /*0x474583*/
  slot = v20; /*0x47458b*/
  if ( v20 == 5 ) /*0x474592*/
  {
    v20 = 0; /*0x4745a3*/
  }
  else if ( v20 == 6 ) /*0x474597*/
  {
    v20 = 3; /*0x474599*/
  }
  v6 = this->animSequences[v20]; /*0x4745af*/
  v7 = 0; /*0x4745b6*/
  LOBYTE(slotSelector) = 0; /*0x4745ba*/
  if ( v6 ) /*0x4745bf*/
    v7 = *((_DWORD *)v6 + 0x11); /*0x4745c1*/
  v8 = sequence; /*0x4745c4*/
  if ( !sequence || (_WORD)encodedKey == 0xFF ) /*0x4745d7*/
    return 0; /*0x474a86*/
  if ( *((_DWORD *)sequence + 0x11) == 3 ) /*0x4745e1*/
    NiControllerSequence_Deactivate(sequence, 0.0, 0); /*0x4745ed*/
  if ( !*((_DWORD *)v8 + 0x11)
    || *((_DWORD *)v8 + 9)
    || InterfaceManager_IsMenuMode() && this->RootNode == PlayerCharacter_GetNodeByPerspective(reference, 0) )
  {
    if ( InterfaceManager_IsMenuMode() /*0x474655*/
      && this->RootNode == PlayerCharacter_GetNodeByPerspective(reference, 0)
      && !sub_45A500(g_TESSaveLoadGame) )
    {
      ActorAnimData_ClearSlot(this, 4, 0.0); /*0x47466c*/
      ActorAnimData_ClearSlot(this, 0, 0.0); /*0x47467b*/
      ActorAnimData_ClearSlot(this, 1, 0.0); /*0x47468a*/
      ActorAnimData_ClearSlot(this, 2, 0.0); /*0x474699*/
      if ( this->manager ) /*0x47469e*/
      {
        v10 = this->animSequences[3]; /*0x4746a8*/
        if ( v10 ) /*0x4746b0*/
        {
          if ( *((_DWORD *)v10 + 0x11) ) /*0x4746b2*/
          {
            v11 = *((BSAnimGroupSequence **)v10 + 0x16); /*0x4746b8*/
            if ( v11 ) /*0x4746bd*/
              BSAnimGroupSequence_Deactivate(v11, 0.0); /*0x4746c6*/
            if ( *((_DWORD *)this->animSequences[3] + 0x11) == 5 ) /*0x4746d5*/
              NiControllerManager_DeactivateTransitionSources((_DWORD *)this->manager, 0.0); /*0x4746e3*/
            NiControllerSequence_Deactivate(this->animSequences[3], 0.0, 0); /*0x4746f6*/
          }
        }
      }
      this->animSequences[3] = 0; /*0x4746fb*/
      this->animsMapKey[3] = 0xFF; /*0x47470a*/
      HIWORD(this->unk74) = 0xFF; /*0x47470e*/
      this->unk48State[3] = 0xFFFFFFFF; /*0x474714*/
      Actor_SetCurrentActionWithBowVisualCleanup((Actor *)reference, kActorCurrentAction_None, 0); /*0x474723*/
      ActorAnimData_ResetRootMotion((int)this); /*0x47472a*/
      v12 = v20; /*0x47472f*/
    }
    else if ( v7 == 1 ) /*0x47473c*/
    {
      v12 = v20; /*0x474754*/
      if ( slot != v20 || this->unkC4 || *((_DWORD *)v8 + 0x11) ) /*0x474765*/
        ActorAnimData_ClearSlot(this, slot, 0.0); /*0x474774*/
    }
    else
    {
      ActorAnimData_ClearSlot(this, slot, 0.0); /*0x474747*/
      v12 = v20; /*0x47474c*/
      v6 = 0; /*0x474750*/
    }
    this->animsMapKey[v12] = encodedKey; /*0x47477e*/
    this->animSequences[v12] = v8; /*0x474783*/
    if ( !InterfaceManager_IsMenuMode() || this->RootNode != PlayerCharacter_GetNodeByPerspective(reference, 0) )
    {
      if ( v6 )
      {
        sub_405070(&sequence, *((_DWORD *)v8 + 0x1A)); /*0x4747b9*/
        sub_405070(&encodedKey, *((_DWORD *)v6 + 0x1A)); /*0x4747ce*/
        v13 = (_BYTE *)encodedKey; /*0x4747d3*/
        if ( TESAnimGroup_GetMorphKey((_BYTE *)encodedKey) )
        {
          MorphKey = TESAnimGroup_GetMorphKey(v13); /*0x4747f2*/
          if ( MorphKey == TESAnimGroup_GetMorphKey(sequence) )
          {
            v15 = *((_DWORD *)v6 + 3); /*0x4747fd*/
            if ( v15 == *((_DWORD *)v8 + 3) )
            {
              LOBYTE(slotSelector) = 1; /*0x47480b*/
              if ( v8 == v6 )
              {
                PrintError(
                  "Morph Error: Trying to morph from sequence to itself.\r\n'%s' on '%s'.",
                  *((const char **)v6 + 2),
                  this->RootNode->members.super.super.m_pcName);
                LOBYTE(slotSelector) = 0; /*0x47482a*/
              }
            }
            else
            {
              PrintError(
                "Morph Error: Controller count not the same.\r\n'%s' has %d controllers and\r\n'%s' has %d on '%s'.",
                *((const char **)v6 + 2),
                v15,
                *((const char **)v8 + 2),
                *((_DWORD *)v8 + 3),
                this->RootNode->members.super.super.m_pcName);
            }
          }
        }
        NiPointerSlot_Release((void **)&encodedKey); /*0x474838*/
        NiPointerSlot_Release((void **)&sequence); /*0x474849*/
        v12 = v20; /*0x47484e*/
      }
    }
    v16 = 0; /*0x474858*/
    *(float *)&encodedKey = flt_B06538; /*0x47485c*/
    if ( v6 ) /*0x474860*/
      v16 = *(_BYTE *)(*((_DWORD *)v6 + 0x1A) + 0x21); /*0x474865*/
    v17 = *((_DWORD *)v8 + 0x1A); /*0x474868*/
    if ( *(_BYTE *)(v17 + 0x21) > v16 ) /*0x474870*/
      v16 = *(_BYTE *)(v17 + 0x21); /*0x474872*/
    if ( v16 ) /*0x474876*/
    {
      encodedKey = v16; /*0x47487b*/
      *(float *)&encodedKey = (double)v16 / dbl_A3AA50; /*0x474889*/
    }
    if ( InterfaceManager_IsMenuMode() && this->RootNode == reference->inventoryPC /*0x4748ae*/
      || InterfaceManager_IsMenuVisibleByID(0x40C, 0) )
    {
      *(float *)&encodedKey = flt_B06540; /*0x4748c0*/
    }
    if ( this->unkC4 ) /*0x4748c4*/
      *(float *)&encodedKey = 0.0; /*0x4748cf*/
    *(float *)&encodedKey = *(float *)&encodedKey / flt_B06530; /*0x4748dd*/
    *((float *)v8 + 0x12) = *((float *)v8 + 0xB) + dbl_A2FC68; /*0x4748ea*/
    if ( *(float *)&encodedKey >= (double)flt_A34BA0 ) /*0x474900*/
    {
      if ( (_BYTE)slotSelector ) /*0x474951*/
      {
        NiControllerSequence_Morph(v6, (NiD3DPass *)v8, *(float *)&encodedKey, 0, 1.0, 1.0); /*0x47496d*/
      }
      else if ( !v6 /*0x474999*/
             || !*((_DWORD *)v6 + 0x11)
             || !NiControllerSequence_CrossFade(v6, v8, *(float *)&encodedKey, 0, 1, 1.0, 0) )
      {
        if ( this->RootNode == PlayerCharacter_GetNodeByPerspective(reference, 1) /*0x4749e9*/
          || (RootNode = this->RootNode, RootNode == PlayerCharacter_GetNodeByPerspective(reference, 0))
          || sub_47F7B0((float *)RootNode, *((_DWORD *)g_WorldSceneReceiverRoot + 0x37)) && !unk_B333B8 )
        {
          NiControllerManager_BlendFromPose((int **)this->manager, v8, 0.0, *(float *)&encodedKey, 0, 0); /*0x474a2f*/
        }
        else
        {
          BSAnimGroupSequence_Activate(v8, 0, 1, 1.0, 0.0, 0); /*0x474a0d*/
        }
      }
    }
    else
    {
      NiControllerSequence_Activate(v8, 0, 1, 1.0, 0.0, 0, 0); /*0x47491c*/
    }
    if ( *(_DWORD *)(0x24 * v22 + 0xB102EC) <= 7u ) /*0x474a45*/
      this->unk48State[v12] = 0; /*0x474a55*/
    if ( this->unkC4 ) /*0x474a5d*/
    {
      weight = this->unk94; /*0x474a73*/
      this->unkC4 = 0; /*0x474a76*/
      ActorAnimData_SampleAndExtractRootMotion((int)this, weight, 0, 1); /*0x474a7d*/
    }
    return v8; /*0x474a82*/
  }
  else
  {
    this->unk48State[v20] = 0; /*0x47461d*/
    return v8; /*0x474625*/
  }
}
