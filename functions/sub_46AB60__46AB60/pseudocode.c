void __thiscall sub_46AB60(_DWORD *this, char a2)
{
  if ( a2 )
    *(this + 2) |= 0x80u;
  else
    *(this + 2) &= ~0x80u;
}
