bool __cdecl sub_5055A0(
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
  UInt16 v9[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x5055ca*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9); /*0x5055d2*/
  if ( result ) /*0x5055dc*/
  {
    sub_4F8200((int)a4, *(int *)v9, 0, a7); /*0x5055ee*/
    return 1; /*0x5055f6*/
  }
  return result; /*0x5055e0*/
}
