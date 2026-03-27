int __thiscall sub_436E70(_DWORD *this, int a2)
{
  InterlockedIncrement((volatile LONG *)(*(this + 7) + 0x10));
  return (*(int (__thiscall **)(_DWORD *))(*this + 0x28))(this);
}
