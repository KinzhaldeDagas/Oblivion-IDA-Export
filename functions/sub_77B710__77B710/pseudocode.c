int __thiscall sub_77B710(_DWORD *this)
{
  int result; // eax
  int v2; // edx

  result = *(this + 0x401);
  v2 = *(this + 0x403);
  *(this + 0x402) = result;
  *(this + 0x404) = v2;
  return result;
}
