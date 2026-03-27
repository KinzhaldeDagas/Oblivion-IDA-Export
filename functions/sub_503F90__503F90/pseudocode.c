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

  v8 = a7;
  *a7 = 0.0;
  a7 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7);
  if ( result )
  {
    if ( a4 )
    {
      sub_4D8260((int)a4, 2);
      if ( v10 )
        *v8 = 1.0;
      sub_4D82E0(a4, 1);
      sub_4D82E0(a4, 2);
    }
    return 1;
  }
  return result;
}
