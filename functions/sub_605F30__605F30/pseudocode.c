int __thiscall sub_605F30(_DWORD *this)
{
  _DWORD *v1; // ecx
  int result; // eax

  v1 = this + 7;
  if ( !v1[1] && !*v1 )
    return 0;
  for ( result = 0; v1; v1 = (_DWORD *)v1[1] )
  {
    if ( *v1 )
      ++result;
  }
  return result;
}
