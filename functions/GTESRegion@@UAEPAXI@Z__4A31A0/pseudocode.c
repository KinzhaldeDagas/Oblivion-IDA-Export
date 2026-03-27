TESRegion *__thiscall TESRegion::`scalar deleting destructor'(TESRegion *this, char a2)
{
  TESRegion::~TESRegion(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
