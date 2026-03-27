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

  __asm { fld     dword ptr ds:0A2FAACh }
  __asm { fstp    [esp+4+duration]; duration }
  GameUI_QueueMessage((const char *)dword_B38BF8, 0, 0, duration);
  sub_5791A0(a1, a3, a4, a5);
  sub_5791E0(a5, a2, a3, a4, a8, a6, a7, a9, a1);
  sub_579220(a1, a3, a4, a5);
  v9 = (InputGlobal *)OSGlobals;
  byte_B35228 = 1;
  sub_40D4D0(v9, a3, a4, a5);
}
