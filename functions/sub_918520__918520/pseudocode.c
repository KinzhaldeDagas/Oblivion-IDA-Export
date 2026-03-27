_DWORD *__thiscall sub_918520(_DWORD *this, char a2)
{
  *this = &off_A9D1D8;
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
