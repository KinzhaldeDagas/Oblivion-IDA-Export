void __usercall QueueUIMessage(
        char a1@<bpl>,
        double st7_0@<st0>,
        double a3@<st1>,
        const char *a4,
        float a5,
        int a6,
        int a7)
{
  double v8; // st5
  int v9; // kr00_4
  double v10; // st5
  InterfaceManager *Singleton; // eax
  double Float; // st5
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v15; // eax
  unsigned int *v16; // eax
  void *v17; // eax
  float v18; // [esp+18h] [ebp+8h]
  float v19; // [esp+18h] [ebp+8h]

  v8 = a5;
  if ( a5 <= 0.0 )
  {
    v9 = strlen(a4);
    v10 = (double)v9;
    if ( v9 < 0 )
      v10 = v10 + flt_A2FC78;
    v18 = v10 * flt_B394F8;
    v8 = v18;
    if ( flt_B394F0 >= (double)v18 )
      v8 = flt_B394F0;
  }
  v19 = v8;
  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE);
        if ( Float == fConstant_2 )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F2);
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
          v15 = OblivionDynamicCast(
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &HUDSubtitleMenu `RTTI Type Descriptor',
                  0);
          if ( v15
            || (v16 = sub_5A8E30(a1, Float, st7_0, a3),
                v17 = (void *)Tile_GetParentMenu(v16),
                (v15 = OblivionDynamicCast(
                         v17,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                         &HUDSubtitleMenu `RTTI Type Descriptor',
                         0)) != 0) )
          {
            sub_5A95C0((int)v15, a1, v19, a3, (int)a4, v19, a6, a7);
          }
        }
      }
    }
  }
}
