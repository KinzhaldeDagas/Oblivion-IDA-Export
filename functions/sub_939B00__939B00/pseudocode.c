char __cdecl sub_939B00(unsigned __int8 *a1, int a2)
{
  unsigned __int8 v2; // al
  unsigned __int8 *v3; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // eax

  v2 = a1[2] - 1;
  a1[2] = v2;
  *(_DWORD *)&a1[8 * a2 + 4] = *(_DWORD *)&a1[8 * v2 + 4];
  *(_DWORD *)&a1[8 * a2 + 8] = *(_DWORD *)&a1[8 * v2 + 8];
  v3 = &a1[8 * a1[2]];
  v4 = v3 + 4;
  v5 = v3 + 0xC;
  v6 = (a1[1] + *a1 - 1) >> 1;
  if ( v6 >= 0 )
  {
    v7 = v6 + 1;
    do
    {
      *v4++ = *v5++;
      --v7;
    }
    while ( v7 );
  }
  return sub_9399E0(a1);
}
