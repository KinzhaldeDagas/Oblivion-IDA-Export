void __thiscall WateRsurfacEPass(WaterManager *this, NiCamera *a2)
{
  TESWeather *firstWeather; // edi
  bool v4; // bl
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st7
  BSRenderedTexture **p_BaseHeightMap; // ebp
  BSShader *shader; // ebx
  BSTextureManager *v11; // ecx
  Ni2DBuffer *v12; // eax
  Ni2DBuffer *v13; // eax
  Ni2DBuffer *v14; // eax
  double v15; // st7
  NiRenderedTexture *InnerTexture; // eax
  Ni2DBuffer *v17; // eax
  ShaderDefinition *ShaderDefinition; // eax
  Ni2DBuffer *DefaultRenderTarget; // eax
  BSRenderedTexture *DisplacementMap; // edi
  ShaderDefinition *v21; // eax
  BSShader *v22; // ebx
  NiRenderedTexture *v23; // eax
  double v24; // st7
  Ni2DBuffer *v25; // eax
  double v26; // st7
  double v27; // st7
  Ni2DBuffer *v28; // eax
  void (__thiscall ***v29)(_DWORD, int); // edi
  BSRenderedTexture *HeightMap; // ecx
  WaterShader *v31; // esi
  NiRenderedTexture *v32; // eax
  float weatherPercent; // [esp+18h] [ebp-8h]
  float v34; // [esp+18h] [ebp-8h]
  double unk18; // [esp+18h] [ebp-8h]
  int v36; // [esp+18h] [ebp-8h]
  float v37; // [esp+18h] [ebp-8h]
  float v38; // [esp+18h] [ebp-8h]

  if ( byte_B07050 && ImageSpaceEffectEnabled )
  {
    firstWeather = Sky_CreateOrGetGlobalObject()->firstWeather;
    weatherPercent = Sky_CreateOrGetGlobalObject()->weatherPercent;
    v4 = 0;
    v5 = 0.0;
    if ( Sky_CreateOrGetGlobalObject()->precipitation )
    {
      v5 = 0.0;
      v4 = *((float *)Sky_CreateOrGetGlobalObject()->precipitation + 4) > 0.0;
    }
    if ( firstWeather )
    {
      if ( (*((_BYTE *)firstWeather + 0x53) & 4) != 0 && !TES->currentInteriorCell && v4 )
      {
        if ( sub_499100((unsigned __int8 *)firstWeather, 6, flt_A3F478, flt_A37080) < weatherPercent )
        {
          if ( this->unk18 >= dbl_A3F470 )
          {
            this->unk18 = flt_A34A80;
            goto LABEL_18;
          }
          v5 = GetTimer(1, 1) * fCostant_100 + this->unk18;
          goto LABEL_12;
        }
      }
      else
      {
        v6 = weatherPercent;
        v34 = dbl_A3F460 - (double)*((unsigned __int8 *)firstWeather + 0x4F) * dbl_A3F398 * dbl_A3F468;
        if ( v34 < v6 || dword_B45F48 < 0x32 )
        {
          if ( v5 < this->unk18 )
          {
            unk18 = this->unk18;
            this->unk18 = unk18 - GetTimer(1, 1) * fCostant_100;
            goto LABEL_18;
          }
LABEL_12:
          this->unk18 = v5;
        }
      }
    }
LABEL_18:
    flt_B45F44 = (this->unk18 - 0.0) / (dbl_A3F470 - 0.0) * (1.0 - 0.0) + 0.0;
    v7 = flt_B45F44;
    if ( v7 >= 0.0 && flt_B45F44 >= 1.0 )
    {
      v8 = 1.0;
    }
    else
    {
      if ( v7 >= 0.0 )
      {
LABEL_24:
        p_BaseHeightMap = &this->BaseHeightMap;
        shader = 0;
        if ( !this->BaseHeightMap )
        {
          if ( !dword_B45FE0 )
            GetShaderDefinition(0x13u);
          if ( imageSpaceShaderList )
          {
            v11 = g_textureManager;
            if ( bUseWaterHiRes )
            {
              v12 = (Ni2DBuffer *)sub_7C2420(v11, dword_B43104, 0x100, 6u, 0x72, 0);
              NiSmartPointer_Set__((Ni2DBuffer **)&this->BaseHeightMap, v12);
              v13 = (Ni2DBuffer *)sub_7C2420(g_textureManager, dword_B43104, 0x100, 6u, 0, 0);
            }
            else
            {
              v14 = (Ni2DBuffer *)sub_7C2420(v11, dword_B43104, 0x80, 6u, 0x72, 0);
              NiSmartPointer_Set__((Ni2DBuffer **)&this->BaseHeightMap, v14);
              v13 = (Ni2DBuffer *)sub_7C2420(g_textureManager, dword_B43104, 0x80, 6u, 0, 0);
            }
            NiSmartPointer_Set__((Ni2DBuffer **)&this->HeightMap, v13);
          }
        }
        if ( ShaderPackage >= 2 )
        {
          v15 = flt_B45F44;
          if ( v15 == 1.0 )
          {
            if ( this->DisplacementMap )
              sub_7C1EE0(g_textureManager, this->DisplacementMap);
            DisplacementMap = this->DisplacementMap;
            if ( DisplacementMap )
            {
              if ( !InterlockedDecrement((volatile LONG *)&DisplacementMap->members) )
                (*(void (__thiscall **)(BSRenderedTexture *, int))DisplacementMap->vtbl)(DisplacementMap, 1);
              this->DisplacementMap = 0;
            }
          }
          else
          {
            boh_ = 0;
            if ( v15 <= 0.0 )
              boh_ = 1;
            if ( 0.0 == v15 )
            {
              InnerTexture = BSRenderedTexture::GetInnerTexture(this->HeightMap);
              if ( InnerTexture->__vftable->super.GetWidth((NiTexture *)InnerTexture) != WaterSurfaceResolution )
              {
                sub_7C1EE0(g_textureManager, this->HeightMap);
                v17 = (Ni2DBuffer *)sub_7C2420(g_textureManager, dword_B43104, WaterSurfaceResolution, 6u, 0, 0);
                NiSmartPointer_Set__((Ni2DBuffer **)&this->HeightMap, v17);
              }
            }
            ShaderDefinition = GetShaderDefinition(0x13u);
            if ( ShaderDefinition )
              shader = ShaderDefinition->shader;
            if ( boh_ )
            {
              sub_7B4900(shader, dword_B43104, (char)*p_BaseHeightMap, (char)this->HeightMap);
            }
            else
            {
              if ( !this->DisplacementMap )
              {
                DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(
                                                      g_textureManager,
                                                      dword_B43104,
                                                      8);
                NiSmartPointer_Set__((Ni2DBuffer **)&this->DisplacementMap, DefaultRenderTarget);
              }
              sub_7B4900(shader, dword_B43104, (char)*p_BaseHeightMap, (char)this->DisplacementMap);
            }
          }
          v21 = GetShaderDefinition(0x14u);
          if ( v21 )
            v22 = v21->shader;
          else
            v22 = 0;
          if ( flt_B45F44 > 0.0 )
          {
            v23 = BSRenderedTexture::GetInnerTexture(this->HeightMap);
            v36 = v23->__vftable->super.GetWidth((NiTexture *)v23);
            v24 = (double)v36;
            if ( v36 < 0 )
              v24 = v24 + flt_A2FC78;
            if ( v24 != flt_A3F458 )
            {
              sub_7C1EE0(g_textureManager, this->HeightMap);
              v25 = (Ni2DBuffer *)sub_7C2420(g_textureManager, dword_B43104, 0x100, 6u, 0, 0);
              NiSmartPointer_Set__((Ni2DBuffer **)&this->HeightMap, v25);
            }
            sub_55E2A0(&dword_B45FB4, (int *)&this->HeightMap);
            if ( !byte_B3522B )
            {
              if ( dword_B35220 )
                v26 = *(float *)(dword_B35220 + 0x84);
              else
                v26 = fConstant_2;
              WaterShader_DisplaceDampener = v26;
            }
            v37 = 0.0;
            if ( Sky_CreateOrGetGlobalObject()->precipitation )
              v37 = *((float *)Sky_CreateOrGetGlobalObject()->precipitation + 4);
            v27 = 0.0;
            v38 = (v37 - 0.0) / (dbl_A2FA98 - 0.0) * (dbl_A3F450 - 0.0) + 0.0;
            if ( v38 >= 0.0 )
              v27 = v38;
            dword_B45F48 = Double_To_SInt32(v27);
            if ( !this->BaseDisplacementMap )
            {
              v28 = (Ni2DBuffer *)sub_49CB40();
              NiSmartPointer_Set__((Ni2DBuffer **)&this->BaseDisplacementMap, v28);
            }
            sub_7B4900(v22, dword_B43104, (char)this->BaseDisplacementMap, (char)this->DisplacementMap);
            sub_55E2A0((int *)&this->BaseDisplacementMap, &dword_B45FA8);
            if ( dword_B45FB4 )
            {
              v29 = (void (__thiscall ***)(_DWORD, int))dword_B45FB4;
              if ( !InterlockedDecrement((volatile LONG *)(dword_B45FB4 + 4)) )
              {
                if ( v29 )
                  (**v29)(v29, 1);
              }
              dword_B45FB4 = 0;
            }
          }
        }
        if ( waterShader )
        {
          HeightMap = this->HeightMap;
          v31 = waterShader;
          v32 = BSRenderedTexture::GetInnerTexture(HeightMap);
          sub_4992C0(v31, v32);
        }
        return;
      }
      v8 = 0.0;
    }
    flt_B45F44 = v8;
    goto LABEL_24;
  }
}
