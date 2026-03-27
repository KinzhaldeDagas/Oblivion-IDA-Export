void __cdecl sub_5570D0(int a1, int a2)
{
  int v2; // edi
  unsigned int *v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = (unsigned int *)(a1 + 0x24);
    do
    {
      if ( *v3 )
        FormHeapFree(*v3);
      *v3 = 0;
      v3[1] = 0;
      v3[2] = 0;
      if ( v3[0xFFFFFFFD] >= 0x10 )
        FormHeapFree(v3[0xFFFFFFF8]);
      v3[0xFFFFFFFD] = 0xF;
      v3[0xFFFFFFFC] = 0;
      *((_BYTE *)v3 + 0xFFFFFFE0) = 0;
      v2 += 0x30;
      v3 += 0xC;
    }
    while ( v2 != a2 );
  }
}
