// OBLIVION AUTHORITY (2026-08-24): CBillboardLeaf::SetColor. If applyDimming is true, scales RGB by +0x18 colorScaleByte/255; clamps and packs to +0x14. Generated LOD0 call 0x791E5C passes true; lower-LOD merge call 0x7A91F8 passes false.
void __thiscall OB_CBillboardLeaf_SetColor_010201A0(
        OB_CBillboardLeaf_010201A0 *this,
        const OB_stVec3_010201A0 *color,
        bool applyDimming)
{
  double v3; // st6
  double v4; // st7
  float applyColorScale; // [esp+1Ch] [ebp+8h]
  OB_stVec3_010201A0 v8; // 0:^8.12

  v8 = *color; /*0x7a7f1e*/
  if ( applyDimming ) /*0x7a7f30*/
  {
    applyColorScale = (double)this->colorScaleByte / dbl_A3DDD8;// Generated-tree SetPackedColor path optionally multiplies RGB by CBillboardLeaf+0x18 colorScaleByte/255 before clamping and packing. This can produce a zero green byte. /*0x7a7f44*/
    v8.x = v8.x * applyColorScale; /*0x7a7f52*/
    v8.y = v8.y * applyColorScale; /*0x7a7f5c*/
    v8.z = applyColorScale * v8.z; /*0x7a7f64*/
  }
  if ( v8.x <= 1.0 ) /*0x7a7f77*/
  {
    if ( v8.x < 0.0 ) /*0x7a7f8c*/
      v8.x = 0.0; /*0x7a7f8e*/
    v3 = 1.0; /*0x7a7f92*/
    v4 = 0.0; /*0x7a7f92*/
  }
  else
  {
    v3 = 1.0; /*0x7a7f7b*/
    v4 = 0.0; /*0x7a7f7b*/
    v8.x = 1.0; /*0x7a7f7d*/
  }
  if ( v8.y <= v3 ) /*0x7a7f9f*/
  {
    if ( v8.y < v4 ) /*0x7a7fb0*/
      v8.y = v4; /*0x7a7fb4*/
  }
  else
  {
    v8.y = v3; /*0x7a7fa3*/
  }
  if ( v8.z <= v3 ) /*0x7a7fc5*/
  {
    if ( v8.z >= v4 ) /*0x7a7fda*/
      goto LABEL_16; /*0x7a7fda*/
  }
  else
  {
    v4 = v3; /*0x7a7fc9*/
  }
  v8.z = v4; /*0x7a7fcb*/
LABEL_16:
  this->packedColor = ((((0xFF00 - (unsigned int)(__int64)(v8.z * dbl_A8C6D8)) << 8) /*0x7a7fde*/
                      - (unsigned int)(__int64)(v8.y * dbl_A8C6D8)) << 8)
                    - (__int64)(dbl_A8C6D8 * v8.x);
}
/* Orphan comments:
Pack clamped RGB into CBillboardLeaf+0x14. Leaf geometry later uses byte +1 (green) as its scalar lighting/dimming fraction.
*/
