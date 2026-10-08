char __cdecl sub_5003F0(
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

  *(_DWORD *)v9 = 0; /*0x50041a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x500422*/
  if ( result ) /*0x50042c*/
    return sub_4F43C0(a4, *(TESObjectREFR **)v9, 0, a7); /*0x50043e*/
  return result; /*0x500430*/
}
