TESObjectARMO *__thiscall TESObjectARMO::`scalar deleting destructor'(TESObjectARMO *this, char a2)
{
  TESObjectARMO::~TESObjectARMO(this); /*0x4b5243*/
  if ( (a2 & 1) != 0 ) /*0x4b524d*/
    FormHeapFree((unsigned int)this); /*0x4b5250*/
  return this; /*0x4b525a*/
}
