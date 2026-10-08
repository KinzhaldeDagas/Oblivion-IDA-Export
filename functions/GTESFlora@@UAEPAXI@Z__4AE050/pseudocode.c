TESFlora *__thiscall TESFlora::`scalar deleting destructor'(TESFlora *this, char a2)
{
  TESFlora::~TESFlora(this); /*0x4ae053*/
  if ( (a2 & 1) != 0 ) /*0x4ae05d*/
    FormHeapFree((unsigned int)this); /*0x4ae060*/
  return this; /*0x4ae06a*/
}
