int __userpurge EffectSetting_LoadForm_::ChunkLoopBody@<eax>(
        int a1@<eax>,
        Data *edi0@<edi>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5)
{
  if ( a1 > 0x45435345 ) /*0x416147*/
    return EffectSetting_LoadForm_::SwitchMoreChunkTypes_1(a1, a3, edi0, a5); /*0x416147*/
  if ( a1 == 0x45435345 ) /*0x41614d*/
    return EffectSetting_LoadForm_::LoadCounterEffects(a3, edi0, a5); /*0x41614d*/
  if ( a1 > 0x43534544 ) /*0x416158*/
    return EffectSetting_LoadForm_::SwitchMoreChunkTypes_2(a1, (int *)edi0, a5); /*0x416158*/
  switch ( a1 ) /*0x41615e*/
  {
    case 0x43534544: /*0x41615e*/
      return EffectSetting_LoadForm_::LoadDescription(a3, (int)edi0); /*0x41615e*/
    case 0x41544144: /*0x41615e*/
      return EffectSetting_LoadForm_::LoadEffectSetting(a3, a4, a5); /*0x416169*/
    case 0x42444F4D: /*0x41615e*/
      return EffectSetting_LoadForm_::LoadModel(a3, (int *)edi0); /*0x416170*/
  }
  return EffectSetting_LoadForm_::ChunkLoopContinue(edi0, a3, a4, a5);
}
