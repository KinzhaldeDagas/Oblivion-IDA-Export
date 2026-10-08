void __thiscall sub_4295F0(_DWORD *this, unsigned int a2, char a3)
{
  int v3; // eax

  if ( a2 < 0x1E ) /*0x4295f9*/
  {
    v3 = 1 << a2; /*0x429600*/
    if ( a3 ) /*0x429607*/
      *(this + 3) |= v3; /*0x429609*/
    else
      *(this + 3) &= ~v3; /*0x429611*/
  }
}
