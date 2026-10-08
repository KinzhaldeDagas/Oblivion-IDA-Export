TESObjectWEAP *__thiscall TESObjectWEAP::`scalar deleting destructor'(TESObjectWEAP *this, char a2)
{
  TESObjectWEAP::~TESObjectWEAP(this); /*0x4bb763*/
  if ( (a2 & 1) != 0 ) /*0x4bb76d*/
    FormHeapFree((unsigned int)this); /*0x4bb770*/
  return this; /*0x4bb77a*/
}
