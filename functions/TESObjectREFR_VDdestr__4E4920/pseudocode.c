TESObjectREFR *__thiscall TESObjectREFR_VDdestr(TESObjectREFR *this, char a2)
{
  TESObjectREFR_destr((TESChildCELL *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
