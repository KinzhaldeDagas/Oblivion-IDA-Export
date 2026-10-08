void __cdecl sub_8F3180(int a1)
{
  if ( a1 ) /*0x8f3186*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8f3188*/
    *(_DWORD *)a1 = &off_A9B230; /*0x8f318e*/
    if ( flt_B2FDC4 < (double)*(float *)&SrcStr ) /*0x8f31a5*/
      flt_B2FDC4 = fConstant_1 - sub_8F22B0(); /*0x8f31b2*/
  }
}
