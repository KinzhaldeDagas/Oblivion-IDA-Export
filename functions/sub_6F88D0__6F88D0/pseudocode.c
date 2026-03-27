_DWORD *__thiscall sub_6F88D0(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = *(this + 5);
  *this = &std::ctype<char>::`vftable';
  if ( v3 <= 0 )
  {
    if ( v3 < 0 )
      FormHeapFree(*(this + 4));
  }
  else
  {
    free((void *)*(this + 4));
  }
  *this = &std::locale::facet::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
