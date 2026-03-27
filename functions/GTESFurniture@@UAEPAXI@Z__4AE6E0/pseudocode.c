TESFurniture *__thiscall TESFurniture::`scalar deleting destructor'(TESFurniture *this, char a2)
{
  TESFurniture::~TESFurniture(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
