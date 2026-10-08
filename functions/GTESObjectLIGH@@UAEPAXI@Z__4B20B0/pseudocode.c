TESObjectLIGH *__thiscall TESObjectLIGH::`scalar deleting destructor'(TESObjectLIGH *this, char a2)
{
  TESObjectLIGH::~TESObjectLIGH(this); /*0x4b20b3*/
  if ( (a2 & 1) != 0 ) /*0x4b20bd*/
    FormHeapFree((unsigned int)this); /*0x4b20c0*/
  return this; /*0x4b20ca*/
}
