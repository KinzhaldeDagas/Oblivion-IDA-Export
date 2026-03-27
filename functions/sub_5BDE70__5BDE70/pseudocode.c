void __userpurge sub_5BDE70(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        int a11,
        int a12)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F5);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      if ( OblivionDynamicCast(
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &PauseMenu `RTTI Type Descriptor',
             0) )
      {
        switch ( a11 )
        {
          case 3:
            if ( TESDataHandler_g_PlayerRef )
            {
              if ( !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead(
                      (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                      0) )
                sub_5BDCD0(a2, a8, a9, a10);
            }
            break;
          case 5:
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 5, a12);
            sub_5BD9F0(a8, a9);
            sub_5AEA60(a3, a4, a5, a6, a7, a8, a9, a10, 0);
            break;
          case 4:
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 4, a12);
            sub_5BD9F0(a8, a9);
            sub_5D39A0(a2, a3, a4, a5, a6, a7, a8, a9);
            break;
          case 7:
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 7, a12);
            sub_5BD9F0(a8, a9);
            sub_5BD680(a8, a9, a10);
            break;
          case 8:
            ShowUIMessageBox(
              (char *)dword_B38CA8,
              a2,
              a8,
              a9,
              a10,
              (const char *)dword_B38C98,
              (int)sub_5BDDE0,
              1,
              (const char *)dword_B38D08,
              dword_B38CA8);
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 8, a12);
            break;
        }
      }
    }
  }
}
