void __thiscall sub_46AB20(_DWORD *this, char a2)
{
  if ( a2 ) /*0x46ab25*/
    *(this + 2) |= 0x100000u; /*0x46ab27*/
  else
    *(this + 2) &= ~0x100000u; /*0x46ab31*/
}
