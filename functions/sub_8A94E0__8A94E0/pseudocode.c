void __cdecl sub_8A94E0(int a1)
{
  double v1; // st7
  double v2; // st6

  if ( a1 ) /*0x8a94e6*/
  {
    v1 = *(float *)(a1 + 0x24); /*0x8a94e8*/
    *(_WORD *)(a1 + 6) = 1; /*0x8a94eb*/
    v2 = *(float *)&SrcStr; /*0x8a94f1*/
    *(_DWORD *)a1 = &off_A97984; /*0x8a94f7*/
    if ( v2 == v1 ) /*0x8a9504*/
      *(_DWORD *)(a1 + 0x24) = 0x7F7FFFFF; /*0x8a9506*/
  }
}
