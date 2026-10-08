int __thiscall TESLevCreature_LoadForm(TESForm *this, Data *a2)
{
  int v4; // [esp+0h] [ebp-24h]
  int v5; // [esp+4h] [ebp-20h]

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x25 ) /*0x4af751*/
    JUMPOUT(0x4AF8A0); /*0x4af8a0*/
  TESFile_InitializeFormFromRecord(a2, this, v4, v5); /*0x4af75d*/
  return TESLevCreature_LoadForm_::SwitchChunkType(a2, (int)a2);
}
