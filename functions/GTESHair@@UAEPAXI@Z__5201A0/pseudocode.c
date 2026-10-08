TESHair *__thiscall TESHair::`scalar deleting destructor'(TESHair *this, char a2)
{
  TESHair::~TESHair(this); /*0x5201a3*/
  if ( (a2 & 1) != 0 ) /*0x5201ad*/
    FormHeapFree((unsigned int)this); /*0x5201b0*/
  return this; /*0x5201ba*/
}
