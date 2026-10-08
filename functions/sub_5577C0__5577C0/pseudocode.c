int __cdecl sub_5577C0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  double v5; // st7

  v3 = a2; /*0x5577c6*/
  if ( a1 == a2 ) /*0x5577cc*/
    return a3; /*0x5577f4*/
  v4 = a3; /*0x5577cf*/
  do /*0x5577ec*/
  {
    v5 = *(float *)(v3 - 0x14); /*0x5577d3*/
    v3 -= 0x14; /*0x5577d6*/
    v4 -= 0x14; /*0x5577d9*/
    *(float *)v4 = v5; /*0x5577df*/
    sub_557470((int *)(v4 + 4), (int *)(v3 + 4)); /*0x5577e5*/
  }
  while ( v3 != a1 ); /*0x5577ec*/
  return v4; /*0x5577f1*/
}
