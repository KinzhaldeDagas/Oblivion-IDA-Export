int __thiscall sub_628D80(_BYTE *this)
{
  int v1; // eax

  v1 = 4; /*0x628d80*/
  while ( !*(this + v1 + 0x2DC) ) /*0x628d8d*/
  {
    if ( --v1 < 0 ) /*0x628d92*/
      return 0; /*0x628d96*/
  }
  return *((_DWORD *)this + v1 + 0xB2); /*0x628d96*/
}
