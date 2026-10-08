void __cdecl fastzero_I(_OWORD *a1, unsigned int a2)
{
  unsigned int v3; // ecx

  v3 = a2 >> 7; /*0x98c786*/
  do /*0x98c7c5*/
  {
    *a1 = 0; /*0x98c797*/
    a1[1] = 0; /*0x98c79b*/
    a1[2] = 0; /*0x98c7a0*/
    a1[3] = 0; /*0x98c7a5*/
    a1[4] = 0; /*0x98c7aa*/
    a1[5] = 0; /*0x98c7af*/
    a1[6] = 0; /*0x98c7b4*/
    a1[7] = 0; /*0x98c7b9*/
    a1 += 8; /*0x98c7be*/
    --v3; /*0x98c7c4*/
  }
  while ( v3 ); /*0x98c7c5*/
}
