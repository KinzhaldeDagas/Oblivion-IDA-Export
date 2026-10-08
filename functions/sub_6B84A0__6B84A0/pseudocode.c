// Saves response display text and voice path with UInt8 lengths, then the copied 8-byte TRDT prefix as two UInt32 values.
void __thiscall DialogueResponse::SaveGame(DialogueResponse *this)
{
  char *v2; // edx
  char *v3; // eax
  TESSaveLoad *v4; // ecx
  char *m_data; // eax
  char v6; // dl
  unsigned int v7; // eax
  TESSaveLoad *v8; // ecx
  size_t v9; // [esp-4h] [ebp-Ch]
  size_t v10; // [esp-4h] [ebp-Ch]
  size_t v11; // [esp-4h] [ebp-Ch]
  size_t v12; // [esp-4h] [ebp-Ch]
  unsigned __int8 Src; // [esp+6h] [ebp-2h] BYREF
  unsigned __int8 v14; // [esp+7h] [ebp-1h] BYREF

  v2 = this->displayText.m_data + 1; /*0x6b84a6*/
  v3 = &this->displayText.m_data[strlen(this->displayText.m_data) + 1]; /*0x6b84b7*/
  v4 = g_TESSaveLoadGame; /*0x6b84b9*/
  Src = (_BYTE)v3 - (_BYTE)v2; /*0x6b84c1*/
  LODWORD(v9) = 1; /*0x6b84c5*/
  SaveLoad_SaveData((int)v4, &Src, v9); /*0x6b84cc*/
  if ( Src ) /*0x6b84d7*/
  {
    LODWORD(v10) = Src; /*0x6b84de*/
    SaveLoad_SaveData((int)g_TESSaveLoadGame, this->displayText.m_data, v10); /*0x6b84e6*/
  }
  m_data = this->voicePath.m_data; /*0x6b84eb*/
  v6 = (_BYTE)m_data + 1; /*0x6b84ee*/
  v7 = (unsigned int)&m_data[strlen(m_data) + 1]; /*0x6b84f8*/
  v8 = g_TESSaveLoadGame; /*0x6b84fa*/
  v14 = v7 - v6; /*0x6b8502*/
  LODWORD(v10) = 1; /*0x6b8506*/
  SaveLoad_SaveData((int)v8, &v14, v10); /*0x6b850d*/
  if ( v14 ) /*0x6b8518*/
  {
    LODWORD(v11) = v14; /*0x6b8520*/
    SaveLoad_SaveData((int)g_TESSaveLoadGame, this->voicePath.m_data, v11); /*0x6b8528*/
  }
  LODWORD(v11) = 4; /*0x6b8533*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, this->trdtPrefix, v11); /*0x6b8539*/
  LODWORD(v12) = 4; /*0x6b8544*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, &this->trdtPrefix[4], v12); /*0x6b854a*/
}
