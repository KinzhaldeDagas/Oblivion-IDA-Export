bool __cdecl sub_50B3E0(
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
  int v9; // eax
  UInt16 v10[2]; // [esp+18h] [ebp-10h] BYREF
  int v11; // [esp+1Ch] [ebp-Ch] BYREF
  __int64 v12; // [esp+20h] [ebp-8h]

  *(_DWORD *)v10 = 0;
  v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11);
  if ( result )
  {
    v12 = (__int64)sub_507010(flt_A4CAE0, *(_DWORD *)v10 + 1);
    v9 = v12;
    *a7 = 0.0;
    if ( a4 )
    {
      if ( l )
      {
        if ( sub_4FB5F0(l, v11, v9) )
          *a7 = 1.0;
      }
    }
    return 1;
  }
  return result;
}
