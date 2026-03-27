_DWORD *__thiscall sub_919180(_DWORD *this, char a2)
{
  *this = &off_A9D2B4;
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
