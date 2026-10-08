char __userpurge sub_5BDFA0@<al>(
        char a1@<bpl>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        double a9@<st3>,
        int a10,
        int a11)
{
  if ( !InterfaceManager_MenuModeHasFocus(0x3F5) /*0x5bdfcc*/
    || a10 != 5
    || !reference
    || reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) )
  {
    return 0; /*0x5bdfdc*/
  }
  sub_5BDCD0(a1, a2, a3, a4, a5, a6, a7, a8, a9); /*0x5bdfd2*/
  return 1; /*0x5bdfd9*/
}
