int __cdecl sub_6F2E80(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_414420(v4, v3, 0, 0xFFFFFFFF);
    *(_DWORD *)(v4 + 0x1C) = v3[7];
    sub_6F2770((unsigned int *)(v4 + 0x20), (int)(v3 + 8));
    v3 += 0xC;
    v4 += 0x30;
  }
  while ( v3 != a2 );
  return v4;
}
