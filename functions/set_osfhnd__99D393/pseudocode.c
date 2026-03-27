int __cdecl _set_osfhnd(int a1, HANDLE hHandle)
{
  int v2; // esi

  if ( a1 >= 0 && a1 < uNumber && (v2 = 0x28 * (a1 & 0x1F), *(_DWORD *)(v2 + dword_BAAAC0[a1 >> 5]) == 0xFFFFFFFF) )
  {
    if ( dword_B30DA8 == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, hHandle);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, hHandle);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, hHandle);
      }
    }
    *(_DWORD *)(v2 + dword_BAAAC0[a1 >> 5]) = hHandle;
    return 0;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return 0xFFFFFFFF;
  }
}
