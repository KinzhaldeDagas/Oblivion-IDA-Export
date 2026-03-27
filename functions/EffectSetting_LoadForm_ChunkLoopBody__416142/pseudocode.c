int __userpurge EffectSetting_LoadForm_::ChunkLoopBody@<eax>(
        int a1@<eax>,
        int *edi0@<edi>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5)
{
  if ( a1 > 0x45435345 )
    return EffectSetting_LoadForm_::SwitchMoreChunkTypes_1(a1, a3, (int)edi0);
  if ( a1 == 0x45435345 )
    return EffectSetting_LoadForm_::LoadCounterEffects(a3, edi0, a5);
  if ( a1 > 0x43534544 )
    return EffectSetting_LoadForm_::SwitchMoreChunkTypes_2(a1);
  switch ( a1 )
  {
    case 0x43534544:
      return EffectSetting_LoadForm_::LoadDescription(a3, (int)edi0);
    case 0x41544144:
      return EffectSetting_LoadForm_::LoadEffectSetting(a3, a4, a5);
    case 0x42444F4D:
      return EffectSetting_LoadForm_::LoadModel(a3, edi0);
  }
  return EffectSetting_LoadForm_::ChunkLoopContinue(edi0, a5);
}
