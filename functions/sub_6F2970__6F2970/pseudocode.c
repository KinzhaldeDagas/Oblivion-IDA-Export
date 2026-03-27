_DWORD *__cdecl sub_6F2970(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v5 = v3[0xFFFFFFF5];
    v3 += 0xFFFFFFF5;
    v4 += 0xFFFFFFF5;
    *v4 = v5;
    v4[1] = v3[1];
    v4[2] = v3[2];
    v4[3] = v3[3];
    sub_414420((int)(v4 + 4), v3 + 4, 0, 0xFFFFFFFF);
  }
  while ( v3 != a1 );
  return v4;
}
