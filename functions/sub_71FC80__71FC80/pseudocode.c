int __thiscall sub_71FC80(unsigned int *this, unsigned __int16 a2, unsigned int a3)
{
  int v4; // eax
  int result; // eax

  v4 = *(this + 0x12); /*0x71fc83*/
  if ( a3 != v4 ) /*0x71fc8d*/
  {
    if ( v4 ) /*0x71fc91*/
      FormHeapFree(*(this + 0x12)); /*0x71fc94*/
  }
  *((_WORD *)this + 0x20) = a2; /*0x71fca1*/
  *(this + 0x12) = a3; /*0x71fca8*/
  result = 3 * a2; /*0x71fcab*/
  *(this + 0x11) = result; /*0x71fcaf*/
  return result; /*0x71fcae*/
}
