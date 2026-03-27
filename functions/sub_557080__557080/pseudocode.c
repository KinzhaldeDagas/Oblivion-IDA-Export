void __cdecl sub_557080(int a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = (_DWORD *)(a1 + 0x28);
    do
    {
      if ( *v3 >= 0x10u )
        FormHeapFree(v3[0xFFFFFFFB]);
      *v3 = 0xF;
      v3[0xFFFFFFFF] = 0;
      *((_BYTE *)v3 + 0xFFFFFFEC) = 0;
      v2 += 0x2C;
      v3 += 0xB;
    }
    while ( v2 != a2 );
  }
}
