TESGlobal *__thiscall TESGlobal::`scalar deleting destructor'(TESGlobal *this, char a2)
{
  TESGlobal::~TESGlobal(this); /*0x4f96c3*/
  if ( (a2 & 1) != 0 ) /*0x4f96cd*/
    FormHeapFree((unsigned int)this); /*0x4f96d0*/
  return this; /*0x4f96da*/
}
