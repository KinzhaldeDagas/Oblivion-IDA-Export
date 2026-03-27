_DWORD *__cdecl sub_7841C0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax
  int v5; // esi

  v3 = a2;
  for ( result = a3; v3 != a1; result[5] = v3[5] )
  {
    v5 = v3[0xFFFFFFFA];
    v3 += 0xFFFFFFFA;
    result[0xFFFFFFFA] = v5;
    result += 0xFFFFFFFA;
    result[1] = v3[1];
    result[2] = v3[2];
    result[3] = v3[3];
    result[4] = v3[4];
  }
  return result;
}
