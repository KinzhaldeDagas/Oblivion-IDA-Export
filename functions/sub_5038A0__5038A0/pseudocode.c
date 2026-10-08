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

  *(_DWORD *)v12 = 0; /*0x5038d5*/
  v11 = 0; /*0x5038dd*/
  v13 = 0; /*0x5038e5*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12, &v11, &v13); /*0x5038ed*/
  if ( result ) /*0x5038f7*/
  {
    v9 = v11; /*0x5038ff*/
    v10 = v11 == 0; /*0x503902*/
    *a7 = 0.0; /*0x503908*/
    if ( !v10 ) /*0x50390a*/
    {
      if ( *(_DWORD *)v12 ) /*0x503912*/
        sub_51F0F0(*(char **)v12, v9, v13); /*0x50391a*/
    }
    return 1; /*0x50391f*/
  }
  return result; /*0x5038f9*/
}
