char __userpurge TESLevCreature_LoadForm_::SwitchChunkType_2@<al>(
        int a1@<eax>,
        int a2@<ebp>,
        Data *a3@<edi>,
        TESForm *a4@<esi>,
        int a5)
{
  if ( a1 == 0x4D414E54 ) /*0x4af831*/
    return TESLevCreature_LoadForm_::Load_TNAM(a2, a3, (int)a4, a5); /*0x4af831*/
  if ( a1 == 0x4F4C564C ) /*0x4af838*/
    return TESLevCreature_LoadForm_::LoadLevListItem(a2, a3, (int)a4, a5); /*0x4af839*/
  return TESLevCreature_LoadForm_::NextChunk(a3, a4, a5);
}
