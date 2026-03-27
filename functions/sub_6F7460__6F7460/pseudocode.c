unsigned int __thiscall sub_6F7460(_DWORD *this)
{
  if ( !*(this + 0x13)
    || (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 4))(this, 0xFFFFFFFF) == 0xFFFFFFFF
    || fflush((FILE *)*(this + 0x13)) >= 0 )
  {
    return 0;
  }
  else
  {
    return 0xFFFFFFFF;
  }
}
