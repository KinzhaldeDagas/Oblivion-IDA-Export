_BYTE *__cdecl sub_6EF2D0(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *result; // eax

  for ( result = a1; result != a2; ++result ) /*0x6ef2da*/
    *result = *a3; /*0x6ef2e3*/
  return result; /*0x6ef2ed*/
}
