// Verified geometric distance helper computes 2D Euclidean distance from a point to the axis-aligned square [quadOriginX,quadOriginX+quadWidth] x [quadOriginY,quadOriginY+quadWidth].
double __stdcall TESTerrainLODQuad_DistanceToXYBounds(
        float quadOriginX,
        float quadOriginY,
        float quadWidth,
        float pointX,
        float pointY)
{
  double v5; // st5
  double v6; // st5
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  float v13; // [esp+0h] [ebp-4h]
  float quadWidtha; // [esp+10h] [ebp+Ch]
  float quadWidthb; // [esp+10h] [ebp+Ch]

  v13 = 0.0; /*0x4ec873*/
  v5 = quadOriginX; /*0x4ec87a*/
  if ( quadOriginX >= (double)pointX ) /*0x4ec889*/
  {
    v7 = quadWidth; /*0x4ec8a5*/
    v13 = v5 - pointX; /*0x4ec8a7*/
  }
  else
  {
    v6 = v5 + quadWidth; /*0x4ec88d*/
    v7 = quadWidth; /*0x4ec88f*/
    if ( pointX > v6 ) /*0x4ec898*/
      v13 = pointX - v6; /*0x4ec89c*/
  }
  v8 = v7; /*0x4ec8b0*/
  quadWidtha = 0.0; /*0x4ec8b2*/
  v9 = pointY; /*0x4ec8b6*/
  v10 = quadOriginY; /*0x4ec8ba*/
  if ( quadOriginY >= (double)pointY ) /*0x4ec8c5*/
  {
    quadWidtha = v10 - v9; /*0x4ec8de*/
  }
  else
  {
    v11 = v8 + v10; /*0x4ec8c7*/
    if ( v9 > v11 ) /*0x4ec8d0*/
      quadWidtha = v9 - v11; /*0x4ec8d4*/
  }
  quadWidthb = quadWidtha * quadWidtha + v13 * v13; /*0x4ec8f7*/
  return (float)sqrt(quadWidthb); /*0x4ec90d*/
}
