_BYTE *__cdecl sub_6EF2D0(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}
