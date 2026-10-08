int __thiscall sub_51F1D0(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  int *v4; // ecx
  int v5; // edx

  v2 = 0; /*0x51f1d1*/
  result = 0; /*0x51f1d3*/
  v4 = this + 0xF; /*0x51f1d5*/
  if ( v4 ) /*0x51f1d8*/
  {
    do /*0x51f1fc*/
    {
      v5 = v4[1]; /*0x51f1e0*/
      if ( !v5 && !*v4 ) /*0x51f1e7*/
        break; /*0x51f1e9*/
      if ( result ) /*0x51f1ed*/
        break; /*0x51f1ed*/
      if ( v2 == a2 ) /*0x51f1f1*/
        result = *v4; /*0x51f1f3*/
      v4 = (int *)v4[1]; /*0x51f1f5*/
      ++v2; /*0x51f1f7*/
    }
    while ( v5 ); /*0x51f1fc*/
  }
  return result; /*0x51f1ff*/
}
