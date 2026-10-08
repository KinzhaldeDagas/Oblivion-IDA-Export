PathHigh *__thiscall PathHigh::PathHigh(PathHigh *this)
{
  bool v2; // zf

  PathMiddleHigh::PathMiddleHigh(this); /*0x685fe8*/
  *(_DWORD *)this = &PathHigh::`vftable'; /*0x685fef*/
  *((_DWORD *)this + 0xA) = 0; /*0x685ff9*/
  *((_DWORD *)this + 0xD) = 0; /*0x685ffe*/
  *((_DWORD *)this + 0xE) = 0; /*0x686001*/
  if ( byte_B15834 || (v2 = bDebugSmoothing == 0, unk_B3C08A = 0, !v2) ) /*0x68601b*/
    unk_B3C08A = 1; /*0x68601d*/
  *((_DWORD *)this + 0xC) = 0; /*0x686025*/
  sub_684EC0((int **)this); /*0x686028*/
  return this; /*0x68602f*/
}
