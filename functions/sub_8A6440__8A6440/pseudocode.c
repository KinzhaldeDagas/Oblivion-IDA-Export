int __thiscall sub_8A6440(int *this)
{
  int result; // eax

  result = *(this + 0x15); /*0x8a6440*/
  if ( result ) /*0x8a6445*/
  {
    if ( *(_BYTE *)(result + 0x28) ) /*0x8a6447*/
      return sub_8CBBB0(*(this + 2), *(this + 0x15)); /*0x8a6453*/
  }
  return result; /*0x8a645b*/
}
