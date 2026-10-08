int __thiscall sub_943860(int this, int a2)
{
  int result; // eax

  *(_DWORD *)(this + 0x30) = *(_DWORD *)a2; /*0x943866*/
  *(_DWORD *)(this + 0x34) = *(_DWORD *)(a2 + 4); /*0x94386c*/
  *(_DWORD *)(this + 0x38) = *(_DWORD *)(a2 + 8); /*0x943872*/
  *(_OWORD *)(this + 0x40) = *(_OWORD *)(a2 + 0x10); /*0x943879*/
  result = *(_DWORD *)(a2 + 0x20); /*0x94387d*/
  *(_DWORD *)(this + 0x50) = result; /*0x943880*/
  return result; /*0x943883*/
}
