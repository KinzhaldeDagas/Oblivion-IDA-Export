TESClimate *__thiscall TESClimate::`scalar deleting destructor'(TESClimate *this, char a2)
{
  TESClimate::~TESClimate(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
