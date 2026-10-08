char __thiscall sub_5E0630(_DWORD *this, unsigned __int16 a2)
{
  bool v2; // zf
  char result; // al

  if ( !*(this + 0x16) ) /*0x5e0633*/
    return 0; /*0x5e0633*/
  v2 = ((*(unsigned __int16 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2C0))(*(this + 0x16)) & a2) == 0; /*0x5e0646*/
  result = 1; /*0x5e064b*/
  if ( v2 ) /*0x5e064d*/
    return 0; /*0x5e064f*/
  return result; /*0x5e0651*/
}
