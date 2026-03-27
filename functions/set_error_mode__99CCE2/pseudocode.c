int __cdecl _set_error_mode(int Mode)
{
  int v1; // ebx
  int v2; // edi
  int result; // eax

  if ( Mode >= 0 )
  {
    if ( Mode <= 2 )
    {
      result = dword_BA9E00;
      dword_BA9E00 = Mode;
      return result;
    }
    if ( Mode == 3 )
      return dword_BA9E00;
  }
  *_errno() = 0x16;
  _invalid_parameter(v1, v2, 0);
  return 0xFFFFFFFF;
}
