char __userpurge sub_5BDFA0@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  if ( !InterfaceManager_MenuModeHasFocus(0x3F5)
    || a5 != 5
    || !TESDataHandler_g_PlayerRef
    || TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
  {
    return 0;
  }
  sub_5BDCD0(a1, a2, a3, a4);
  return 1;
}
