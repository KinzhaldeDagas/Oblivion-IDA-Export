void __thiscall BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(BSFaceGenKeyframeMultiple *this)
{
  unsigned int v2; // eax

  *(_DWORD *)this = &BSFaceGenKeyframeMultiple::`vftable'; /*0x54ebc8*/
  if ( *((_DWORD *)this + 4) ) /*0x54ebce*/
  {
    if ( *((_DWORD *)this + 3) ) /*0x54ebdc*/
    {
      FormHeapFree(*((_DWORD *)this + 3)); /*0x54ebe4*/
      *((_DWORD *)this + 3) = 0; /*0x54ebec*/
    }
    *((_DWORD *)this + 4) = 0; /*0x54ebf3*/
  }
  v2 = *((_DWORD *)this + 4); /*0x54ebfa*/
  if ( v2 ) /*0x54ebff*/
    sub_54F630(*((void **)this + 3), v2, 1); /*0x54ec08*/
  *(_DWORD *)this = &BSFaceGenKeyframe::`vftable'; /*0x54ec10*/
}
