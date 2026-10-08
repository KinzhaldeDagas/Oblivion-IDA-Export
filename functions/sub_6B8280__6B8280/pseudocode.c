// Loads the exact saved response display text, voice path, and copied first 8 bytes of TRDT. Resume therefore uses serialized response material rather than recollecting TESTopicInfo responses.
void __thiscall DialogueResponse::LoadGame(DialogueResponse *this)
{
  size_t v2; // [esp-4h] [ebp-118h]
  size_t v3; // [esp-4h] [ebp-118h]
  size_t v4; // [esp-4h] [ebp-118h]
  size_t v5; // [esp-4h] [ebp-118h]
  unsigned __int8 v6; // [esp+Ah] [ebp-10Ah] BYREF
  unsigned __int8 Dst; // [esp+Bh] [ebp-109h] BYREF
  char v8[260]; // [esp+Ch] [ebp-108h] BYREF

  LODWORD(v2) = 1; /*0x6b8296*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v2); /*0x6b82a5*/
  if ( Dst ) /*0x6b82b0*/
  {
    _memset((int)v8, 0, sizeof(v8)); /*0x6b82be*/
    LODWORD(v3) = Dst; /*0x6b82cf*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, v8, v3); /*0x6b82d5*/
    BSStringT_Set(&this->displayText, v8, 0); /*0x6b82e1*/
  }
  else
  {
    BSStringT_Set(&this->displayText, EmptyString, 0); /*0x6b82ec*/
  }
  LODWORD(v3) = 1; /*0x6b82f7*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &v6, v3); /*0x6b82fe*/
  if ( v6 ) /*0x6b8309*/
  {
    _memset((int)v8, 0, sizeof(v8)); /*0x6b8317*/
    LODWORD(v4) = v6; /*0x6b8322*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, v8, v4); /*0x6b832e*/
    BSStringT_Set(&this->voicePath, v8, 0); /*0x6b833a*/
  }
  else
  {
    BSStringT_Set(&this->voicePath, EmptyString, 0); /*0x6b8346*/
  }
  LODWORD(v4) = 4; /*0x6b834b*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &this->trdtPrefix, v4); /*0x6b8357*/
  LODWORD(v5) = 4; /*0x6b8362*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &this->trdtPrefix.m_dataLen, v5); /*0x6b8368*/
}
