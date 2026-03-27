char __thiscall sub_5E0630(_DWORD *this, unsigned __int16 a2)
{
  bool v2; // zf
  char result; // al

  if ( !*(this + 0x16) )
    return 0;
  v2 = ((*(unsigned __int16 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2C0))(*(this + 0x16)) & a2) == 0;
  result = 1;
  if ( v2 )
    return 0;
  return result;
}
