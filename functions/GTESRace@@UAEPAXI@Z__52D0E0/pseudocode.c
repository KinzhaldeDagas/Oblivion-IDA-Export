TESRace *__thiscall TESRace::`scalar deleting destructor'(TESRace *this, char a2)
{
  TESRace::~TESRace(this); /*0x52d0e3*/
  if ( (a2 & 1) != 0 ) /*0x52d0ed*/
    FormHeapFree((unsigned int)this); /*0x52d0f0*/
  return this; /*0x52d0fa*/
}
