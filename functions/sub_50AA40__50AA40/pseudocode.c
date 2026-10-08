bool __cdecl sub_50AA40(
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

  *(_DWORD *)v9 = 0; /*0x50aa68*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x50aa70*/
  if ( result ) /*0x50aa7a*/
  {
    LOBYTE(reference->unk200) = *(_DWORD *)v9 > 0; /*0x50aa8a*/
    return 1; /*0x50aa90*/
  }
  return result; /*0x50aa7d*/
}
