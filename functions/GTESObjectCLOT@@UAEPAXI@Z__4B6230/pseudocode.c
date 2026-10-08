TESObjectCLOT *__thiscall TESObjectCLOT::`scalar deleting destructor'(TESObjectCLOT *this, char a2)
{
  TESObjectCLOT::~TESObjectCLOT(this); /*0x4b6233*/
  if ( (a2 & 1) != 0 ) /*0x4b623d*/
    FormHeapFree((unsigned int)this); /*0x4b6240*/
  return this; /*0x4b624a*/
}
