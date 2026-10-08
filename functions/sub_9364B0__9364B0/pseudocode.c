int __usercall sub_9364B0@<eax>(int a1@<eax>, _DWORD *a2@<ebx>, int a3)
{
  int v3; // eax
  bool v4; // si
  bool v5; // dl
  int result; // eax
  int v7; // edi

  v3 = a1 >> 4; /*0x9364b4*/
  v4 = (v3 & 1) == 0; /*0x9364c8*/
  v5 = (v3 & 2) == 0; /*0x9364cb*/
  result = (v3 & 4) == 0; /*0x9364ce*/
  if ( a3 ) /*0x9364d4*/
  {
    v7 = 1 << (2 * (v5 + 2 * result)); /*0x9364e0*/
    if ( ((2 * v7) & *a2) == 0 ) /*0x9364e9*/
      *a2 += v7; /*0x9364ed*/
  }
  if ( a3 != 1 ) /*0x9364f6*/
  {
    result = 1 << (2 * (v4 + 2 * result + 4)); /*0x936503*/
    if ( ((2 * result) & *a2) == 0 ) /*0x93650c*/
      *a2 += result; /*0x936510*/
  }
  if ( a3 != 2 ) /*0x936515*/
  {
    result = 1 << (2 * (v4 + 2 * v5 + 8)); /*0x936522*/
    if ( ((2 * result) & *a2) == 0 ) /*0x93652b*/
      *a2 += result; /*0x93652f*/
  }
  return result; /*0x936531*/
}
