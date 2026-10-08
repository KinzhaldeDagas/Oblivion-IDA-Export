void __cdecl sub_54D9D0(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 4 ) /*0x54d9d6*/
  {
    if ( a1 ) /*0x54d9e3*/
    {
      *a1 = *a3; /*0x54d9e7*/
      a1[1] = a3[1]; /*0x54d9ec*/
      a1[2] = a3[2]; /*0x54d9f2*/
      a1[3] = a3[3]; /*0x54d9f8*/
    }
    --i; /*0x54d9fb*/
  }
}
