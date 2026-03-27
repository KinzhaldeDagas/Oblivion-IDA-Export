int __userpurge TESLevCreature_LoadForm_::SwitchChunkType_2@<eax>(int a1@<eax>, int a2)
{
  if ( a1 == 0x4D414E54 )
    return TESLevCreature_LoadForm_::Load_TNAM(a2);
  if ( a1 == 0x4F4C564C )
    return TESLevCreature_LoadForm_::LoadLevListItem(a2);
  return TESLevCreature_LoadForm_::NextChunk(a2);
}
