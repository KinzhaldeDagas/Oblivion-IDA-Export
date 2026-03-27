PlayerCharacter *__usercall PoisonConfirmCallback@<eax>(char a1@<bpl>, double a2@<st2>, double a3@<st1>)
{
  PlayerCharacter *result; // eax
  const char *v5; // esi
  void *v6; // eax
  const char *v7; // eax
  double v8; // st7
  EntryData *v9; // eax
  ExtraDataList ***v10; // esi
  char v11[260]; // [esp+10h] [ebp-108h] BYREF

  result = TESDataHandler_g_PlayerRef;
  if ( TESDataHandler_g_PlayerRef->alchemyItem )
  {
    if ( sub_578D70() == 2 )
    {
      memset(v11, 0, sizeof(v11));
      v5 = (const char *)dword_B38BA8;
      v6 = OblivionDynamicCast(
             TESDataHandler_g_PlayerRef->alchemyItem,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESFullName `RTTI Type Descriptor',
             0);
      if ( !v6 || (v7 = *((const char **)v6 + 1)) == 0 )
        v7 = EmptyString;
      _sprintf(v11, "%s %s", v7, v5);
      v8 = fConstant_2;
      QueueUIMessage(a1, v8, a3, v11, fConstant_2, 0, 0);
      v9 = TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedWeaponData(
             TESDataHandler_g_PlayerRef->super.super.super.process,
             1);
      v10 = (ExtraDataList ***)v9;
      if ( v9 )
      {
        if ( OblivionDynamicCast(
               v9->type,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESObjectWEAP `RTTI Type Descriptor',
               0) )
        {
          sub_484E20(v10, a1, a2, a3, v8, (BSExtraDataVtbl *)TESDataHandler_g_PlayerRef->alchemyItem);
          TESDataHandler_g_PlayerRef->vtbl->super.super.super.RemoveItem(
            (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            (TESForm *)TESDataHandler_g_PlayerRef->alchemyItem,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            1,
            0);
          InventoryMenu_InitializeOrUpdate(a2, a3);
        }
      }
    }
    result = TESDataHandler_g_PlayerRef;
    TESDataHandler_g_PlayerRef->alchemyItem = 0;
  }
  return result;
}
