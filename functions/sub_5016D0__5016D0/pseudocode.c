bool __cdecl sub_5016D0(
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
  int v10; // [esp+4h] [ebp-8h] BYREF
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0;
  v10 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &v10);
  if ( result )
  {
    v9 = OblivionDynamicCast(
           a4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( v9 )
      (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)v9 + 0x290))(v9, *(_DWORD *)v11, v10);
    return 1;
  }
  return result;
}
