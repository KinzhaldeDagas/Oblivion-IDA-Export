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
  BSExtraData *v10; // eax

  v8 = a7;
  *a7 = 0.0;
  a7 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7);
  if ( result )
  {
    if ( a4 )
    {
      if ( a7 )
      {
        v10 = sub_4D8360((TESChildCELL *)a4);
        if ( a7 == (double *)v10 )
          *v8 = 1.0;
      }
    }
    if ( IsConsoleMode )
      Interface_ConsolePrint("IsActionRef >> %0.2f", *v8);
    return 1;
  }
  return result;
}
