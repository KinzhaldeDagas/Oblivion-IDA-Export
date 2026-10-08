int __thiscall sub_91C100(_DWORD *this)
{
  int result; // eax
  int i; // esi

  result = *(this + 7); /*0x91c103*/
  if ( result ) /*0x91c108*/
  {
    for ( i = 0; i < *(_DWORD *)(result + 0x60); ++i ) /*0x91c112*/
    {
      sub_91BFB0(this + 0xFFFFFFFE, *(const void ***)(*(_DWORD *)(result + 0x5C) + 4 * i)); /*0x91c121*/
      result = *(this + 7); /*0x91c126*/
    }
  }
  return result; /*0x91c133*/
}
