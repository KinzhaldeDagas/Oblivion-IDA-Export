TESForm *__thiscall TESSubSpace::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESSubSpace::~TESSubSpace((TESSubSpace *)this); /*0x4bc1c3*/
  if ( (a2 & 1) != 0 ) /*0x4bc1cd*/
    FormHeapFree((unsigned int)this); /*0x4bc1d0*/
  return this; /*0x4bc1da*/
}
