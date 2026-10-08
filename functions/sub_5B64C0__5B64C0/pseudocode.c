void __userpurge MainMenu_HandleClick(
        _BYTE *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        int a10,
        int a11)
{
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7

  if ( !a1[0x4D] ) /*0x5b64c3*/
  {
    switch ( a10 ) /*0x5b64dd*/
    {
      case 2: /*0x5b64dd*/
        a1[0x4D] = 1; /*0x5b64e4*/
        ShowUIMessageBox( /*0x5b6505*/
          (char *)MEMORY[0xB38CF8],
          a7,
          a8,
          a9,
          (char *)stru_B38770,
          (int)sub_5B5D60,
          1,
          (char *)MEMORY[0xB38CF8],
          MEMORY[0xB38D00]);
        return; /*0x5b650e*/
      case 3: /*0x5b64dd*/
        sub_57DE50(1); /*0x5b6513*/
        ShowUIMessageBox( /*0x5b6535*/
          (char *)MEMORY[0xB38CF8],
          a7,
          a8,
          a9,
          (char *)stru_B38778,
          (int)NewGame___,
          1,
          (char *)MEMORY[0xB38CF8],
          MEMORY[0xB38D00]);
        return; /*0x5b653e*/
      case 4: /*0x5b64dd*/
        v14 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5b654e*/
        LoadgameMenu_Open(a2, a3, a4, a5, a6, a7, a8, v14, 0); /*0x5b6552*/
        return; /*0x5b655b*/
      case 5: /*0x5b64dd*/
        v15 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5b656b*/
        sub_5BD680(a7, a8, v15); /*0x5b656d*/
        return; /*0x5b6573*/
      case 6: /*0x5b64dd*/
        v16 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5b6583*/
        sub_59D680(a7, a8, v16); /*0x5b6585*/
        return; /*0x5b658b*/
      case 7: /*0x5b64dd*/
        v17 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5b659b*/
        a1[0x4D] = 1; /*0x5b659d*/
        ShowUIMessageBox( /*0x5b65be*/
          (char *)stru_B38C58,
          a7,
          a8,
          v17,
          (char *)stru_B38C50,
          (int)sub_5B59B0,
          1,
          (char *)stru_B38C58,
          stru_B38D08);
        def_5B64DD(a10, a11); /*0x5b65c4*/
        return;
      default:
        break;                                  // MainMenu button dispatch: 2 Continue, 3 New, 4 Load, 5 Options, 6 Credits, 7 Quit.
    }
  }
  JUMPOUT(0x5B65C6); /*0x5b65c6*/
}
