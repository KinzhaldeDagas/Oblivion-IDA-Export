// Fog render consumer decode: WaterShader pass setup writes water pixel FogParam c9 and FogColor c10 from active fog property.
int __thiscall sub_7DCBD0(WaterShader *this, int a2, int a3, int a4, float a5, int a6, int a7, int a8)
{
  int v9; // ebp
  char v10; // cl
  char v11; // dl
  NiD3DPass *v12; // esi
  char v13; // al
  NiD3DTextureStage *data; // edx
  UInt32 Stage; // ebx
  int v16; // ebp
  NiTexture *Texture; // ebx
  UInt32 m_uiRefCount; // ebp
  UInt32 Unk08; // ebx
  int v20; // ebp
  UInt32 v21; // ebx
  int v22; // ebp
  NiTexture *v23; // ebx
  UInt32 v24; // ebp
  double v25; // st7
  float *v26; // eax
  double v27; // st6
  double v28; // st6
  NiD3DTextureStage *v29; // edx
  UInt32 v30; // ebx
  int v31; // ebp
  bool v32; // zf
  float v33; // ecx
  double v34; // st7
  float v35; // edx
  float v36; // eax
  float v37; // ecx
  int v39; // [esp+18h] [ebp-30h]
  float v40; // [esp+20h] [ebp-28h]
  float v41; // [esp+24h] [ebp-24h]
  float v42; // [esp+28h] [ebp-20h]
  float v43; // [esp+2Ch] [ebp-1Ch]
  float v44; // [esp+30h] [ebp-18h]

  this->super.__vftable->super.RemoveShaderPassesMaybe((NiD3DShader *)this); /*0x7dcc01*/
  v9 = *(_DWORD *)(LODWORD(a5) + 0x18); /*0x7dcc07*/
  v10 = unk_B45DC0; /*0x7dcc0f*/
  v11 = MEMORY[0xB45DBA]; /*0x7dcc15*/
  *(float *)&v12 = 0.0; /*0x7dcc20*/
  v39 = v9; /*0x7dcc25*/
  switch ( LODWORD(unk_B42E90) ) /*0x7dcc36*/
  {
    case 0x17C: /*0x7dcc36*/
      if ( v11 ) /*0x7dccab*/
      {
        v12 = (NiD3DPass *)this->Unk07C[0xE]; /*0x7dccad*/
      }
      else if ( v10 ) /*0x7dccb7*/
      {
        v12 = (NiD3DPass *)this->Unk07C[0xD]; /*0x7dccb9*/
      }
      else
      {
        v12 = (NiD3DPass *)this->Unk07C[0xC]; /*0x7dccc1*/
      }
      break; /*0x7dccb3*/
    case 0x198: /*0x7dcc36*/
      if ( unk_B45DB8 ) /*0x7dcc70*/
      {
        if ( v10 ) /*0x7dcc7b*/
          v12 = (NiD3DPass *)this->Unk07C[0xA]; /*0x7dcc7d*/
        else
          v12 = (NiD3DPass *)this->Unk07C[9]; /*0x7dcc85*/
      }
      else if ( v10 ) /*0x7dcc8f*/
      {
        v12 = (NiD3DPass *)this->Unk07C[8]; /*0x7dcc91*/
      }
      else
      {
        v12 = (NiD3DPass *)this->Unk07C[7]; /*0x7dcc99*/
      }
      break; /*0x7dcc83*/
    case 0x199: /*0x7dcc36*/
      if ( v10 ) /*0x7dcc3f*/
      {
        if ( unk_B45DB8 ) /*0x7dcc41*/
          v12 = (NiD3DPass *)this->Unk07C[5]; /*0x7dcc4a*/
        else
          v12 = (NiD3DPass *)this->Unk07C[2]; /*0x7dcc52*/
      }
      else if ( unk_B45DB8 ) /*0x7dcc5a*/
      {
        v12 = (NiD3DPass *)this->Unk07C[4]; /*0x7dcc63*/
      }
      else
      {
        v12 = (NiD3DPass *)this->Unk07C[0]; /*0x7dcc6b*/
      }
      break; /*0x7dcc50*/
    case 0x19A: /*0x7dcc36*/
      v12 = (NiD3DPass *)this->Unk07C[0xB]; /*0x7dcca1*/
      break; /*0x7dcca7*/
    default:
      break;
  }
  if ( (!unk_B45DB9 || !this->Unk104[2] || !*(_BYTE *)(v9 + 0x72)) /*0x7dccea*/
    && (v12 == (NiD3DPass *)this->Unk07C[0] || v12 == (NiD3DPass *)this->Unk07C[2]) )
  {
    if ( v10 ) /*0x7dccee*/
      v12 = (NiD3DPass *)this->Unk07C[3]; /*0x7dccf0*/
    else
      v12 = (NiD3DPass *)this->Unk07C[1]; /*0x7dccf8*/
  }
  v13 = unk_B45DBB; /*0x7dccfe*/
  if ( unk_B45DBB ) /*0x7dccfe*/
    v12 = (NiD3DPass *)this->Unk07C[6]; /*0x7dcd07*/
  if ( v11 ) /*0x7dcd0f*/
  {
    if ( !v13 ) /*0x7dcd13*/
      v12 = (NiD3DPass *)this->Unk07C[0xB]; /*0x7dcd15*/
  }
  if ( *(_BYTE *)(v9 + 0x71) ) /*0x7dcd1b*/
  {
    if ( !v13 ) /*0x7dcd23*/
    {
      if ( v11 ) /*0x7dcd27*/
      {
        v12 = (NiD3DPass *)this->Unk07C[0xE]; /*0x7dcd29*/
      }
      else if ( v10 ) /*0x7dcd33*/
      {
        v12 = (NiD3DPass *)this->Unk07C[0xD]; /*0x7dcd35*/
      }
      else
      {
        v12 = (NiD3DPass *)this->Unk07C[0xC]; /*0x7dcd3d*/
      }
    }
  }
  if ( unk_B45DD0 ) /*0x7dcd43*/
    v12 = (NiD3DPass *)this->Unk07C[0xF]; /*0x7dcd4c*/
  if ( v12 == (NiD3DPass *)this->Unk07C[7] /*0x7dcd70*/
    || v12 == (NiD3DPass *)this->Unk07C[9]
    || v12 == (NiD3DPass *)this->Unk07C[8]
    || v12 == (NiD3DPass *)this->Unk07C[0xA] )
  {
    OB_ShaderConstantStorage_010201A0[0x28] = *(float *)(v9 + 0x7C); /*0x7dcd75*/
  }
  OB_ShaderConstantStorage_010201A0[0x29] = *(float *)(v9 + 0x80); /*0x7dcd83*/
  data = v12->Stages.data; /*0x7dcd89*/
  Stage = data->Stage; /*0x7dcd8c*/
  v16 = *(_DWORD *)(data->Stage + 4); /*0x7dcd8e*/
  if ( v16 ) /*0x7dcd93*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x7dcd99*/
      (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x7dcdb0*/
    *(_DWORD *)(Stage + 4) = 0; /*0x7dcdb2*/
  }
  Texture = v12->Stages.data->Texture; /*0x7dcdbc*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x7dcdbf*/
  if ( m_uiRefCount ) /*0x7dcdc4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x7dcdca*/
      (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x7dcde1*/
    Texture->members.super.super.m_uiRefCount = 0; /*0x7dcde3*/
  }
  Unk08 = v12->Stages.data->Unk08; /*0x7dcded*/
  v20 = *(_DWORD *)(Unk08 + 4); /*0x7dcdf0*/
  if ( v20 ) /*0x7dcdf5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x7dcdfb*/
      (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x7dce12*/
    *(_DWORD *)(Unk08 + 4) = 0; /*0x7dce14*/
  }
  v21 = v12->Stages.data[1].Stage; /*0x7dce1e*/
  v22 = *(_DWORD *)(v21 + 4); /*0x7dce21*/
  if ( v22 ) /*0x7dce26*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x7dce2c*/
      (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x7dce43*/
    *(_DWORD *)(v21 + 4) = 0; /*0x7dce45*/
  }
  v23 = v12->Stages.data[1].Texture; /*0x7dce4f*/
  v24 = v23->members.super.super.m_uiRefCount; /*0x7dce52*/
  if ( v24 ) /*0x7dce57*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x7dce5d*/
      (**(void (__thiscall ***)(UInt32, int))v24)(v24, 1); /*0x7dce74*/
    v23->members.super.super.m_uiRefCount = 0; /*0x7dce76*/
  }
  v25 = 0.0; /*0x7dce81*/
  v26 = *(float **)(LODWORD(a5) + 0xC);         // Fog render consumer decode: WaterShader loads active fog property from render/property state +0x0C. /*0x7dce83*/
  if ( v26 ) /*0x7dce88*/
  {
    v40 = v26[8]; /*0x7dce9e*/
    v27 = v26[0xC]; /*0x7dcea9*/
    v41 = v26[9]; /*0x7dcead*/
    v42 = v26[0xA]; /*0x7dceb3*/
    a5 = v27 - v26[0xB]; /*0x7dcebb*/
    v43 = v27; /*0x7dcebf*/
    v28 = a5; /*0x7dcec7*/
    OB_ShaderConstantStorage_010201A0[0x18] = v43;// Fog render consumer decode: Water FogParam ps c9 B45E14[0x18..0x1B] = (fogEnd, fogEnd - fogStart, 0, 0). /*0x7dcecb*/
    v44 = v28; /*0x7dced0*/
    OB_ShaderConstantStorage_010201A0[0x19] = v44; /*0x7dced8*/
    OB_ShaderConstantStorage_010201A0[0x1A] = 0.0; /*0x7dcef2*/
    OB_ShaderConstantStorage_010201A0[0x1B] = 0.0; /*0x7dcf04*/
    OB_ShaderConstantStorage_010201A0[0x1C] = v40;// Fog render consumer decode: Water FogColor ps c10 B45E14[0x1C..0x1F] = (fog.r, fog.g, fog.b, 0). /*0x7dcf15*/
    OB_ShaderConstantStorage_010201A0[0x1D] = v41; /*0x7dcf23*/
    OB_ShaderConstantStorage_010201A0[0x1E] = v42; /*0x7dcf31*/
    OB_ShaderConstantStorage_010201A0[0x1F] = 0.0; /*0x7dcf36*/
  }
  if ( !this->Unk104[1] || unk_B45DB8 ) /*0x7dcf4a*/
  {
    if ( this->Unk104[3] && unk_B45DB8 ) /*0x7dcf6a*/
    {
      NiD3DTextureStage_SetTexture(v12->Stages.data->Stage, (NiRenderedTexture *)this->Unk104[3]); /*0x7dcf79*/
    }
    else
    {
      v29 = v12->Stages.data; /*0x7dcf80*/
      v30 = v29->Stage; /*0x7dcf83*/
      v31 = *(_DWORD *)(v29->Stage + 4); /*0x7dcf8a*/
      v32 = v31 == LODWORD(flt_B430DC[0]); /*0x7dcf8d*/
      v33 = flt_B430DC[0]; /*0x7dcf8f*/
      a5 = flt_B430DC[0]; /*0x7dcf91*/
      if ( !v32 ) /*0x7dcf95*/
      {
        if ( v31 ) /*0x7dcf99*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) ) /*0x7dcf9f*/
            (**(void (__thiscall ***)(int, int))v31)(v31, 1); /*0x7dcfb6*/
          v33 = a5; /*0x7dcfb8*/
        }
        *(float *)(v30 + 4) = v33; /*0x7dcfbe*/
        if ( v33 != 0.0 ) /*0x7dcfc1*/
          InterlockedIncrement((volatile LONG *)(LODWORD(v33) + 4)); /*0x7dcfc7*/
      }
    }
  }
  else
  {
    NiD3DTextureStage_SetTexture(v12->Stages.data->Stage, (NiRenderedTexture *)this->Unk104[1]); /*0x7dcf59*/
  }
  if ( !*(_BYTE *)(v39 + 0x71) )                // Pass205: WaterShader suppresses/branches stage bind when WaterShaderProperty +0x71 generated LOD-water flag is active. /*0x7dcfd1*/
    NiD3DTextureStage_SetTexture(&v12->Stages.data->Texture->__vftable, (NiRenderedTexture *)this->Unk104[0]); /*0x7dcfe4*/
  if ( this->Unk104[4] )                        // Pass205: End of +0x71 generated LOD-water stage-bind suppression branch. /*0x7dcfe9*/
    NiD3DTextureStage_SetTexture((_DWORD *)v12->Stages.data->Unk08, (NiRenderedTexture *)this->Unk104[4]); /*0x7dcffa*/
  if ( unk_B45DB9 ) /*0x7dcfff*/
  {                                             // Pass202: WaterShader binds native WaterShader::Unk104[2] depth/height texture when pass data +0x72 path is active.
    if ( *(_BYTE *)(v39 + 0x72) && this->Unk104[2] ) /*0x7dd00e*/
    {
      NiD3DTextureStage_SetTexture((_DWORD *)v12->Stages.data[1].Stage, (NiRenderedTexture *)this->Unk104[2]);// Pass202: WaterShader stage bind using native WaterShader::Unk104[2] for copied-depth state. /*0x7dd01f*/
      OB_ShaderConstantStorage_010201A0[0x34] = (float)*(int *)(v39 + 0x74); /*0x7dd027*/
      v25 = (double)*(int *)(v39 + 0x78); /*0x7dd02d*/
      OB_ShaderConstantStorage_010201A0[0x35] = v25; /*0x7dd030*/
    }
    else if ( this->Unk104[2] )                 // Pass202: WaterShader selected Unk07C[7]/[8] path binds native WaterShader::Unk104[2]. /*0x7dd038*/
    {
      if ( v12 == (NiD3DPass *)this->Unk07C[7] || v12 == (NiD3DPass *)this->Unk07C[8] ) /*0x7dd050*/
        NiD3DTextureStage_SetTexture((_DWORD *)v12->Stages.data[1].Stage, (NiRenderedTexture *)this->Unk104[2]);// Pass202: End of selected Unk07C[7]/[8] native height/depth texture bind path. /*0x7dd059*/
    }
  }
  if ( *(_BYTE *)(v39 + 0x70) )                 // Pass205: WaterShader optional stage bind consumes WaterShaderProperty +0x6C texture when +0x70 displacement flag is active. /*0x7dd05e*/
  {
    if ( *(_DWORD *)(v39 + 0x6C) ) /*0x7dd064*/
      NiD3DTextureStage_SetTexture(&v12->Stages.data[1].Texture->__vftable, *(NiRenderedTexture **)(v39 + 0x6C)); /*0x7dd072*/
  }
  if ( unk_B42D78 )                             // Pass205: End of optional WaterShaderProperty +0x6C stage bind path. /*0x7dd077*/
    ((void (__cdecl *)(int, int))unk_B42D78)(1, 1); /*0x7dd087*/
  else
    v25 = 0.0; /*0x7dd092*/
  v32 = unk_B42D78 == 0; /*0x7dd094*/
  a5 = v25; /*0x7dd09b*/
  v34 = a5 * OB_ShaderConstantStorage_010201A0[0x10] + OB_ShaderConstantStorage_010201A0[0x14]; /*0x7dd0a9*/
  OB_ShaderConstantStorage_010201A0[0x14] = v34; /*0x7dd0af*/
  if ( v32 ) /*0x7dd0b5*/
    v34 = 0.0; /*0x7dd0c4*/
  else
    ((void (__cdecl *)(int, int))unk_B42D78)(1, 1); /*0x7dd0b9*/
  a5 = v34; /*0x7dd0c6*/
  OB_ShaderConstantStorage_010201A0[0x15] = a5 * OB_ShaderConstantStorage_010201A0[0x11] /*0x7dd0da*/
                                          + OB_ShaderConstantStorage_010201A0[0x15];
  if ( OB_ShaderConstantStorage_010201A0[0x14] >= 1.0 ) /*0x7dd0ed*/
    OB_ShaderConstantStorage_010201A0[0x14] = 0.0; /*0x7dd0f1*/
  if ( OB_ShaderConstantStorage_010201A0[0x15] >= 1.0 ) /*0x7dd102*/
    OB_ShaderConstantStorage_010201A0[0x15] = 0.0; /*0x7dd106*/
  v35 = MEMORY[0xB3F92C]; /*0x7dd112*/
  v36 = unk_B3F930; /*0x7dd118*/
  OB_ShaderConstantStorage_010201A0[0x20] = MEMORY[0xB45DC4]; /*0x7dd11d*/
  v37 = unk_B3F934; /*0x7dd123*/
  OB_ShaderConstantStorage_010201A0[0x30] = v35; /*0x7dd131*/
  OB_ShaderConstantStorage_010201A0[0x31] = v36; /*0x7dd143*/
  a5 = *(float *)&v12; /*0x7dd149*/
  OB_ShaderConstantStorage_010201A0[0x32] = v37; /*0x7dd151*/
  ++v12->RefCount; /*0x7dd157*/
  NiTArray_NiD3DPass_SetAt( /*0x7dd16e*/
    &this->super.member.super.Passes,
    (NiD3DPass *)this->super.member.super.PassCount,
    (NiD3DPass **)&a5);
  v32 = v12->RefCount-- == 1; /*0x7dd176*/
  if ( v32 ) /*0x7dd17d*/
    NiD3DPass_ReleaseToPool(v12); /*0x7dd181*/
  ++this->super.member.super.PassCount; /*0x7dd186*/
  return 0; /*0x7dd18b*/
}
