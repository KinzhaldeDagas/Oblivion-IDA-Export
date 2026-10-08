// Adjusts the single Oblivion billboard-leaf packed color for dominant-light shadow simulation.
void __thiscall OB_CBillboardLeaf_AdjustStaticLighting_010201A0(
        OB_CBillboardLeaf_010201A0 *this,
        const OB_stVec3_010201A0 *treeCenter,
        const OB_stVec3_010201A0 *lightPosition,
        float lightScalar)
{
  int v6; // edx
  int v7; // eax
  double v8; // rt2
  OB_stVec3_010201A0 referenceVector; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+14h] [ebp-Ch] BYREF
  float v11; // [esp+18h] [ebp-8h]
  float v12; // [esp+1Ch] [ebp-4h]
  float treeCentera; // [esp+24h] [ebp+4h]
  float treeCenterb; // [esp+24h] [ebp+4h]
  float treeCenterc; // [esp+24h] [ebp+4h]
  float treeCenterd; // [esp+24h] [ebp+4h]
  float treeCentere; // [esp+24h] [ebp+4h]
  float treeCenterf; // [esp+24h] [ebp+4h]
  float treeCenterg; // [esp+24h] [ebp+4h]
  float treeCenterh; // [esp+24h] [ebp+4h]
  float lightPositiona; // [esp+28h] [ebp+8h]

  v10 = this->position.x - treeCenter->x; /*0x7a80a0*/
  v11 = this->position.y - treeCenter->y; /*0x7a80aa*/
  v12 = this->position.z - treeCenter->z; /*0x7a80b4*/
  treeCentera = v11 * v11 + v10 * v10 + v12 * v12; /*0x7a80d4*/
  treeCenterb = sqrt(treeCentera); /*0x7a80e1*/
  treeCenterc = 1.0 / treeCenterb; /*0x7a80f1*/
  v10 = v10 * treeCenterc; /*0x7a8103*/
  v11 = v11 * treeCenterc; /*0x7a810d*/
  v12 = treeCenterc * v12; /*0x7a8115*/
  referenceVector.x = lightPosition->x - treeCenter->x; /*0x7a811d*/
  referenceVector.y = lightPosition->y - treeCenter->y; /*0x7a8127*/
  referenceVector.z = lightPosition->z - treeCenter->z; /*0x7a8131*/
  treeCenterd = referenceVector.y * referenceVector.y /*0x7a8151*/
              + referenceVector.x * referenceVector.x
              + referenceVector.z * referenceVector.z;
  treeCentere = sqrt(treeCenterd); /*0x7a815e*/
  treeCenterf = 1.0 / treeCentere; /*0x7a816a*/
  referenceVector.x = referenceVector.x * treeCenterf; /*0x7a817c*/
  referenceVector.y = referenceVector.y * treeCenterf; /*0x7a8186*/
  referenceVector.z = treeCenterf * referenceVector.z; /*0x7a8197*/
  treeCenterg = cos(OB_Vec3_AngleClamped01_010201A0(&v10, &referenceVector.x)); /*0x7a81a5*/
  v6 = BYTE1(this->packedColor); /*0x7a81b3*/
  v7 = BYTE2(this->packedColor); /*0x7a81bb*/
  treeCenterh = (treeCenterg + 1.0) * dbl_A2FAA0; /*0x7a81c7*/
  lightPositiona = (1.0 - lightScalar) * treeCenterh + lightScalar; /*0x7a81e8*/
  v8 = dbl_A3DDD8; /*0x7a81fc*/
  v10 = (double)LOBYTE(this->packedColor) / v8; /*0x7a81fe*/
  v11 = (double)v6 / v8; /*0x7a820c*/
  v12 = (double)v7 / v8; /*0x7a8216*/
  referenceVector.x = v10 * lightPositiona; /*0x7a8228*/
  referenceVector.y = v11 * lightPositiona; /*0x7a8232*/
  referenceVector.z = lightPositiona * v12; /*0x7a823a*/
  OB_CBillboardLeaf_SetColor_010201A0(this, &referenceVector, 1);// Static-shadow adjustment calls SetColor(...,true), multiplying decoded packed RGB by colorScaleByte/255 and quantizing again. This is the sole post-generation SetColor call that reapplies the scale. /*0x7a823e*/
}
