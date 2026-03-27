TESObjectWEAP *__thiscall TESObjectWEAP::`scalar deleting destructor'(TESObjectWEAP *this, char a2)
{
  TESObjectWEAP::~TESObjectWEAP(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
