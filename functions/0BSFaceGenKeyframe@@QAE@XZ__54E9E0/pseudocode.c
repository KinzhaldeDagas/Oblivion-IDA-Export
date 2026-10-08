BSFaceGenKeyframe *__thiscall BSFaceGenKeyframe::BSFaceGenKeyframe(BSFaceGenKeyframe *this, char a2)
{
  *(_DWORD *)this = &BSFaceGenKeyframe::`vftable'; /*0x54e9e8*/
  if ( (a2 & 1) != 0 ) /*0x54e9ee*/
    FormHeapFree((unsigned int)this); /*0x54e9f1*/
  return this; /*0x54e9fb*/
}
