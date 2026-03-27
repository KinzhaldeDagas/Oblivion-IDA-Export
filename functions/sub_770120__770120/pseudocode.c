BOOL __thiscall sub_770120(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  *a2 = (*(int (__thiscall **)(_DWORD *))(*this + 0x74))(this);
  *a3 = *(this + 8);
  return *a2 != 0;
}
