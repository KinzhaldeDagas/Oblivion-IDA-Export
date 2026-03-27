ExtraHeadingTarget *__thiscall ExtraHeadingTarget::`scalar deleting destructor'(ExtraHeadingTarget *this, char a2)
{
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &BSExtraData::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
