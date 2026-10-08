void __cdecl sub_5570D0(int a1, int a2)
{
  int v2; // edi
  unsigned int *v3; // esi

  v2 = a1; /*0x5570d6*/
  if ( a1 != a2 ) /*0x5570dc*/
  {
    v3 = (unsigned int *)(a1 + 0x24); /*0x5570e0*/
    do /*0x557123*/
    {
      if ( *v3 ) /*0x5570e5*/
        FormHeapFree(*v3); /*0x5570ec*/
      *v3 = 0; /*0x5570f4*/
      v3[1] = 0; /*0x5570f6*/
      v3[2] = 0; /*0x5570f9*/
      if ( v3[0xFFFFFFFD] >= 0x10 ) /*0x557100*/
        FormHeapFree(v3[0xFFFFFFF8]); /*0x557106*/
      v3[0xFFFFFFFD] = 0xF; /*0x55710e*/
      v3[0xFFFFFFFC] = 0; /*0x557115*/
      *((_BYTE *)v3 + 0xFFFFFFE0) = 0; /*0x557118*/
      v2 += 0x30; /*0x55711b*/
      v3 += 0xC; /*0x55711e*/
    }
    while ( v2 != a2 ); /*0x557123*/
  }
}
