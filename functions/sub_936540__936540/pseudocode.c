signed int __usercall sub_936540@<eax>(int a1@<eax>, _DWORD *a2@<edi>)
{
  char v2; // si
  int v3; // eax
  int v4; // esi
  bool v5; // dl
  bool v6; // cl
  bool v7; // al
  char v8; // cl
  signed int result; // eax

  v2 = a1; /*0x936541*/
  v3 = a1 >> 4; /*0x936543*/
  v4 = v2 & 0xF; /*0x936555*/
  v5 = (v3 & 1) == 0; /*0x936558*/
  v6 = (v3 & 2) == 0; /*0x93655b*/
  v7 = (v3 & 4) == 0; /*0x93655e*/
  if ( v4 ) /*0x936563*/
  {
    if ( v4 == 1 ) /*0x93656d*/
      v8 = v5 + 2 * v7 + 4; /*0x93656f*/
    else
      v8 = v5 + 2 * v6 + 8; /*0x936575*/
  }
  else
  {
    v8 = v6 + 2 * v7; /*0x936565*/
  }
  result = 1 << (2 * v8); /*0x936580*/
  if ( ((2 * result) & *a2) == 0 ) /*0x936589*/
    *a2 += result; /*0x93658d*/
  return result; /*0x93658f*/
}
