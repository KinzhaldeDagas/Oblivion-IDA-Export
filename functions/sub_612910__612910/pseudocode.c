int __thiscall sub_612910(_WORD *this, int a2, char a3)
{
  int result; // eax

  if ( a3 ) /*0x612915*/
  {
    *(this + 1) &= ~(_WORD)a2; /*0x61291d*/
    return ~a2; /*0x61291b*/
  }
  else
  {
    *(this + 1) |= a2; /*0x612929*/
  }
  return result; /*0x612921*/
}
