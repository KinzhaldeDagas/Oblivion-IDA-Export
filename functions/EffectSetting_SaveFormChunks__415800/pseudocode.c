int __thiscall EffectSetting_SaveFormChunks(
        TESForm *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  TESForm_InitializeFormRecord(this);
  return EffectSetting_SaveFormChunks_::SaveBases((int)this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
