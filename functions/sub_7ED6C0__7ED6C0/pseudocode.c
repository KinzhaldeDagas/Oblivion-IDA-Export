float *__cdecl OB_BSShader_UpdateLightColorConstant_010201A0(int lightSlot, void *shadowSceneLight, float dimmer)
{
  float *result; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  void (__thiscall ***v8)(_DWORD, int); // edi
  char v9; // bl
  double v10; // st7
  double v11; // st6
  float v12; // edx
  float v13; // eax
  double v14; // st6
  float v15; // edx
  float v16; // eax
  double v17; // st6
  double v18; // st2
  float v19; // edx
  float v20; // eax
  double x; // st6
  double v22; // st3
  double v23; // st3
  double v24; // st6
  double v25; // st6
  char v26; // cl
  double v27; // st5
  float v28; // eax
  float y; // edx
  float z; // eax
  unsigned __int16 v31; // ax
  NiProperty *NiPropertyByID; // eax
  NiProperty *v33; // eax
  NiProperty *v34; // eax
  float *v35; // eax
  double v36; // st7
  NiPoint3 *v37; // eax
  float v38; // [esp+18h] [ebp-2Ch]
  float v39; // [esp+18h] [ebp-2Ch]
  float v40; // [esp+18h] [ebp-2Ch]
  float v41; // [esp+18h] [ebp-2Ch]
  NiInterpController *m_controller; // [esp+18h] [ebp-2Ch]
  int v43; // [esp+1Ch] [ebp-28h] BYREF
  float v44; // [esp+20h] [ebp-24h]
  NiPoint3 v45; // [esp+24h] [ebp-20h] BYREF
  float v46; // [esp+30h] [ebp-14h]
  NiPoint3 v47; // [esp+34h] [ebp-10h] BYREF
  float v48; // [esp+40h] [ebp-4h]

  result = (float *)lightSlot; /*0x7ed6c0*/
  if ( lightSlot < 8 ) /*0x7ed6ce*/
  {
    if ( !shadowSceneLight ) /*0x7ed6da*/
    {
      v4 = dword_B25AD4; /*0x7ed6e2*/
      result = &OB_ShaderConstantStorage_010201A0[4 * (unsigned __int16)(lightSlot + 1) + 0x1A1]; /*0x7ed6f1*/
      *(_DWORD *)result = dword_B25AD0; /*0x7ed6f6*/
      v5 = dword_B25AD8; /*0x7ed6f8*/
      *((_DWORD *)result + 1) = v4; /*0x7ed6fe*/
      v6 = dword_B25ADC; /*0x7ed701*/
      *((_DWORD *)result + 2) = v5; /*0x7ed707*/
      *((_DWORD *)result + 3) = v6; /*0x7ed70a*/
      return result; /*0x7ed714*/
    }
    v7 = *ShadowSceneLight_GetLightRef(shadowSceneLight, &v43); /*0x7ed721*/
    if ( v43 ) /*0x7ed729*/
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v43; /*0x7ed72b*/
      if ( !InterlockedDecrement((volatile LONG *)(v43 + 4)) ) /*0x7ed731*/
        (**v8)(v8, 1); /*0x7ed747*/
    }
    v9 = *((_BYTE *)shadowSceneLight + 0xFC);   // ShadowSceneLight+0xFC is the proven backingIsNiPointLight classification byte written by ShadowSceneLight_SetBackingLight at 0x7D3468. Zero selects directional vector+ambient path; nonzero selects point position/attenuation path. /*0x7ed749*/
    v10 = dimmer; /*0x7ed74f*/
    v11 = 1.0; /*0x7ed755*/
    if ( v9 ) /*0x7ed757*/
    {
      if ( v7 ) /*0x7ed8fe*/
      {
        v19 = *(float *)(v7 + 0x8C); /*0x7ed90a*/
        v20 = *(float *)(v7 + 0x90); /*0x7ed910*/
        v47.x = *(float *)(v7 + 0x88); /*0x7ed916*/
        v45.x = v47.x; /*0x7ed91e*/
        v47.y = v19; /*0x7ed926*/
        v47.z = v20; /*0x7ed92e*/
        v45.y = v19; /*0x7ed932*/
        v45.z = v20; /*0x7ed941*/
        v46 = 1.0; /*0x7ed949*/
        OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x7ed966*/
          lightSlot + 9,
          SLODWORD(v47.x),
          SLODWORD(v19),
          SLODWORD(v20),
          COERCE_INT(1.0));
LABEL_27:
        v26 = OB_RendererGlobalState_010201A0[0x1D7]; /*0x7eda22*/
        v27 = *(float *)(v7 + 0xDC); /*0x7eda34*/
        if ( !OB_RendererGlobalState_010201A0[0x1D7] && v27 > dbl_A2F928 ) /*0x7eda45*/
        {
          v40 = v11; /*0x7eda49*/
          v27 = v40; /*0x7eda4d*/
        }
        v28 = *(float *)(v7 + 0xF0); /*0x7eda59*/
        v47.x = *(float *)(v7 + 0xEC); /*0x7eda5f*/
        v47.z = *(float *)(v7 + 0xF4); /*0x7eda73*/
        v47.x = v47.x * v27; /*0x7eda77*/
        v47.y = v28 * v27; /*0x7eda89*/
        v47.z = v27 * v47.z; /*0x7eda99*/
        v45.x = v47.x * v10; /*0x7edaab*/
        v45.y = v47.y * v10; /*0x7edab5*/
        v45.z = v47.z * v10; /*0x7edabf*/
        v41 = *((float *)shadowSceneLight + 0x35); /*0x7edac9*/
        v45.x = v41 * v45.x; /*0x7edad7*/
        v45.y = v41 * v45.y; /*0x7edae1*/
        v45.z = v41 * v45.z; /*0x7edae9*/
        if ( v9 ) /*0x7edaed*/
        {
          if ( v11 > v10 ) /*0x7edaf6*/
          {
            y = stru_B3FA90.y; /*0x7edafe*/
            z = stru_B3FA90.z; /*0x7edb04*/
            v45.x = stru_B3FA90.x; /*0x7edb09*/
            v45.y = y; /*0x7edb0d*/
            v45.z = z; /*0x7edb11*/
          }
        }
        else if ( v26 ) /*0x7edb1d*/
        {
          if ( !OB_RendererGlobalState_010201A0[0x1DB] ) /*0x7edb1f*/
            NiPoint3::MutliplyByValue(&v45, *(float *)&OB_RendererGlobalState_010201A0[0xB3]); /*0x7edb36*/
        }
        v31 = LOWORD(unk_B42E90); /*0x7edb3b*/
        v44 = *((float *)shadowSceneLight + 0x36); /*0x7edb4c*/
        if ( v31 >= 0x10Fu && v31 <= 0x129u || v31 == 0x16A || v31 == 0x16C || (unsigned __int16)(v31 - 0x173) <= 2u ) /*0x7edb6d*/
        {
          if ( NiNode_GetNiPropertyByID(**(NiNode ***)&OB_RendererGlobalState_010201A0[0x1F], 4) ) /*0x7edb7d*/
          {
            NiPropertyByID = NiNode_GetNiPropertyByID(**(NiNode ***)&OB_RendererGlobalState_010201A0[0x1F], 4); /*0x7edb90*/
            if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5 ) /*0x7edba1*/
            {
              v33 = NiNode_GetNiPropertyByID(**(NiNode ***)&OB_RendererGlobalState_010201A0[0x1F], 4); /*0x7edbad*/
              if ( (*((int (__thiscall **)(NiProperty *))v33->vtbl + 0x15))(v33) <= 0xA ) /*0x7edbbe*/
              {
                v34 = NiNode_GetNiPropertyByID(**(NiNode ***)&OB_RendererGlobalState_010201A0[0x1F], 4); /*0x7edbca*/
                if ( v34 ) /*0x7edbd1*/
                {
                  m_controller = v34[6].members.m_controller; /*0x7edbd9*/
                  v45.x = *(float *)&m_controller * v45.x; /*0x7edbe7*/
                  v45.y = *(float *)&m_controller * v45.y; /*0x7edbf1*/
                  v45.z = *(float *)&m_controller * v45.z; /*0x7edbf9*/
                }
              }
            }
          }
        }
        v47.x = v45.x; /*0x7edc08*/
        v47.y = v45.y; /*0x7edc17*/
        v35 = &OB_ShaderConstantStorage_010201A0[4 * (unsigned __int16)(lightSlot + 1) + 0x1A1];// Writes shared light color slot (slot0 -> leaf c6; slot1 -> c7). This is the material/light-constant route capable of blackening a correctly colored texture. /*0x7edc22*/
        v47.z = v45.z; /*0x7edc27*/
        v36 = v44; /*0x7edc2d*/
        *v35 = v45.x; /*0x7edc31*/
        v48 = v36; /*0x7edc33*/
        v35[1] = v47.y; /*0x7edc3b*/
        v35[2] = v47.z; /*0x7edc42*/
        v35[3] = v48; /*0x7edc49*/
        if ( v9 ) /*0x7edc4c*/
        {
          v47.x = *(float *)(v7 + 0xF8); /*0x7edc5a*/
          v47.y = 0.0; /*0x7edc76*/
          v47.z = 0.0; /*0x7edc7d*/
          v48 = 1.0; /*0x7edc8a*/
          v37 = (NiPoint3 *)&OB_ShaderConstantStorage_010201A0[4 * (unsigned __int16)(lightSlot + 0x11) + 0x1A1]; /*0x7edc91*/
          *v37 = v47; /*0x7edc96*/
          v37[1].x = v48; /*0x7edcaa*/
        }
        OB_RendererGlobalState_010201A0[0xA4] = v9; /*0x7edcb4*/
        result = (float *)((v9 != 0) + 1); /*0x7edcba*/
        *(_DWORD *)(4 * lightSlot + 0xB46138) = result; /*0x7edcbd*/
        return result; /*0x7edcbd*/
      }
    }
    else
    {
      if ( v7 ) /*0x7ed761*/
      {
        v12 = *(float *)(v7 + 0x10C); /*0x7ed76b*/
        v13 = *(float *)(v7 + 0x110); /*0x7ed771*/
        v47.x = *(float *)(v7 + 0x108); /*0x7ed777*/
        v47.y = v12; /*0x7ed77f*/
        v47.z = v13; /*0x7ed783*/
        Vector3_NormalizeInPlace(&v47.x); /*0x7ed787*/
        v45.x = v47.x; /*0x7ed795*/
        v45.y = v47.y; /*0x7ed7a3*/
        v45.z = v47.z; /*0x7ed7b1*/
        v46 = 1.0; /*0x7ed7c1*/
        OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x7ed7d4*/
          lightSlot + 0x11,
          SLODWORD(v47.x),
          SLODWORD(v47.y),
          SLODWORD(v47.z),
          COERCE_INT(1.0));
        v10 = dimmer; /*0x7ed7d9*/
      }
      if ( !OB_RendererGlobalState_010201A0[0xE] /*0x7ed7f1*/
        || (v10 = dimmer, NiRTTI::IsObjectOfRTTIType((NiRTTI *)stru_B40224, (NiObject *)v7)) )
      {
        v14 = *(float *)(v7 + 0xDC); /*0x7ed816*/
        if ( !OB_RendererGlobalState_010201A0[0x1D7] && v14 > dbl_A2F928 ) /*0x7ed827*/
          v14 = (float)1.0; /*0x7ed831*/
        v15 = *(float *)(v7 + 0xE4); /*0x7ed83b*/
        v16 = *(float *)(v7 + 0xE8); /*0x7ed841*/
        v45.x = *(float *)(v7 + 0xE0); /*0x7ed847*/
        v45.x = v45.x * v14; /*0x7ed859*/
        v45.y = v15 * v14; /*0x7ed863*/
        v45.z = v14 * v16; /*0x7ed86b*/
        v17 = OB_ShaderConstantStorage_010201A0[0x2C4]; /*0x7ed87b*/
        if ( v17 > 0.0 ) /*0x7ed880*/
        {
          v38 = dbl_A924F0 + v45.x * dbl_A924F0 + dbl_A924F8 * v45.y + v45.z; /*0x7ed8b2*/
          v18 = v38; /*0x7ed8c0*/
          if ( v38 > 0.0 ) /*0x7ed8c5*/
          {
            if ( v18 <= v17 ) /*0x7ed97a*/
            {
              v22 = v17 / v18; /*0x7ed986*/
              x = v45.x; /*0x7ed986*/
            }
            else
            {
              x = v45.x; /*0x7ed97e*/
              v22 = 1.0; /*0x7ed980*/
            }
            v39 = v22; /*0x7ed988*/
            v23 = dbl_A2FC80; /*0x7ed98c*/
            v47.x = (x + v23) * v39; /*0x7ed99e*/
            v47.y = (v45.y + v23) * v39; /*0x7ed9aa*/
            v17 = v39 * (v23 + v45.z); /*0x7ed9b0*/
          }
          else
          {
            v47.x = OB_ShaderConstantStorage_010201A0[0x2C4]; /*0x7ed8d3*/
            v47.y = v17; /*0x7ed8d7*/
          }
          v47.z = v17; /*0x7ed8df*/
          v45 = v47; /*0x7ed8eb*/
        }
        v45.x = v45.x * v10; /*0x7ed9bf*/
        v45.y = v45.y * v10; /*0x7ed9c9*/
        v45.z = v45.z * v10; /*0x7ed9d3*/
        v47.x = v45.x; /*0x7ed9db*/
        v24 = v45.y; /*0x7ed9e3*/
        OB_ShaderConstantStorage_010201A0[0x1A1] = v45.x;// Directional-light path writes shared AmbientColor c5 RGB. Leaf pixel shader later multiplies sampled RGB by VS-computed lighting; black c5 plus zero diffuse produces black RGB with alpha intact. /*0x7ed9e7*/
        v47.y = v24; /*0x7ed9ed*/
        v25 = v45.z; /*0x7ed9f5*/
        OB_ShaderConstantStorage_010201A0[0x1A2] = v47.y; /*0x7ed9f9*/
        v47.z = v25; /*0x7ed9ff*/
        v11 = 1.0; /*0x7eda07*/
        OB_ShaderConstantStorage_010201A0[0x1A3] = v47.z; /*0x7eda09*/
        v48 = 1.0; /*0x7eda0e*/
        OB_ShaderConstantStorage_010201A0[0x1A4] = 1.0; /*0x7eda16*/
        goto LABEL_27; /*0x7eda1c*/
      }
    }
    v11 = 1.0; /*0x7eda20*/
    goto LABEL_27; /*0x7eda20*/
  }
  return result; /*0x7ed70d*/
}
