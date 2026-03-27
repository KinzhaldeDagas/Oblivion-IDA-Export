TESForm *__thiscall TESForm_VDdestr(TESForm *this, char a2)
{
  TESForm_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
