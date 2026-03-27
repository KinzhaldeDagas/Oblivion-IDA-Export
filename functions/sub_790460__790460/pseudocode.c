_DWORD *__cdecl sub_790460(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 3 )
  {
    *result = *a3;
    result[1] = a3[1];
    result[2] = a3[2];
  }
  return result;
}
