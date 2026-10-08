BSFaceGenMorph *__thiscall BSFaceGenMorph::`scalar deleting destructor'(BSFaceGenMorph *this, char a2)
{
  *(_DWORD *)this = &BSFaceGenMorph::`vftable'; /*0x55a0a8*/
  if ( (a2 & 1) != 0 ) /*0x55a0ae*/
    FormHeapFree((unsigned int)this); /*0x55a0b1*/
  return this; /*0x55a0bb*/
}
