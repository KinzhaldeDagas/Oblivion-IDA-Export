NiTMap_TESCELL *__thiscall ChangesMap::`scalar deleting destructor'(NiTMap_TESCELL *this, char a2)
{
  ChangesMap::~ChangesMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
