int __userpurge TESLevCreature_LoadForm_::SwitchChunkType@<eax>(Data *a1@<edi>, int a2)
{
  signed int ChunkType; // eax

  ChunkType = TESFile_GetChunkType(a1);
  if ( ChunkType > 0x49524353 )
    return TESLevCreature_LoadForm_::SwitchChunkType_2(ChunkType, a2);
  switch ( ChunkType )
  {
    case 0x49524353:
      return TESLevCreature_LoadForm_::LoadScript(a2);
    case 0x44494445:
      return TESLevCreature_LoadForm_::LoadEditorID(a2);
    case 0x444C564C:
      return TESLevCreature_LoadForm_::LoadLevListData(a2);
    case 0x464C564C:
      return TESLevCreature_LoadForm_::LoadLevListFlags(a2);
  }
  return TESLevCreature_LoadForm_::NextChunk(a2);
}
