unsigned int __usercall unknown_libname_147@<eax>(char a1@<dl>, __int128 a2, int a3, int a4, __int128 a5)
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

  result = *(_DWORD *)((char *)&a2 + 6) ^ 0x700; /*0x99151d*/
  if ( ((*(_DWORD *)((char *)&a2 + 6) ^ 0x700) & 0x700) == 0 ) /*0x991527*/
  {
    result = (result >> 0xB) & 0xF; /*0x991530*/
    if ( byte_B319FC[result] ) /*0x991533*/
    {
      result = *(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000; /*0x991544*/
      if ( (*(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000) != 0x7FFF0000 ) /*0x99154e*/
      {
        result = *(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000; /*0x991558*/
        if ( (*(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000) != 0 && result != 0x7FFF0000 ) /*0x991568*/
        {
          result = 2 * DWORD1(a5); /*0x991572*/
          if ( !(2 * DWORD1(a5)) ) /*0x991572*/
          {
            result = 2 * DWORD1(a2); /*0x99157e*/
            if ( !(2 * DWORD1(a2)) ) /*0x99157e*/
            {
              if ( (WORD4(a5) & 0x7FFFu) > (WORD4(a2) & 0x7FFFu) + 0x3F ) /*0x99159e*/
              {
                v6 = ((BYTE8(a5) - BYTE8(a2)) & 0x3F | 0x20) + 1; /*0x991641*/
                v7 = fabs(*(long double *)&a2); /*0x991660*/
                v9 = fabs(*(long double *)&a5); /*0x991666*/
                do /*0x991682*/
                {
                  v10 = v9 < v7; /*0x991668*/
                  v11 = 0; /*0x991668*/
                  v12 = v9 == v7; /*0x991668*/
                  result = v8 & 0x100; /*0x99166c*/
                  if ( (v8 & 0x100) == 0 ) /*0x991671*/
                    v9 = v9 - v7; /*0x991673*/
                  v7 = v7 * dbl_B31A2C; /*0x99167d*/
                  --v6; /*0x99167f*/
                }
                while ( v6 ); /*0x991682*/
              }
              else
              {
                while ( 1 ) /*0x9915a9*/
                {
                  result = (WORD4(a2) & 0x7FFF) + 0xA; /*0x9915a9*/
                  if ( (int)((WORD4(a5) & 0x7FFF) - result) < 0 ) /*0x9915b8*/
                    break; /*0x9915b8*/
                  *(double *)&a5 = __FPREM__(*(long double *)&a5, *(long double *)&a2); /*0x9915f6*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (a1 & 3) != 0 ) /*0x9916c0*/
  {
    __asm { fnstenv [esp+28h+var_28] } /*0x991703*/
    __asm { fldenv  [esp+28h+var_28] }
    return v13 & 0x4300; /*0x9916fb*/
  }
  return result; /*0x991719*/
}
