int __usercall EffectItem_BuildDisplayString_::LevelMagnitude@<eax>(
        int a1@<eax>,
        int a2,
        int a3,
        int a4,
        int a5,
        signed int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14)
{
  int *SafeFloatPointer; // eax

  if ( (*(_DWORD *)(a1 + 0x58) & 0x40000000) == 0 )
    return EffectItem_BuildDisplayString_::FeetMagnitude(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fMagicLevelMagnitudeMult);
  Double_To_SInt32((double)a6 * *(float *)SafeFloatPointer);
  return EffectItem_BuildDisplayString_::ConcatMagnitude(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}
