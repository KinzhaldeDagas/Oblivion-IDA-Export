int __thiscall sub_91B110(_DWORD *this)
{
  int result; // eax
  int i; // esi

  result = *(this + 7); /*0x91b113*/
  if ( result ) /*0x91b118*/
  {
    for ( i = 0; i < *(_DWORD *)(result + 0x60); ++i ) /*0x91b122*/
    {
      sub_91AC60(this + 0xFFFFFFFE, *(const void ***)(*(_DWORD *)(result + 0x5C) + 4 * i)); /*0x91b131*/
      result = *(this + 7); /*0x91b136*/
    }
  }
  return result; /*0x91b143*/
}
