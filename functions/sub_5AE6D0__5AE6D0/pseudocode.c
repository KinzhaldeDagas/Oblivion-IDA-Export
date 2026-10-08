// CharacterSpecificSaves v9 wraps native row creation after overview compaction. It changes user3 to Name (N) and centers only the overview label while preserving user0 listindex, user2 save name, installed fonts, focus boxes, scrolling, and preview behavior.
BSStringT *__userpurge LoadgameMenu_AddSaveRow@<eax>(
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
  Tile *v14; // edi
  BSStringT *v15; // edi
  int i; // edx
  char *v17; // eax
  char v18; // cl
  const char *v19; // eax
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

  if ( !a11 ) /*0x5ae724*/
    dword_B3B0B4[0xCF] = 0; /*0x5ae726*/
  v14 = *(Tile **)(a1 + 0x48); /*0x5ae72b*/
  v28.m_data = 0; /*0x5ae738*/
  v28.m_dataLen = 0; /*0x5ae73c*/
  v28.m_bufLen = 0; /*0x5ae741*/
  BSStringT_Set(&v28, "save_game_template", 0); /*0x5ae746*/
  v33 = 0; /*0x5ae755*/
  v15 = (BSStringT *)Menu::RenderTemplate((Menu *)a1, v14, v28.m_data, 0); /*0x5ae767*/
  if ( a12 )
  {
    sub_464060(g_TESSaveLoadGame, st0_0, a3, a4, a5, a6, a7, a8, a9, a12, (unsigned int)&v27, v32, v29, Str); /*0x5ae790*/
    if ( strlen(v32) )
    {
      _sprintf(Str2, "%s\n%s: %s", v32, stru_B386F8.value, Str);
      ++dword_B3B0B4[0xCF]; /*0x5ae800*/
    }
    else
    {
      _sprintf(Str2, "%s %i - %s\n%s: %s", stru_B386F0.value, v27, v29, stru_B386F8.value, Str);
    }
  }
  else
  {
    _sprintf(Str2, stru_B38700.value); /*0x5ae811*/
    if ( (g_TESSaveLoadGame->flags & 0x10000) == 0 ) /*0x5ae823*/
    {
      Tile_SetFloat(*(Tile **)(a1 + 0x40), 0xFA1u, 1.0); /*0x5ae833*/
      Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, EmptyString); /*0x5ae845*/
    }
  }
  if ( v15 ) /*0x5ae84c*/
  {
    a2 = (float)a11; /*0x5ae85c*/
    Tile_SetFloat((Tile *)v15, 0xFAEu, a2); /*0x5ae864*/
    for ( i = 0; i < 0x100; ++i ) /*0x5ae86f*/
    {
      v17 = &v29[i]; /*0x5ae873*/
      v18 = v29[i + Str2 - v29]; /*0x5ae877*/
      v29[i] = v18; /*0x5ae87d*/
      if ( v18 == 0x20 ) /*0x5ae87f*/
        *v17 = 0x5F; /*0x5ae881*/
      if ( !*v17 ) /*0x5ae884*/
        break; /*0x5ae887*/
    }
    v30 = 0; /*0x5ae89e*/
    BSStringT_Set(v15 + 1, v29, 0); /*0x5ae8a6*/
    Tile_SetString(v15, (_DWORD *)0xFB1, Str2); /*0x5ae8b3*/
    v27 = a11 + 0x65; /*0x5ae8c2*/
    a2a = (float)(a11 + 0x65); /*0x5ae8cd*/
    Tile_SetFloat((Tile *)v15, 0xFA8u, a2a); /*0x5ae8d5*/
    if ( Str2 && (v19 = *(const char **)(a1 + 0x5C)) != 0 ) /*0x5ae8e3*/
      v20 = CRT_StricmpLocaleDispatch(v19, Str2); /*0x5ae8e7*/
    else
      v20 = 2 * (Str2 == 0) - 1; /*0x5ae8f8*/
    if ( !v20 ) /*0x5ae8fe*/
    {
      InterfaceManager_GetSingleton(0, 1); /*0x5ae903*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5ae90c*/
      v22 = (double)(int)++Singleton->unk08C; /*0x5ae918*/
      if ( (int)Singleton->unk08C < 0 ) /*0x5ae92b*/
        v22 = v22 + flt_A2FC78; /*0x5ae92d*/
      a2b = v22; /*0x5ae936*/
      Tile_SetFloat((Tile *)v15, 0xFF0u, a2b); /*0x5ae940*/
    }
  }
  FormHeapFree((unsigned int)v28.m_data); /*0x5ae94a*/
  return v15; /*0x5ae954*/
}
