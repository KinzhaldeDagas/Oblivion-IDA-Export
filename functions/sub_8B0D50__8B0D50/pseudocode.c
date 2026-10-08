int __thiscall sub_8B0D50(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *v4; // ecx

  v2 = *(this + 2); /*0x8b0d54*/
  result = a2 + 1; /*0x8b0d57*/
  if ( a2 + 1 <= v2 ) /*0x8b0d5a*/
  {
    v4 = (_DWORD *)(*this + 4 * result); /*0x8b0d5e*/
    do /*0x8b0d6c*/
    {
      if ( *v4 ) /*0x8b0d61*/
        break; /*0x8b0d64*/
      ++result; /*0x8b0d66*/
      ++v4; /*0x8b0d67*/
    }
    while ( result <= v2 ); /*0x8b0d6c*/
  }
  return result; /*0x8b0d6e*/
}
