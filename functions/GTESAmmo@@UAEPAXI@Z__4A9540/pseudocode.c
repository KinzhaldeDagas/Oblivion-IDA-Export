TESAmmo *__thiscall TESAmmo::`scalar deleting destructor'(TESAmmo *this, char a2)
{
  TESAmmo::~TESAmmo(this); /*0x4a9543*/
  if ( (a2 & 1) != 0 ) /*0x4a954d*/
    FormHeapFree((unsigned int)this); /*0x4a9550*/
  return this; /*0x4a955a*/
}
