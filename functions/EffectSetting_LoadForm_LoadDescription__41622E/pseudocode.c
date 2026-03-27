int __usercall EffectSetting_LoadForm_::LoadDescription@<eax>(int a1@<ebx>, int a2@<edi>)
{
  if ( a1 )
    TESDescription_Load(a1 + 0x30, a2);
  else
    TESDescription_Load(0, a2);
  return EffectSetting_LoadForm_::ChunkLoopContinue_();
}
