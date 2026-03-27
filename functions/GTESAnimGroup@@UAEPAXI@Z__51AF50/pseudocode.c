TESAnimGroup *__thiscall TESAnimGroup::`scalar deleting destructor'(TESAnimGroup *this, char a2)
{
  TESAnimGroup::~TESAnimGroup(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
