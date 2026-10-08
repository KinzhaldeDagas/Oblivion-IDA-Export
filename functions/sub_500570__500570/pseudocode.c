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
  double *v8; // esi
  bool result; // al
  double *v10; // eax

  v8 = a7; /*0x50057b*/
  *a7 = 0.0; /*0x500580*/
  a7 = 0; /*0x5005a2*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7); /*0x5005aa*/
  if ( result ) /*0x5005b4*/
  {
    v10 = a7; /*0x5005b9*/
    if ( !a7 ) /*0x5005bf*/
    {
      v10 = (double *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5005cf*/
      a7 = v10; /*0x5005d1*/
    }
    sub_4F8AD0((int)a4, (TESForm *)v10, 0, v8); /*0x5005da*/
    return 1; /*0x5005e3*/
  }
  return result; /*0x5005b6*/
}
