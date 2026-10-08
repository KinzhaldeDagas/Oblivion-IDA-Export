// Commits the Hair > Length slider: reads Tile user0 (0xFAE), stores it as TESNPC::hairLength (+0x1CC), then refreshes live hair geometry.
char __thiscall RaceSexMenu_CommitHairLengthSlider(void *this)
{
  const char *v2; // eax
  const char *v3; // eax
  Tile *lengthSlider; // eax
  TESForm *v5; // eax
  BSStringT v7; // [esp-14h] [ebp-34h] BYREF
  BSStringT v8; // [esp-Ch] [ebp-2Ch] BYREF
  int v9; // [esp-4h] [ebp-24h]
  float hairLength; // [esp+Ch] [ebp-14h]
  BSStringT *v11; // [esp+10h] [ebp-10h]
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v2 = (const char *)g_gameSetting_sLength; /*0x5c62f7*/
  v9 = 0xFAE; /*0x5c62fc*/
  hairLength = COERCE_FLOAT(&v8); /*0x5c6308*/
  v8.m_data = 0; /*0x5c630e*/
  v8.m_dataLen = 0; /*0x5c6310*/
  v8.m_bufLen = 0; /*0x5c6314*/
  BSStringT_Set(&v8, v2, 0); /*0x5c6318*/
  v3 = (const char *)g_gameSetting_sHair; /*0x5c631d*/
  v11 = &v7; /*0x5c6327*/
  v12 = 0; /*0x5c632d*/
  v7.m_data = 0; /*0x5c6331*/
  v7.m_dataLen = 0; /*0x5c6333*/
  v7.m_bufLen = 0; /*0x5c6337*/
  BSStringT_Set(&v7, v3, 0); /*0x5c633b*/
  v12 = 0xFFFFFFFF; /*0x5c6342*/
  lengthSlider = RaceSexMenu_FindControlTile(this, v7, v8);// Resolve the localized Hair > Length control Tile. /*0x5c634a*/
  hairLength = Tile_GetFloat(lengthSlider, v9); // Hair > Length commit reads Tile user0 (0xFAE), not TESNPC+0x1CC, and immediately writes that value back to NPC+0x1CC at 0x5C636F. If Randomize Face left the Tile stale, a subsequent commit can overwrite the generated hair length. Native source path verified, runtime UI event ordering pending. /*0x5c6356*/
  v5 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c6368*/
  LOBYTE(v9) = 0; /*0x5c636e*/
  *(float *)&v5[0x13].member.type = hairLength; // Commit the slider value to TESNPC::hairLength (+0x1CC). /*0x5c636f*/
  return sub_5C50A0(this, v9); /*0x5c637c*/
}
