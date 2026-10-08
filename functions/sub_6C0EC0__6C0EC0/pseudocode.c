void __cdecl sub_6C0EC0(float *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // esi
  float *v4; // eax
  int v5; // ebp
  float *v6; // esi

  v3 = a2; /*0x6c0ec1*/
  if ( a2 >= 2 ) /*0x6c0ec8*/
  {
    sub_6BD310((int)a1, a2, a3); /*0x6c0ed7*/
    sub_6C0C40(a1, a1, a1 + 0x10); /*0x6c0ee6*/
    if ( a2 - 1 > 1 ) /*0x6c0ef1*/
    {
      v4 = a1; /*0x6c0ef4*/
      v5 = a2 - 2; /*0x6c0ef6*/
      do /*0x6c0f17*/
      {
        v6 = v4 + 0x10; /*0x6c0f06*/
        sub_6C0C40(v4 + 0x10, v4, v4 + 0x20); /*0x6c0f0d*/
        --v5; /*0x6c0f12*/
        v4 = v6; /*0x6c0f15*/
      }
      while ( v5 ); /*0x6c0f17*/
      v3 = a2; /*0x6c0f19*/
    }
    sub_6C0C40(&a1[0x10 * a2 - 0x10], &a1[0x10 * v3 - 0x20], &a1[0x10 * a2 - 0x10]); /*0x6c0f2e*/
  }
}
