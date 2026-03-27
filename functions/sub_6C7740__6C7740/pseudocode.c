bool __thiscall sub_6C7740(_WORD *this, int a2)
{
  return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this + 0x2C))(*(_DWORD *)this, *(_DWORD *)a2)
      && *(this + 2) == *(_WORD *)(a2 + 4)
      && *(this + 3) == *(_WORD *)(a2 + 6)
      && *(this + 4) == *(_WORD *)(a2 + 8)
      && *(this + 5) == *(_WORD *)(a2 + 0xA)
      && *(this + 6) == *(_WORD *)(a2 + 0xC);
}
