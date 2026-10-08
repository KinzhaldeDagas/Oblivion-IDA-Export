// Compute this light's influence score at a point, excluding the supplied source and +0xF4 projector mode. NiPointLight sources use 1-(distance/range)^2 falloff, multiplied by the maximum light color component.
float __thiscall ShadowSceneLight_ComputePointInfluenceScore(
        ShadowSceneLight_DecodedLayout *self,
        float x,
        float y,
        float z,
        void *excludedBackingLight)
{
  float *backingLight_100; // eax
  bool v7; // zf
  float v8; // ecx
  float v9; // edx
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st6
  double v14; // st7
  float v17; // [esp+4h] [ebp-28h]
  float v18; // [esp+8h] [ebp-24h]
  float v19; // [esp+Ch] [ebp-20h]
  float v20; // [esp+10h] [ebp-1Ch]
  float v21; // [esp+14h] [ebp-18h]
  float v22; // [esp+18h] [ebp-14h]
  float v23; // [esp+1Ch] [ebp-10h]
  float v24; // [esp+20h] [ebp-Ch]
  float excludedBackingLightc; // [esp+3Ch] [ebp+10h]
  float excludedBackingLightd; // [esp+3Ch] [ebp+10h]
  float excludedBackingLighta; // [esp+3Ch] [ebp+10h]
  float excludedBackingLightb; // [esp+3Ch] [ebp+10h]
  float excludedBackingLighte; // [esp+3Ch] [ebp+10h]
  float excludedBackingLightf; // [esp+3Ch] [ebp+10h]

  backingLight_100 = (float *)self->backingLight_100; /*0x7d31b6*/
  if ( backingLight_100 == excludedBackingLight || self->perSourceProjectorMode_F4 == 1 ) /*0x7d31cd*/
    return 0.0; /*0x7d335a*/
  v7 = self->backingIsNiPointLight_FC == 0;     // When +0xFC says the backing source is a NiPointLight, apply native point-distance/range attenuation to the contribution score. /*0x7d31d3*/
  v17 = backingLight_100[0x3E]; /*0x7d31e6*/
  v18 = backingLight_100[0x22]; /*0x7d31f2*/
  v19 = backingLight_100[0x23]; /*0x7d31fc*/
  v20 = backingLight_100[0x24]; /*0x7d3206*/
  v8 = backingLight_100[0x3C]; /*0x7d320a*/
  v24 = backingLight_100[0x3B]; /*0x7d3210*/
  v9 = backingLight_100[0x3D]; /*0x7d3214*/
  self->cameraRelativeScore_D0 = 1.0; /*0x7d321a*/
  if ( !v7 ) /*0x7d3228*/
  {
    v21 = x - v18; /*0x7d3236*/
    v22 = y - v19; /*0x7d3242*/
    v23 = z - v20; /*0x7d324e*/
    excludedBackingLightc = v22 * v22 + v21 * v21 + v23 * v23; /*0x7d326e*/
    excludedBackingLightd = sqrt(excludedBackingLightc); /*0x7d327b*/
    excludedBackingLighta = excludedBackingLightd / v17; /*0x7d3287*/
    v10 = excludedBackingLighta; /*0x7d328b*/
    if ( excludedBackingLighta < 0.0 ) /*0x7d329a*/
      excludedBackingLighta = 0.0; /*0x7d329c*/
    if ( excludedBackingLighta <= 1.0 ) /*0x7d32b9*/
    {
      if ( v10 >= 0.0 ) /*0x7d32d6*/
      {
        v12 = v10; /*0x7d32e8*/
        v11 = 1.0; /*0x7d32e8*/
      }
      else
      {
        v11 = 1.0; /*0x7d32da*/
        v12 = (float)0.0; /*0x7d32e0*/
      }
    }
    else
    {
      v11 = 1.0; /*0x7d32bb*/
      v12 = (float)1.0; /*0x7d32c7*/
    }
    self->cameraRelativeScore_D0 = v11 - v12 * v12; /*0x7d32ee*/
  }
  if ( v9 >= (double)v8 ) /*0x7d3303*/
  {
    excludedBackingLightb = v9; /*0x7d330d*/
    v13 = v8; /*0x7d3311*/
    v14 = v9; /*0x7d3311*/
  }
  else
  {
    v13 = v8; /*0x7d3305*/
    v14 = v9; /*0x7d3305*/
    excludedBackingLightb = v8; /*0x7d3307*/
  }
  if ( excludedBackingLightb >= (double)v24 ) /*0x7d3322*/
  {
    if ( v13 <= v14 ) /*0x7d3333*/
      goto LABEL_19; /*0x7d3333*/
  }
  else
  {
    v13 = v24; /*0x7d3324*/
  }
  v14 = v13; /*0x7d3326*/
LABEL_19:
  excludedBackingLighte = v14; /*0x7d3337*/
  excludedBackingLightf = self->cameraRelativeScore_D0 * excludedBackingLighte; /*0x7d3345*/
  self->cameraRelativeScore_D0 = excludedBackingLightf; /*0x7d334d*/
  return excludedBackingLightf; /*0x7d3353*/
}
