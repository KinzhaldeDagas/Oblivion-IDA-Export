void __thiscall sub_46AB40(_DWORD *this, char a2)
{
  if ( a2 ) /*0x46ab45*/
    *(this + 2) |= 0x80000u; /*0x46ab47*/
  else
    *(this + 2) &= ~0x80000u; /*0x46ab51*/
}
