int __cdecl sub_5567D0(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax

  v3 = a1; /*0x5567d0*/
  for ( result = a3; v3 != a2; result += 6 ) /*0x5567de*/
  {
    if ( result ) /*0x5567e3*/
    {
      *(_DWORD *)result = *(_DWORD *)v3; /*0x5567e7*/
      *(_WORD *)(result + 4) = *(_WORD *)(v3 + 4); /*0x5567ed*/
    }
    v3 += 6; /*0x5567f1*/
  }
  return result; /*0x5567fc*/
}
