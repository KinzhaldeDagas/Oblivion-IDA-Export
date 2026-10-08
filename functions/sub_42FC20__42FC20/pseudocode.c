int __thiscall sub_42FC20(LONG *this, char a2)
{
  int v4; // eax
  int v5; // eax

  if ( !this ) /*0x42fc25*/
    return 0; /*0x42fc27*/
  v4 = *(this + 3); /*0x42fc2d*/
  if ( v4 ) /*0x42fc32*/
  {
    if ( a2 ) /*0x42fc3b*/
      NiEnterCriticalSection(*(struct _RTL_CRITICAL_SECTION **)(v4 + 4), (int)&unk_A2F830); /*0x42fc45*/
    v5 = *(this + 2); /*0x42fc4a*/
    if ( (v5 == 1 || v5 == 2) && *(int *)(*(this + 3) + 0x2C) > 0 ) /*0x42fc60*/
    {
      sub_42FBF0(this); /*0x42fc64*/
      (*(void (__thiscall **)(LONG *))(*this + 8))(this); /*0x42fc70*/
      *(this + 2) = 0; /*0x42fc72*/
    }
    if ( a2 ) /*0x42fc7c*/
      NiLeaveCriticalSection_0(*(LPCRITICAL_SECTION *)(*(this + 3) + 4)); /*0x42fc84*/
  }
  return *(this + 2); /*0x42fc29*/
}
