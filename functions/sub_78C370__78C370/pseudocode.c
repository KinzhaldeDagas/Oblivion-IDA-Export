// Computes static leaf lighting when lighting engine style at +0x38 requests it.
void __thiscall CSpeedTreeRT__ComputeLeafStaticLighting(OB_CSpeedTreeRT_010201A0 *this)
{
  OB_STreeExtents_010201A0 *treeSizeBounds; // eax
  double v2; // st6
  OB_CTreeEngine_010201A0 *treeEngine; // eax
  OB_CLightingEngine_010201A0 *lightingEngine; // ecx
  int v5; // [esp+0h] [ebp-68h] BYREF
  float x; // [esp+30h] [ebp-38h]
  float y; // [esp+34h] [ebp-34h]
  float z; // [esp+38h] [ebp-30h]
  OB_stVec3_010201A0 treeCenter; // [esp+3Ch] [ebp-2Ch] BYREF
  float v10; // [esp+4Ch] [ebp-1Ch]
  float v11; // [esp+50h] [ebp-18h]
  float v12; // [esp+54h] [ebp-14h]
  int *v13; // [esp+58h] [ebp-10h]
  int v14; // [esp+64h] [ebp-4h]

  v13 = &v5; /*0x78c398*/
  treeSizeBounds = this->treeSizeBounds; /*0x78c39b*/
  x = treeSizeBounds->min.x; /*0x78c3a0*/
  y = treeSizeBounds->min.y; /*0x78c3a6*/
  z = treeSizeBounds->min.z; /*0x78c3ac*/
  treeCenter.x = treeSizeBounds->max.x; /*0x78c3b2*/
  v2 = dbl_A2FAA0; /*0x78c3be*/
  treeCenter.y = treeSizeBounds->max.y; /*0x78c3c4*/
  treeCenter.z = treeSizeBounds->max.z; /*0x78c3ce*/
  treeEngine = this->treeEngine; /*0x78c3d1*/
  v12 = (treeCenter.x + x) * v2; /*0x78c3d3*/
  lightingEngine = this->lightingEngine; /*0x78c3d6*/
  v14 = 0; /*0x78c3dc*/
  v11 = (treeCenter.y + y) * v2; /*0x78c3e8*/
  v10 = v2 * (treeCenter.z + z); /*0x78c3f3*/
  treeCenter.x = v12; /*0x78c3f9*/
  treeCenter.y = v11; /*0x78c3ff*/
  treeCenter.z = v10; /*0x78c405*/
  OB_CLightingEngine_ComputeLeafStaticLighting_010201A0( /*0x78c41b*/
    lightingEngine,
    &treeCenter,
    treeEngine->leafLodVectors,
    LOWORD(treeEngine->?));
}
