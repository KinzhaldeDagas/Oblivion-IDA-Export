int *__thiscall sub_8BC520(int *this, char a2)
{
  sub_8BC370(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
