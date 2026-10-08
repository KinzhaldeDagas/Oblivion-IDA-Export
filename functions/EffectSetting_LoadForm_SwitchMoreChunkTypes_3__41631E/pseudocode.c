int __userpurge EffectSetting_LoadForm_::SwitchMoreChunkTypes_3@<eax>(
        int a1@<eax>,
        int ebx0@<ebx>,
        Data *a3@<edi>,
        int a4@<ebp>,
        int a5)
{
  if ( a1 == 0x54444F4D ) /*0x416323*/
    return EffectSetting_LoadForm_::LoadModel(ebx0, (int *)a3); /*0x416324*/
  else
    return EffectSetting_LoadForm_::ChunkLoopContinue(a3, ebx0, a4, a5); /*0x416323*/
}
