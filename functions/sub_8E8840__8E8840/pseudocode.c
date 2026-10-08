int __thiscall sub_8E8840(_DWORD *this, int a2)
{
  int result; // eax

  result = a2 + 1; /*0x8e8847*/
  if ( a2 + 1 >= *(this + 5) ) /*0x8e884a*/
    return 0xFFFFFFFF; /*0x8e884c*/
  return result; /*0x8e884f*/
}
