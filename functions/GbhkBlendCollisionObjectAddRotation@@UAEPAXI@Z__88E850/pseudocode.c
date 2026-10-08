bhkBlendCollisionObjectAddRotation *__thiscall bhkBlendCollisionObjectAddRotation::`scalar deleting destructor'(
        bhkBlendCollisionObjectAddRotation *this,
        char a2)
{
  *(_DWORD *)this = &bhkBlendCollisionObjectAddRotation::`vftable'; /*0x88e853*/
  sub_88EA60(this); /*0x88e859*/
  if ( (a2 & 1) != 0 ) /*0x88e863*/
    FormHeapFree((unsigned int)this); /*0x88e866*/
  return this; /*0x88e870*/
}
