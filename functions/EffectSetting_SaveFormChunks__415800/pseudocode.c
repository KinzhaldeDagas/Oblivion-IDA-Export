int __usercall EffectSetting_SaveFormChunks@<eax>(
        TESForm *this@<ecx>,
        char a2@<bpl>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  TESForm_InitializeFormRecord(this, a2); /*0x415806*/
  return EffectSetting_SaveFormChunks_::SaveBases(
           (TESForm::ModReferenceList *)this,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
