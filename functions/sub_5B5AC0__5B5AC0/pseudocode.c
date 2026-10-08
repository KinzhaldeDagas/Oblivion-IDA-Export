void sub_5B5AC0()
{
  void *v0; // edx
  int v1; // ecx
  const char *v2; // eax
  const char *v3; // edx
  unsigned int v4; // eax
  char *v5; // edi
  char *v7; // edi
  const char *v8; // esi
  char v9; // cl
  OSGlobals *v10; // eax
  unsigned int v11; // ecx
  int v12; // edi
  char *sound; // esi
  char v14; // [esp-1h] [ebp-109h] BYREF
  _DWORD v15[65]; // [esp+0h] [ebp-108h] BYREF

  v0 = off_A6CB60; /*0x5b5ad9*/
  v1 = dword_A6CB5C; /*0x5b5adf*/
  v15[0] = dword_A6CB58; /*0x5b5ae5*/
  v2 = off_B14374[0]; /*0x5b5ae8*/
  v15[2] = v0; /*0x5b5aed*/
  v15[1] = v1; /*0x5b5af1*/
  v3 = v2; /*0x5b5af5*/
  v4 = strlen(v2) + 1; /*0x5b5b06*/
  v5 = &v14; /*0x5b5b08*/
  while ( *++v5 ) /*0x5b5b18*/
    ; /*0x5b5b10*/
  qmemcpy(v5, v3, 4 * (v4 >> 2)); /*0x5b5b21*/
  v8 = &v3[4 * (v4 >> 2)]; /*0x5b5b21*/
  v7 = &v5[4 * (v4 >> 2)]; /*0x5b5b21*/
  v9 = v4; /*0x5b5b23*/
  v10 = MEMORY[0xB33398]; /*0x5b5b25*/
  v11 = v9 & 3; /*0x5b5b2a*/
  qmemcpy(v7, v8, v11); /*0x5b5b2d*/
  v12 = (int)&v7[v11]; /*0x5b5b2d*/
  MEMORY[0xB3C0EC] = 1; /*0x5b5b2f*/
  sound = (char *)v10->sound; /*0x5b5b36*/
  if ( sound ) /*0x5b5b3b*/
  {
    if ( SoundManager_OpenMusicFile(sound, 8, (const char *)v15, 0) ) /*0x5b5b48*/
      SoundManager_PlayMusic((int)sound, v12); /*0x5b5b53*/
  }
}
