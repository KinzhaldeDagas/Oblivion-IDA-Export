void __stdcall sub_862AD0(NiD3DPassVtbl **a1, signed int a2, int a3)
{
  if ( a2 >= 0x147 || Double_To_SInt32(flt_B46FDC + flt_B46FD8) > dword_B2DD00 )
    sub_7AEC60(a1, *(NiD3DPixelShader **)(4 * a3 + 0xB46ED8));
  else
    sub_7AEC60(a1, *(NiD3DPixelShader **)(4 * a3 + 0xB46C20));
}
