double __thiscall sub_5234A0(char *this)
{
  char *v1; // esi
  float **v2; // eax
  float *v3; // edi
  float v5; // [esp+4h] [ebp-4h]

  v1 = this + 0x3C; /*0x5234a4*/
  v5 = 1.0; /*0x5234a7*/
  if ( this != (char *)0xFFFFFFC4 ) /*0x5234ad*/
  {
    do /*0x5234dc*/
    {
      v2 = *(float ***)v1; /*0x5234b0*/
      if ( !*(_DWORD *)v1 ) /*0x5234b0*/
        break; /*0x5234b4*/
      v3 = *v2; /*0x5234b6*/
      if ( v5 < sub_51F0A0(*v2) ) /*0x5234ca*/
        v5 = sub_51F0A0(v3); /*0x5234d3*/
      v1 = *((char **)v1 + 1); /*0x5234d7*/
    }
    while ( v1 ); /*0x5234dc*/
  }
  return v5; /*0x5234e3*/
}
