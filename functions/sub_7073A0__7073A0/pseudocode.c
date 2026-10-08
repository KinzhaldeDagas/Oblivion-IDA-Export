int __thiscall sub_7073A0(_DWORD **this, float a2)
{
  int result; // eax

  result = ((int (__stdcall *)(_DWORD))(*this)[0x19])(LODWORD(a2)); /*0x7073b0*/
  if ( *(this + 7) ) /*0x7073b2*/
    return (*(int (__thiscall **)(_DWORD))(**(this + 7) + 0x94))(*(this + 7)); /*0x7073c3*/
  return result; /*0x7073c6*/
}
