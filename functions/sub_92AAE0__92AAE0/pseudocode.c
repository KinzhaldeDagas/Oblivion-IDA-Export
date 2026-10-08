int __thiscall sub_92AAE0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2 + 1; /*0x92aaed*/
  if ( a2 + 1 >= *(_DWORD *)(*(this + 4) + 0x18) + *(_DWORD *)(*(this + 4) + 0x24) ) /*0x92aaf0*/
    return 0xFFFFFFFF; /*0x92aaf2*/
  return result; /*0x92aaf5*/
}
