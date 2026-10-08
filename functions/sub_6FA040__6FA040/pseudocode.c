int __cdecl sub_6FA040(char *a1, unsigned __int8 a2)
{
  int v2; // esi
  int v4; // ebx

  v2 = 0; /*0x6fa045*/
  if ( a2 ) /*0x6fa049*/
  {
    v4 = a2; /*0x6fa051*/
    do /*0x6fa06e*/
    {
      v2 = tolower(*a1++) + 0x1003F * v2; /*0x6fa066*/
      --v4; /*0x6fa06b*/
    }
    while ( v4 ); /*0x6fa06e*/
  }
  return v2; /*0x6fa074*/
}
