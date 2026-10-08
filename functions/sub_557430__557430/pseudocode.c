void __cdecl sub_557430(int a1, int a2)
{
  int v2; // edi
  unsigned int *v3; // esi

  v2 = a1; /*0x557436*/
  if ( a1 != a2 ) /*0x55743c*/
  {
    v3 = (unsigned int *)(a1 + 8); /*0x557440*/
    do /*0x557464*/
    {
      if ( *v3 ) /*0x557445*/
        FormHeapFree(*v3); /*0x55744c*/
      *v3 = 0; /*0x557454*/
      v3[1] = 0; /*0x557456*/
      v3[2] = 0; /*0x557459*/
      v2 += 0x14; /*0x55745c*/
      v3 += 5; /*0x55745f*/
    }
    while ( v2 != a2 ); /*0x557464*/
  }
}
