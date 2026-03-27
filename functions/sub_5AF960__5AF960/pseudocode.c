void __usercall sub_5AF960(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  int ParentMenu; // eax
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  int **v6; // esi
  int v7; // ebp
  int *v8; // edi
  Tile *v9; // [esp+14h] [ebp-4h]

  sub_583DF0(0xFF);
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F6);
  v9 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v4 = (_DWORD *)ParentMenu;
    if ( ParentMenu )
    {
      v5 = OblivionDynamicCast(
             *(void **)(ParentMenu + 0x144),
             0,
             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
             &Tile3D `RTTI Type Descriptor',
             0);
      if ( !v5 )
        return;
      if ( !v5[0x11] && v4[0x54] != 6 )
      {
        v6 = (int **)(v4 + 0x28);
        v7 = 5;
        do
        {
          if ( *v6 )
          {
            sub_6B73C0(*v6);
            v8 = *v6;
            if ( *v6 )
            {
              sub_6B73E0(*v6);
              FormHeapFree((unsigned int)v8);
            }
          }
          v6 += 0xA;
          --v7;
        }
        while ( v7 );
        Tile_SetFloat(v9, (_DWORD *)0x1772, fConstant_2);
        sub_584740(v4, a1, a2);
        v4[0x54] = 6;
      }
    }
    sub_583DF0(0xFF);
  }
}
