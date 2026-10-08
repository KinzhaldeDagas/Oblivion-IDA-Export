int __userpurge EffectSetting_LoadForm_::SwitchMoreChunkTypes_2@<eax>(
        int a1@<eax>,
        Data *a2@<edi>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5)
{
  if ( a1 == 0x44494445 ) /*0x416254*/
    JUMPOUT(0x41625A); /*0x41625a*/
  return EffectSetting_LoadForm_::ChunkLoopContinue(a2, a3, a4, a5);
}
