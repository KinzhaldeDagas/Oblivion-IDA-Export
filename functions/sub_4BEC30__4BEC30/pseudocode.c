int __thiscall sub_4BEC30(int this)
{
  int result; // eax

  *(_DWORD *)(this + 0x50) = 0;
  *(_WORD *)(this + 0x54) = 0;
  result = *(unsigned __int8 *)(this + 0x55);
  LOBYTE(result) = result & 0xC0 | 3;
  *(_BYTE *)(this + 0x55) = result;
  return result;
}
