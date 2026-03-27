void __cdecl sub_557430(int a1, int a2)
{
  int v2; // edi
  unsigned int *v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = (unsigned int *)(a1 + 8);
    do
    {
      if ( *v3 )
        FormHeapFree(*v3);
      *v3 = 0;
      v3[1] = 0;
      v3[2] = 0;
      v2 += 0x14;
      v3 += 5;
    }
    while ( v2 != a2 );
  }
}
