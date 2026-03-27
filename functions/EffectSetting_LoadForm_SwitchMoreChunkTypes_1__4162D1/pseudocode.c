int __userpurge EffectSetting_LoadForm_::SwitchMoreChunkTypes_1@<eax>(
        int a1@<eax>,
        int ebx0@<ebx>,
        _DWORD *a3@<edi>,
        int a4)
{
  if ( a1 > 0x4E4F4349 )
    return EffectSetting_LoadForm_::SwitchMoreChunkTypes_3(a1, ebx0, a3);
  switch ( a1 )
  {
    case 0x4E4F4349:
      return EffectSetting_LoadForm_::LoadIcon(ebx0, a3);
    case 0x4C444F4D:
      return EffectSetting_LoadForm_::LoadModel(ebx0, a3);
    case 0x4C4C5546:
      return EffectSetting_LoadForm_::LoadFullName(ebx0, (int)a3);
  }
  return EffectSetting_LoadForm_::ChunkLoopContinue(a3, a4);
}
