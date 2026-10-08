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

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F5); /*0x5bde78*/
  if ( OpenMenuTile ) /*0x5bde82*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5bde8a*/
    if ( ParentMenu ) /*0x5bde91*/
    {
      if ( OblivionDynamicCast( /*0x5bdea6*/
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &PauseMenu `RTTI Type Descriptor',
             0) )
      {
        switch ( a11 ) /*0x5bdebd*/
        {
          case 3: /*0x5bdebd*/
            if ( reference ) /*0x5bdebf*/
            {
              if ( !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) ) /*0x5bded7*/
                sub_5BDCD0(a2, a8, a9, a10, a3, a4, a5, a6, a7); /*0x5bdee1*/
            }
            break;
          case 5: /*0x5bdebd*/
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 5, a12); /*0x5bdefd*/
            sub_5BD9F0(a8, a9); /*0x5bdeff*/
            LoadgameMenu_Open(a3, a4, a5, a6, a7, a8, a9, a10, 0); /*0x5bdf06*/
            break;
          case 4: /*0x5bdebd*/
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 4, a12); /*0x5bdf25*/
            sub_5BD9F0(a8, a9); /*0x5bdf27*/
            SaveMenu_Open(a3, a4, a5, a6, a7, a8, a9, a10); /*0x5bdf2c*/
            break;
          case 7: /*0x5bdebd*/
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 7, a12); /*0x5bdf48*/
            sub_5BD9F0(a8, a9); /*0x5bdf4a*/
            sub_5BD680(a8, a9, a10); /*0x5bdf4f*/
            break;
          case 8: /*0x5bdebd*/
            ShowUIMessageBox( /*0x5bdf80*/
              (char *)stru_B38CA8,
              a8,
              a9,
              a10,
              (char *)stru_B38C98,
              (int)sub_5BDDE0,
              1,
              (char *)stru_B38D08,
              stru_B38CA8);
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 8, a12); /*0x5bdf96*/
            break;
        }
      }
    }
  }
}
