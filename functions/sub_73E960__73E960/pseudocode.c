unsigned int *__thiscall sub_73E960(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 0xB); /*0x73e966*/
  *this = (unsigned int)&NiScreenLODData::`vftable'; /*0x73e967*/
  FormHeapFree(v4); /*0x73e96d*/
  sub_738790(this); /*0x73e977*/
  if ( (a2 & 1) != 0 ) /*0x73e981*/
    FormHeapFree((unsigned int)this); /*0x73e984*/
  return this; /*0x73e98e*/
}
