_DWORD *__cdecl sub_6EDB80(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_5520E0(v4, (int)a2, v3);
    sub_414420((int)(v4 + 6), v3 + 6, 0, 0xFFFFFFFF);
    v3 += 0xD;
    v4 += 0xD;
  }
  while ( v3 != a2 );
  return v4;
}
