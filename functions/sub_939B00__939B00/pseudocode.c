char __cdecl sub_939B00(unsigned __int8 *a1, int a2)
{
  unsigned __int8 v2; // al
  unsigned __int8 *v3; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // eax

  v2 = a1[2] - 1; /*0x939b07*/
  a1[2] = v2; /*0x939b09*/
  *(_DWORD *)&a1[8 * a2 + 4] = *(_DWORD *)&a1[8 * v2 + 4]; /*0x939b18*/
  *(_DWORD *)&a1[8 * a2 + 8] = *(_DWORD *)&a1[8 * v2 + 8]; /*0x939b20*/
  v3 = &a1[8 * a1[2]]; /*0x939b28*/
  v4 = v3 + 4; /*0x939b2b*/
  v5 = v3 + 0xC; /*0x939b2e*/
  v6 = (a1[1] + *a1 - 1) >> 1; /*0x939b3d*/
  if ( v6 >= 0 ) /*0x939b41*/
  {
    v7 = v6 + 1; /*0x939b43*/
    do /*0x939b4f*/
    {
      *v4++ = *v5++; /*0x939b46*/
      --v7; /*0x939b4e*/
    }
    while ( v7 ); /*0x939b4f*/
  }
  return sub_9399E0(a1); /*0x939b51*/
}
