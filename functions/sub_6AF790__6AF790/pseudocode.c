int __thiscall sub_6AF790(int *this, int a2)
{
  int result; // eax

  *(_DWORD *)(*(this + 3) + 4 * *this) = a2; /*0x6af79a*/
  result = ((unsigned __int16)*this + 1) & 0xFFF; /*0x6af7a2*/
  *this = result; /*0x6af7a7*/
  return result; /*0x6af7a9*/
}
