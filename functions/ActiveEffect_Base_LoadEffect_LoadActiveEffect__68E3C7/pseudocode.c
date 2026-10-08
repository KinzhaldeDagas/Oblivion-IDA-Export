// Verified ActiveEffect load restores common fields and FormIDs, then for currentVersion >=0x2A reads the hit-effect count and dispatches each saved type. Codes 5 and 6 allocate MagicModelHitEffect (0x38 bytes) and MagicShaderHitEffect (0x4C bytes), respectively.
int __cdecl ActiveEffect_Base_LoadEffect_::LoadActiveEffect(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int destination,
        unsigned int a6,
        unsigned int Dst,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  _DWORD *v15; // ecx
  _DWORD *v16; // ebp

  v16 = v15; /*0x68e3c7*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v15 + 1, 4u); /*0x68e3d5*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v16 + 4, 1u); /*0x68e3e6*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)v16 + 0x11, 1u); /*0x68e3f7*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)v16 + 0x13, 1u); /*0x68e408*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v16 + 6, 4u); /*0x68e419*/
  SaveLoad_LoadData(g_TESSaveLoadGame, v16 + 7, 4u); /*0x68e42a*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &Dst, 4u); /*0x68e43c*/
  v16[9] = destination; /*0x68e44b*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &a6, 4u); /*0x68e455*/
  v16[8] = a4; /*0x68e464*/
  SaveLoad_LoadFormID(g_TESSaveLoadGame, &destination, 4u); /*0x68e46e*/
  v16[0xC] = a3; /*0x68e47c*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)v16 + 0x12, 1u); /*0x68e486*/
  if ( g_TESSaveLoadGame->currentVersion < 0x2Au ) /*0x68e498*/
    return ActiveEffect_Base_LoadEffect_::LoadUnk14((int)g_TESSaveLoadGame, (int)v16, a1); /*0x68e498*/
  else
    return ActiveEffect_Base_LoadEffect_::LoadHitEffectList( /*0x68e499*/
             a1,
             a2,
             a3,
             a4,
             destination,
             a6,
             Dst,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
}
