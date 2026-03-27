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

  *(_DWORD *)v12 = 0;
  v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12, &v11);
  if ( result )
  {
    CastingType = TESEnchantableForm_GetCastingType(&TES->sky->atmosphere->__vftbl);
    if ( CastingType )
    {
      v10 = !*(_DWORD *)v12 && !v11;
      TES->sky->atmosphere->unk18 = v10;
      v13 = (float)v11;
      *(float *)(CastingType + 0x2C) = (float)*(int *)v12;
      *(float *)(CastingType + 0x30) = v13;
    }
    return 1;
  }
  return result;
}
