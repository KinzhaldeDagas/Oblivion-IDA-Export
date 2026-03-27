TESObjectDOOR *__thiscall TESObjectDOOR::`scalar deleting destructor'(TESObjectDOOR *this, char a2)
{
  TESObjectDOOR::~TESObjectDOOR(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
