TESPathGrid *__thiscall TESPathGrid::`scalar deleting destructor'(TESPathGrid *this, char a2)
{
  TESPathGrid::~TESPathGrid(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
