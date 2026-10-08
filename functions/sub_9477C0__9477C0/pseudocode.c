char *__thiscall sub_9477C0(char *this)
{
  char *v2; // edi

  *((_WORD *)this + 3) = 1; /*0x9477c8*/
  *((_DWORD *)this + 2) = &off_A9D1C0; /*0x9477cc*/
  *(this + 0xC) = 1; /*0x9477d3*/
  v2 = this + 0x20; /*0x9477d7*/
  *((_DWORD *)this + 8) = &off_AA2984; /*0x9477da*/
  *(_DWORD *)this = &off_AA2A04; /*0x9477e0*/
  *((_DWORD *)this + 2) = &off_AA29EC; /*0x9477e6*/
  *((_DWORD *)this + 8) = &off_AA29B8; /*0x9477ed*/
  if ( !unk_BA9508 ) /*0x9477f3*/
    unk_BA9508 = sub_947C50((LPCRITICAL_SECTION *)unk_BA950C, "DebugDisplay", (int)sub_947860); /*0x947811*/
  sub_8A7A80((LPCRITICAL_SECTION *)unk_BA7DA0, (int)v2); /*0x94781d*/
  return this; /*0x947822*/
}
