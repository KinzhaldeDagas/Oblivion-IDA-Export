BOOL __cdecl sub_6C0B00(float *a1, float *a2)
{
  BOOL result; // eax

  result = sub_6BE360(a1, a2); /*0x6c0b0c*/
  if ( result ) /*0x6c0b16*/
    return a2[5] == a1[5] /*0x6c0b69*/
        && a2[6] == a1[6]
        && a2[7] == a1[7]
        && sub_73B770(a1 + 8, a2 + 8)
        && sub_73B770(a1 + 0xC, a2 + 0xC);
  return result; /*0x6c0b18*/
}
