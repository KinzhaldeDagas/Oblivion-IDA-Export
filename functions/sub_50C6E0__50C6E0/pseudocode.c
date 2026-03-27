bool __cdecl sub_50C6E0(
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
  void *v9; // eax
  void *v10; // eax
  TESForm *v11; // eax
  UInt16 v12[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12);
  if ( result )
  {
    if ( a4 )
    {
      v9 = OblivionDynamicCast(
             a4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0);
      if ( v9 )
      {
        if ( *(_DWORD *)v12 )
        {
          v10 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)v9 + 0x170))(v9);
          v11 = (TESForm *)OblivionDynamicCast(
                             v10,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESNPC `RTTI Type Descriptor',
                             0);
          if ( v11 )
          {
            v11[0xA].member.modlist.next = *(TESForm::ModReferenceList **)v12;
            sub_5222D0(v11, 0);
          }
        }
      }
    }
    return 1;
  }
  return result;
}
