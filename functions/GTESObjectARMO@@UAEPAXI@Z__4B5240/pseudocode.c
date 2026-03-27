TESObjectARMO *__thiscall TESObjectARMO::`scalar deleting destructor'(TESObjectARMO *this, char a2)
{
  TESObjectARMO::~TESObjectARMO(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
