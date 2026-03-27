_DWORD *__thiscall sub_947650(_DWORD *this, char a2)
{
  *this = &off_AA2984;
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
