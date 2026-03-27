bool __cdecl sub_511800(
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
  double *v10; // ecx
  int v11; // eax
  const char *v12; // eax
  const char *v13; // ecx
  int v14[2]; // [esp+10h] [ebp-8h] BYREF

  v8 = a7;
  *a7 = 0.0;
  a7 = 0;
  v14[0] = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7, v14);
  if ( result )
  {
    v10 = a7;
    if ( a7 )
    {
      if ( v14[0] )
      {
        v11 = sub_51F0B0(a7, v14[0]);
        v10 = a7;
        v14[1] = v11;
        *v8 = (double)v11;
      }
    }
    if ( IsConsoleMode )
    {
      v12 = *(const char **)(v14[0] + 0x1C);
      if ( !v12 )
        v12 = EmptyString;
      v13 = *((const char **)v10 + 7);
      if ( !v13 )
        v13 = EmptyString;
      Interface_ConsolePrint("%.20s reaction to %.20s is %.1f", v13, v12, *v8);
    }
    return 1;
  }
  return result;
}
