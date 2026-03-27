_DWORD *__thiscall sub_772040(_DWORD *this, char a2)
{
  sub_7724D0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
