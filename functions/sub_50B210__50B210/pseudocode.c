char OB_Command_PrintHDRParam_Execute_010201A0()
{
  int v0; // eax
  double v1; // st7
  double v2; // st7
  double v3; // st7
  float v5; // [esp+48h] [ebp-8h]
  float v6; // [esp+48h] [ebp-8h]
  float v7; // [esp+48h] [ebp-8h]
  float v8; // [esp+48h] [ebp-8h]
  float v9; // [esp+48h] [ebp-8h]
  float v10; // [esp+4Ch] [ebp-4h]
  float v11; // [esp+4Ch] [ebp-4h]
  float v12; // [esp+4Ch] [ebp-4h]
  float v13; // [esp+4Ch] [ebp-4h]

  Interface_ConsolePrint("Current HDR Params:"); /*0x50b21e*/
  Interface_ConsolePrint("SISG:"); /*0x50b228*/
  if ( OB_RendererGlobalState_010201A0[0x1DB] ) /*0x50b230*/
  {
    v0 = unk_B43224; /*0x50b23f*/
    v5 = unk_B431FC; /*0x50b244*/
  }
  else
  {
    v0 = unk_B43220; /*0x50b250*/
    v5 = unk_B431F8; /*0x50b255*/
  }
  Interface_ConsolePrint("    iNumBlurpasses: %d fBlurRadius: %f", v0, v5);
  if ( OB_RendererGlobalState_010201A0[0x1DB] ) /*0x50b271*/
  {
    v6 = unk_B431F4; /*0x50b280*/
    v1 = unk_B431EC; /*0x50b284*/
  }
  else
  {
    v6 = unk_B431F0; /*0x50b292*/
    v1 = unk_B431E8; /*0x50b296*/
  }
  v10 = v1; /*0x50b29c*/
  v7 = v6 * flt_B2C7A4; /*0x50b2b3*/
  v11 = v10 / flt_B2C7A4; /*0x50b2c3*/
  Interface_ConsolePrint("    fBrightClamp: %f fBrightScale: %f", v11, v7);
  Interface_ConsolePrint("SSP:");               // PrintHDRParam proves fSunlightDimmer (rendererGlobal+0xB3) is distinct from fTreeDimmer (rendererGlobal+0x0F). /*0x50b2dd*/
  Interface_ConsolePrint(
    "    fSunlightDimmer: %f Lum Ramp: %f",
    *(float *)&OB_RendererGlobalState_010201A0[0xB3],
    flt_B2C73C);
  Interface_ConsolePrint("SHP:"); /*0x50b307*/
  if ( OB_RendererGlobalState_010201A0[0x1DB] ) /*0x50b30f*/
  {
    v12 = unk_B4320C; /*0x50b31e*/
    v2 = unk_B43204; /*0x50b322*/
  }
  else
  {
    v12 = unk_B43208; /*0x50b330*/
    v2 = unk_B43200; /*0x50b334*/
  }
  v8 = v2; /*0x50b33a*/
  Interface_ConsolePrint("    fEyeAdaptSpeed: %f fEmissiveHDRMult: %f", v8, v12);
  Interface_ConsolePrint(
    "    fTreeDimmer: %f fGrassDimmer: %f",
    *(float *)&OB_RendererGlobalState_010201A0[0xF],
    *(float *)&OB_RendererGlobalState_010201A0[0xAB]);
  if ( OB_RendererGlobalState_010201A0[0x1DB] ) /*0x50b37d*/
  {
    v13 = unk_B4321C; /*0x50b38c*/
    v3 = unk_B43214; /*0x50b390*/
  }
  else
  {
    v13 = unk_B43218; /*0x50b39e*/
    v3 = unk_B43210; /*0x50b3a2*/
  }
  v9 = v3; /*0x50b3a8*/
  Interface_ConsolePrint("    fUpperLUMClamp: %f fTargetLUM: %f", v9, v13);
  return 1; /*0x50b3cd*/
}
