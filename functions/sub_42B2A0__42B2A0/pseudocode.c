char __thiscall sub_42B2A0(_BYTE *this, int a2)
{
  char result; // al

  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 8))(this, a2);
  result = *(_BYTE *)(a2 + 0xC);
  *(this + 0xC) = result;
  *((_WORD *)this + 7) = *(_WORD *)(a2 + 0xE);
  return result;
}
