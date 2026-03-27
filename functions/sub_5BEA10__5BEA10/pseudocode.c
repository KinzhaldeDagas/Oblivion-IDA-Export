void __usercall sub_5BEA10(int a1@<ecx>, double st6_0@<st1>, double a3@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v6; // esi
  int ParentMenu; // eax
  int v8; // edi
  Tile *v9; // esi
  void *v10; // eax
  void **v11; // eax
  int v12; // ebx
  UInt32 v13; // eax
  InterfaceManager *Singleton; // eax
  double Float; // st5
  float a2; // [esp+0h] [ebp-10h]

  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0xBC), 0xFAF);
  if ( a3 == fConstant_2 )
  {
    OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40A);
    v6 = OpenMenuTile;
    if ( OpenMenuTile )
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile);
      v8 = ParentMenu;
      if ( ParentMenu )
      {
        a3 = fConstant_2;
        a2 = fConstant_2;
        *(_DWORD *)(*(_DWORD *)(ParentMenu + 0xD8) + 0x70) = 7;
        Tile_SetFloat(v6, (_DWORD *)0x1772, a2);
        sub_584740((_DWORD *)v8, Float, st6_0);
        v9 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
        v10 = (void *)Tile_GetParentMenu(v9);
        v11 = (void **)OblivionDynamicCast(
                         v10,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                         &DialogMenu `RTTI Type Descriptor',
                         0);
        v12 = (int)v11;
        if ( v9 )
        {
          if ( v11 )
          {
            if ( *(_BYTE *)(v8 + 0x8C) )
              sub_59DF70(v11);
            *(_BYTE *)(v12 + 0x96) = 1;
            sub_59EA10(v12, Float, st6_0, a3, 0, 0);
            sub_58FBA0((int)v9, Float, st6_0, a3, 0);
            a3 = fConstant_2;
            Tile_SetFloat(v9, (_DWORD *)0xFA1, fConstant_2);
          }
        }
        v13 = sub_5E12B0(*(Actor **)(v8 + 0xD8));
        if ( v13 )
          *(_BYTE *)(v13 + 0x1DB) = 0;
      }
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57DA20((int)Singleton, Float, st6_0, a3, "Menus\\Misc\\cursor.dds", 1);
    }
  }
}
