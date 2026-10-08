// MoonSugarEffect decode: writes BlurShader globals (blend type, pass count, radius, alpha, tex size). Called by WinMain defaults, SetImageSpaceGlow, and SunDamage paths.
int __cdecl sub_7B4830(int a1, int a2, float a3, float a4, float a5, int a6)
{
  flt_B2C1EC = a3; /*0x7b483c*/
  flt_B2C2B0 = a4; /*0x7b484a*/
  dword_B2C1E4 = a1; /*0x7b4850*/
  dword_B2C1E8 = a2; /*0x7b4859*/
  flt_B2C2B4 = a5; /*0x7b485f*/
  dword_B2C2B8 = a6; /*0x7b4865*/
  return a1; /*0x7b486b*/
}
