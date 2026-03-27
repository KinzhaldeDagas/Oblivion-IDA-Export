void (__stdcall ****__thiscall sub_56B680(void (__stdcall ****this)(signed int), char a2))(signed int)
{
  sub_56B6A0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
