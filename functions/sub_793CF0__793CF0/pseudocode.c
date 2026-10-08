// Oblivion-local CLightingEngine constructor. Establishes the 0xB0 layout: branch/leaf/frond lighting methods, three 13-float OpenGL-style materials, leaf adjustment scalar, and static-lighting style.
OB_CLightingEngine_010201A0 *__thiscall OB_CLightingEngine_ctor_010201A0(OB_CLightingEngine_010201A0 *this)
{
  double v1; // st7
  double v3; // st6
  double v4; // st6
  float v5[13]; // [esp+4h] [ebp-9Ch] BYREF
  float v6[13]; // [esp+38h] [ebp-68h] BYREF
  float v7[13]; // [esp+6Ch] [ebp-34h] BYREF

  v1 = kHeadBodyNormalMatchRadius; /*0x793cf6*/
  this->leafLightingAdjustmentScalar = kHeadBodyNormalMatchRadius; /*0x793cfe*/
  v3 = flt_A524B0; /*0x793d03*/
  v6[0] = v3; /*0x793d0a*/
  v6[1] = v3; /*0x793d0f*/
  this->branchLightingMethod = 0; /*0x793d13*/
  v6[2] = v3; /*0x793d15*/
  this->leafLightingMethod = 0; /*0x793d19*/
  v4 = flt_A3D9A4; /*0x793d1c*/
  this->staticLightingStyle = 0; /*0x793d22*/
  v6[3] = v4; /*0x793d25*/
  this->frondLightingMethod = 0; /*0x793d29*/
  v6[4] = v4; /*0x793d2c*/
  v6[5] = v4; /*0x793d33*/
  v6[6] = 0.0; /*0x793d42*/
  v6[7] = 0.0; /*0x793d46*/
  v6[8] = 0.0; /*0x793d4a*/
  v6[9] = 0.0; /*0x793d4e*/
  v6[0xA] = 0.0; /*0x793d52*/
  v6[0xB] = 0.0; /*0x793d56*/
  v6[0xC] = 0.0; /*0x793d5a*/
  qmemcpy(&this->branchMaterial, v6, sizeof(this->branchMaterial)); /*0x793d60*/
  v5[0] = 1.0; /*0x793d62*/
  v5[1] = 1.0; /*0x793d66*/
  v5[2] = 1.0; /*0x793d6a*/
  v7[0] = 1.0; /*0x793d6e*/
  v7[1] = 1.0; /*0x793d72*/
  v7[2] = 1.0; /*0x793d76*/
  v5[3] = v1; /*0x793d7c*/
  v5[4] = v5[3]; /*0x793d80*/
  v5[5] = v5[3]; /*0x793d84*/
  v7[3] = v5[3]; /*0x793d88*/
  v7[4] = v5[3]; /*0x793d8f*/
  v7[5] = v5[3]; /*0x793d9b*/
  v5[6] = 0.0; /*0x793da6*/
  v5[7] = 0.0; /*0x793daa*/
  v5[8] = 0.0; /*0x793dae*/
  v5[9] = 0.0; /*0x793db2*/
  v5[0xA] = 0.0; /*0x793db6*/
  v5[0xB] = 0.0; /*0x793dba*/
  v5[0xC] = 0.0; /*0x793dbe*/
  qmemcpy(&this->leafMaterial, v5, sizeof(this->leafMaterial)); /*0x793dc2*/
  v7[6] = 0.0; /*0x793dc4*/
  v7[7] = 0.0; /*0x793dcb*/
  v7[8] = 0.0; /*0x793dd2*/
  v7[9] = 0.0; /*0x793dd9*/
  v7[0xA] = 0.0; /*0x793de0*/
  v7[0xB] = 0.0; /*0x793de7*/
  v7[0xC] = 0.0; /*0x793dee*/
  qmemcpy(&this->frondMaterial, v7, sizeof(this->frondMaterial)); /*0x793e01*/
  return this; /*0x793e04*/
}
