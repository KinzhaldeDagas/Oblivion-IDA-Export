int __thiscall sub_4354A0(_DWORD *this)
{
  _DWORD *v6; // ecx
  int (__thiscall *v7)(_DWORD *); // edx

  v6 = (_DWORD *)this[8]; /*0x4354a3*/
  if ( v6 ) /*0x4354a8*/
  {
    if ( sub_4D6FD0(v6) && !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[8] + 0x154))(this[8]) && !sub_57BAC0() ) /*0x4354c4*/
      (*(void (__thiscall **)(_DWORD *))(*this + 0x30))(this); /*0x4354d4*/
  }
  (*(void (__thiscall **)(_DWORD *))(*this + 0x2C))(this); /*0x4354dd*/
  v7 = *(int (__thiscall **)(_DWORD *))(*this + 0x28); /*0x4354e1*/
  this[3] = 5; /*0x4354e4*/
  return v7(this);
}
