TESRoad *__thiscall TESRoad::`scalar deleting destructor'(TESRoad *this, char a2)
{
  TESRoad::~TESRoad(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
