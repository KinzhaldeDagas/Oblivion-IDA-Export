int __usercall EffectSetting_LoadForm_::LoadFullName@<eax>(int a1@<ebx>, Data *a2@<edi>, int a3)
{
  if ( a1 ) /*0x4162ea*/
    TESFullname_Load((TESFullName *)(a1 + 0x38), a2); /*0x4162f1*/
  else
    TESFullname_Load(0, a2); /*0x4162fc*/
  return EffectSetting_LoadForm_::ChunkLoopContinue_((int *)a2, a3);
}
