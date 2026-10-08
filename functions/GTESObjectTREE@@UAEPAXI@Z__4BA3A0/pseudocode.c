TESForm *__thiscall TESObjectTREE::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESObjectTREE_dtor((TESObjectTREE_OblivionLayout_080_NiTArrayVerified *)this); /*0x4ba3a3*/
  if ( (a2 & 1) != 0 ) /*0x4ba3ad*/
    FormHeapFree((unsigned int)this); /*0x4ba3b0*/
  return this; /*0x4ba3ba*/
}
