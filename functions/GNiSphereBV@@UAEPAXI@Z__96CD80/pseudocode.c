NiSphereBV *__thiscall NiSphereBV::`scalar deleting destructor'(NiSphereBV *this, char a2)
{
  *(_DWORD *)this = &NiBoundingVolume::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
