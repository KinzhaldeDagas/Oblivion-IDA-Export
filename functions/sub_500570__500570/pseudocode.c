bool __cdecl sub_500570(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  double *v11; // esi
  bool result; // al
  double *v13; // eax

  v11 = a7;
  *a7 = 0.0;
  a7 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7);
  if ( result )
  {
    v13 = a7;
    if ( !a7 )
    {
      v13 = (double *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
      a7 = v13;
    }
    sub_4F8AD0((int)a4, (BSExtraDataVtbl *)v13, 0, v11);
    return 1;
  }
  return result;
}
