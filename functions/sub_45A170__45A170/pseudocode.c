// Verified: reads singleton 0xB33B00, version byte +0x7C, returns true iff 0x1F <= version < 0x5A. Actor-base save/load paths use this for BLOK magic and UInt16 length envelope. Fallout symbol 0x825FE428 and identical predicate corroborate naming; no incoming ECX dependency in Oblivion.
bool __cdecl TESSaveLoadGame_UseSaveGameBlocks()
{
  unsigned __int8 currentVersion; // al

  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x45a175*/
  return currentVersion >= 0x1Fu && currentVersion < 0x5Au; /*0x45a182*/
}
