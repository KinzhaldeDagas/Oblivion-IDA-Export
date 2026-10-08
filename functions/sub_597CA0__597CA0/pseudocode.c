void __cdecl sub_597CA0(signed int a1)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v3; // esi
  char *v4; // eax
  float v5; // [esp+0h] [ebp-8h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0); /*0x597ca5*/
  if ( OpenMenuTile ) /*0x597caf*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x597cb4*/
    v3 = ParentMenu; /*0x597cb9*/
    if ( ParentMenu ) /*0x597cbd*/
    {
      v4 = (char *)OblivionDynamicCast( /*0x597cd1*/
                     *(void **)(ParentMenu + 0x44),
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
      if ( *(_BYTE *)(v3 + 0x61) ) /*0x597cd9*/
      {
        if ( v4 ) /*0x597ce1*/
        {
          v5 = (float)a1; /*0x597ceb*/
          sub_422D20((ExtraDataList *)(v4 + 0x44), (BSExtraDataVtbl *)LODWORD(v5)); /*0x597cee*/
        }
      }
    }
  }
}
