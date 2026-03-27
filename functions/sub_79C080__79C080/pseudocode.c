_DWORD *__cdecl sub_79C080(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v3 = a2;
  for ( result = a3; v3 != a1; v3[3] = v8 )
  {
    v5 = v3[0xFFFFFFFD];
    v6 = result[0xFFFFFFFD];
    v3 += 0xFFFFFFFC;
    result += 0xFFFFFFFC;
    result[1] = v5;
    v3[1] = v6;
    v7 = result[2];
    result[2] = v3[2];
    v3[2] = v7;
    v8 = result[3];
    result[3] = v3[3];
  }
  return result;
}
