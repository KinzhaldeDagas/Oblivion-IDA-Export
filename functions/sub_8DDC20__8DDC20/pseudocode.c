int __thiscall sub_8DDC20(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int result; // eax

  *(_DWORD *)(*(this + 0xD) + 4 * *(unsigned __int16 *)(a2 + 0x8C)) = *(_DWORD *)(*(this + 0xD) + 4 * *(this + 0xE) - 4);
  *(_WORD *)(*(_DWORD *)(*(this + 0xD) + 4 * *(unsigned __int16 *)(a2 + 0x8C)) + 0x8C) = *(_WORD *)(a2 + 0x8C);
  --*(this + 0xE);
  *(_DWORD *)(a2 + 0x54) = 0;
  *(_WORD *)(a2 + 0x8C) = 0xFFFF;
  v3 = *this;
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x50) + 0x1C))(*(_DWORD *)(a2 + 0x50));
  result = (*(int (__thiscall **)(_DWORD *, int))(v3 + 0x14))(this, -v4);
  *((_BYTE *)this + 0x26) = 1;
  return result;
}
