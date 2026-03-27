char __userpurge sub_5B64C0@<al>(
        _BYTE *a1@<ecx>,
        char a2@<bpl>,
        char a3@<dil>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        double a11@<st0>,
        int a12,
        int a13)
{
  double v15; // st7
  double v16; // st7
  double v17; // st7

  if ( !a1[0x4D] )
  {
    switch ( a12 )
    {
      case 2:
        a1[0x4D] = 1;
        return ShowUIMessageBox(
                 (char *)MessageButtonTextYes,
                 a2,
                 a9,
                 a10,
                 a11,
                 (const char *)dword_B38770,
                 (int)sub_5B5D60,
                 1,
                 (const char *)MessageButtonTextYes,
                 MessageButtonTextNo);
      case 3:
        sub_57DE50(1);
        return ShowUIMessageBox(
                 (char *)MessageButtonTextYes,
                 a2,
                 a9,
                 a10,
                 a11,
                 (const char *)dword_B38778,
                 (int)NewGame___,
                 1,
                 (const char *)MessageButtonTextYes,
                 MessageButtonTextNo);
      case 4:
        v15 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, a12, a13);
        return sub_5AEA60(a4, a5, a6, a7, a8, a9, a10, v15, 0);
      case 5:
        (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 0x14))(a1, a12, a13);
        return sub_5BD680(a2, a3, a9, a10);
      case 6:
        v16 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, a12, a13);
        return sub_59D680(a9, a10, v16);
      case 7:
        v17 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, a12, a13);
        a1[0x4D] = 1;
        ShowUIMessageBox(
          (char *)dword_B38C58,
          a2,
          a9,
          a10,
          v17,
          (const char *)dword_B38C50,
          (int)sub_5B59B0,
          1,
          (const char *)dword_B38C58,
          dword_B38D08);
        return def_5B64DD(a12, a13);
      default:
        break;
    }
  }
  JUMPOUT(0x5B65C6);
}
