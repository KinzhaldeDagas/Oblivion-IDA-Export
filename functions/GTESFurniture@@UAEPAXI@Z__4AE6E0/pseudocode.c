TESFurniture *__thiscall TESFurniture::`scalar deleting destructor'(TESFurniture *this, char a2)
{
  TESFurniture::~TESFurniture(this); /*0x4ae6e3*/
  if ( (a2 & 1) != 0 ) /*0x4ae6ed*/
    FormHeapFree((unsigned int)this); /*0x4ae6f0*/
  return this; /*0x4ae6fa*/
}
