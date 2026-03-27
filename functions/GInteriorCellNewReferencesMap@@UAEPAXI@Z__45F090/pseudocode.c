NiTMap_Entry_TESCELL *__thiscall InteriorCellNewReferencesMap::`scalar deleting destructor'(
        NiTMap_Entry_TESCELL *this,
        char a2)
{
  InteriorCellNewReferencesMap::~InteriorCellNewReferencesMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
