void __thiscall TESFile_SetIsActive(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 0xF7) |= 8u;
  else
    *(this + 0xF7) &= ~8u;
}
