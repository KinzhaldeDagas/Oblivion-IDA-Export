bhkBlendCollisionObjectAddRotation *__thiscall bhkBlendCollisionObjectAddRotation::`scalar deleting destructor'(
        bhkBlendCollisionObjectAddRotation *this,
        char a2)
{
  *(_DWORD *)this = &bhkBlendCollisionObjectAddRotation::`vftable';
  sub_88EA60(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
