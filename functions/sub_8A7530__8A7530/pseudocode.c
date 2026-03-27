char *__thiscall sub_8A7530(char *this, char a2)
{
  *(_DWORD *)this = &off_A975C8;
  sub_8A71B0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
