bool __cdecl sub_505DD0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  double *v8; // esi
  bool result; // al
  TESForm *v10; // eax
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  v8 = a7;
  *a7 = 0.0;
  *(_DWORD *)v11 = 0;
  a7 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &a7);
  if ( result )
  {
    v10 = (TESForm *)a7;
    if ( !a7 )
    {
      v10 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
      a7 = (double *)v10;
    }
    sub_4F8B90((int)a4, *(ExtraDataList **)v11, v10, v8);
    return 1;
  }
  return result;
}
