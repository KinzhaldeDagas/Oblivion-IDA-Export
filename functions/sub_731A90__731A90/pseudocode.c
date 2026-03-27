void __cdecl sub_731A90(_DWORD *a1, int *a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int *v4; // edi
  int v5; // eax

  v2 = a1;
  if ( a1 )
  {
    v3 = FormHeapAlloc(8u);
    *a2 = v3;
    *(_DWORD *)(v3 + 4) = a1[1];
    v4 = (int *)*a2;
    if ( *a1 )
    {
      do
      {
        v5 = FormHeapAlloc(8u);
        *v4 = v5;
        v2 = (_DWORD *)*v2;
        v4 = (int *)v5;
        *(_DWORD *)(v5 + 4) = v2[1];
      }
      while ( *v2 );
    }
    *v4 = 0;
  }
}
