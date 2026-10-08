void __thiscall WateRsurfacEPass(WaterManager *this, NiCamera *a2)
{
  TESWeather *firstWeather; // edi
  bool v4; // bl
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st7
  int *p_BaseHeightMap; // ebp
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
  float v29; // edi
  BSRenderedTexture *HeightMap; // ecx
  WaterShader *v31; // esi
  NiRenderedTexture *v32; // eax
  float weatherPercent; // [esp+18h] [ebp-8h]
  float v34; // [esp+18h] [ebp-8h]
  double unk18; // [esp+18h] [ebp-8h]
  int v36; // [esp+18h] [ebp-8h]
  float v37; // [esp+18h] [ebp-8h]
  float v38; // [esp+18h] [ebp-8h]

  if ( byte_B07050 && OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x49d7c3*/
  {
    firstWeather = Sky_CreateOrGetGlobalObject()->firstWeather; /*0x49d7d8*/
    weatherPercent = Sky_CreateOrGetGlobalObject()->weatherPercent; /*0x49d7e6*/
    v4 = 0; /*0x49d7ea*/
    v5 = 0.0; /*0x49d7f1*/
    if ( Sky_CreateOrGetGlobalObject()->precipitation ) /*0x49d7f3*/
    {
      v5 = 0.0; /*0x49d803*/
      v4 = *((float *)Sky_CreateOrGetGlobalObject()->precipitation + 4) > 0.0; /*0x49d80f*/
    }
    if ( firstWeather ) /*0x49d813*/
    {
      if ( (*((_BYTE *)firstWeather + 0x53) & 4) != 0 && !MEMORY[0xB333A0]->currentInteriorCell && v4 ) /*0x49d82d*/
      {
        if ( sub_499100((unsigned __int8 *)firstWeather, 6, flt_A3F478, flt_A37080) < weatherPercent ) /*0x49d861*/
        {
          if ( this->unk18 >= dbl_A3F470 ) /*0x49d875*/
          {
            this->unk18 = flt_A34A80; /*0x49d897*/
            goto LABEL_18; /*0x49d89a*/
          }
          v5 = GetTimer(1, 1) * fCostant_100 + this->unk18; /*0x49d889*/
          goto LABEL_12; /*0x49d889*/
        }
      }
      else
      {
        v6 = weatherPercent; /*0x49d89c*/
        v34 = dbl_A3F460 - (double)*((unsigned __int8 *)firstWeather + 0x4F) * dbl_A3F398 * dbl_A3F468; /*0x49d8be*/
        if ( v34 < v6 || SLODWORD(OB_ShaderConstantStorage_010201A0[0x4D]) < 0x32 ) /*0x49d8d6*/
        {
          if ( v5 < this->unk18 ) /*0x49d8e0*/
          {
            unk18 = this->unk18; /*0x49d8eb*/
            this->unk18 = unk18 - GetTimer(1, 1) * fCostant_100; /*0x49d901*/
            goto LABEL_18; /*0x49d901*/
          }
LABEL_12:
          this->unk18 = v5; /*0x49d88c*/
        }
      }
    }
LABEL_18:
    OB_ShaderConstantStorage_010201A0[0x4C] = (this->unk18 - 0.0) / (dbl_A3F470 - 0.0) * (1.0 - 0.0) + 0.0; /*0x49d908*/
    v7 = OB_ShaderConstantStorage_010201A0[0x4C]; /*0x49d929*/
    if ( v7 >= 0.0 && OB_ShaderConstantStorage_010201A0[0x4C] >= 1.0 ) /*0x49d94b*/
    {
      v8 = 1.0; /*0x49d95c*/
    }
    else
    {
      if ( v7 >= 0.0 ) /*0x49d956*/
      {
LABEL_24:
        p_BaseHeightMap = (int *)&this->BaseHeightMap; /*0x49d966*/
        shader = 0; /*0x49d969*/
        if ( !this->BaseHeightMap ) /*0x49d96b*/
        {
          if ( !LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) ) /*0x49d974*/
            GetShaderDefinition(0x13u); /*0x49d97e*/
          if ( MEMORY[0xB42D7C] ) /*0x49d986*/
          {
            v11 = *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4]; /*0x49d995*/
            if ( bUseWaterHiRes ) /*0x49d98e*/
            {
              v12 = (Ni2DBuffer *)sub_7C2420(v11, unk_B43104, 0x100, 6u, 0x72, 0); /*0x49d9ad*/
              NiSmartPointer_Set__((Ni2DBuffer **)&this->BaseHeightMap, v12); /*0x49d9b5*/
              v13 = (Ni2DBuffer *)sub_7C2420( /*0x49d9ca*/
                                    *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                    unk_B43104,
                                    0x100,
                                    6u,
                                    0,
                                    0);
            }
            else
            {
              v14 = (Ni2DBuffer *)sub_7C2420(v11, unk_B43104, 0x80, 6u, 0x72, 0); /*0x49d9d8*/
              NiSmartPointer_Set__((Ni2DBuffer **)&this->BaseHeightMap, v14); /*0x49d9e0*/
              v13 = (Ni2DBuffer *)sub_7C2420( /*0x49d9fa*/
                                    *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                    unk_B43104,
                                    0x80,
                                    6u,
                                    0,
                                    0);
            }
            NiSmartPointer_Set__((Ni2DBuffer **)&this->HeightMap, v13); /*0x49da03*/
          }
        }
        if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x49da0f*/
        {
          v15 = OB_ShaderConstantStorage_010201A0[0x4C]; /*0x49da21*/
          if ( v15 == 1.0 ) /*0x49da26*/
          {
            if ( this->DisplacementMap ) /*0x49db0d*/
              BSTextureManager__ReturnRenderedTexture( /*0x49db1d*/
                *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                this->DisplacementMap);
            DisplacementMap = this->DisplacementMap; /*0x49db22*/
            if ( DisplacementMap ) /*0x49db27*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&DisplacementMap->members) ) /*0x49db2d*/
                (*(void (__thiscall **)(BSRenderedTexture *, int))DisplacementMap->vtbl)(DisplacementMap, 1); /*0x49db43*/
              this->DisplacementMap = 0; /*0x49db45*/
            }
          }
          else
          {
            BYTE1(OB_ShaderConstantStorage_010201A0[0x6F]) = 0; /*0x49da2e*/
            if ( v15 <= 0.0 ) /*0x49da3c*/
              BYTE1(OB_ShaderConstantStorage_010201A0[0x6F]) = 1; /*0x49da3e*/
            if ( 0.0 == v15 ) /*0x49da4c*/
            {
              InnerTexture = BSRenderedTexture::GetInnerTexture(this->HeightMap); /*0x49da54*/
              if ( InnerTexture->__vftable->super.GetWidth((NiTexture *)InnerTexture) != LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) ) /*0x49da68*/
              {
                BSTextureManager__ReturnRenderedTexture( /*0x49da73*/
                  *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                  this->HeightMap);
                v17 = (Ni2DBuffer *)sub_7C2420( /*0x49da8f*/
                                      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                      unk_B43104,
                                      LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]),
                                      6u,
                                      0,
                                      0);
                NiSmartPointer_Set__((Ni2DBuffer **)&this->HeightMap, v17); /*0x49da97*/
              }
            }
            ShaderDefinition = GetShaderDefinition(0x13u); /*0x49da9e*/
            if ( ShaderDefinition ) /*0x49daa8*/
              shader = ShaderDefinition->shader; /*0x49daaa*/
            if ( BYTE1(OB_ShaderConstantStorage_010201A0[0x6F]) ) /*0x49daad*/
            {
              sub_7B4900(shader, unk_B43104, *p_BaseHeightMap, (char)this->HeightMap); /*0x49dac5*/
            }
            else
            {
              if ( !this->DisplacementMap ) /*0x49dacf*/
              {
                DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x49dae7*/
                                                      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                                      unk_B43104,
                                                      8);
                NiSmartPointer_Set__((Ni2DBuffer **)&this->DisplacementMap, DefaultRenderTarget); /*0x49daef*/
              }
              sub_7B4900(shader, unk_B43104, *p_BaseHeightMap, (char)this->DisplacementMap); /*0x49db03*/
            }
          }
          v21 = GetShaderDefinition(0x14u); /*0x49db4a*/
          if ( v21 ) /*0x49db54*/
            v22 = v21->shader; /*0x49db56*/
          else
            v22 = 0; /*0x49db5b*/
          if ( OB_ShaderConstantStorage_010201A0[0x4C] > 0.0 ) /*0x49db6a*/
          {
            v23 = BSRenderedTexture::GetInnerTexture(this->HeightMap); /*0x49db76*/
            v36 = v23->__vftable->super.GetWidth((NiTexture *)v23); /*0x49db86*/
            v24 = (double)v36; /*0x49db8a*/
            if ( v36 < 0 ) /*0x49db8e*/
              v24 = v24 + flt_A2FC78; /*0x49db90*/
            if ( v24 != flt_A3F458 ) /*0x49dba1*/
            {
              BSTextureManager__ReturnRenderedTexture( /*0x49dbac*/
                *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                this->HeightMap);
              v25 = (Ni2DBuffer *)sub_7C2420( /*0x49dbc9*/
                                    *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                    unk_B43104,
                                    0x100,
                                    6u,
                                    0,
                                    0);
              NiSmartPointer_Set__((Ni2DBuffer **)&this->HeightMap, v25); /*0x49dbd1*/
            }
            OB_NiSmartPointer_Assign_010201A0((int *)&OB_ShaderConstantStorage_010201A0[0x68], (int *)&this->HeightMap); /*0x49dbdc*/
            if ( !MEMORY[0xB33E90][0x139B] ) /*0x49dbe1*/
            {
              if ( *(_DWORD *)&MEMORY[0xB33E90][0x1390] ) /*0x49dbea*/
                v26 = *(float *)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0x84); /*0x49dbf3*/
              else
                v26 = fConstant_2; /*0x49dbfb*/
              OB_ShaderConstantStorage_010201A0[0x4B] = v26; /*0x49dc01*/
            }
            v37 = 0.0; /*0x49dc09*/
            if ( Sky_CreateOrGetGlobalObject()->precipitation ) /*0x49dc12*/
              v37 = *((float *)Sky_CreateOrGetGlobalObject()->precipitation + 4); /*0x49dc23*/
            v27 = 0.0; /*0x49dc45*/
            v38 = (v37 - 0.0) / (dbl_A2FA98 - 0.0) * (dbl_A3F450 - 0.0) + 0.0; /*0x49dc47*/
            if ( v38 >= 0.0 ) /*0x49dc56*/
              v27 = v38; /*0x49dc5c*/
            LODWORD(OB_ShaderConstantStorage_010201A0[0x4D]) = Double_To_SInt32(v27); /*0x49dc66*/
            if ( !this->BaseDisplacementMap ) /*0x49dc6b*/
            {
              v28 = (Ni2DBuffer *)sub_49CB40(); /*0x49dc72*/
              NiSmartPointer_Set__((Ni2DBuffer **)&this->BaseDisplacementMap, v28); /*0x49dc7a*/
            }
            sub_7B4900(v22, unk_B43104, (int)this->BaseDisplacementMap, (char)this->DisplacementMap); /*0x49dc8d*/
            OB_NiSmartPointer_Assign_010201A0( /*0x49dc9c*/
              (int *)&this->BaseDisplacementMap,
              (int *)&OB_ShaderConstantStorage_010201A0[0x65]);
            if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x68]) ) /*0x49dca1*/
            {
              v29 = OB_ShaderConstantStorage_010201A0[0x68]; /*0x49dcaa*/
              if ( !InterlockedDecrement((volatile LONG *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x68]) + 4)) /*0x49dcbc*/
                && v29 != 0.0 )
              {
                (**(void (__thiscall ***)(float, int))LODWORD(v29))(COERCE_FLOAT(LODWORD(v29)), 1); /*0x49dcc6*/
              }
              OB_ShaderConstantStorage_010201A0[0x68] = 0.0; /*0x49dcc8*/
            }
          }
        }
        if ( MEMORY[0xB45DCC] ) /*0x49dcd2*/
        {
          HeightMap = this->HeightMap; /*0x49dcde*/
          v31 = MEMORY[0xB45DCC]; /*0x49dce1*/
          v32 = BSRenderedTexture::GetInnerTexture(HeightMap); /*0x49dce3*/
          sub_4992C0(v31, v32); /*0x49dceb*/
        }
        return; /*0x49dceb*/
      }
      v8 = 0.0; /*0x49d958*/
    }
    OB_ShaderConstantStorage_010201A0[0x4C] = v8; /*0x49d960*/
    goto LABEL_24; /*0x49d960*/
  }
}
