int __cdecl _get_osfhandle(int a1)
{
  int v1; // ebx
  int v2; // edi
  int v4; // eax

  if ( a1 == 0xFFFFFFFE )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return 0xFFFFFFFF;
  }
  else if ( a1 >= 0 && a1 < uNumber && (v4 = dword_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F), (*(_BYTE *)(v4 + 4) & 1) != 0) )
  {
    return *(_DWORD *)v4;
  }
  else
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter(v1, v2, 0);
    return 0xFFFFFFFF;
  }
}
