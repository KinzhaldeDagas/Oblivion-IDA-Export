void __thiscall sub_6EAD00(char *this, int a2)
{
  sub_6CD720((NiRenderer *)this, a2); /*0x6ead0a*/
  sub_709430(this + 0x30, a2); /*0x6ead15*/
  if ( *(float *)&dword_B24FC8 != *((float *)this + 0xC) /*0x6ead4d*/
    || *(float *)&dword_B24FCC != *((float *)this + 0xD)
    || *(float *)&dword_B24FD0 != *((float *)this + 0xE) )
  {
    *(this + 0x3C) = 1; /*0x6ead4f*/
  }
}
