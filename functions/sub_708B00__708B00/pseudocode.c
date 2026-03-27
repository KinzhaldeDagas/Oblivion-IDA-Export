char __thiscall sub_708B00(char **this, int a2, _DWORD **a3)
{
  char result; // al

  sub_707E90(this, (NiGeometry *)a2, a3);
  *(_DWORD *)(a2 + 0xB4) = *(this + 0x2D);
  *(_DWORD *)(a2 + 0xB8) = *(this + 0x2E);
  result = *((_BYTE *)this + 0xAC);
  *(_BYTE *)(a2 + 0xAC) = result;
  return result;
}
