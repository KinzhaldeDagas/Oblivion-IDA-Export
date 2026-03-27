bool __cdecl sub_5038A0(
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
  bool v10; // zf
  int v11; // [esp+0h] [ebp-Ch] BYREF
  UInt16 v12[2]; // [esp+4h] [ebp-8h] BYREF
  int v13; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0;
  v11 = 0;
  v13 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12, &v11, &v13);
  if ( result )
  {
    v9 = v11;
    v10 = v11 == 0;
    *a7 = 0.0;
    if ( !v10 )
    {
      if ( *(_DWORD *)v12 )
        sub_51F0F0(*(char **)v12, v9, v13);
    }
    return 1;
  }
  return result;
}
