bool __cdecl sub_5012F0(
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
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x501318*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x501320*/
  if ( result ) /*0x50132a*/
  {
    unk_B3C089 = *(_DWORD *)v9 != 0; /*0x501337*/
    return 1; /*0x501332*/
  }
  return result; /*0x50132d*/
}
