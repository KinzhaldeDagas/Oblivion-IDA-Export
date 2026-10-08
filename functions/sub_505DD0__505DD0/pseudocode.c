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
  double *v10; // eax
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  v8 = a7; /*0x505dd8*/
  *a7 = 0.0; /*0x505ddd*/
  *(_DWORD *)v11 = 0; /*0x505e08*/
  a7 = 0; /*0x505e10*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &a7); /*0x505e18*/
  if ( result ) /*0x505e22*/
  {
    v10 = a7; /*0x505e28*/
    if ( !a7 ) /*0x505e2e*/
    {
      v10 = (double *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x505e3e*/
      a7 = v10; /*0x505e40*/
    }
    sub_4F8B90((int)a4, *(TESObjectCELL **)v11, (TESForm *)v10, v8); /*0x505e4c*/
    return 1; /*0x505e55*/
  }
  return result; /*0x505e24*/
}
