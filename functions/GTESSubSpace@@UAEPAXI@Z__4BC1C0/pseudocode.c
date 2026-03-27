TESForm *__thiscall TESSubSpace::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESSubSpace::~TESSubSpace(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
