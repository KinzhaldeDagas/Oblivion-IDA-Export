unsigned int __thiscall sub_6AF7B0(_DWORD *this, int a2)
{
  unsigned int result; // eax

  *(this + 1) -= a2; /*0x6af7b4*/
  *(this + 4) += a2; /*0x6af7b7*/
  result = *(this + 4); /*0x6af7ba*/
  if ( result >= 8 ) /*0x6af7c0*/
  {
    result = 0xFFFFFFFF; /*0x6af7c7*/
    do /*0x6af7da*/
    {
      *(this + 4) -= 8; /*0x6af7d0*/
      --*(this + 2); /*0x6af7d3*/
    }
    while ( *(this + 4) >= 8u ); /*0x6af7da*/
  }
  return result; /*0x6af7dc*/
}
