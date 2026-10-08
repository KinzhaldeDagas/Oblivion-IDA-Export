bool __cdecl sub_5006E0(
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
  double *v10; // eax

  v8 = a7; /*0x5006f0*/
  *a7 = 0.0; /*0x5006f8*/
  a7 = 0; /*0x500712*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7); /*0x50071a*/
  if ( result ) /*0x500724*/
  {
    if ( a4 ) /*0x50072b*/
    {
      if ( a7 ) /*0x500732*/
      {
        v10 = (double *)sub_4D8360((TESChildCELL *)a4); /*0x500736*/
        if ( a7 == v10 ) /*0x50073f*/
          *v8 = 1.0; /*0x500743*/
      }
    }
    if ( MEMORY[0xB361AC] ) /*0x500745*/
      Interface_ConsolePrint("IsActionRef >> %0.2f", *v8); /*0x50075b*/
    return 1; /*0x500764*/
  }
  return result; /*0x500726*/
}
