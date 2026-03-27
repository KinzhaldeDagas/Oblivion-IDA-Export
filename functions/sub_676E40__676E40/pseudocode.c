int __thiscall sub_676E40(_DWORD *this)
{
  if ( !*(this + 0x15) && !*(this + 0x14) )
    JUMPOUT(0x676ED9);
  if ( this == (_DWORD *)0xFFFFFFB0 )
    JUMPOUT(0x676ED7);
  if ( *(this + 0x15) )
    JUMPOUT(0x676E6B);
  return sub_676E69();
}
