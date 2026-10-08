void __userpurge AlchMenu_OnClick(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        int a9,
        int a10)
{
  if ( sub_57D2F0(*(void **)(a1 + 0xA0)) ) /*0x59508a*/
  {
    sub_57DD90(*(void **)(a1 + 0xA0), 0); /*0x59509f*/
LABEL_6:
    sub_593710((char **)a1); /*0x5950b7*/
    goto LABEL_7; /*0x5950b9*/
  }
  if ( a9 == 2 || a9 == 3 ) /*0x5950ae*/
  {
    sub_592FB0(a1); /*0x5950b2*/
    goto LABEL_6; /*0x5950b2*/
  }
LABEL_7:
  switch ( a9 ) /*0x5950c6*/
  {
    case 8: /*0x5950c6*/
      dword_B3B0B4[0x6F] = 0; /*0x5950e3*/
      goto LABEL_14; /*0x5950ed*/
    case 9: /*0x5950c6*/
      dword_B3B0B4[0x6F] = 1; /*0x5950ef*/
      goto LABEL_14; /*0x5950f9*/
    case 0xA: /*0x5950c6*/
      dword_B3B0B4[0x6F] = 2; /*0x5950fb*/
      goto LABEL_14; /*0x595105*/
    case 0xB: /*0x5950c6*/
      dword_B3B0B4[0x6F] = 3; /*0x595107*/
LABEL_14:
      RepairMenu_Create(a4, a3, 3, 0, 0, 0); /*0x595111*/
      break; /*0x595119*/
    case 0xE: /*0x5950c6*/
      AlchemyMenu_CreatePotion_(a1); /*0x5950d9*/
      break; /*0x5950e0*/
    case 0xF: /*0x5950c6*/
      sub_5932B0(a2, a3, a4, a5, a6, a7, a8); /*0x5950cd*/
      break; /*0x5950d4*/
    default:
      return;
  }
}
