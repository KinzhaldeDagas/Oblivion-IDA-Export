void __thiscall sub_780060(_DWORD *this)
{
  unsigned int v1; // esi
  _DWORD *v2; // edx
  _DWORD *v3; // eax

  v1 = 0; /*0x780061*/
  if ( dword_B28CB0 ) /*0x780063*/
  {
    v2 = this + 0x34B; /*0x78006b*/
    v3 = this + 0x24B; /*0x780071*/
    do /*0x7800d2*/
    {
      v3[0xFFFFFFFE] = v3[0xFFFFFFFD]; /*0x78007a*/
      *v3 = v3[0xFFFFFFFF]; /*0x780080*/
      v3[2] = v3[1]; /*0x780085*/
      v3[4] = v3[3]; /*0x78008b*/
      v3[6] = v3[5]; /*0x780091*/
      v3[8] = v3[7]; /*0x780097*/
      v3[0xA] = v3[9]; /*0x78009d*/
      v3[0xC] = v3[0xB]; /*0x7800a3*/
      v2[0xFFFFFFFE] = v2[0xFFFFFFFD]; /*0x7800a9*/
      *v2 = v2[0xFFFFFFFF]; /*0x7800af*/
      v2[2] = v2[1]; /*0x7800b4*/
      v2[4] = v2[3]; /*0x7800ba*/
      v2[6] = v2[5]; /*0x7800c0*/
      ++v1; /*0x7800c3*/
      v3 += 0x10; /*0x7800c6*/
      v2 += 0xA; /*0x7800c9*/
    }
    while ( v1 < dword_B28CB0 ); /*0x7800d2*/
  }
}
