void __cdecl sub_5573D0(int a1, int a2)
{
  int v2; // edi
  unsigned int *v3; // esi

  v2 = a1; /*0x5573d6*/
  if ( a1 != a2 ) /*0x5573dc*/
  {
    v3 = (unsigned int *)(a1 + 0x20); /*0x5573e0*/
    do /*0x557423*/
    {
      if ( *v3 ) /*0x5573e5*/
        FormHeapFree(*v3); /*0x5573ec*/
      *v3 = 0; /*0x5573f4*/
      v3[1] = 0; /*0x5573f6*/
      v3[2] = 0; /*0x5573f9*/
      if ( v3[0xFFFFFFFE] >= 0x10 ) /*0x557400*/
        FormHeapFree(v3[0xFFFFFFF9]); /*0x557406*/
      v3[0xFFFFFFFE] = 0xF; /*0x55740e*/
      v3[0xFFFFFFFD] = 0; /*0x557415*/
      *((_BYTE *)v3 + 0xFFFFFFE4) = 0; /*0x557418*/
      v2 += 0x2C; /*0x55741b*/
      v3 += 0xB; /*0x55741e*/
    }
    while ( v2 != a2 ); /*0x557423*/
  }
}
