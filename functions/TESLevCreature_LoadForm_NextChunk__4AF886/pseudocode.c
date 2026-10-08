char __userpurge TESLevCreature_LoadForm_::NextChunk@<al>(Data *a1@<edi>, TESForm *a2@<esi>, int a3@<ebp>, int a4)
{
  if ( TESFile_GetNextChunk(a1) ) /*0x4af888*/
    return TESLevCreature_LoadForm_::SwitchChunkType(a1, a2, a3, a4); /*0x4af88f*/
  TESForm_SetIsLinked(a2, 0); /*0x4af899*/
  return 1; /*0x4af8b3*/
}
