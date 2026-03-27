_DWORD *__thiscall sub_772820(_DWORD *this, char a2)
{
  sub_772840(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
