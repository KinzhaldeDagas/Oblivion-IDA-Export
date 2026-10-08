bool __cdecl sub_5087C0(
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
  int CastingType; // eax
  UInt8 v10; // cl
  int v11; // [esp+0h] [ebp-Ch] BYREF
  UInt16 v12[2]; // [esp+4h] [ebp-8h] BYREF
  float v13; // [esp+8h] [ebp-4h]

  *(_DWORD *)v12 = 0; /*0x5087ef*/
  v11 = 0; /*0x5087f7*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12, &v11); /*0x5087ff*/
  if ( result ) /*0x508809*/
  {
    CastingType = TESEnchantableForm_GetCastingType(&MEMORY[0xB333A0]->sky->atmosphere->__vftbl); /*0x50881a*/
    if ( CastingType ) /*0x508821*/
    {
      v10 = !*(_DWORD *)v12 && !v11; /*0x508834*/
      MEMORY[0xB333A0]->sky->atmosphere->unk18 = v10; /*0x508842*/
      v13 = (float)v11; /*0x508848*/
      *(float *)(CastingType + 0x2C) = (float)*(int *)v12; /*0x508850*/
      *(float *)(CastingType + 0x30) = v13; /*0x508857*/
    }
    return 1; /*0x50885a*/
  }
  return result; /*0x50880b*/
}
