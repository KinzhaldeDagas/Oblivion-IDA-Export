int __userpurge EffectSetting_LoadForm_::SwitchMoreChunkTypes_2@<eax>(int a1@<eax>, int *a2@<edi>, int a3)
{
  if ( a1 == 0x44494445 )
    return EffectSetting_LoadForm_::LoadEditorID(a3);
  else
    return EffectSetting_LoadForm_::ChunkLoopContinue(a2, a3);
}
