TESForm *__thiscall TESLevItem_SDdestr(TESForm *this, char a2)
{
  TESLevItem_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
