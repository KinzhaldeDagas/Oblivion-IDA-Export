bool __cdecl GameUI_QueueMessage(const char *string, UInt32 unk1, UInt32 unk2, float duration)
{
  char v4; // bp
  double v5; // st5
  double v6; // st6
  InterfaceManager *Singleton; // eax
  double Float; // st7
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v11; // eax
  unsigned int *v12; // eax
  void *v13; // eax
  bool result; // al
  float v15; // [esp+4h] [ebp-4h]

  v15 = 0.0;
  v6 = duration;
  if ( duration > 0.0 )
    v15 = duration;
  if ( !InterfaceManager_GetSingleton(0, 1) )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor )
    return 0;
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot )
    return 0;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE);
  if ( Float != fConstant_2 )
    return 0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v11 = (float *)OblivionDynamicCast(
                   ParentMenu,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                   &HUDSubtitleMenu `RTTI Type Descriptor',
                   0);
  if ( !v11 )
  {
    v12 = sub_5A8E30(v4, v5, Float, v6);
    v13 = (void *)Tile_GetParentMenu(v12);
    v11 = (float *)OblivionDynamicCast(
                     v13,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                     &HUDSubtitleMenu `RTTI Type Descriptor',
                     0);
    if ( !v11 )
      return 0;
  }
  sub_5A9980(v11, v4, v5, v6, string, (int *)unk1, (unk2 != 0) + 1, v15);
  return result;
}
