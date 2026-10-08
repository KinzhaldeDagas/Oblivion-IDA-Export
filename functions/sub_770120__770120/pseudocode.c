BOOL __thiscall sub_770120(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  *a2 = (*(int (__thiscall **)(_DWORD *))(*this + 0x74))(this); /*0x770132*/
  *a3 = *(this + 8); /*0x770137*/
  return *a2 != 0; /*0x77013d*/
}
