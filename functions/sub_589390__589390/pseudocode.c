_DWORD *__thiscall sub_589390(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this;
  if ( this )
  {
    while ( 1 )
    {
      v2 = result[4];
      if ( !v2 || !*(_DWORD *)(v2 + 0x10) )
        break;
      result = (_DWORD *)result[4];
    }
  }
  return result;
}
