_DWORD *__cdecl sub_6F28A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    *v4 = *v3;
    sub_414420((int)(v4 + 1), v3 + 1, 0, 0xFFFFFFFF);
    v3 += 8;
    v4 += 8;
  }
  while ( v3 != a2 );
  return v4;
}
