void __cdecl sub_6F1290(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 3 ) /*0x6f1296*/
  {
    if ( a1 ) /*0x6f12a3*/
    {
      *a1 = *a3; /*0x6f12a7*/
      a1[1] = a3[1]; /*0x6f12ac*/
      a1[2] = a3[2]; /*0x6f12b2*/
    }
    --i; /*0x6f12b5*/
  }
}
