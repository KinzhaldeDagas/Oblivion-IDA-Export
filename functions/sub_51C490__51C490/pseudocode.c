// Restores exactly 0x34 bytes into TESClass+0x38, followed by class name and icon strings. There is no native serialized minor-skill collection.
void __thiscall TESClass_LoadGame(TESClass *this)
{
  size_t v2; // [esp-4h] [ebp-118h]
  size_t v3; // [esp-4h] [ebp-118h]
  size_t v4; // [esp-4h] [ebp-118h]
  size_t v5; // [esp-4h] [ebp-118h]
  unsigned __int8 Dst; // [esp+Bh] [ebp-109h] BYREF
  char a2[260]; // [esp+Ch] [ebp-108h] BYREF

  LODWORD(v2) = 0x34; /*0x51c4ae*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, this->members.attributes, v2); /*0x51c4b4*/
  LODWORD(v3) = 1; /*0x51c4b9*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v3); /*0x51c4c6*/
  if ( Dst ) /*0x51c4d1*/
  {
    _memset((int)a2, 0, sizeof(a2)); /*0x51c4df*/
    LODWORD(v4) = Dst; /*0x51c4ea*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, a2, v4); /*0x51c4f6*/
    BSStringT_Set(&this->members.fullName.name, a2, 0); /*0x51c505*/
  }
  LODWORD(v4) = 1; /*0x51c510*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v4); /*0x51c517*/
  if ( Dst ) /*0x51c522*/
  {
    _memset((int)a2, 0, sizeof(a2)); /*0x51c530*/
    LODWORD(v5) = Dst; /*0x51c541*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, a2, v5); /*0x51c547*/
    BSStringT_Set(&this->members.texture.path, a2, 0); /*0x51c556*/
  }
}
