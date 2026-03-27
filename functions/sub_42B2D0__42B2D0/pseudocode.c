bool __thiscall sub_42B2D0(_WORD *this, int a2)
{
  return (*(unsigned __int8 (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 0xC))(this, a2)
      || *((_BYTE *)this + 0xC) != *(_BYTE *)(a2 + 0xC)
      || *(this + 7) != *(_WORD *)(a2 + 0xE);
}
