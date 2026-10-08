TESRegionList *__thiscall TESRegionList_Destroy(TESRegionList *this, char a2)
{
  TESRegionList::~TESRegionList(this); /*0x4a67f3*/
  if ( (a2 & 1) != 0 ) /*0x4a67fd*/
    FormHeapFree((unsigned int)this); /*0x4a6800*/
  return this; /*0x4a680a*/
}
