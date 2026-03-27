_WORD *__cdecl sub_794E30(_WORD *a1, _WORD *a2, _WORD *a3)
{
  _WORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}
