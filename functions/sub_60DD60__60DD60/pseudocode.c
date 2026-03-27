bool __thiscall sub_60DD60(_DWORD **this)
{
  return *(this + 0xC) && (*(int (__thiscall **)(_DWORD))(**(this + 0xC) + 8))(*(this + 0xC)) != 0;
}
