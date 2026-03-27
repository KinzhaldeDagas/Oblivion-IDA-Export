bool __cdecl sub_50E9D0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  int v8; // ecx
  bool result; // al
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = v8;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10);
  if ( result )
  {
    result = 1;
    if ( *(_DWORD *)v10 )
    {
      byte_B333B8 = 1;
      byte_BA7A04 = 1;
    }
    else
    {
      byte_B333B8 = 0;
      byte_BA7A04 = 0;
    }
  }
  return result;
}
