void __cdecl sub_5573D0(int a1, int a2)
{
  int v2; // edi
  unsigned int *v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = (unsigned int *)(a1 + 0x20);
    do
    {
      if ( *v3 )
        FormHeapFree(*v3);
      *v3 = 0;
      v3[1] = 0;
      v3[2] = 0;
      if ( v3[0xFFFFFFFE] >= 0x10 )
        FormHeapFree(v3[0xFFFFFFF9]);
      v3[0xFFFFFFFE] = 0xF;
      v3[0xFFFFFFFD] = 0;
      *((_BYTE *)v3 + 0xFFFFFFE4) = 0;
      v2 += 0x2C;
      v3 += 0xB;
    }
    while ( v2 != a2 );
  }
}
