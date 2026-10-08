signed int __fastcall sub_9273D0(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // edx
  int *v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edi
  int v9; // edx

  v3 = 0; /*0x9273d6*/
  while ( v3 < *(_DWORD *)(a1 + 8) ) /*0x9273de*/
  {
    v4 = *(_DWORD *)(a1 + 4); /*0x9273e2*/
    v5 = *(int **)(v4 + 8 * v3); /*0x9273e5*/
    v6 = v4 + 8 * v3; /*0x9273ea*/
    if ( v5 == a3 || *(int **)(v6 + 4) == a3 ) /*0x9273f2*/
    {
      v7 = *(_DWORD *)(a1 + 8) - 1; /*0x9273fa*/
      *(_DWORD *)(a1 + 8) = v7; /*0x9273fb*/
      v8 = v7; /*0x9273fe*/
      v9 = *(_DWORD *)(a1 + 4); /*0x927400*/
      *(_DWORD *)(v9 + 8 * v3) = *(_DWORD *)(v9 + 8 * v8); /*0x927406*/
      *(_DWORD *)(v9 + 8 * v3 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x92740d*/
    }
    else
    {
      ++v3; /*0x9273f4*/
    }
  }
  return sub_8A6300(a3, a1 != 0x18 ? a1 : 0);
}
