bool __cdecl sub_50AAA0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  TESForm *v9; // eax
  TESNPC *v10; // esi
  void *v11; // eax
  char *v12; // eax
  __int16 Level; // ax
  UInt16 v14[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v14 = 0; /*0x50aaca*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v14); /*0x50aad2*/
  if ( result ) /*0x50aadc*/
  {
    if ( a4 ) /*0x50aae3*/
    {
      if ( a4->vtbl->IsActor(a4) ) /*0x50aaf3*/
      {
        if ( *(_DWORD *)v14 ) /*0x50aafe*/
        {
          v9 = a4->vtbl->GetBaseForm(a4); /*0x50ab18*/
          v10 = (TESNPC *)OblivionDynamicCast( /*0x50ab35*/
                            v9,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESNPC `RTTI Type Descriptor',
                            0);
          v11 = (void *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)v14 + 0x170))(*(_DWORD *)v14); /*0x50ab3f*/
          v12 = (char *)OblivionDynamicCast( /*0x50ab42*/
                          v11,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
          if ( v10 ) /*0x50ab4c*/
          {
            if ( v12 ) /*0x50ab50*/
            {
              v10->member.npcClass = *((TESClass **)v12 + 0x41); /*0x50ab58*/
              Level = TESActorBaseData_GetLevel((TESActorBaseData *)(v12 + 0x24)); /*0x50ab61*/
              TESActorBaseData_SetLevel(&v10->member.super.actorBaseData, Level); /*0x50ab6a*/
              TESNPC_RecalculateAutoStats(v10, 0); /*0x50ab73*/
            }
          }
        }
      }
    }
    return 1; /*0x50ab78*/
  }
  return result; /*0x50aae0*/
}
