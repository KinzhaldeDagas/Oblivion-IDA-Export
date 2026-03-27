bool __cdecl sub_503E90(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  bool result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9);
  if ( result )
  {
    *a7 = 0.0;
    if ( a4 )
    {
      if ( l )
      {
        if ( sub_4FB5F0(l, *(int *)v9, 8) )
          *a7 = 1.0;
      }
    }
    return 1;
  }
  return result;
}
