int __cdecl _set_osfhnd(int a1, HANDLE hHandle)
{
  int v2; // esi

  if ( a1 >= 0 /*0x99d3bf*/
    && a1 < MEMORY[0xBAAAA0]
    && (v2 = 0x28 * (a1 & 0x1F), *(_DWORD *)(v2 + unk_BAAAC0[a1 >> 5]) == 0xFFFFFFFF) )
  {
    if ( dword_B30DA8 == 1 ) /*0x99d3cd*/
    {
      if ( a1 ) /*0x99d3d2*/
      {
        if ( a1 == 1 ) /*0x99d3d5*/
        {
          SetStdHandle(0xFFFFFFF5, hHandle); /*0x99d3e2*/
        }
        else if ( a1 == 2 ) /*0x99d3d8*/
        {
          SetStdHandle(0xFFFFFFF4, hHandle); /*0x99d3dd*/
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, hHandle); /*0x99d3e7*/
      }
    }
    *(_DWORD *)(v2 + unk_BAAAC0[a1 >> 5]) = hHandle; /*0x99d3ef*/
    return 0; /*0x99d3f2*/
  }
  else
  {
    *_errno() = 9; /*0x99d3fc*/
    *__doserrno() = 0; /*0x99d407*/
    return 0xFFFFFFFF; /*0x99d40a*/
  }
}
