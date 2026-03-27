int __thiscall sub_6B7B60(_DWORD *this)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = this; i; i = (_DWORD *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    result = sub_6B7BB0((_DWORD *)*i);
  }
  return result;
}
