bool __cdecl sub_5032D0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  PlayerCharacter *v9; // ecx
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10);
  if ( result )
  {
    v9 = TESDataHandler_g_PlayerRef;
    if ( *(_DWORD *)v10 )
      sub_65D620(v9, 1);
    else
      sub_65D620(v9, 0);
    return 1;
  }
  return result;
}
