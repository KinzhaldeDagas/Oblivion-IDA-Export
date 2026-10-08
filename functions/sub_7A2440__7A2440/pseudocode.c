// CTreeEngine::ComputeLod-style helper. Computes LOD from global camera position against tree position and near/far LOD limits at +0x44/+0x40, clamps to [0,1], stores at +0x14.
float __thiscall CTreeEngine__ComputeLod(OB_CTreeEngine_010201A0 *this)
{
  double v1; // st4
  double v2; // st6
  double v3; // st4
  double v4; // st5
  double v5; // st6
  double v6; // st7
  double v7; // st7
  bool v9; // c0
  bool v10; // c3
  int v12; // [esp+0h] [ebp-4h]
  float v13; // [esp+0h] [ebp-4h]

  v1 = this->treePosition.x - CSpeedTreeRT__s_cameraPosition[0]; /*0x7a245c*/
  v2 = v1 * v1; /*0x7a245e*/
  v3 = this->treePosition.y - CSpeedTreeRT__s_cameraPosition[1]; /*0x7a2460*/
  v4 = v2; /*0x7a2464*/
  v5 = this->treePosition.z - CSpeedTreeRT__s_cameraPosition[2]; /*0x7a2464*/
  *(float *)&v12 = v3 * v3 + v4 + v5 * v5; /*0x7a246c*/
  v13 = 1.0 /*0x7a248e*/
      - (COERCE_FLOAT((v12 >> 1) + 0x1FC00000) - this->treeNearLodDistance)
      / (this->treeFarLodDistance - this->treeNearLodDistance);
  v6 = v13; /*0x7a2491*/
  this->currentLod = v13; /*0x7a2494*/
  if ( v13 <= 1.0 ) /*0x7a24a0*/
  {
    v9 = v6 > 0.0; /*0x7a24b0*/
    v10 = 0.0 == v6; /*0x7a24b0*/
    v7 = 0.0; /*0x7a24b4*/
    if ( v9 || v10 ) /*0x7a24b6*/
      return this->currentLod; /*0x7a24bd*/
  }
  else
  {
    v7 = 1.0; /*0x7a24a2*/
  }
  this->currentLod = v7; /*0x7a24a4*/
  return this->currentLod; /*0x7a24ab*/
}
