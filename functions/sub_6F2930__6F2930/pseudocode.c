_DWORD *__cdecl sub_6F2930(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v5 = *(_DWORD *)(v3 - 0x20);
    v3 -= 0x20;
    v4 += 0xFFFFFFF8;
    *v4 = v5;
    sub_414420((int)(v4 + 1), (_DWORD *)(v3 + 4), 0, 0xFFFFFFFF);
  }
  while ( v3 != a1 );
  return v4;
}
