bool __thiscall Actor_IsBlocking(_DWORD *this)
{
  return *(this + 0x16) && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2D0))(*(this + 0x16)) == 6;
}
