void __cdecl sub_6F12D0(float *a1, int a2, float *a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 2 ) /*0x6f12d6*/
  {
    if ( a1 ) /*0x6f12e2*/
    {
      *a1 = *a3; /*0x6f12e6*/
      a1[1] = a3[1]; /*0x6f12eb*/
    }
    --i; /*0x6f12ee*/
  }
}
