// Oblivion Uniform::Density. Returns 1.0 for x in the inclusive interval [0,1], otherwise 0.0.
float __thiscall OB_Uniform_Density_010201A0(OB_Uniform_010201A0 *this, float x)
{
  if ( x < 0.0 || x > 1.0 ) /*0x78e9da*/
    return 0.0; /*0x78e9ef*/
  else
    return 1.0; /*0x78e9e2*/
}
