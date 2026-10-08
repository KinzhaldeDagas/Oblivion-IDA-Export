BOOL __thiscall sub_6EB360(char *this, int a2)
{
  BOOL result; // eax

  sub_6CD720((NiRenderer *)this, a2); /*0x6eb36a*/
  sub_715420(this + 0x30, a2); /*0x6eb375*/
  result = sub_632310((float *)this + 0xC, (float *)&dword_B24FD4); /*0x6eb381*/
  if ( result ) /*0x6eb388*/
    *(this + 0x40) = 1; /*0x6eb38a*/
  return result; /*0x6eb38e*/
}
