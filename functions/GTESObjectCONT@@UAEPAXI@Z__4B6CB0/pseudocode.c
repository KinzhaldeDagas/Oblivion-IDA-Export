TESObjectCONT *__thiscall TESObjectCONT::`scalar deleting destructor'(TESObjectCONT *this, char a2)
{
  TESObjectCONT::~TESObjectCONT(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
