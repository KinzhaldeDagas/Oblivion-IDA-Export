void __userpurge SaveMenu_AddSaveRow(
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
  unsigned __int8 *v18; // eax
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

  v27 = a1; /*0x5d36a3*/
  if ( a11 == 1 ) /*0x5d36a7*/
    unk_B3B71C = 0; /*0x5d36a9*/
  v13 = (TileWindow *)a1[0x12]; /*0x5d36af*/
  v26.m_data = 0; /*0x5d36bc*/
  v26.m_dataLen = 0; /*0x5d36c0*/
  v26.m_bufLen = 0; /*0x5d36c5*/
  BSStringT_Set(&v26, "save_game_template", 0); /*0x5d36ca*/
  v32 = 0; /*0x5d36da*/
  TileFromTemplate = Menu::RenderTemplate(v27, a9, v13, v26.m_data, 0); /*0x5d36e8*/
  if ( a12 )
  {
    sub_464060(g_TESSaveLoadGame, st0_0, a3, a4, a5, a6, a7, a8, a9, a12, (unsigned int)&v25, v31, v28, Str); /*0x5d3711*/
    if ( strlen(v31) )
    {
      _sprintf(Str2, "%s\n%s: %s", v31, (const char *)stru_B386F8, Str);
      ++unk_B3B71C; /*0x5d3780*/
    }
    else
    {
      _sprintf(Str2, "%s %i - %s\n%s: %s", (const char *)stru_B386F0, v25, v28, (const char *)stru_B386F8, Str);
    }
  }
  if ( TileFromTemplate ) /*0x5d3789*/
  {
    a2 = (float)a11; /*0x5d3799*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, a2); /*0x5d37a1*/
    for ( i = 0; i < 0x100; ++i ) /*0x5d37ac*/
    {
      v16 = &v28[i]; /*0x5d37b0*/
      v17 = v28[i + Str2 - v28]; /*0x5d37b4*/
      v28[i] = v17; /*0x5d37ba*/
      if ( v17 == 0x20 ) /*0x5d37bc*/
        *v16 = 0x5F; /*0x5d37be*/
      if ( !*v16 ) /*0x5d37c1*/
        break; /*0x5d37c3*/
    }
    v29 = 0; /*0x5d37d9*/
    BSStringT_Set(TileFromTemplate + 1, v28, 0); /*0x5d37e0*/
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFB1, Str2); /*0x5d37ed*/
    v25 = a11 + 0x65; /*0x5d37fc*/
    a2a = (float)(a11 + 0x65); /*0x5d3807*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, a2a); /*0x5d380f*/
    if ( Str2 && (v18 = (unsigned __int8 *)v27[0x14]) != 0 ) /*0x5d3821*/
      v19 = CRT_StricmpLocaleDispatch(v18, (unsigned __int8 *)Str2); /*0x5d3825*/
    else
      v19 = 2 * (Str2 == 0) - 1; /*0x5d3836*/
    if ( !v19 ) /*0x5d383c*/
    {
      InterfaceManager_GetSingleton(0, 1); /*0x5d3841*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5d3849*/
      v21 = (double)(int)++Singleton->unk08C; /*0x5d3855*/
      if ( (int)Singleton->unk08C < 0 ) /*0x5d3868*/
        v21 = v21 + flt_A2FC78; /*0x5d386a*/
      a2b = v21; /*0x5d3873*/
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, a2b); /*0x5d387d*/
    }
  }
  FormHeapFree((unsigned int)v26.m_data); /*0x5d3887*/
}
