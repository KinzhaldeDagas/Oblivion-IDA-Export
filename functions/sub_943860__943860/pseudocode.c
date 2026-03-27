int __thiscall sub_943860(int this, int a2)
{
  int result; // eax

  *(_DWORD *)(this + 0x30) = *(_DWORD *)a2;
  *(_DWORD *)(this + 0x34) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 0x38) = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(this + 0x40) = *(_OWORD *)(a2 + 0x10);
  result = *(_DWORD *)(a2 + 0x20);
  *(_DWORD *)(this + 0x50) = result;
  return result;
}
