char __cdecl sub_5026F0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  char result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x50271a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x502722*/
  if ( result ) /*0x50272c*/
    return sub_4F62A0((int)a4, *(int *)v9, 0, a7); /*0x50273e*/
  return result; /*0x502730*/
}
