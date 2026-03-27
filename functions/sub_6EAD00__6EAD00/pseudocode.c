void __thiscall sub_6EAD00(char *this, unsigned int a2)
{
  sub_6CD720((NiRenderer *)this, a2);
  sub_709430(this + 0x30, a2);
  if ( *(float *)&dword_B24FC8 != *((float *)this + 0xC)
    || *(float *)&dword_B24FCC != *((float *)this + 0xD)
    || *(float *)&dword_B24FD0 != *((float *)this + 0xE) )
  {
    *(this + 0x3C) = 1;
  }
}
