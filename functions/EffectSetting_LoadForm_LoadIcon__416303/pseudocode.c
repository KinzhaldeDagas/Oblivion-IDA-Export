int __usercall EffectSetting_LoadForm_::LoadIcon@<eax>(int a1@<ebx>, Data *a2@<edi>, int a3)
{
  if ( a1 ) /*0x416305*/
    TESTexture_Load(a1 + 0x44, a2); /*0x41630c*/
  else
    TESTexture_Load(0, a2); /*0x416317*/
  return EffectSetting_LoadForm_::ChunkLoopContinue_((int *)a2, a3);
}
