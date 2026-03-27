_DWORD *__cdecl sub_6F28E0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
    v4[1] = v3[1];
    v4[2] = v3[2];
    v4[3] = v3[3];
    sub_414420((int)(v4 + 4), v3 + 4, 0, 0xFFFFFFFF);
    v3 += 0xB;
    v4 += 0xB;
  }
  while ( v3 != a2 );
  return v4;
}
