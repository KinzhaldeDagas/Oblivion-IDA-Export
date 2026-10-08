// Verified (Oblivion): sole caller is MagicShaderHitEffect_InitializeVisual. Allocates and constructs the 0x6C-byte TextureEffectData object, converts packed fill/edge RGB and alpha into the two color groups at +0x2C/+0x3C, copies edge exponent and four texture blend/Z-test parameters, and retains the source texture. Probable: boundDiameter_58 is twice the supplied NiAVObject bound radius; Oblivion directly stores 2*(visualObject+0x2C), and Fallout explicitly doubles worldBound.radius. Data.cFlags bit 0x10 shifts the edge RGB group into [-1,0]. Fallout's 0x74-byte object adds a block-out texture and alpha-test state.
OblivionTextureEffectData *__thiscall TESEffectShader_CreateTextureEffectData(
        TESEffectShader *this,
        NiAVObject *visualObject,
        NiSourceTexture *sourceTexture)
{
  BSShaderPPLightingProperty::TextureEffectData *v4; // eax
  OblivionTextureEffectData *v5; // esi
  NiSourceTexture *sourceTexture_08; // ebp
  unsigned int iEdgeColor; // eax
  unsigned int iFillColor; // ebx
  double v9; // rt0
  NiSourceTexture *v10; // ebx
  OblivionTextureEffectData *result; // eax
  unsigned int v12; // [esp+14h] [ebp-30h]
  float v13; // [esp+18h] [ebp-2Ch]
  float v14; // [esp+18h] [ebp-2Ch]
  float v15; // [esp+1Ch] [ebp-28h]
  float v16; // [esp+1Ch] [ebp-28h]
  float v17; // [esp+20h] [ebp-24h]
  float v18; // [esp+20h] [ebp-24h]
  float v19; // [esp+24h] [ebp-20h]
  float v20; // [esp+28h] [ebp-1Ch]
  float v21; // [esp+28h] [ebp-1Ch]
  float v22; // [esp+2Ch] [ebp-18h]
  float v23; // [esp+2Ch] [ebp-18h]
  float v24; // [esp+30h] [ebp-14h]
  float v25; // [esp+30h] [ebp-14h]

  v4 = (BSShaderPPLightingProperty::TextureEffectData *)FormHeapAlloc(0x6Cu); /*0x4acb4b*/
  v5 = 0; /*0x4acb57*/
  if ( v4 ) /*0x4acb5f*/
    v5 = (OblivionTextureEffectData *)BSShaderPPLightingProperty::TextureEffectData::TextureEffectData(v4); /*0x4acb68*/
  sourceTexture_08 = v5->sourceTexture_08; /*0x4acb6a*/
  iEdgeColor = this->Data.iEdgeColor; /*0x4acb6f*/
  iFillColor = this->Data.iFillColor; /*0x4acb72*/
  v12 = iEdgeColor; /*0x4acb7d*/
  if ( sourceTexture_08 ) /*0x4acb81*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&sourceTexture_08->members) ) /*0x4acb87*/
      sourceTexture_08->vtbl->super.super.super.Destructor((NiRefObject *)sourceTexture_08, 1); /*0x4acb9e*/
    iEdgeColor = v12; /*0x4acba0*/
    v5->sourceTexture_08 = 0; /*0x4acba4*/
  }
  v20 = (float)(unsigned __int8)iFillColor; /*0x4acbbd*/
  v22 = (float)BYTE1(iFillColor); /*0x4acbcb*/
  v24 = (float)BYTE2(iFillColor); /*0x4acbe7*/
  v9 = dbl_A3DDD8; /*0x4acc0d*/
  v13 = v20 / v9; /*0x4acc0f*/
  v5->fillColor_2C = v13; /*0x4acc1d*/
  v15 = v22 / v9; /*0x4acc20*/
  v5->? = v15; /*0x4acc2e*/
  v17 = v24 / v9; /*0x4acc31*/
  v5->? = v17; /*0x4acc3f*/
  v19 = (float)0.0 / v9; /*0x4acc49*/
  v5->? = v19; /*0x4acc55*/
  v21 = (float)(unsigned __int8)iEdgeColor; /*0x4acc5e*/
  v23 = (float)BYTE1(iEdgeColor); /*0x4acc71*/
  v25 = (float)BYTE2(iEdgeColor); /*0x4acc89*/
  v14 = v21 / v9; /*0x4acca9*/
  v16 = v23 / v9; /*0x4accb3*/
  v18 = v25 / v9; /*0x4accbd*/
  v5->textureOffsetU_4C = 0.0; /*0x4accd1*/
  v5->textureOffsetV_50 = 0.0; /*0x4accd8*/
  v5->edgeColor_3C = v14; /*0x4accdf*/
  v5->? = v16; /*0x4acce6*/
  v5->? = v18; /*0x4accf1*/
  v5->? = v19; /*0x4accf4*/
  v5->edgeExponent_54 = this->Data.fEdgeExponentValue; /*0x4accfa*/
  v5->boundDiameter_58 = visualObject->members.m_kWorldBound.Radius + visualObject->members.m_kWorldBound.Radius; /*0x4acd02*/
  v5->eTextureBlendModeSource_5C = this->Data.eTextureBlendModeSource; /*0x4acd08*/
  v5->eTextureBlendModeDest_60 = this->Data.eTextureBlendModeDest; /*0x4acd0e*/
  v5->eTextureBlendOperation_64 = this->Data.eTextureBlendOperation; /*0x4acd14*/
  v5->eTextureZTestFunction_68 = this->Data.eTextureZTestFunction; /*0x4acd1a*/
  v10 = v5->sourceTexture_08; /*0x4acd1d*/
  if ( v10 != sourceTexture ) /*0x4acd22*/
  {
    if ( v10 ) /*0x4acd26*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->members) ) /*0x4acd2c*/
        v10->vtbl->super.super.super.Destructor((NiRefObject *)v10, 1); /*0x4acd42*/
    }
    v5->sourceTexture_08 = sourceTexture; /*0x4acd46*/
    if ( sourceTexture ) /*0x4acd49*/
      InterlockedIncrement((volatile LONG *)&sourceTexture->members); /*0x4acd4f*/
  }
  result = v5; /*0x4acd59*/
  if ( (this->Data.cFlags & 0x10) != 0 )        // Verified (Oblivion): TESEffectShader::Data.cFlags bit 0x10 subtracts 1.0 from all three normalized edge-color channels stored at TextureEffectData+0x3C/+0x40/+0x44 after CreateTextureEffectData initializes them from packed bytes divided by 255. This shifts them from [0,1] into [-1,0]. Fallout's CreateTextureShaderData performs the same three subtractions. /*0x4acd5b*/
  {
    v5->edgeColor_3C = v5->edgeColor_3C - 1.0; /*0x4acd66*/
    v5->? = v5->? - 1.0; /*0x4acd6e*/
    v5->? = v5->? - 1.0; /*0x4acd74*/
  }
  return result; /*0x4acd77*/
}
