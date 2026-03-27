int __thiscall sub_910470(_DWORD **this, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD, int))(**(this + 3) + 0x20))(*(this + 3), a2);
  result = *(_DWORD *)(a2 + 0xC) + 2;
  *(_DWORD *)(a2 + 8) += 0x40;
  *(_DWORD *)(a2 + 0xC) = result;
  return result;
}
