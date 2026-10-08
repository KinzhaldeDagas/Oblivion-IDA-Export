int __thiscall sub_6E7FD0(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 4); /*0x6e7fd0*/
  if ( result ) /*0x6e7fd5*/
    return *(_DWORD *)(result + 8); /*0x6e7fda*/
  return result; /*0x6e7fd7*/
}
