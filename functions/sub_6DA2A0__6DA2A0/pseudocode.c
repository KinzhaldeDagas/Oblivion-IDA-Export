int __thiscall sub_6DA2A0(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 6); /*0x6da2a0*/
  if ( result ) /*0x6da2a5*/
    return *(_DWORD *)(result + 0xC); /*0x6da2aa*/
  return result; /*0x6da2a7*/
}
