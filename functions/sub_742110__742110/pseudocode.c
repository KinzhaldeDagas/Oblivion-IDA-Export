int __thiscall sub_742110(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 0x2D);
  *(_WORD *)(result + 0x2E) = *(_WORD *)(result + 0x2E) & 0xFFF | 0x8000;
  return result;
}
