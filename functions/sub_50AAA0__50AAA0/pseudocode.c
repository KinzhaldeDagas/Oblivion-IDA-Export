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
  TESForm *v10; // esi
  void *v11; // eax
  char *v12; // eax
  __int16 Level; // ax
  UInt16 v14[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v14 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v14);
  if ( result )
  {
    if ( a4 )
    {
      if ( a4->vtbl->IsActor(a4) )
      {
        if ( *(_DWORD *)v14 )
        {
          v9 = a4->vtbl->GetBaseForm(a4);
          v10 = (TESForm *)OblivionDynamicCast(
                             v9,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESNPC `RTTI Type Descriptor',
                             0);
          v11 = (void *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)v14 + 0x170))(*(_DWORD *)v14);
          v12 = (char *)OblivionDynamicCast(
                          v11,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
          if ( v10 )
          {
            if ( v12 )
            {
              v10[0xA].member.modlist.next = *((TESForm::ModReferenceList **)v12 + 0x41);
              Level = TESActorBaseData_GetLevel((TESActorBaseData *)(v12 + 0x24));
              TESActorBaseData_SetLevel(&v10[1].member.refID, Level);
              sub_5222D0(v10, 0);
            }
          }
        }
      }
    }
    return 1;
  }
  return result;
}
