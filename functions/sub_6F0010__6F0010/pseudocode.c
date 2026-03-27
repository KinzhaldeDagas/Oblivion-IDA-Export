void __cdecl sub_6F0010(int a1, int a2, int a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 6 )
  {
    if ( a1 )
    {
      *(_DWORD *)a1 = *(_DWORD *)a3;
      *(_WORD *)(a1 + 4) = *(_WORD *)(a3 + 4);
    }
    --i;
  }
}
