_DWORD *__thiscall sub_539830(_DWORD *this, char a2)
{
  sub_538C80(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
