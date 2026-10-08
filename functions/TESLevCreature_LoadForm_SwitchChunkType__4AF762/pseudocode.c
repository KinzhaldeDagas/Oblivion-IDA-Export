char __userpurge TESLevCreature_LoadForm_::SwitchChunkType@<al>(
        Data *a1@<edi>,
        TESForm *a2@<esi>,
        int a3@<ebp>,
        int a4)
{
  signed int ChunkType; // eax

  ChunkType = TESFile_GetChunkType(a1); /*0x4af764*/
  if ( ChunkType > 0x49524353 ) /*0x4af76e*/
    return TESLevCreature_LoadForm_::SwitchChunkType_2(ChunkType, a4); /*0x4af76e*/
  switch ( ChunkType ) /*0x4af774*/
  {
    case 0x49524353: /*0x4af774*/
      return TESLevCreature_LoadForm_::LoadScript(a3, a1, (int)a2, a4); /*0x4af774*/
    case 0x44494445: /*0x4af774*/
      return TESLevCreature_LoadForm_::LoadEditorID(a1, (int)a2, a4); /*0x4af77f*/
    case 0x444C564C: /*0x4af774*/
      return TESLevCreature_LoadForm_::LoadLevListData(a3, a1, (int)a2, a4); /*0x4af786*/
    case 0x464C564C: /*0x4af774*/
      return TESLevCreature_LoadForm_::LoadLevListFlags(a1, (int)a2, a4); /*0x4af78e*/
  }
  return TESLevCreature_LoadForm_::NextChunk(a1, a2, a4);
}
