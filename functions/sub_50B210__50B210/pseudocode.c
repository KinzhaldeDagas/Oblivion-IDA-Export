char sub_50B210()
{
  int v3; // eax
  double v4; // st4
  double v5; // st4
  double v6; // st4
  float v8; // [esp+48h] [ebp-8h]
  float v9; // [esp+48h] [ebp-8h]
  float v10; // [esp+48h] [ebp-8h]
  float v11; // [esp+48h] [ebp-8h]
  float v12; // [esp+48h] [ebp-8h]
  float v13; // [esp+4Ch] [ebp-4h]
  float v14; // [esp+4Ch] [ebp-4h]
  float v15; // [esp+4Ch] [ebp-4h]
  float v16; // [esp+4Ch] [ebp-4h]

  Interface_ConsolePrint("Current HDR Params:");
  Interface_ConsolePrint("SISG:");
  if ( byte_B43074 )
  {
    v3 = dword_B43224;
    v8 = flt_B431FC;
  }
  else
  {
    v3 = dword_B43220;
    v8 = flt_B431F8;
  }
  Interface_ConsolePrint("    iNumBlurpasses: %d fBlurRadius: %f", v3, v8);
  if ( byte_B43074 )
  {
    v9 = flt_B431F4;
    v4 = flt_B431EC;
  }
  else
  {
    v9 = flt_B431F0;
    v4 = flt_B431E8;
  }
  v13 = v4;
  v10 = v9 * flt_B2C7A4;
  v14 = v13 / flt_B2C7A4;
  Interface_ConsolePrint("    fBrightClamp: %f fBrightScale: %f", v14, v10);
  Interface_ConsolePrint("SSP:");
  Interface_ConsolePrint("    fSunlightDimmer: %f Lum Ramp: %f", flt_B42F4C, flt_B2C73C);
  Interface_ConsolePrint("SHP:");
  if ( byte_B43074 )
  {
    v15 = flt_B4320C;
    v5 = flt_B43204;
  }
  else
  {
    v15 = flt_B43208;
    v5 = flt_B43200;
  }
  v11 = v5;
  Interface_ConsolePrint("    fEyeAdaptSpeed: %f fEmissiveHDRMult: %f", v11, v15);
  Interface_ConsolePrint("    fTreeDimmer: %f fGrassDimmer: %f", flt_B42EA8, flt_B42F44);
  if ( byte_B43074 )
  {
    v16 = flt_B4321C;
    v6 = flt_B43214;
  }
  else
  {
    v16 = flt_B43218;
    v6 = flt_B43210;
  }
  v12 = v6;
  Interface_ConsolePrint("    fUpperLUMClamp: %f fTargetLUM: %f", v12, v16);
  return 1;
}
