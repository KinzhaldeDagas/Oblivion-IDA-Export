int __usercall EffectSetting_LoadForm_::LoadDescription@<eax>(int a1@<ebx>, int *a2@<edi>, int a3)
{
  if ( a1 ) /*0x416230*/
    TESDescription_Load(a1 + 0x30, (int)a2); /*0x416237*/
  else
    TESDescription_Load(0, (int)a2); /*0x416245*/
  return EffectSetting_LoadForm_::ChunkLoopContinue_(a2, a3);
}
