int __usercall EffectSetting_SaveFormChunks_::SaveBases@<eax>(
        TESForm::ModReferenceList *a1@<esi>,
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
  TESFullName_Save(a1 + 7); /*0x41580e*/
  TESDescription_Save(&a1[6]); /*0x415816*/
  TESTexture_Save((int)&a1[8].next, 0x4E4F4349); /*0x415823*/
  TESModel_Save(&a1[3], 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x41583a*/
  return EffectSetting_SaveFormChunks_::ConvertToRefIDs(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
