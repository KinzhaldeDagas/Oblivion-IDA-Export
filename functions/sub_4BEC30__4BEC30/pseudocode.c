int __thiscall sub_4BEC30(int this)
{
  int result; // eax

  *(_DWORD *)(this + 0x50) = 0; /*0x4bec32*/
  *(_WORD *)(this + 0x54) = 0; /*0x4bec35*/
  result = *(unsigned __int8 *)(this + 0x55); /*0x4bec39*/
  LOBYTE(result) = result & 0xC0 | 3; /*0x4bec3e*/
  *(_BYTE *)(this + 0x55) = result; /*0x4bec40*/
  return result; /*0x4bec43*/
}
