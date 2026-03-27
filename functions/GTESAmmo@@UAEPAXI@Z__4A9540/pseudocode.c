TESAmmo *__thiscall TESAmmo::`scalar deleting destructor'(TESAmmo *this, char a2)
{
  TESAmmo::~TESAmmo(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
