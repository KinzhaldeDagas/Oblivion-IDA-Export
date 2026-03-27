unsigned int __cdecl _free_osfhnd(int a1)
{
  int v1; // esi
  int v2; // eax

  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = 0x28 * (a1 & 0x1F), v2 = v1 + dword_BAAAC0[a1 >> 5], (*(_BYTE *)(v2 + 4) & 1) == 0)
    || *(_DWORD *)v2 == 0xFFFFFFFF )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return 0xFFFFFFFF;
  }
  else
  {
    if ( dword_B30DA8 == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, 0);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, 0);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, 0);
      }
    }
    *(_DWORD *)(v1 + dword_BAAAC0[a1 >> 5]) = 0xFFFFFFFF;
    return 0;
  }
}
