int __userpurge EffectSetting_LoadForm_::SwitchMoreChunkTypes_3@<eax>(
        int a1@<eax>,
        int ebx0@<ebx>,
        int *a3@<edi>,
        int a4)
{
  if ( a1 == 0x54444F4D )
    return EffectSetting_LoadForm_::LoadModel(ebx0, a3);
  else
    return EffectSetting_LoadForm_::ChunkLoopContinue(a3, a4);
}
