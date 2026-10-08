double __thiscall sub_54BF70(_DWORD *this, signed int a2)
{
  if ( a2 >= 0x10 ) /*0x54bf77*/
    return (float)0.0; /*0x54bf9c*/
  return (float)((double (__thiscall *)(_DWORD *, signed int))*(_DWORD *)(*(this + 0x40) + 0x48))(this + 0x40, a2); /*0x54bf93*/
}
