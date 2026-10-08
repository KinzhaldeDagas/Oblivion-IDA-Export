//
// DX11 ordinary refresh: selector<147 compares signed int(c6.x+c6.y) > signed DWORD B2DD00. Greater uses PS table B46ED8, otherwise B46C20; selected pointer at base+4*variantIndex. Do not use last-draw B46FD8/B46FDC for frame preparation. The supported producer yields exact bounded integer totals, so the conversion is exact; converter body and x87 fallback are separately attested.
void __stdcall sub_862AD0(NiD3DPassVtbl **a1, signed int a2, int a3)
{
  if ( a2 >= 0x147 /*0x862af1*/
    || Double_To_SInt32(OB_ShaderConstantStorage_010201A0[0x472] + OB_ShaderConstantStorage_010201A0[0x471]) > dword_B2DD00 )
  {
    NiD3DPass_SetPixelShader(a1, *(NiD3DPixelShader **)(4 * a3 + 0xB46ED8)); /*0x862b33*/
  }
  else
  {
    NiD3DPass_SetPixelShader(a1, *(NiD3DPixelShader **)(4 * a3 + 0xB46C20)); /*0x862b03*/
  }
}
