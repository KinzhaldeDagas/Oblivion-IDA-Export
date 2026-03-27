int __usercall EffectSetting_LoadForm_::LoadIcon@<eax>(int a1@<ebx>, _DWORD *a2@<edi>)
{
  if ( a1 )
    TESTexture_Load(a1 + 0x44, a2);
  else
    TESTexture_Load(0, a2);
  return EffectSetting_LoadForm_::ChunkLoopContinue_();
}
