char __userpurge TESLevCreature_LoadForm_::NextChunk@<al>(Data *a1@<edi>, TESForm *a2@<esi>, int a3)
{
  if ( TESFile_GetNextChunk(a1) )
    return TESLevCreature_LoadForm_::SwitchChunkType(a1, a3);
  TESForm_SetIsLinked(a2, 0);
  return 1;
}
