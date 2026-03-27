TESForm *__thiscall TESObjectANIO::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESObjectANIO::~TESObjectANIO(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
