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
  const char *sound; // esi
  char v14; // [esp-1h] [ebp-109h] BYREF
  _DWORD v15[65]; // [esp+0h] [ebp-108h] BYREF

  v0 = off_A6CB60;
  v1 = dword_A6CB5C;
  v15[0] = dword_A6CB58;
  v2 = off_B14374[0];
  v15[2] = v0;
  v15[1] = v1;
  v3 = v2;
  v4 = strlen(v2) + 1;
  v5 = &v14;
  while ( *++v5 )
    ;
  qmemcpy(v5, v3, 4 * (v4 >> 2));
  v8 = &v3[4 * (v4 >> 2)];
  v7 = &v5[4 * (v4 >> 2)];
  v9 = v4;
  v10 = OSGlobals;
  v11 = v9 & 3;
  qmemcpy(v7, v8, v11);
  v12 = (int)&v7[v11];
  IsAtMainMenu = 1;
  sound = (const char *)v10->sound;
  if ( sound )
  {
    if ( SoundManager_OpenMusicFile(sound, 8, (int)v15, 0) )
      SoundManager_PlayMusic((int)sound, v12);
  }
}
