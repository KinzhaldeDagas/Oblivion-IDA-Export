_DWORD *__cdecl sub_6EDBD0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 += 0xFFFFFFF3;
    v4 += 0xFFFFFFF3;
    sub_5520E0(v4, (int)a1, v3);
    sub_414420((int)(v4 + 6), v3 + 6, 0, 0xFFFFFFFF);
  }
  while ( v3 != a1 );
  return v4;
}
