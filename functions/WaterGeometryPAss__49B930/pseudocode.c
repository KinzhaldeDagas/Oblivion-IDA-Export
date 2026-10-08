void __thiscall WaterGeometryPAss(WaterManager *this, float *a2, char a3)
{
  ExtraDataList *DwordAtOffset40; // eax
  int v6; // edi
  ExtraDataList *v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st4
  double v14; // rt1
  double v15; // rtt
  ExtraDataList *v16; // eax
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
  float v33; // edi
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

  if ( Shared_GetDwordAtOffset40(*(void **)a2) /*0x49b954*/
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 0x154))(*(_DWORD *)a2) )
  {
    DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(*(void **)a2); /*0x49b960*/
    WaterHeight = TESObjectCELL_GetWaterHeight(DwordAtOffset40); /*0x49b96c*/
    v61 = *(float *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 0x174))(*(_DWORD *)a2) + 8) < WaterHeight; /*0x49b98f*/
    v6 = *(_DWORD *)a2 + 0x2C; /*0x49b99d*/
    v7 = (ExtraDataList *)Shared_GetDwordAtOffset40(*(void **)a2); /*0x49b9a0*/
    IsUnderwater = Actor_IsUnderwater__(*(void **)a2, v6, v7, 1.0); /*0x49b9b0*/
    v8 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)a2 + 0x174))(*(_DWORD *)a2); /*0x49b9bc*/
    v52 = *v8; /*0x49b9d0*/
    v47 = *(float *)(*((_DWORD *)a2 + 1) + 0x54); /*0x49b9da*/
    v54 = v8[1]; /*0x49b9e2*/
    v57 = *v8 - v47; /*0x49b9e9*/
    v51 = *(float *)(*((_DWORD *)a2 + 1) + 0x58); /*0x49b9ed*/
    v59 = v54 - v51; /*0x49ba00*/
    v38 = v57 * v57 + v59 * v59 + 0.0 * 0.0; /*0x49ba22*/
    v39 = sqrt(v38); /*0x49ba2f*/
    if ( v39 <= (double)flt_A3F420 ) /*0x49ba4e*/
    {
      v12 = v54; /*0x49ba92*/
      v10 = v52; /*0x49ba96*/
    }
    else
    {
      v9 = (dbl_A3F418 - 0.0) / (v39 - 0.0); /*0x49ba5c*/
      v10 = v52; /*0x49ba6a*/
      v47 = (v47 - v52) * v9 + v52; /*0x49ba70*/
      v11 = v9 * (v51 - v54) + v54; /*0x49ba88*/
      v12 = v54; /*0x49ba88*/
      v51 = v11; /*0x49ba8a*/
    }
    v55 = v12; /*0x49baa0*/
    v40 = v10 - v10; /*0x49baa8*/
    v13 = dbl_A3F410; /*0x49bab0*/
    v14 = dbl_A3F408; /*0x49bac0*/
    OB_ShaderConstantStorage_010201A0[0x69] = (v40 - v13) * v14 + (v40 - v13) * v14 - 1.0; /*0x49baca*/
    v41 = v12 - v12; /*0x49bad4*/
    v15 = kFaceGenPolarNegativeTwo; /*0x49bae8*/
    OB_ShaderConstantStorage_010201A0[0x6A] = (v41 - v13) * v14 * v15 + 1.0; /*0x49baec*/
    v42 = v47 - v10; /*0x49bafa*/
    OB_ShaderConstantStorage_010201A0[0x66] = (v42 - v13) * v14 * v15 + 1.0; /*0x49bb0a*/
    v43 = v51 - v12; /*0x49bb18*/
    OB_ShaderConstantStorage_010201A0[0x67] = v15 * (v14 * (v43 - v13)) + 1.0; /*0x49bb26*/
    OB_ShaderConstantStorage_010201A0[0x61] = a2[7]; /*0x49bb2f*/
    OB_ShaderConstantStorage_010201A0[0x62] = a2[8]; /*0x49bb38*/
    if ( (*(_BYTE *)(Shared_GetDwordAtOffset40(*(void **)a2) + 0x24) & 2) != 0 ) /*0x49bb4d*/
    {
      v16 = (ExtraDataList *)Shared_GetDwordAtOffset40(*(void **)a2); /*0x49bb51*/
      v56 = TESObjectCELL_GetWaterHeight(v16) + dbl_A2FC80; /*0x49bb6e*/
      v17 = (float *)(*((_DWORD *)a2 + 1) + 0x54); /*0x49bb74*/
      v53 = v10; /*0x49ba9a*/
      *v17 = v53; /*0x49bb77*/
      v17[1] = v55; /*0x49bb7d*/
      v17[2] = v56; /*0x49bb80*/
      *(_WORD *)(*((_DWORD *)a2 + 1) + 0x18) &= ~1u; /*0x49bb86*/
      NiAVObject_UpdateNiAVObject(*((NiAVObject **)a2 + 1), 0.0, 1); /*0x49bb95*/
    }
    else
    {
      *(_WORD *)(*((_DWORD *)a2 + 1) + 0x18) |= 1u; /*0x49bb9f*/
    }
    unk34 = (_DWORD *)this->unk34; /*0x49bba4*/
    v19 = 0; /*0x49bbad*/
    v36 = flt_A32048; /*0x49bbaf*/
    v20 = 0; /*0x49bbb3*/
    v44 = 0; /*0x49bbb8*/
    if ( unk34 ) /*0x49bbbc*/
    {
      do /*0x49bc7c*/
      {
        v21 = unk34[2]; /*0x49bbc4*/
        v22 = (_DWORD *)*unk34; /*0x49bbc7*/
        if ( v20 ) /*0x49bbc9*/
        {
          v23 = *((_DWORD *)a2 + 1); /*0x49bbcf*/
          v58 = *(float *)(*(_DWORD *)(v21 + 4) + 0x54) - *(float *)(v23 + 0x54); /*0x49bc04*/
          v60 = *(float *)(*(_DWORD *)(v21 + 4) + 0x58) - *(float *)(v23 + 0x58); /*0x49bc18*/
          v48 = v58 * v58 + v60 * v60 + 0.0 * 0.0; /*0x49bc3c*/
          v49 = sqrt(v48); /*0x49bc49*/
          if ( v36 > (double)v49 ) /*0x49bc64*/
          {
            v36 = v49; /*0x49bc66*/
            v44 = v21; /*0x49bc6a*/
          }
        }
        unk34 = v22; /*0x49bc74*/
        if ( (float *)v21 == a2 ) /*0x49bc76*/
          v20 = 1; /*0x49bc78*/
      }
      while ( v22 ); /*0x49bc7c*/
      v19 = v44; /*0x49bc82*/
    }
    if ( v36 != dbl_A3A5B0 ) /*0x49bc95*/
    {
      v50 = (v36 - 0.0) / (dbl_A3F3F8 - 0.0) * (1.0 - 0.0) + 0.0; /*0x49bcb5*/
      if ( v50 >= 0.0 ) /*0x49bcc4*/
        v45 = (v36 - 0.0) / (dbl_A3F3F8 - 0.0) * (1.0 - 0.0) + 0.0; /*0x49bcce*/
      else
        v45 = 0.0; /*0x49bcc8*/
      v24 = v50; /*0x49bcda*/
      if ( v45 <= 1.0 ) /*0x49bcdf*/
      {
        if ( v50 < 0.0 ) /*0x49bcf0*/
          v24 = 0.0; /*0x49bcf4*/
      }
      else
      {
        v24 = 1.0; /*0x49bce5*/
      }
      v37 = v24; /*0x49bcf6*/
      if ( v37 < (double)a2[6] ) /*0x49bd0a*/
        a2[6] = v37; /*0x49bd0c*/
      if ( *(float *)(v19 + 0x18) > (double)v37 ) /*0x49bd19*/
        *(float *)(v19 + 0x18) = v37; /*0x49bd1b*/
    }
    NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)a2 + 1), 4); /*0x49bd27*/
    v26 = a2[6]; /*0x49bd2c*/
    v27 = NiPropertyByID; /*0x49bd34*/
    NiPropertyByID[5].members.super.m_uiRefCount = (UInt32)a2[6]; /*0x49bd36*/
    v28 = a3 || v61 && !IsUnderwater && sub_5E05B0(*(_DWORD **)a2); /*0x49bd58*/
    BYTE1(OB_ShaderConstantStorage_010201A0[0x4E]) = v28; /*0x49bd5e*/
    LOBYTE(v27[5].members.m_controller) = v28; /*0x49bd63*/
    BYTE1(v27[5].members.m_controller) = v61; /*0x49bd69*/
    if ( unk_B42D78 ) /*0x49bd6f*/
      ((void (__cdecl *)(int, int))unk_B42D78)(1, 1); /*0x49bd7c*/
    else
      v26 = 0.0; /*0x49bd87*/
    v62 = v26; /*0x49bd90*/
    if ( BYTE1(v27[5].members.m_controller) ) /*0x49bd89*/
    {
      if ( LOBYTE(v27[5].members.m_controller) && *(float *)&v27[5].members.m_pcName <= 1.0 ) /*0x49bdac*/
      {
        v29 = *(float *)&v27[5].members.m_pcName + v62; /*0x49bdb4*/
        if ( v29 > 1.0 ) /*0x49bdc1*/
          v29 = 1.0; /*0x49bdc3*/
LABEL_46:
        *(float *)&v27[5].members.m_pcName = v29; /*0x49bdf9*/
LABEL_47:
        if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x49be06*/
        {
          ShaderDefinition = GetShaderDefinition(0x14u); /*0x49be0e*/
          if ( ShaderDefinition ) /*0x49be18*/
            shader = ShaderDefinition->shader; /*0x49be1a*/
          else
            shader = 0; /*0x49be1f*/
          LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) = 1; /*0x49be2a*/
          OB_NiSmartPointer_Assign_010201A0((int *)&OB_ShaderConstantStorage_010201A0[0x68], (int *)a2 + 3); /*0x49be31*/
          if ( !MEMORY[0xB33E90][0x139B] ) /*0x49be36*/
          {
            if ( *(_DWORD *)&MEMORY[0xB33E90][0x1390] ) /*0x49be3f*/
              v32 = *(float *)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0x98); /*0x49be48*/
            else
              v32 = flt_A31C80; /*0x49be50*/
            OB_ShaderConstantStorage_010201A0[0x4B] = v32; /*0x49be56*/
          }
          Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x49be5e*/
          sub_7B4900(shader, unk_B43104, *((_DWORD *)a2 + 2), *((_DWORD *)a2 + 2)); /*0x49be72*/
          Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x49be79*/
          OB_NiSmartPointer_Assign_010201A0((int *)a2 + 2, (int *)&OB_ShaderConstantStorage_010201A0[0x65]); /*0x49be88*/
          if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x68]) ) /*0x49be8d*/
          {
            v33 = OB_ShaderConstantStorage_010201A0[0x68]; /*0x49be96*/
            if ( !InterlockedDecrement((volatile LONG *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x68]) + 4)) /*0x49bea8*/
              && v33 != 0.0 )
            {
              (**(void (__thiscall ***)(float, int))LODWORD(v33))(COERCE_FLOAT(LODWORD(v33)), 1); /*0x49beb2*/
            }
            OB_ShaderConstantStorage_010201A0[0x68] = 0.0; /*0x49beb4*/
          }
          v34 = OB_ShaderConstantStorage_010201A0[0x69]; /*0x49bebe*/
          LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) = 0; /*0x49bec4*/
          a2[7] = v34; /*0x49becb*/
          a2[8] = OB_ShaderConstantStorage_010201A0[0x6A]; /*0x49bed4*/
        }
        return; /*0x49bed4*/
      }
      if ( *(float *)&v27[5].members.m_pcName <= 0.0 ) /*0x49bdd4*/
        goto LABEL_47; /*0x49bdd4*/
    }
    v29 = *(float *)&v27[5].members.m_pcName - v62 / dbl_A3F3F0; /*0x49bde6*/
    if ( v29 < 0.0 ) /*0x49bdf1*/
      v29 = 0.0; /*0x49bdf3*/
    goto LABEL_46; /*0x49bdf3*/
  }
}
