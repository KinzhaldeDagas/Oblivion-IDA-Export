int __thiscall sub_67B710(_DWORD *this)
{
  _DWORD *v1; // ecx
  int result; // eax

  v1 = (_DWORD *)*this; /*0x67b710*/
  for ( result = 0; v1; v1 = (_DWORD *)v1[1] ) /*0x67b716*/
  {
    if ( *v1 ) /*0x67b718*/
      ++result; /*0x67b71d*/
  }
  return result; /*0x67b727*/
}
