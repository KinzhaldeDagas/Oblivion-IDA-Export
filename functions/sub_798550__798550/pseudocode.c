// Copies one embedded leaf texcoord block into stock CLeafGeometry.
// [Mesh leaves v130 2026-10-06] Cattail authored10002 quad=(.5,.25,0,.25,0,0,.5,0); native texture flip produces negative V including signed zero. v129 mesh conversion added1 only when interpolated V<0, mapping zero endpoint to atlas top and logging V range0..0.75. v130 detects the signed interval from card V endpoints and adds1 for every vertex, preserving bottom-left atlas V0.75..1. DDS base pixels equal authored TGA. Targeted signed-zero UV checks pass; v129 upright textured meshes user-confirmed, v130 final pixel correction pending.
void __thiscall OB_CLeafGeometry_SetTextureCoords_010201A0(
        OB_CLeafGeometry_010201A0 *this,
        unsigned int leafMapIndex,
        const float *texcoordBlock)
{
  double v5; // st7
  float *leafDiffuseTexcoords; // eax
  float *v7; // eax
  float *v8; // eax
  float texcoordBlocka; // [esp+Ch] [ebp+8h]

  if ( this->leafDiffuseTexcoords ) /*0x798553*/
  {
    if ( texcoordBlock ) /*0x798564*/
    {                                           // Embedded leaf UV ingestion queries the process-global texture flip. In stock Oblivion it is true, so every T/V component is multiplied by -1.0 before the direct and mirrored 0x20-byte records are published.
      if ( CSpeedTreeRT__GetTextureFlip() ) /*0x79856a*/
        v5 = kTerrainLODQuadRayDirectionZ;      // When texture flip is enabled, load the exact IEEE-754 -1.0 constant at 0xA30634; otherwise use +1.0. This is a sign inversion, not a 1-V transform. /*0x798573*/
      else
        v5 = 1.0; /*0x79857b*/
      leafDiffuseTexcoords = this->leafDiffuseTexcoords; /*0x79857d*/
      texcoordBlocka = v5; /*0x798580*/
      leafDiffuseTexcoords[0x10 * leafMapIndex] = *texcoordBlock;// Writes direct map record at leafDiffuseTexcoordTable + mapIndex*0x40. S values are copied; T values use the global sign. No map-index bounds check exists here. /*0x79858d*/
      v7 = &leafDiffuseTexcoords[0x10 * leafMapIndex + 6]; /*0x7985ae*/
      v7[0xFFFFFFFB] = texcoordBlock[1] * texcoordBlocka; /*0x7985b1*/
      v7[0xFFFFFFFC] = texcoordBlock[2]; /*0x7985b7*/
      v7[0xFFFFFFFD] = texcoordBlock[3] * texcoordBlocka; /*0x7985bf*/
      v7[0xFFFFFFFE] = texcoordBlock[4]; /*0x7985c5*/
      v7[0xFFFFFFFF] = texcoordBlock[5] * texcoordBlocka; /*0x7985cd*/
      *v7 = texcoordBlock[6]; /*0x7985d3*/
      v7[1] = texcoordBlocka * texcoordBlock[7]; /*0x7985da*/
      v8 = &this->leafDiffuseTexcoords[0x10 * leafMapIndex + 8];// Writes mirrored companion at mapIndex*0x40+0x20 by swapping S coordinates while keeping the already signed T ordering. /*0x7985e3*/
      *v8 = texcoordBlock[2]; /*0x7985e7*/
      v8 += 5; /*0x7985fa*/
      v8[0xFFFFFFFC] = texcoordBlock[1] * texcoordBlocka; /*0x7985fd*/
      ++v8; /*0x798600*/
      v8[0xFFFFFFFC] = *texcoordBlock; /*0x798605*/
      v8[0xFFFFFFFD] = texcoordBlock[3] * texcoordBlocka; /*0x79860d*/
      v8[0xFFFFFFFE] = texcoordBlock[6]; /*0x798613*/
      v8[0xFFFFFFFF] = texcoordBlock[5] * texcoordBlocka; /*0x79861b*/
      *v8 = texcoordBlock[4]; /*0x798621*/
      v8[1] = texcoordBlocka * texcoordBlock[7]; /*0x798626*/
    }
  }
}
