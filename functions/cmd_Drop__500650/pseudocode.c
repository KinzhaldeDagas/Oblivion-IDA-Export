bool __cdecl cmd_Drop(
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
  UInt32 v9; // [esp+4h] [ebp-8h] BYREF
  TESForm *v10; // [esp+8h] [ebp-4h] BYREF

  v10 = 0;
  v9 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &v10, &v9);
  if ( result )
  {
    if ( a4 )
      a4->vtbl->RemoveItem(a4, v10, 0, v9, 0, 1, 0, 0, 0, 1, 0);
    return 1;
  }
  return result;
}
