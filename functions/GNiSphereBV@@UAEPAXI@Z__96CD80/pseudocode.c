NiSphereBV *__thiscall NiSphereBV::`scalar deleting destructor'(NiSphereBV *this, char a2)
{
  *(_DWORD *)this = &NiBoundingVolume::`vftable'; /*0x96cd88*/
  if ( (a2 & 1) != 0 ) /*0x96cd8e*/
    FormHeapFree((unsigned int)this); /*0x96cd91*/
  return this; /*0x96cd9b*/
}
