int __usercall EffectSetting_LoadForm_::LoadModel@<eax>(int a1@<ebx>, Data *a2@<edi>, int a3)
{
  float *v3; // eax

  if ( a1 ) /*0x416327*/
    v3 = (float *)(a1 + 0x18); /*0x416329*/
  else
    v3 = 0; /*0x41632e*/
  TESModel_Load(v3, a2); /*0x416332*/
  return EffectSetting_LoadForm_::ChunkLoopContinue_((int *)a2, a3);
}
