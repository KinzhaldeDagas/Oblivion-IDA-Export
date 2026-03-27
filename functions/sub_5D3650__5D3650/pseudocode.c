void __userpurge sub_5D3650(
        _DWORD *a1@<ecx>,
        double st0_0@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        char *Str2,
        signed int a11,
        int a12,
        int a13)
{
  TileWindow *v13; // edi
  BSStringT *TileFromTemplate; // edi
  int i; // edx
  char *v16; // eax
  char v17; // cl
  char *v18; // eax
  int v19; // eax
  InterfaceManager *Singleton; // eax
  double v21; // st7
  float a2; // [esp+0h] [ebp-33Ch]
  float a2a; // [esp+0h] [ebp-33Ch]
  float a2b; // [esp+0h] [ebp-33Ch]
  int v25; // [esp+18h] [ebp-324h] BYREF
  BSStringT v26; // [esp+1Ch] [ebp-320h] BYREF
  _DWORD *v27; // [esp+24h] [ebp-318h]
  char v28[255]; // [esp+2Ch] [ebp-310h] BYREF
  char v29; // [esp+12Bh] [ebp-211h]
  char Str[256]; // [esp+12Ch] [ebp-210h] BYREF
  char v31[256]; // [esp+22Ch] [ebp-110h] BYREF
  int v32; // [esp+338h] [ebp-4h]

  v27 = a1;
  if ( a11 == 1 )
    dword_B3B71C = 0;
  v13 = (TileWindow *)a1[0x12];
  v26.m_data = 0;
  v26.m_dataLen = 0;
  v26.m_bufLen = 0;
  BSStringT_Set(&v26, "save_game_template", 0);
  v32 = 0;
  TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(v27, a7, a8, a9, v13, v26.m_data, 0);
  if ( a12 )
  {
    sub_464060(SaveLoad_CurrentSavegame, st0_0, a3, a4, a5, a6, a7, a8, a9, a12, (unsigned int)&v25, v31, v28, Str);
    if ( strlen(v31) )
    {
      _sprintf(Str2, "%s\n%s: %s", v31, (const char *)dword_B386F8, Str);
      ++dword_B3B71C;
    }
    else
    {
      _sprintf(Str2, "%s %i - %s\n%s: %s", (const char *)dword_B386F0, v25, v28, (const char *)dword_B386F8, Str);
    }
  }
  if ( TileFromTemplate )
  {
    a2 = (float)a11;
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, a2);
    for ( i = 0; i < 0x100; ++i )
    {
      v16 = &v28[i];
      v17 = v28[i + Str2 - v28];
      v28[i] = v17;
      if ( v17 == 0x20 )
        *v16 = 0x5F;
      if ( !*v16 )
        break;
    }
    v29 = 0;
    BSStringT_Set(TileFromTemplate + 1, v28, 0);
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFB1, Str2);
    v25 = a11 + 0x65;
    a2a = (float)(a11 + 0x65);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, a2a);
    if ( Str2 && (v18 = (char *)v27[0x14]) != 0 )
      v19 = _strcmp(v18, Str2);
    else
      v19 = 2 * (Str2 == 0) - 1;
    if ( !v19 )
    {
      InterfaceManager_GetSingleton(0, 1);
      Singleton = InterfaceManager_GetSingleton(0, 1);
      v21 = (double)(int)++Singleton->unk08C;
      if ( (int)Singleton->unk08C < 0 )
        v21 = v21 + flt_A2FC78;
      a2b = v21;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, a2b);
    }
  }
  FormHeapFree((unsigned int)v26.m_data);
}
