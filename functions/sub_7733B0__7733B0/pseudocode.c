_DWORD *__thiscall sub_7733B0(_DWORD *this, char a2)
{
  sub_773470(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
