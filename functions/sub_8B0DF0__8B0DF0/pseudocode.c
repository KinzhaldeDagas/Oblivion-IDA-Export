int __thiscall sub_8B0DF0(int *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int result; // eax

  v4 = *(this + 2); /*0x8b0df0*/
  v5 = *this; /*0x8b0df7*/
  result = a2 + v4; /*0x8b0df9*/
  *(_DWORD *)(v5 + 8 * result + 8) = a3; /*0x8b0dff*/
  *(_DWORD *)(v5 + 8 * result + 0xC) = a4; /*0x8b0e07*/
  return result; /*0x8b0e0b*/
}
