int __thiscall sub_67B710(_DWORD *this)
{
  _DWORD *v1; // ecx
  int result; // eax

  v1 = (_DWORD *)*this;
  for ( result = 0; v1; v1 = (_DWORD *)v1[1] )
  {
    if ( *v1 )
      ++result;
  }
  return result;
}
