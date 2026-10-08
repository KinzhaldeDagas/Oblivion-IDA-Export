bool __cdecl GameUI_QueueMessage(const char *string, UInt32 unk1, UInt32 unk2, float duration)
{
  double v4; // st5
  InterfaceManager *Singleton; // eax
  double Float; // st7
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  float *v9; // eax
  BSStringT *v10; // eax
  void *v11; // eax
  bool result; // al
  float v13; // [esp+4h] [ebp-4h]

  v13 = 0.0; /*0x57acc3*/
  if ( duration > 0.0 ) /*0x57acd3*/
    v13 = duration; /*0x57acd5*/
  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57ace0*/
    return 0; /*0x57ace0*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57acfc*/
    return 0; /*0x57acfc*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57ad12*/
    return 0; /*0x57ad12*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57ad20*/
  Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57ad32*/
  if ( Float != fConstant_2 ) /*0x57ad42*/
    return 0; /*0x57ad42*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2); /*0x57ad57*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57ad61*/
  v9 = (float *)OblivionDynamicCast( /*0x57ad67*/
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &HUDSubtitleMenu `RTTI Type Descriptor',
                  0);
  if ( !v9 ) /*0x57ad71*/
  {
    v10 = sub_5A8E30(v4, Float, duration); /*0x57ad7f*/
    v11 = (void *)Tile_GetParentMenu(v10); /*0x57ad86*/
    v9 = (float *)OblivionDynamicCast( /*0x57ad8c*/
                    v11,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                    &HUDSubtitleMenu `RTTI Type Descriptor',
                    0);
    if ( !v9 ) /*0x57ad96*/
      return 0; /*0x57adbf*/
  }
  sub_5A9980(v9, (char *)string, (int *)unk1, (unk2 != 0) + 1, v13); /*0x57adb8*/
  return result; /*0x57adbe*/
}
