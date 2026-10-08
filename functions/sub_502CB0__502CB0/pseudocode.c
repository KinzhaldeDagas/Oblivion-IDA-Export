bool __cdecl sub_502CB0(
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        TESQuest *a7,
        UInt32 *a3)
{
  double *v10; // edi
  bool result; // al
  UInt8 stage[4]; // [esp+4h] [ebp-4h] BYREF

  v10 = (double *)a7; /*0x502cb8*/
  *(double *)&a7->vtbl = 0.0; /*0x502cc0*/
  a7 = 0; /*0x502ce7*/
  *(_DWORD *)stage = 0; /*0x502cef*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, argC, a5, l, &a7, stage); /*0x502cf7*/
  if ( result ) /*0x502d01*/
  {
    if ( a7 ) /*0x502d0c*/
    {
      if ( TESQuest::SetStage(a7, stage[0]) ) /*0x502d13*/
        *v10 = 1.0; /*0x502d1e*/
    }
    return 1; /*0x502d20*/
  }
  return result; /*0x502d03*/
}
