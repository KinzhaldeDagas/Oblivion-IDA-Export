_DWORD *__thiscall sub_8CABB0(_DWORD *this, char a2)
{
  *this = &off_A99B50;
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
