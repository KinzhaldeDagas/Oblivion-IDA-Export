// Serializes exactly 0x34 bytes beginning at TESClass+0x38, then the class name and icon strings. Only seven major skills are persisted inside this fixed payload.
void __thiscall TESClass_SaveGame(TESClass *this)
{
  char *m_data; // eax
  char v3; // dl
  unsigned int v4; // eax
  TESSaveLoad *v5; // ecx
  char *v6; // eax
  char *v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  TESSaveLoad *v10; // ecx
  char *v11; // eax
  size_t v12; // [esp-4h] [ebp-10h]
  size_t v13; // [esp-4h] [ebp-10h]
  size_t v14; // [esp-4h] [ebp-10h]
  size_t v15; // [esp-4h] [ebp-10h]
  _BYTE Src[5]; // [esp+7h] [ebp-5h] BYREF

  LODWORD(v12) = 0x34; /*0x51c3bc*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, this->members.attributes, v12); /*0x51c3c2*/
  m_data = this->members.fullName.name.m_data; /*0x51c3ca*/
  Src[0] = 0; /*0x51c3ce*/
  if ( !m_data ) /*0x51c3d3*/
    m_data = EmptyString; /*0x51c3d5*/
  v3 = (_BYTE)m_data + 1; /*0x51c3da*/
  v4 = (unsigned int)&m_data[strlen(m_data) + 1]; /*0x51c3e7*/
  v5 = g_TESSaveLoadGame; /*0x51c3e9*/
  LODWORD(v13) = 1; /*0x51c3f1*/
  Src[0] = v4 - v3; /*0x51c3f8*/
  SaveLoad_SaveData((int)v5, Src, v13); /*0x51c3fc*/
  if ( Src[0] ) /*0x51c407*/
  {
    v6 = this->members.fullName.name.m_data; /*0x51c409*/
    if ( !v6 ) /*0x51c40e*/
      v6 = EmptyString; /*0x51c410*/
    LODWORD(v14) = Src[0]; /*0x51c418*/
    SaveLoad_SaveData((int)g_TESSaveLoadGame, v6, v14); /*0x51c420*/
  }
  v7 = this->members.texture.path.m_data; /*0x51c428*/
  Src[0] = 0; /*0x51c42c*/
  if ( !v7 ) /*0x51c431*/
    v7 = EmptyString; /*0x51c433*/
  v8 = (_BYTE)v7 + 1; /*0x51c438*/
  v9 = (unsigned int)&v7[strlen(v7) + 1]; /*0x51c447*/
  v10 = g_TESSaveLoadGame; /*0x51c449*/
  Src[0] = v9 - v8; /*0x51c451*/
  LODWORD(v14) = 1; /*0x51c455*/
  SaveLoad_SaveData((int)v10, Src, v14); /*0x51c45c*/
  if ( Src[0] ) /*0x51c467*/
  {
    v11 = this->members.texture.path.m_data; /*0x51c469*/
    if ( !v11 ) /*0x51c46e*/
      v11 = EmptyString; /*0x51c470*/
    LODWORD(v15) = Src[0]; /*0x51c478*/
    SaveLoad_SaveData((int)g_TESSaveLoadGame, v11, v15); /*0x51c480*/
  }
}
