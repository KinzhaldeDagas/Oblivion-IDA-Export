_DWORD *__thiscall sub_405AA0(_DWORD *this, char a2)
{
  unk_BA7A00 = 0; /*0x405aa8*/
  *this = &hkCollisionListener::`vftable'; /*0x405ab2*/
  if ( (a2 & 1) != 0 ) /*0x405ab8*/
    FormHeapFree((unsigned int)this); /*0x405abb*/
  return this; /*0x405ac5*/
}
