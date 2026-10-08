void __usercall sub_664E60(PlayerCharacter *a1@<ecx>, int a2@<ebp>, double a3@<st1>)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v6; // edi
  NiNode *v7; // eax
  int AnimGroupFromField8Value; // ebx
  int SlotActionState; // ebp
  double v10; // st5
  ActorAnimData *AnimDataByPerspective; // eax
  NiAVObject *ChildAtIndex; // eax
  float v14; // [esp+18h] [ebp-4h]

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x664e69*/
  v6 = Singleton; /*0x664e78*/
  if ( a1->inventoryPC ) /*0x664e71*/
  {
    if ( a1->super.super.super.process ) /*0x664e80*/
    {
      if ( Singleton ) /*0x664e8c*/
      {
        v7 = Singleton->unk054[3]; /*0x664e92*/
        if ( v7 ) /*0x664e97*/
        {
          if ( (v7->members.super.m_flags & 1) == 0 ) /*0x664ea1*/
          {
            AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(a1->defaultAnimData, 0); /*0x664ebe*/
            SlotActionState = ActorAnimData_GetSlotActionState(a1->defaultAnimData, 0); /*0x664ece*/
            v10 = a1->defaultAnimData->unk94 /*0x664ee3*/
                + *((float *)ActorAnimData_GetNormalizedSequenceSlot(a1->defaultAnimData, 0) + 0x12);
            sub_57ECB0(v6, v10, a3); /*0x664eea*/
            sub_57D5B0((int)v6, SlotActionState, v10, a3); /*0x664ef1*/
            if ( (_WORD)AnimGroupFromField8Value == ActorAnimData_GetAnimGroupFromField8Value(a1->defaultAnimData, 0) ) /*0x664f06*/
            {
              v14 = v10; /*0x664ee6*/
              ActorAnimData_RestorePlaySavedSlot( /*0x664f1c*/
                (int)a1->defaultAnimData,
                v10,
                a3,
                v14,
                0,
                AnimGroupFromField8Value,
                SlotActionState,
                v14,
                0xFFFFFFFF);
            }
            AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(a1, a1->isThirdPerson == 0); /*0x664f2e*/
            ActorAnimData_ApplyToActor(AnimDataByPerspective, (TESObjectREFR *)a1); /*0x664f36*/
            ChildAtIndex = (NiAVObject *)a1->vtbl->super.super.super.GetNiNode((TESObjectREFR *)a1); /*0x664f45*/
            if ( !a1->isThirdPerson ) /*0x664f47*/
              ChildAtIndex = NiNode_GetChildAtIndex((NiNode *)ChildAtIndex, 0); /*0x664f56*/
            sub_5EA1A0((int)a1, a2, ChildAtIndex); /*0x664f5e*/
          }
        }
      }
    }
  }
}
