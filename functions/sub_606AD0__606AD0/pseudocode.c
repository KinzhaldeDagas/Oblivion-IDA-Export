bool __thiscall sub_606AD0(_DWORD *this, int a2)
{
  _DWORD *i; // eax

  for ( i = (_DWORD *)*(this + 0xF); i; i = (_DWORD *)i[1] ) /*0x606ad5*/
  {
    if ( *i == a2 ) /*0x606ae2*/
      break; /*0x606ae2*/
  }
  return i != 0; /*0x606af4*/
}
