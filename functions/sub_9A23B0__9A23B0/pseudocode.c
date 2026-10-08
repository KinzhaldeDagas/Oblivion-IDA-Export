unsigned int *__thiscall sub_9A23B0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 7); /*0x9a23b6*/
  *this = (unsigned int)&NiSCMExtraData::`vftable'; /*0x9a23b7*/
  FormHeapFree(v4); /*0x9a23bd*/
  FormHeapFree(*(this + 8)); /*0x9a23c6*/
  NiExtraData_dtor(this); /*0x9a23d0*/
  if ( (a2 & 1) != 0 ) /*0x9a23da*/
    FormHeapFree((unsigned int)this); /*0x9a23dd*/
  return this; /*0x9a23e7*/
}
