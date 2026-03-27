char __thiscall TESLevCreature_LoadForm(TESForm *this, Data *a2)
{
  int v4; // [esp+0h] [ebp-24h]
  int v5; // [esp+4h] [ebp-20h]

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x25 )
    JUMPOUT(0x4AF8A0);
  TESFile_InitializeFormFromRecord(a2, this, v4, v5);
  return TESLevCreature_LoadForm_::SwitchChunkType(a2);
}
