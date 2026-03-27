TESForm *__thiscall sub_52AC00(TESForm *this, char a2)
{
  sub_52AB00(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
