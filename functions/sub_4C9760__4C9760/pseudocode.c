TESForm *__thiscall sub_4C9760(TESForm *this, char a2)
{
  sub_4C9490(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
