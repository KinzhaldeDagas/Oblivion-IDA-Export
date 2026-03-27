TESForm *__thiscall TESObjectCELL_VDdestr(TESForm *this, char a2)
{
  TESObjectCELL_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
