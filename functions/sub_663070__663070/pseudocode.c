bhkCharacterProxy *__userpurge sub_663070@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st3>,
        double started@<st0>,
        double a7@<st7>,
        double a8@<st6>,
        double a9@<st5>,
        double a10@<st4>,
        char a11)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v13; // esi
  void *ParentMenu; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // edi
  void *v17; // eax
  int v18; // eax
  int v19; // eax
  bhkCharacterProxy *result; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3ED); /*0x66307a*/
  v13 = 0; /*0x663082*/
  if ( OpenMenuTile ) /*0x663086*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x663096*/
    v13 = OblivionDynamicCast( /*0x6630a4*/
            ParentMenu,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &HUDInfoMenu `RTTI Type Descriptor',
            0);
  }
  v15 = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x6630ab*/
  v16 = 0; /*0x6630b3*/
  if ( v15 ) /*0x6630b7*/
  {
    v17 = (void *)Tile_GetParentMenu(v15); /*0x6630c7*/
    v16 = OblivionDynamicCast( /*0x6630d5*/
            v17,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &HUDMainMenu `RTTI Type Descriptor',
            0);
  }
  *(_BYTE *)(a1 + 0x5C0) = a11; /*0x6630dd*/
  if ( a11 ) /*0x6630e3*/
  {
    if ( v13 ) /*0x6630e7*/
    {
      v18 = v13[9]; /*0x6630e9*/
      if ( v18 != 4 && v18 != 2 ) /*0x6630f4*/
        started = Menu::StartFadeOut(v13, a7, a8, a9, a10, a3, started); /*0x6630f8*/
    }
    if ( v16 ) /*0x6630ff*/
    {
      v19 = v16[9]; /*0x663101*/
      if ( v19 != 4 && v19 != 2 ) /*0x66310c*/
        started = Menu::StartFadeOut(v16, a7, a8, a9, a10, a3, started); /*0x663110*/
    }
    sub_578CF0(a2, a3, a4, started, a5, 0); /*0x663117*/
    sub_5732D0((NiNode **)unk_B3A6B0, a3, a4, 1.0, 0, 1.0); /*0x663129*/
    result = MobileObject_GetCharProxy((MobileObject *)a1); /*0x663130*/
    *((_DWORD *)result + 0xEC) = 0; /*0x663137*/
  }
  else
  {
    if ( v16 ) /*0x663147*/
    {
      if ( v16[9] == 4 && *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 ) /*0x66315d*/
        Menu::StartFadeIn(v16); /*0x663161*/
    }
    if ( *(char *)(GetGlobalScriptStateObj__(1) + 0x31) <= 0 && !InterfaceManager_IsMenuMode() ) /*0x663176*/
      started = sub_578CF0(a2, a3, a4, started, a5, 1); /*0x663181*/
    sub_572EC0(a3, a4, started, 0, 0); /*0x663193*/
    result = MobileObject_GetCharProxy((MobileObject *)a1); /*0x66319a*/
    *((_DWORD *)result + 0xEC) = 0x3E8; /*0x6631a1*/
  }
  return result; /*0x663135*/
}
