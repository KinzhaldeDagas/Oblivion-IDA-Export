void __usercall PoisonConfirmCallback(int a1@<edi>, double a2@<st2>, double a3@<st1>)
{
  const char *value; // esi
  void *v4; // eax
  const char *v5; // eax
  EntryData *v6; // eax
  ExtraDataList ***v7; // esi
  char v8[260]; // [esp+10h] [ebp-108h] BYREF

  if ( reference->alchemyItem ) /*0x6668a9*/
  {
    if ( InterfaceManager_ConsumeMessageButton() == 2 ) /*0x6668bd*/
    {
      memset(v8, 0, sizeof(v8)); /*0x6668d0*/
      value = stru_B38BA8.value; /*0x6668e6*/
      v4 = OblivionDynamicCast( /*0x6668fb*/
             reference->alchemyItem,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESFullName `RTTI Type Descriptor',
             0);
      if ( !v4 || (v5 = *((const char **)v4 + 1)) == 0 ) /*0x66690c*/
        v5 = EmptyString; /*0x66690e*/
      _sprintf(a1, (int)value, v8, "%s %s", v5, value); /*0x66691f*/
      QueueUIMessage(fConstant_2, a3, v8, fConstant_2, 0, 0); /*0x66693a*/
      v6 = reference->super.super.super.process->GetEquippedWeaponData(reference->super.super.super.process, 1); /*0x666955*/
      v7 = (ExtraDataList ***)v6; /*0x666957*/
      if ( v6 ) /*0x66695b*/
      {
        if ( OblivionDynamicCast( /*0x66696f*/
               v6->type,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESObjectWEAP `RTTI Type Descriptor',
               0) )
        {
          sub_484E20(v7, (BSExtraDataVtbl *)reference->alchemyItem); /*0x666989*/
          reference->vtbl->super.super.super.RemoveItem( /*0x6669b5*/
            (TESObjectREFR *)reference,
            (TESForm *)reference->alchemyItem,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            1,
            0);
          InventoryMenu_InitializeOrUpdate(a2, a3); /*0x6669b7*/
        }
      }
    }
    reference->alchemyItem = 0; /*0x6669c2*/
  }
}
