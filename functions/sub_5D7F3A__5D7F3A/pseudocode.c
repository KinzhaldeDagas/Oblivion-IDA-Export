// positive sp value has been detected, the output may be wrong!
bool __userpurge sub_5D7F3A@<al>(double a1@<st2>, double a2@<st1>, int a3, int a4)
{
  sub_57DE50(0xB);
  sub_5D76A0(a1, a2);
  return GameUI_QueueMessage((const char *)sSpellmakingSuccess, 0, 1u, flt_A31E2C);
}
