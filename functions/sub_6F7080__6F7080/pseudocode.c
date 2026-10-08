int __thiscall sub_6F7080(_DWORD **this)
{
  int result; // eax
  _DWORD *v3; // eax
  unsigned __int8 *v4; // ecx

  result = ((int (__thiscall *)(_DWORD **))(*this)[4])(this); /*0x6f7088*/
  if ( result != 0xFFFFFFFF ) /*0x6f708d*/
  {
    --**(this + 0xC); /*0x6f7096*/
    v3 = *(this + 8); /*0x6f7099*/
    v4 = (unsigned __int8 *)(*v3)++; /*0x6f709c*/
    return *v4; /*0x6f70a3*/
  }
  return result; /*0x6f7091*/
}
