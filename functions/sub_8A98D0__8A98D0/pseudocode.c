int __thiscall sub_8A98D0(_DWORD **this)
{
  if ( (*(int (__thiscall **)(_DWORD))(**(this + 0x14) + 8))(*(this + 0x14)) == 6 /*0x8a98eb*/
    || (*(int (__thiscall **)(_DWORD))(**(this + 0x14) + 8))(*(this + 0x14)) == 7 )
  {
    return (*(this + 0x14))[0x3C]; /*0x8a98f4*/
  }
  else
  {
    return 0; /*0x8a98ed*/
  }
}
