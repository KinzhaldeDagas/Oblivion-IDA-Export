TESObjectLIGH *__thiscall TESObjectLIGH::`scalar deleting destructor'(TESObjectLIGH *this, char a2)
{
  TESObjectLIGH::~TESObjectLIGH(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
