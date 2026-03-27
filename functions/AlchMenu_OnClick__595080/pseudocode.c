void __userpurge AlchMenu_OnClick(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  if ( sub_57D2F0(*(void **)(a1 + 0xA0)) )
  {
    sub_57DD90(*(void **)(a1 + 0xA0), 0);
LABEL_6:
    sub_593710((char **)a1);
    goto LABEL_7;
  }
  if ( a6 == 2 || a6 == 3 )
  {
    sub_592FB0(a1);
    goto LABEL_6;
  }
LABEL_7:
  switch ( a6 )
  {
    case 8:
      dword_B3B270 = 0;
      goto LABEL_14;
    case 9:
      dword_B3B270 = 1;
      goto LABEL_14;
    case 0xA:
      dword_B3B270 = 2;
      goto LABEL_14;
    case 0xB:
      dword_B3B270 = 3;
LABEL_14:
      sub_5D2070(a2, a6, a1, a3, a5, a4, 3, 0, 0, 0);
      break;
    case 0xE:
      AlchemyMenu_CreatePotion_(a1);
      break;
    case 0xF:
      sub_5932B0(a2, a3, a5);
      break;
    default:
      return;
  }
}
