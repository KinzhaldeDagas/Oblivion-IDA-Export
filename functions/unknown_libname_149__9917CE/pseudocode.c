unsigned int __usercall unknown_libname_149@<eax>(char a1@<dl>, __int128 a2, int a3, int a4, __int128 a5)
{
  unsigned int result; // eax
  int v6; // ecx
  double v7; // st7
  __int16 v8; // fps
  double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  __int16 v13; // fps

  result = *(_DWORD *)((char *)&a2 + 6) ^ 0x700; /*0x9917d5*/
  if ( ((*(_DWORD *)((char *)&a2 + 6) ^ 0x700) & 0x700) == 0 ) /*0x9917df*/
  {
    result = (result >> 0xB) & 0xF; /*0x9917e8*/
    if ( byte_B319FC[result] ) /*0x9917eb*/
    {
      result = *(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000; /*0x9917fc*/
      if ( (*(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000) != 0x7FFF0000 ) /*0x991806*/
      {
        result = *(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000; /*0x991810*/
        if ( (*(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000) != 0 && result != 0x7FFF0000 ) /*0x991820*/
        {
          result = 2 * DWORD1(a5); /*0x99182a*/
          if ( !(2 * DWORD1(a5)) ) /*0x99182a*/
          {
            result = 2 * DWORD1(a2); /*0x991836*/
            if ( !(2 * DWORD1(a2)) ) /*0x991836*/
            {
              if ( (WORD4(a5) & 0x7FFFu) > (WORD4(a2) & 0x7FFFu) + 0x3F ) /*0x991856*/
              {
                v6 = ((BYTE8(a5) - BYTE8(a2)) & 0x3F | 0x20) + 1; /*0x9918f9*/
                v7 = fabs(*(long double *)&a2); /*0x991918*/
                v9 = fabs(*(long double *)&a5); /*0x99191e*/
                do /*0x99193a*/
                {
                  v10 = v9 < v7; /*0x991920*/
                  v11 = 0; /*0x991920*/
                  v12 = v9 == v7; /*0x991920*/
                  result = v8 & 0x100; /*0x991924*/
                  if ( (v8 & 0x100) == 0 ) /*0x991929*/
                    v9 = v9 - v7; /*0x99192b*/
                  v7 = v7 * dbl_B31A2C; /*0x991935*/
                  --v6; /*0x991937*/
                }
                while ( v6 ); /*0x99193a*/
              }
              else
              {
                while ( 1 ) /*0x991861*/
                {
                  result = (WORD4(a2) & 0x7FFF) + 0xA; /*0x991861*/
                  if ( (int)((WORD4(a5) & 0x7FFF) - result) < 0 ) /*0x991870*/
                    break; /*0x991870*/
                  *(double *)&a5 = __FPREM__(*(long double *)&a5, *(long double *)&a2); /*0x9918ae*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (a1 & 3) != 0 ) /*0x991978*/
  {
    __asm { fnstenv [esp+28h+var_28] } /*0x9919bb*/
    __asm { fldenv  [esp+28h+var_28] }
    return v13 & 0x4300; /*0x9919b3*/
  }
  return result; /*0x9919d1*/
}
