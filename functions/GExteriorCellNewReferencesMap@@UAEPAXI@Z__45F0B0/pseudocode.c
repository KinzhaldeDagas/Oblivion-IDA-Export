NiTMap_Entry_TESCELL *__thiscall ExteriorCellNewReferencesMap::`scalar deleting destructor'(
        NiTMap_Entry_TESCELL *this,
        char a2)
{
  ExteriorCellNewReferencesMap::~ExteriorCellNewReferencesMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
