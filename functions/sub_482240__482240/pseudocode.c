int __thiscall sub_482240(int this, int a2, int a3)
{
  int result; // eax

  result = a3 + a2 * *(_DWORD *)(this + 0xC);
  *(_DWORD *)(*(_DWORD *)(this + 0x10) + 8 * result) = 0;
  *(_BYTE *)(this + 0x20) = 0;
  return result;
}
