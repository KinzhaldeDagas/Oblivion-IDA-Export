_DWORD *__thiscall sub_8CABD0(_DWORD *this, char a2)
{
  *this = &off_A99B58;
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
