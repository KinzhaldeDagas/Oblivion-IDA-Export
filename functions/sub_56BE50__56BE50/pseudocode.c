// [Verified] BSTempEffectDecal_Ctor registers its DECAL_DATA payload with the BSShaderLightingProperty held at payload+0x48 by calling BSShaderLightingProperty_AddDecalData. The same property/payload pair is later unregistered by the destructor.
BSTempEffectDecalLayout_t *__thiscall BSTempEffectDecal_Ctor(
        BSTempEffectDecalLayout_t *this,
        TESObjectCELL *parentCell,
        float durationSeconds,
        DECAL_DATA *decalData,
        float *sourceData,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        float a13)
{
  float *unkVector_2C; // eax
  double v15; // st7
  __int64 v17; // [esp-20h] [ebp-12Ch]
  float v18; // [esp+18h] [ebp-F4h]
  float v19; // [esp+1Ch] [ebp-F0h]
  float v20; // [esp+20h] [ebp-ECh]
  float v21[3]; // [esp+24h] [ebp-E8h] BYREF
  float v22[3]; // [esp+30h] [ebp-DCh] BYREF
  float v23[4]; // [esp+3Ch] [ebp-D0h] BYREF
  float v24[9]; // [esp+4Ch] [ebp-C0h] BYREF
  NiMatrix33 right; // [esp+70h] [ebp-9Ch] BYREF
  NiMatrix33 v26; // [esp+94h] [ebp-78h] BYREF
  float v27[9]; // [esp+B8h] [ebp-54h] BYREF
  NiMatrix33 out; // [esp+DCh] [ebp-30h] BYREF
  int v29; // [esp+108h] [ebp-4h]

  LODWORD(v23[3]) = this; /*0x56be7f*/
  BSTempEffect_Constructor(&this->base, parentCell, durationSeconds); /*0x56be96*/
  v29 = 0; /*0x56bea5*/
  this->base.vtable = &BSTempEffectDecal::`vftable'; /*0x56beb0*/
  this->decalData_18 = decalData; /*0x56beb6*/
  sub_718A50(decalData->rotationMatrix33_08); /*0x56beb9*/
  qmemcpy(v27, sourceData + 0x19, sizeof(v27)); /*0x56bed4*/
  sub_7103C0(v27, v24); /*0x56bee2*/
  sub_7107A0(v24, 1u, (int)&a9, (int)v22); /*0x56befb*/
  v23[0] = a6 - sourceData[0x22]; /*0x56bf17*/
  HIDWORD(v17) = &g_zeroNiPoint3; /*0x56bf2e*/
  LODWORD(v17) = v24; /*0x56bf33*/
  v23[1] = a7 - sourceData[0x23]; /*0x56bf34*/
  v23[2] = a8 - sourceData[0x24]; /*0x56bf45*/
  sub_710580(v17, 1u, (int)v23, (int)v21); /*0x56bf49*/
  qmemcpy(&right, sub_6F9290((float *)&out, v22[0], v22[1], v22[2]), sizeof(right)); /*0x56bf8a*/
  NiMatrix33_InitRotationZ(&v26, a13);          // BloodOnDeath decode 2026-05-30: fallback decal applies a random rotation matrix from the final ctor arg; this is not a size/count control. /*0x56bf96*/
  qmemcpy( /*0x56bfc1*/
    this->decalData_18->rotationMatrix33_08,
    NiMAtrix33_Multiply(&v26, &out, &right),
    sizeof(this->decalData_18->rotationMatrix33_08));
  v18 = -v21[0]; /*0x56bfcc*/
  unkVector_2C = this->decalData_18->unkVector_2C; /*0x56bfda*/
  v19 = -v21[1]; /*0x56bfdd*/
  v15 = v21[2]; /*0x56bfe5*/
  *unkVector_2C = v18; /*0x56bfe9*/
  unkVector_2C[1] = v19; /*0x56bfed*/
  v20 = -v15; /*0x56bff0*/
  unkVector_2C[2] = v20; /*0x56bff8*/
  BSShaderLightingProperty_AddDecalData( /*0x56c002*/
    (BSShaderLightingPropertyLayout_t *)this->decalData_18->targetShaderProperty_48,
    this->decalData_18);
  return this; /*0x56c009*/
}
