bool __cdecl sub_501390(
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

  *(_DWORD *)v9 = 0; /*0x5013b8*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x5013c0*/
  if ( result ) /*0x5013ca*/
  {
    unk_BA7A04 = *(_DWORD *)v9 != 0; /*0x5013d7*/
    return 1; /*0x5013d2*/
  }
  return result; /*0x5013cd*/
}
