int __usercall EffectSetting_LoadForm_::LoadFullName@<eax>(int a1@<ebx>, Data *a2@<edi>)
{
  if ( a1 )
    TESFullname_Load((TESFullName *)(a1 + 0x38), a2);
  else
    TESFullname_Load(0, a2);
  return EffectSetting_LoadForm_::ChunkLoopContinue_();
}
