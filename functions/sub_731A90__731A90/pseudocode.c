void __cdecl sub_731A90(_DWORD *a1, int *a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int *v4; // edi
  int v5; // eax

  v2 = a1; /*0x731a91*/
  if ( a1 ) /*0x731a97*/
  {
    v3 = FormHeapAlloc(8u); /*0x731a9c*/
    *a2 = v3; /*0x731aa5*/
    *(_DWORD *)(v3 + 4) = a1[1]; /*0x731aaa*/
    v4 = (int *)*a2; /*0x731aad*/
    if ( *a1 ) /*0x731ab2*/
    {
      do /*0x731acd*/
      {
        v5 = FormHeapAlloc(8u); /*0x731ab9*/
        *v4 = v5; /*0x731abe*/
        v2 = (_DWORD *)*v2; /*0x731ac0*/
        v4 = (int *)v5; /*0x731ac2*/
        *(_DWORD *)(v5 + 4) = v2[1]; /*0x731aca*/
      }
      while ( *v2 ); /*0x731acd*/
    }
    *v4 = 0; /*0x731ad2*/
  }
}
