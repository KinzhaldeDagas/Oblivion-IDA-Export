void __usercall QueueUIMessage(double st7_0@<st0>, double a2@<st1>, char *a3, float a4, char *a5, char *a6)
{
  double v7; // st5
  int v8; // kr00_4
  double v9; // st5
  InterfaceManager *Singleton; // eax
  double Float; // st5
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v14; // eax
  BSStringT *v15; // eax
  void *v16; // eax
  float v17; // [esp+18h] [ebp+8h]
  float v18; // [esp+18h] [ebp+8h]

  v7 = a4; /*0x57addf*/
  if ( a4 <= 0.0 ) /*0x57ade4*/
  {
    v8 = strlen(a3); /*0x57adea*/
    v9 = (double)v8; /*0x57ae01*/
    if ( v8 < 0 ) /*0x57ae05*/
      v9 = v9 + flt_A2FC78; /*0x57ae07*/
    v17 = v9 * unk_B394F8; /*0x57ae13*/
    v7 = v17; /*0x57ae17*/
    if ( unk_B394F0 >= (double)v17 ) /*0x57ae28*/
      v7 = unk_B394F0; /*0x57ae2e*/
  }
  v18 = v7; /*0x57ae32*/
  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57ae38*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57ae54*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57ae6a*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57ae78*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57ae8a*/
        if ( Float == fConstant_2 ) /*0x57ae9a*/
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2); /*0x57aeaf*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57aeb9*/
          v14 = OblivionDynamicCast( /*0x57aebf*/
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &HUDSubtitleMenu `RTTI Type Descriptor',
                  0);
          if ( v14 /*0x57aeee*/
            || (v15 = sub_5A8E30(Float, st7_0, a2),
                v16 = (void *)Tile_GetParentMenu(v15),
                (v14 = OblivionDynamicCast(
                         v16,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                         &HUDSubtitleMenu `RTTI Type Descriptor',
                         0)) != 0) )
          {
            sub_5A95C0((int)v14, a3, v18, a5, a6); /*0x57af05*/
          }
        }
      }
    }
  }
}
