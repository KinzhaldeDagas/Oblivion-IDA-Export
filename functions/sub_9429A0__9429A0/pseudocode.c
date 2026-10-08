int __thiscall sub_9429A0(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *v4; // ecx

  v2 = *(this + 2); /*0x9429a4*/
  result = a2 + 1; /*0x9429a7*/
  if ( a2 + 1 <= v2 ) /*0x9429aa*/
  {
    v4 = (_DWORD *)(*this + 4 * result); /*0x9429ae*/
    do /*0x9429bc*/
    {
      if ( *v4 != 0xFFFFFFFF ) /*0x9429b4*/
        break; /*0x9429b4*/
      ++result; /*0x9429b6*/
      ++v4; /*0x9429b7*/
    }
    while ( result <= v2 ); /*0x9429bc*/
  }
  return result; /*0x9429be*/
}
