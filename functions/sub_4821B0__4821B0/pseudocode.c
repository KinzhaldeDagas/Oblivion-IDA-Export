bool __thiscall sub_4821B0(_DWORD *this, int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(*(this + 4) + 8 * (a3 + a2 * *(this + 3)));
  return v3 && *(_BYTE *)(v3 + 0x26) == 6;
}
