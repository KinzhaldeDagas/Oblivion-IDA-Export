int __userpurge EffectSetting_LoadForm_::SwitchMoreChunkTypes_1@<eax>(
        int a1@<eax>,
        int ebx0@<ebx>,
        Data *a3@<edi>,
        int a4@<ebp>,
        int a5)
{
  if ( a1 > 0x4E4F4349 ) /*0x4162d6*/
    return EffectSetting_LoadForm_::SwitchMoreChunkTypes_3(a1, ebx0, (int *)a3, a5); /*0x4162d6*/
  switch ( a1 ) /*0x4162d8*/
  {
    case 0x4E4F4349: /*0x4162d8*/
      return EffectSetting_LoadForm_::LoadIcon(ebx0, a3); /*0x4162d8*/
    case 0x4C444F4D: /*0x4162d8*/
      return EffectSetting_LoadForm_::LoadModel(ebx0, (int *)a3); /*0x4162df*/
    case 0x4C4C5546: /*0x4162d8*/
      return EffectSetting_LoadForm_::LoadFullName(ebx0, a3); /*0x4162e7*/
  }
  return EffectSetting_LoadForm_::ChunkLoopContinue(a3, ebx0, a4, a5);
}
