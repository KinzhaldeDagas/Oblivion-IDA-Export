int __cdecl sub_557970(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1; /*0x557976*/
  if ( a1 == a2 ) /*0x55797c*/
    return a3; /*0x5579a3*/
  v4 = a3; /*0x55797f*/
  do /*0x55799b*/
  {
    *(float *)v4 = *(float *)v3; /*0x557989*/
    sub_557470((int *)(v4 + 4), (int *)(v3 + 4)); /*0x55798e*/
    v3 += 0x14; /*0x557993*/
    v4 += 0x14; /*0x557996*/
  }
  while ( v3 != a2 ); /*0x55799b*/
  return v4; /*0x5579a0*/
}
