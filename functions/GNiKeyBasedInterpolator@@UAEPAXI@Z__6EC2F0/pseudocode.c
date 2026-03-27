NiKeyBasedInterpolator *__thiscall NiKeyBasedInterpolator::`scalar deleting destructor'(
        NiKeyBasedInterpolator *this,
        char a2)
{
  *(_DWORD *)this = &NiKeyBasedInterpolator::`vftable';
  sub_6EBA30(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
