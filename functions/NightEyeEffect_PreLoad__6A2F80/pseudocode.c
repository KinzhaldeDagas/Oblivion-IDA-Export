void __stdcall NightEyeEffect_PreLoad(PlayerCharacter *a1)
{
  unsigned int resetSelector; // eax

  nullsub_returnvVoid_1arg((int)a1); /*0x6a2f86*/
  resetSelector = g_TESSaveLoadGame->resetSelector; /*0x6a2f90*/
  if ( (resetSelector == 0x1FFFF000 || resetSelector == 0x7FFFF000) && a1 == reference ) /*0x6a2fa7*/
    NightEyeEffect_SetPlayerShader_(); /*0x6a2fa9*/
}
