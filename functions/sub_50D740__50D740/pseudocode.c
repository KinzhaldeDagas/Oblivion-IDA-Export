bool __cdecl sub_50D740(
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
  UInt16 v9[2]; // [esp+0h] [ebp-8h] BYREF
  int v10; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x50d749*/
  v10 = 0; /*0x50d74c*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9, &v10); /*0x50d779*/
  if ( result ) /*0x50d783*/
  {
    reference->miscStats[*(_DWORD *)v9] += v10; /*0x50d795*/
    return 1; /*0x50d79c*/
  }
  return result; /*0x50d785*/
}
