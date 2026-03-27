TESRegionList *__thiscall TESRegionList::`scalar deleting destructor'(TESRegionList *this, char a2)
{
  TESRegionList::~TESRegionList(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
