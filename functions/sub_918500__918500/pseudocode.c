_DWORD *__thiscall sub_918500(_DWORD *this, char a2)
{
  *this = &off_A9D1C0;
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
