void __cdecl sub_5522B0(int a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = (_DWORD *)(a1 + 0x30);
    do
    {
      if ( *v3 >= 0x10u )
        FormHeapFree(v3[0xFFFFFFFB]);
      *v3 = 0xF;
      v3[0xFFFFFFFF] = 0;
      *((_BYTE *)v3 + 0xFFFFFFEC) = 0;
      if ( v3[0xFFFFFFF7] )
        FormHeapFree(v3[0xFFFFFFF7]);
      v3[0xFFFFFFF7] = 0;
      v3[0xFFFFFFF8] = 0;
      v3[0xFFFFFFF9] = 0;
      v2 += 0x34;
      v3 += 0xD;
    }
    while ( v2 != a2 );
  }
}
