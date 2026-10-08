// Verified (Oblivion): maps TESEffectShaderData fields into ParticleShaderProperty parameters and retains a NiSourceTexture*. The member labels in TESEffectShaderData are Probable correspondences to Fallout's named fields, corroborated by these direct Oblivion copies and the initializer.
void __thiscall TESEffectShader_ConfigureVisualProperty(
        TESEffectShader *this,
        ParticleShaderProperty *property,
        NiSourceTexture *sourceTexture)
{
  NiSourceTexture *spBaseTexture_10C; // ebx
  float y; // ecx
  float z; // edx
  float v7; // ecx
  float v8; // edx
  double v9; // rt0
  float v10; // [esp+10h] [ebp-40h]
  float v11; // [esp+14h] [ebp-3Ch]
  float v12; // [esp+18h] [ebp-38h]
  float fParticleColor1Alpha; // [esp+1Ch] [ebp-34h]
  float v14; // [esp+20h] [ebp-30h]
  float v15; // [esp+24h] [ebp-2Ch]
  float v16; // [esp+28h] [ebp-28h]
  float fParticleColor2Alpha; // [esp+2Ch] [ebp-24h]
  float iParticleColor1_low; // [esp+30h] [ebp-20h]
  float iParticleColor2_low; // [esp+30h] [ebp-20h]
  float v20; // [esp+30h] [ebp-20h]
  float v21; // [esp+34h] [ebp-1Ch]
  float v22; // [esp+34h] [ebp-1Ch]
  float v23; // [esp+34h] [ebp-1Ch]
  float v24; // [esp+38h] [ebp-18h]
  float v25; // [esp+38h] [ebp-18h]
  float v26; // [esp+38h] [ebp-18h]
  float fParticleColor3Alpha; // [esp+3Ch] [ebp-14h]
  float iParticleColor3_low; // [esp+40h] [ebp-10h]
  float v29; // [esp+44h] [ebp-Ch]
  float v30; // [esp+48h] [ebp-8h]

  spBaseTexture_10C = property->spBaseTexture_10C; /*0x4ad63e*/
  if ( spBaseTexture_10C != sourceTexture ) /*0x4ad649*/
  {
    if ( spBaseTexture_10C ) /*0x4ad64d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&spBaseTexture_10C->members) ) /*0x4ad653*/
        spBaseTexture_10C->vtbl->super.super.super.Destructor((NiRefObject *)spBaseTexture_10C, 1); /*0x4ad669*/
    }
    property->spBaseTexture_10C = sourceTexture; /*0x4ad66d*/
    if ( sourceTexture ) /*0x4ad673*/
      InterlockedIncrement((volatile LONG *)&sourceTexture->members); /*0x4ad679*/
  }
  property->fParticleLifetime_84 = this->Data.fParticleLifetime;// Verified (Oblivion data flow): words from TESEffectShader::Data +0x84..+0xB8 are copied into the ParticleShaderProperty parameter block. Probable semantic names from the aligned Fallout EffectShaderData layout are fParticleLifetime, fParticleLifeVar, fParticleNormalSpeed, fParticleNormalAcc, ParticleVelocity, ParticleAcceleration, fParticleScale1/2 and fParticleScale1/2Time. /*0x4ad685*/
  property->fParticleLifeVar_88 = this->Data.fParticleLifeVar; /*0x4ad691*/
  property->fParticleNormalSpeed_8C = this->Data.fParticleNormalSpeed; /*0x4ad69d*/
  property->fParticleNormalAcc_90 = this->Data.fParticleNormalAcc; /*0x4ad6a9*/
  y = this->Data.ParticleVelocity.y; /*0x4ad6b5*/
  z = this->Data.ParticleVelocity.z; /*0x4ad6bb*/
  property->particleVelocity_94.x = this->Data.ParticleVelocity.x; /*0x4ad6c1*/
  property->particleVelocity_94.y = y; /*0x4ad6c7*/
  property->particleVelocity_94.z = z; /*0x4ad6cd*/
  v7 = this->Data.ParticleAcceleration.y; /*0x4ad6d9*/
  v8 = this->Data.ParticleAcceleration.z; /*0x4ad6df*/
  property->particleAcceleration_A0.x = this->Data.ParticleAcceleration.x; /*0x4ad6e5*/
  property->particleAcceleration_A0.y = v7; /*0x4ad6eb*/
  property->particleAcceleration_A0.z = v8; /*0x4ad6f1*/
  iParticleColor1_low = (float)LOBYTE(this->Data.iParticleColor1);// Verified (Oblivion data flow): low RGB bytes from Data.iParticleColor1/2/3 are divided by 255 and copied to ParticleShaderProperty colors. The Fallout field names are Probable correspondences, corroborated by the same packed-color defaults and direct Oblivion conversions; high bytes are not consumed here. /*0x4ad718*/
  v21 = (float)BYTE1(this->Data.iParticleColor1); /*0x4ad72c*/
  v24 = (float)BYTE2(this->Data.iParticleColor1); /*0x4ad747*/
  v9 = dbl_A3DDD8; /*0x4ad77b*/
  v10 = iParticleColor1_low / v9; /*0x4ad77d*/
  v11 = v21 / v9; /*0x4ad787*/
  v12 = v24 / v9; /*0x4ad791*/
  iParticleColor2_low = (float)LOBYTE(this->Data.iParticleColor2); /*0x4ad79d*/
  v22 = (float)BYTE1(this->Data.iParticleColor2); /*0x4ad7b1*/
  v25 = (float)BYTE2(this->Data.iParticleColor2); /*0x4ad7c1*/
  v14 = iParticleColor2_low / v9; /*0x4ad7e1*/
  v15 = v22 / v9; /*0x4ad7eb*/
  v16 = v25 / v9; /*0x4ad80e*/
  iParticleColor3_low = (float)LOBYTE(this->Data.iParticleColor3); /*0x4ad81a*/
  v29 = (float)BYTE1(this->Data.iParticleColor3); /*0x4ad82e*/
  v30 = (float)BYTE2(this->Data.iParticleColor3); /*0x4ad842*/
  v20 = iParticleColor3_low / v9; /*0x4ad868*/
  v23 = v29 / v9; /*0x4ad872*/
  v26 = v30 / v9; /*0x4ad87a*/
  fParticleColor1Alpha = this->Data.fParticleColor1Alpha;// Verified (Oblivion data flow): Data floats at +0xC8..+0xDC are copied into ParticleShaderProperty alpha/time parameters. Probable field names, aligned with Fallout EffectShaderData, are fParticleColor1/2/3Alpha and fParticleColor1/2/3Time. /*0x4ad884*/
  fParticleColor2Alpha = this->Data.fParticleColor2Alpha; /*0x4ad88e*/
  fParticleColor3Alpha = this->Data.fParticleColor3Alpha; /*0x4ad898*/
  property->Color1_B8.r = v10; /*0x4ad89c*/
  property->Color1_B8.g = v11; /*0x4ad8a6*/
  property->Color1_B8.b = v12; /*0x4ad8b0*/
  property->Color2_C8.r = v14; /*0x4ad8ba*/
  property->Color1_B8.a = fParticleColor1Alpha; /*0x4ad8c4*/
  property->Color2_C8.g = v15; /*0x4ad8ce*/
  property->Color2_C8.b = v16; /*0x4ad8d8*/
  property->Color3_D8.r = v20; /*0x4ad8e2*/
  property->Color2_C8.a = fParticleColor2Alpha; /*0x4ad8ec*/
  property->Color3_D8.g = v23; /*0x4ad8f6*/
  property->Color3_D8.b = v26; /*0x4ad8fc*/
  property->Color3_D8.a = fParticleColor3Alpha; /*0x4ad902*/
  property->fParticleColor1Time_AC = this->Data.fParticleColor1Time;// Verified (Oblivion data flow): TESEffectShader::Data.fParticleColor1Time/2Time/3Time at +0xD4/+0xD8/+0xDC are copied into ParticleShaderProperty timing slots. Names are Probable cross-version mappings supported by the aligned offsets and initializer defaults. /*0x4ad90e*/
  property->fParticleColor2Time_B0 = this->Data.fParticleColor2Time; /*0x4ad91a*/
  property->fParticleColor3Time_B4 = this->Data.fParticleColor3Time; /*0x4ad926*/
  property->fParticleScale1_E8 = this->Data.fParticleScale1; /*0x4ad932*/
  property->fParticleScale2_EC = this->Data.fParticleScale2; /*0x4ad93e*/
  property->fParticleScale1Time_F0 = this->Data.fParticleScale1Time; /*0x4ad94a*/
  property->fParticleScale2Time_F4 = this->Data.fParticleScale2Time; /*0x4ad956*/
  property->eParticleBlendModeSource_FC = this->Data.eParticleBlendModeSource;// Verified (Oblivion data flow): TESEffectShader::Data fields at +0x60/+0x6C/+0x64/+0x68 copy to ParticleShaderProperty blend/Z-test slots. Probable Fallout-correlated names are eParticleBlendModeSource, eParticleBlendModeDest, eParticleBlendOperation, and eParticleZTestFunction. /*0x4ad95f*/
  property->eParticleBlendModeDest_100 = this->Data.eParticleBlendModeDest; /*0x4ad96b*/
  property->eParticleBlendOperation_104 = this->Data.eParticleBlendOperation; /*0x4ad974*/
  property->eParticleZTestFunction_108 = this->Data.eParticleZTestFunction; /*0x4ad981*/
}
