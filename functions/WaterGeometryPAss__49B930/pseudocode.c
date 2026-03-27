void __thiscall WaterGeometryPAss(WaterManager *this, float *a2, char a3)
{
  TESObjectCELL *ParentCell; // eax
  int v6; // edi
  TESObjectCELL *v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st4
  double v14; // rt1
  double v15; // rtt
  TESObjectCELL *v16; // eax
  float *v17; // eax
  _DWORD *unk34; // eax
  int v19; // ecx
  char v20; // bl
  int v21; // edi
  _DWORD *v22; // ebp
  int v23; // eax
  double v24; // st7
  NiProperty *NiPropertyByID; // eax
  double v26; // st7
  NiProperty *v27; // edi
  bool v28; // al
  double v29; // st7
  ShaderDefinition *ShaderDefinition; // eax
  BSShader *shader; // ebp
  double v32; // st7
  void (__thiscall ***v33)(_DWORD, int); // edi
  float v34; // ecx
  char IsUnderwater; // [esp+17h] [ebp-41h]
  float v36; // [esp+18h] [ebp-40h]
  float v37; // [esp+18h] [ebp-40h]
  float v38; // [esp+1Ch] [ebp-3Ch]
  float v39; // [esp+1Ch] [ebp-3Ch]
  float v40; // [esp+1Ch] [ebp-3Ch]
  float v41; // [esp+1Ch] [ebp-3Ch]
  float v42; // [esp+1Ch] [ebp-3Ch]
  float v43; // [esp+1Ch] [ebp-3Ch]
  int v44; // [esp+1Ch] [ebp-3Ch]
  float v45; // [esp+1Ch] [ebp-3Ch]
  double WaterHeight; // [esp+20h] [ebp-38h]
  float v47; // [esp+20h] [ebp-38h]
  float v48; // [esp+20h] [ebp-38h]
  float v49; // [esp+20h] [ebp-38h]
  float v50; // [esp+20h] [ebp-38h]
  float v51; // [esp+24h] [ebp-34h]
  float v52; // [esp+34h] [ebp-24h]
  float v53; // [esp+34h] [ebp-24h]
  float v54; // [esp+38h] [ebp-20h]
  float v55; // [esp+38h] [ebp-20h]
  float v56; // [esp+3Ch] [ebp-1Ch]
  float v57; // [esp+4Ch] [ebp-Ch]
  float v58; // [esp+4Ch] [ebp-Ch]
  float v59; // [esp+50h] [ebp-8h]
  float v60; // [esp+50h] [ebp-8h]
  bool v61; // [esp+5Ch] [ebp+4h]
  float v62; // [esp+60h] [ebp+8h]

  if ( TESObjectREFR_GetParentCell(*(TESObjectREFR **)a2)
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 0x154))(*(_DWORD *)a2) )
  {
    ParentCell = TESObjectREFR_GetParentCell(*(TESObjectREFR **)a2);
    WaterHeight = TESObjectCELL_GetWaterHeight(ParentCell);
    v61 = *(float *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 0x174))(*(_DWORD *)a2) + 8) < WaterHeight;
    v6 = *(_DWORD *)a2 + 0x2C;
    v7 = TESObjectREFR_GetParentCell(*(TESObjectREFR **)a2);
    IsUnderwater = Actor_IsUnderwater__(*(void **)a2, v6, (int)v7, 1.0);
    v8 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 0x174))(*(_DWORD *)a2);
    v52 = *v8;
    v47 = *(float *)(*((_DWORD *)a2 + 1) + 0x54);
    v54 = v8[1];
    v57 = *v8 - v47;
    v51 = *(float *)(*((_DWORD *)a2 + 1) + 0x58);
    v59 = v54 - v51;
    v38 = v57 * v57 + v59 * v59 + 0.0 * 0.0;
    v39 = sqrt(v38);
    if ( v39 <= (double)flt_A3F420 )
    {
      v12 = v54;
      v10 = v52;
    }
    else
    {
      v9 = (dbl_A3F418 - 0.0) / (v39 - 0.0);
      v10 = v52;
      v47 = (v47 - v52) * v9 + v52;
      v11 = v9 * (v51 - v54) + v54;
      v12 = v54;
      v51 = v11;
    }
    v55 = v12;
    v40 = v10 - v10;
    v13 = dbl_A3F410;
    v14 = dbl_A3F408;
    flt_B45FB8 = (v40 - v13) * v14 + (v40 - v13) * v14 - 1.0;
    v41 = v12 - v12;
    v15 = dbl_A3F400;
    flt_B45FBC = (v41 - v13) * v14 * v15 + 1.0;
    v42 = v47 - v10;
    flt_B45FAC = (v42 - v13) * v14 * v15 + 1.0;
    v43 = v51 - v12;
    flt_B45FB0 = v15 * (v14 * (v43 - v13)) + 1.0;
    dword_B45F98 = *((_DWORD *)a2 + 7);
    dword_B45F9C = *((_DWORD *)a2 + 8);
    if ( (TESObjectREFR_GetParentCell(*(TESObjectREFR **)a2)->members.flags0 & 2) != 0 )
    {
      v16 = TESObjectREFR_GetParentCell(*(TESObjectREFR **)a2);
      v56 = TESObjectCELL_GetWaterHeight(v16) + dbl_A2FC80;
      v17 = (float *)(*((_DWORD *)a2 + 1) + 0x54);
      v53 = v10;
      *v17 = v53;
      v17[1] = v55;
      v17[2] = v56;
      *(_WORD *)(*((_DWORD *)a2 + 1) + 0x18) &= ~1u;
      NiAVObject_UpdateNiAVObject(*((NiAVObject **)a2 + 1), 0.0, 1);
    }
    else
    {
      *(_WORD *)(*((_DWORD *)a2 + 1) + 0x18) |= 1u;
    }
    unk34 = (_DWORD *)this->unk34;
    v19 = 0;
    v36 = flt_A32048;
    v20 = 0;
    v44 = 0;
    if ( unk34 )
    {
      do
      {
        v21 = unk34[2];
        v22 = (_DWORD *)*unk34;
        if ( v20 )
        {
          v23 = *((_DWORD *)a2 + 1);
          v58 = *(float *)(*(_DWORD *)(v21 + 4) + 0x54) - *(float *)(v23 + 0x54);
          v60 = *(float *)(*(_DWORD *)(v21 + 4) + 0x58) - *(float *)(v23 + 0x58);
          v48 = v58 * v58 + v60 * v60 + 0.0 * 0.0;
          v49 = sqrt(v48);
          if ( v36 > (double)v49 )
          {
            v36 = v49;
            v44 = v21;
          }
        }
        unk34 = v22;
        if ( (float *)v21 == a2 )
          v20 = 1;
      }
      while ( v22 );
      v19 = v44;
    }
    if ( v36 != dbl_A3A5B0 )
    {
      v50 = (v36 - 0.0) / (dbl_A3F3F8 - 0.0) * (1.0 - 0.0) + 0.0;
      if ( v50 >= 0.0 )
        v45 = (v36 - 0.0) / (dbl_A3F3F8 - 0.0) * (1.0 - 0.0) + 0.0;
      else
        v45 = 0.0;
      v24 = v50;
      if ( v45 <= 1.0 )
      {
        if ( v50 < 0.0 )
          v24 = 0.0;
      }
      else
      {
        v24 = 1.0;
      }
      v37 = v24;
      if ( v37 < (double)a2[6] )
        a2[6] = v37;
      if ( *(float *)(v19 + 0x18) > (double)v37 )
        *(float *)(v19 + 0x18) = v37;
    }
    NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)a2 + 1), 4);
    v26 = a2[6];
    v27 = NiPropertyByID;
    NiPropertyByID[5].members.super.m_uiRefCount = (UInt32)a2[6];
    v28 = a3 || v61 && !IsUnderwater && sub_5E05B0(*(_DWORD **)a2);
    byte_B45F4D = v28;
    LOBYTE(v27[5].members.m_controller) = v28;
    BYTE1(v27[5].members.m_controller) = v61;
    if ( dword_B42D78 )
      ((void (__cdecl *)(int, int))dword_B42D78)(1, 1);
    else
      v26 = 0.0;
    v62 = v26;
    if ( BYTE1(v27[5].members.m_controller) )
    {
      if ( LOBYTE(v27[5].members.m_controller) && *(float *)&v27[5].members.m_pcName <= 1.0 )
      {
        v29 = *(float *)&v27[5].members.m_pcName + v62;
        if ( v29 > 1.0 )
          v29 = 1.0;
LABEL_46:
        *(float *)&v27[5].members.m_pcName = v29;
LABEL_47:
        if ( ShaderPackage >= 2 )
        {
          ShaderDefinition = GetShaderDefinition(0x14u);
          if ( ShaderDefinition )
            shader = ShaderDefinition->shader;
          else
            shader = 0;
          byte_B45F4C = 1;
          sub_55E2A0(&dword_B45FB4, (int *)a2 + 3);
          if ( !byte_B3522B )
          {
            if ( dword_B35220 )
              v32 = *(float *)(dword_B35220 + 0x98);
            else
              v32 = flt_A31C80;
            WaterShader_DisplaceDampener = v32;
          }
          nullsub_returnTrue_0arg();
          sub_7B4900(shader, dword_B43104, *((_DWORD *)a2 + 2), *((_DWORD *)a2 + 2));
          nullsub_returnTrue_0arg();
          sub_55E2A0((int *)a2 + 2, &dword_B45FA8);
          if ( dword_B45FB4 )
          {
            v33 = (void (__thiscall ***)(_DWORD, int))dword_B45FB4;
            if ( !InterlockedDecrement((volatile LONG *)(dword_B45FB4 + 4)) )
            {
              if ( v33 )
                (**v33)(v33, 1);
            }
            dword_B45FB4 = 0;
          }
          v34 = flt_B45FB8;
          byte_B45F4C = 0;
          a2[7] = v34;
          a2[8] = flt_B45FBC;
        }
        return;
      }
      if ( *(float *)&v27[5].members.m_pcName <= 0.0 )
        goto LABEL_47;
    }
    v29 = *(float *)&v27[5].members.m_pcName - v62 / dbl_A3F3F0;
    if ( v29 < 0.0 )
      v29 = 0.0;
    goto LABEL_46;
  }
}
