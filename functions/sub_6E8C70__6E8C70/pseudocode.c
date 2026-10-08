unsigned int *__thiscall sub_6E8C70(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x6e8c76*/
  *this = (unsigned int)&NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable'; /*0x6e8c77*/
  FormHeapFree(v4); /*0x6e8c7d*/
  if ( (a2 & 1) != 0 ) /*0x6e8c8a*/
    FormHeapFree((unsigned int)this); /*0x6e8c8d*/
  return this; /*0x6e8c97*/
}
