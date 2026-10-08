int __thiscall sub_6CE710(char *this, signed int a2)
{
  unsigned __int8 i; // bl
  int v4; // esi

  sub_6CDC10(this, a2); /*0x6ce71a*/
  for ( i = 0; i < (unsigned __int8)*(this + 0xD); ++i ) /*0x6ce721*/
  {
    v4 = *((_DWORD *)this + 0x14) + 0x68 * i; /*0x6ce72d*/
    sub_6CBA90((char *)(v4 + 4), a2); /*0x6ce734*/
    sub_6CBA90((char *)(v4 + 0x24), a2); /*0x6ce73d*/
    sub_711BF0((float *)(v4 + 0x44), a2); /*0x6ce746*/
  }
  return sub_6CBA90(this + 0x30, a2); /*0x6ce75d*/
}
