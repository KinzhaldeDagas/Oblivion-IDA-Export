void __usercall LoadingAreaMessage(
        char a1@<bpl>,
        double a2@<st3>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st4>,
        double a9@<st5>)
{
  InputGlobal *v9; // ecx
  float duration; // [esp+0h] [ebp-4h]

  __asm { fld     dword ptr ds:0A2FAACh } /*0x440c40*/
  __asm { fstp    [esp+4+duration]; duration }
  GameUI_QueueMessage((const char *)stru_B38BF8, 0, 0, duration); /*0x440c54*/
  sub_5791A0(a1, a3, a4); /*0x440c5c*/
  sub_5791E0(a5, a2, a3, a4, a8, a6, a7, a9); /*0x440c61*/
  sub_579220(a1, a3, a4, a5); /*0x440c66*/
  v9 = (InputGlobal *)MEMORY[0xB33398]; /*0x440c6b*/
  MEMORY[0xB33E90][0x1398] = 1; /*0x440c71*/
  Input_CheckScreenshotHotkey(v9, a3, a4, a5, a6, a7, a9, a8, a2); /*0x440c78*/
}
