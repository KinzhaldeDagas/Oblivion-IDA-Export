int __thiscall sub_8E8880(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = *(this + 4); /*0x8e8880*/
  *(_DWORD *)(result + 8 * a2 + 4) = a3; /*0x8e888b*/
  return result; /*0x8e888f*/
}
