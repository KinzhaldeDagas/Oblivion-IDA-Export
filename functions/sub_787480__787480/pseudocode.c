// Computes projected self-shadow texcoords when CSpeedTreeRT has projected shadow data.
void __thiscall CSpeedTreeRT__ComputeSelfShadowTexCoords(OB_CSpeedTreeRT_010201A0 *this)
{
  OB_CIndexedGeometry_010201A0 *branchGeometry; // ebx
  OB_CProjectedShadow_010201A0 *projectedShadow; // edi
  OB_STreeExtents_010201A0 *treeSizeBounds; // eax
  double v5; // st7
  OB_CSpeedTreeRT_SEmbeddedTexCoords *embeddedTexcoords; // eax
  double v7; // rt0
  float x; // ebp
  float radius; // [esp+18h] [ebp-28h]
  OB_stVec3_010201A0 other; // [esp+1Ch] [ebp-24h] BYREF
  OB_stVec3_010201A0 v11; // [esp+28h] [ebp-18h] BYREF
  float v12; // [esp+34h] [ebp-Ch]
  float v13; // [esp+38h] [ebp-8h]
  float v14; // [esp+3Ch] [ebp-4h]

  branchGeometry = this->branchGeometry; /*0x787488*/
  if ( branchGeometry ) /*0x78748e*/
  {
    if ( this->frondGeometry ) /*0x787494*/
    {
      projectedShadow = this->projectedShadow; /*0x78749e*/
      if ( projectedShadow ) /*0x7874a3*/
      {
        treeSizeBounds = this->treeSizeBounds; /*0x7874a9*/
        v11.x = treeSizeBounds->min.x; /*0x7874b2*/
        v11.y = treeSizeBounds->min.y; /*0x7874b9*/
        v11.z = treeSizeBounds->min.z; /*0x7874c0*/
        other.x = treeSizeBounds->max.x; /*0x7874c7*/
        other.y = treeSizeBounds->max.y; /*0x7874ce*/
        other.z = treeSizeBounds->max.z; /*0x7874da*/
        v5 = OB_stVec3_DistanceApprox_010201A0(&v11, &other); /*0x7874de*/
        embeddedTexcoords = this->embeddedTexcoords; /*0x7874eb*/
        v7 = dbl_A2FAA0; /*0x7874f0*/
        radius = v5 * v7; /*0x7874f2*/
        v12 = other.x + v11.x; /*0x7874fe*/
        v13 = v11.y + other.y; /*0x78750a*/
        v14 = other.z + v11.z; /*0x787516*/
        other.x = v12 * v7; /*0x787520*/
        x = other.x; /*0x787524*/
        other.y = v13 * v7; /*0x78752e*/
        other.z = v7 * v14; /*0x78753a*/
        if ( embeddedTexcoords ) /*0x787546*/
        {
          OB_CProjectedShadow_ComputeTexCoords_010201A0( /*0x787560*/
            projectedShadow,
            branchGeometry,
            other.x,
            other.y,
            other.z,
            radius,
            embeddedTexcoords->billboardTexcoords8);
          OB_CProjectedShadow_ComputeTexCoords_010201A0( /*0x78756c*/
            this->projectedShadow,
            this->frondGeometry,
            x,
            other.y,
            other.z,
            radius,
            this->embeddedTexcoords->billboardTexcoords8);
        }
        else
        {
          OB_CProjectedShadow_ComputeTexCoords_010201A0( /*0x787584*/
            projectedShadow,
            branchGeometry,
            other.x,
            other.y,
            other.z,
            radius,
            0);
          OB_CProjectedShadow_ComputeTexCoords_010201A0( /*0x7875af*/
            this->projectedShadow,
            this->frondGeometry,
            x,
            other.y,
            other.z,
            radius,
            0);
        }
      }
    }
  }
}
