PathHigh *__thiscall PathHigh::PathHigh(PathHigh *this)
{
  bool v2; // zf

  PathMiddleHigh::PathMiddleHigh(this);
  *(_DWORD *)this = &PathHigh::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0;
  if ( byte_B15834 || (v2 = bDebugSmoothing == 0, byte_B3C08A = 0, !v2) )
    byte_B3C08A = 1;
  *((_DWORD *)this + 0xC) = 0;
  sub_684EC0((int **)this);
  return this;
}
