unsigned int *__thiscall sub_752D40(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x752d46*/
  *this = (unsigned int)&NiPSysModifier::`vftable'; /*0x752d47*/
  FormHeapFree(v4); /*0x752d4d*/
  NiRefObject_destr(this); /*0x752d57*/
  if ( (a2 & 1) != 0 ) /*0x752d61*/
    FormHeapFree((unsigned int)this); /*0x752d64*/
  return this; /*0x752d6e*/
}
