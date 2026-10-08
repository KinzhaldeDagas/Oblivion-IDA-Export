bool __cdecl sub_503F90(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  double *v8; // edi
  bool result; // al
  char v10; // al

  v8 = a7; /*0x503fa0*/
  *a7 = 0.0; /*0x503fa8*/
  a7 = 0; /*0x503fc2*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7); /*0x503fca*/
  if ( result ) /*0x503fd4*/
  {
    if ( a4 ) /*0x503fdb*/
    {
      sub_4D8260((int)a4, 2u); /*0x503fe1*/
      if ( v10 ) /*0x503fe8*/
        *v8 = 1.0; /*0x503fec*/
      TESObjectREFR_ClearActionFlagBits(a4, 1u); /*0x503ff2*/
      TESObjectREFR_ClearActionFlagBits(a4, 2u); /*0x503ffb*/
    }
    return 1; /*0x504001*/
  }
  return result; /*0x503fd6*/
}
