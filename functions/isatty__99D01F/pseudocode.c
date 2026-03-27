int __cdecl _isatty(int a1)
{
  int v1; // ebx
  int v2; // edi

  if ( a1 == 0xFFFFFFFE )
  {
    *_errno() = 9;
    return 0;
  }
  else if ( a1 >= 0 && a1 < uNumber )
  {
    return *(_BYTE *)(dword_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 4) & 0x40;
  }
  else
  {
    *_errno() = 9;
    _invalid_parameter(v1, v2, 0);
    return 0;
  }
}
