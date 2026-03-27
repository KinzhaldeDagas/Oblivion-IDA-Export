int __usercall EffectSetting_LoadForm_::LoadModel@<eax>(int a1@<ebx>, int *a2@<edi>)
{
  float *v2; // eax

  if ( a1 )
    v2 = (float *)(a1 + 0x18);
  else
    v2 = 0;
  TESModel_Load(v2, a2);
  return EffectSetting_LoadForm_::ChunkLoopContinue_();
}
