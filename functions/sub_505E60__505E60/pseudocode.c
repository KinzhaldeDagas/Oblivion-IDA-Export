bool __cdecl sub_505E60(
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
  TESForm *v10; // [esp+0h] [ebp-8h] BYREF
  UInt16 v11[2]; // [esp+4h] [ebp-4h] BYREF

  v10 = 0;
  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &v10);
  if ( result )
  {
    v9 = v10;
    if ( !v10 )
    {
      v9 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
      v10 = v9;
    }
    if ( *(_DWORD *)v11 )
      sub_4CAA10(*(ExtraDataList **)v11, v9);
    return 1;
  }
  return result;
}
