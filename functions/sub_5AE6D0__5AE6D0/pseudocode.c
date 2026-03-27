BSStringT *__userpurge sub_5AE6D0@<eax>(
        int a1@<ecx>,
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
  TileWindow *v14; // edi
  BSStringT *TileFromTemplate; // edi
  int i; // edx
  char *v17; // eax
  char v18; // cl
  char *v19; // eax
  int v20; // eax
  InterfaceManager *Singleton; // eax
  double v22; // st7
  float a2; // [esp+0h] [ebp-338h]
  float a2a; // [esp+0h] [ebp-338h]
  float a2b; // [esp+0h] [ebp-338h]
  int v27; // [esp+18h] [ebp-320h] BYREF
  BSStringT v28; // [esp+1Ch] [ebp-31Ch] BYREF
  char v29[255]; // [esp+28h] [ebp-310h] BYREF
  char v30; // [esp+127h] [ebp-211h]
  char Str[256]; // [esp+128h] [ebp-210h] BYREF
  char v32[256]; // [esp+228h] [ebp-110h] BYREF
  int v33; // [esp+334h] [ebp-4h]

  if ( !a11 )
    dword_B3B3F0 = 0;
  v14 = *(TileWindow **)(a1 + 0x48);
  v28.m_data = 0;
  v28.m_dataLen = 0;
  v28.m_bufLen = 0;
  BSStringT_Set(&v28, "save_game_template", 0);
  v33 = 0;
  TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate((_DWORD *)a1, a7, a8, a9, v14, v28.m_data, 0);
  if ( a12 )
  {
    sub_464060(SaveLoad_CurrentSavegame, st0_0, a3, a4, a5, a6, a7, a8, a9, a12, (unsigned int)&v27, v32, v29, Str);
    if ( strlen(v32) )
    {
      _sprintf(Str2, "%s\n%s: %s", v32, (const char *)dword_B386F8, Str);
      ++dword_B3B3F0;
    }
    else
    {
      _sprintf(Str2, "%s %i - %s\n%s: %s", (const char *)dword_B386F0, v27, v29, (const char *)dword_B386F8, Str);
    }
  }
  else
  {
    _sprintf(Str2, (const char *)dword_B38700);
    if ( (SaveLoad_CurrentSavegame->flags & 0x10000) == 0 )
    {
      Tile_SetFloat(*(Tile **)(a1 + 0x40), (_DWORD *)0xFA1, 1.0);
      Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, EmptyString);
    }
  }
  if ( TileFromTemplate )
  {
    a2 = (float)a11;
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, a2);
    for ( i = 0; i < 0x100; ++i )
    {
      v17 = &v29[i];
      v18 = v29[i + Str2 - v29];
      v29[i] = v18;
      if ( v18 == 0x20 )
        *v17 = 0x5F;
      if ( !*v17 )
        break;
    }
    v30 = 0;
    BSStringT_Set(TileFromTemplate + 1, v29, 0);
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFB1, Str2);
    v27 = a11 + 0x65;
    a2a = (float)(a11 + 0x65);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, a2a);
    if ( Str2 && (v19 = *(char **)(a1 + 0x5C)) != 0 )
      v20 = _strcmp(v19, Str2);
    else
      v20 = 2 * (Str2 == 0) - 1;
    if ( !v20 )
    {
      InterfaceManager_GetSingleton(0, 1);
      Singleton = InterfaceManager_GetSingleton(0, 1);
      v22 = (double)(int)++Singleton->unk08C;
      if ( (int)Singleton->unk08C < 0 )
        v22 = v22 + flt_A2FC78;
      a2b = v22;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, a2b);
    }
  }
  FormHeapFree((unsigned int)v28.m_data);
  return TileFromTemplate;
}
