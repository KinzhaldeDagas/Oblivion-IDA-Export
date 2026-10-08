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

  *(_DWORD *)v10 = 0; /*0x5032f8*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10); /*0x503300*/
  if ( result ) /*0x50330a*/
  {
    v9 = reference; /*0x503312*/
    if ( *(_DWORD *)v10 ) /*0x503318*/
      sub_65D620(v9, 1); /*0x50331c*/
    else
      sub_65D620(v9, 0); /*0x503327*/
    return 1; /*0x503321*/
  }
  return result; /*0x50330d*/
}
