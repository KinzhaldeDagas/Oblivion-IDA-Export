bool __cdecl sub_505250(
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
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0; /*0x50527a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10); /*0x505282*/
  if ( result ) /*0x50528c*/
  {
    if ( a4 ) /*0x505293*/
    {
      v9 = OblivionDynamicCast( /*0x5052a4*/
             a4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0);
      if ( v9 ) /*0x5052ae*/
        sub_5E0FB0(v9, *(int **)v10); /*0x5052b7*/
    }
    return 1; /*0x5052bc*/
  }
  return result; /*0x505290*/
}
