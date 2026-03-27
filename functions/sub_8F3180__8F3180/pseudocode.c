void __cdecl sub_8F3180(int a1)
{
  if ( a1 )
  {
    *(_WORD *)(a1 + 6) = 1;
    *(_DWORD *)a1 = &off_A9B230;
    if ( flt_B2FDC4 < (double)*(float *)&SrcStr )
      flt_B2FDC4 = fConstant_1 - sub_8F22B0();
  }
}
