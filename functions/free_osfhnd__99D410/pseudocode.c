unsigned int __cdecl _free_osfhnd(int a1)
{
  int v1; // esi
  int v2; // eax

  if ( a1 < 0 /*0x99d446*/
    || a1 >= MEMORY[0xBAAAA0]
    || (v1 = 0x28 * (a1 & 0x1F), v2 = v1 + unk_BAAAC0[a1 >> 5], (*(_BYTE *)(v2 + 4) & 1) == 0)
    || *(_DWORD *)v2 == 0xFFFFFFFF )
  {
    *_errno() = 9; /*0x99d47d*/
    *__doserrno() = 0; /*0x99d488*/
    return 0xFFFFFFFF; /*0x99d48a*/
  }
  else
  {
    if ( dword_B30DA8 == 1 ) /*0x99d44f*/
    {
      if ( a1 ) /*0x99d453*/
      {
        if ( a1 == 1 ) /*0x99d456*/
        {
          SetStdHandle(0xFFFFFFF5, 0); /*0x99d463*/
        }
        else if ( a1 == 2 ) /*0x99d459*/
        {
          SetStdHandle(0xFFFFFFF4, 0); /*0x99d45e*/
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, 0); /*0x99d468*/
      }
    }
    *(_DWORD *)(v1 + unk_BAAAC0[a1 >> 5]) = 0xFFFFFFFF; /*0x99d470*/
    return 0; /*0x99d474*/
  }
}
