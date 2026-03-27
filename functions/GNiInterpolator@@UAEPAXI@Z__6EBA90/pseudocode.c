NiInterpolator *__thiscall NiInterpolator::`scalar deleting destructor'(NiInterpolator *this, char a2)
{
  *(_DWORD *)this = &NiInterpolator::`vftable';
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
