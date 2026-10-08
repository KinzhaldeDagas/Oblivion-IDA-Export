TESObjectCONT *__thiscall TESObjectCONT::`scalar deleting destructor'(TESObjectCONT *this, char a2)
{
  TESObjectCONT::~TESObjectCONT(this); /*0x4b6cb3*/
  if ( (a2 & 1) != 0 ) /*0x4b6cbd*/
    FormHeapFree((unsigned int)this); /*0x4b6cc0*/
  return this; /*0x4b6cca*/
}
