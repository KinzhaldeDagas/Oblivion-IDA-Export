void __cdecl sub_578E90(float *a1)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v3; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF); /*0x578e95*/
  if ( OpenMenuTile ) /*0x578e9f*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x578eb1*/
    v3 = OblivionDynamicCast( /*0x578eb7*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &LoadingMenu `RTTI Type Descriptor',
           0);
    if ( v3 ) /*0x578ec1*/
      sub_5AD380(v3, a1); /*0x578eca*/
  }
}
