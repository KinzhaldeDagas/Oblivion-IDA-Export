void __cdecl sub_8A94E0(int a1)
{
  double v1; // st7
  double v2; // st6

  if ( a1 )
  {
    v1 = *(float *)(a1 + 0x24);
    *(_WORD *)(a1 + 6) = 1;
    v2 = *(float *)&SrcStr;
    *(_DWORD *)a1 = &off_A97984;
    if ( v2 == v1 )
      *(_DWORD *)(a1 + 0x24) = 0x7F7FFFFF;
  }
}
