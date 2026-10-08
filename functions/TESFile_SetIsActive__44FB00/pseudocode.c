void __thiscall TESFile_SetIsActive(_DWORD *this, char a2)
{
  if ( a2 ) /*0x44fb05*/
    *(this + 0xF7) |= 8u; /*0x44fb07*/
  else
    *(this + 0xF7) &= ~8u; /*0x44fb11*/
}
