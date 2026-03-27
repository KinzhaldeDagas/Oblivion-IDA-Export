unsigned int __thiscall sub_732280(_DWORD *this, int a2, int a3, int a4)
{
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int result; // eax

  v4 = ((a4 + 3) & 0xFFFFFFFC) * a3;
  v6 = FormHeapAlloc(v4 + 0xC * a2 + 4);
  *(this + 0x14) = v6;
  v7 = v4 + v6;
  *(this + 0x15) = v7;
  result = v7 + 4 * a2;
  *(this + 0x16) = result;
  *(this + 0x17) = result + 4 * a2;
  return result;
}
