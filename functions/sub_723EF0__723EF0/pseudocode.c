int __thiscall sub_723EF0(char **this, int a2, _DWORD **a3)
{
  int result; // eax

  sub_70AC60(this, (NiGeometry *)a2, a3);
  *(_WORD *)(a2 + 0xDC) = *((_WORD *)this + 0x6E);
  *(_DWORD *)(a2 + 0xE0) = *(this + 0x38);
  return result;
}
