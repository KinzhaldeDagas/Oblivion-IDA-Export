char *__thiscall sub_9477C0(char *this)
{
  char *v2; // edi

  *((_WORD *)this + 3) = 1;
  *((_DWORD *)this + 2) = &off_A9D1C0;
  *(this + 0xC) = 1;
  v2 = this + 0x20;
  *((_DWORD *)this + 8) = &off_AA2984;
  *(_DWORD *)this = &off_AA2A04;
  *((_DWORD *)this + 2) = &off_AA29EC;
  *((_DWORD *)this + 8) = &off_AA29B8;
  if ( !dword_BA9508 )
    dword_BA9508 = sub_947C50((LPCRITICAL_SECTION *)dword_BA950C, "DebugDisplay", (int)sub_947860);
  sub_8A7A80((LPCRITICAL_SECTION *)dword_BA7DA0, (int)v2);
  return this;
}
