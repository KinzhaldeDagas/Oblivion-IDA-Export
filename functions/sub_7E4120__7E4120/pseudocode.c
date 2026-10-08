// Verified (Oblivion): lazily creates and caches a NiTriShape template with particle geometry data; NiNode_CreateAttachedParticleShaderProperty clones this template before asking BSShaderManager_AssignShadersRecursive to assign shader properties.
NiTriShape *__cdecl ParticleShaderProperty_CreateTemplateGeometry()
{
  NiTriShape *result; // eax
  int v1; // eax
  int v2; // edi
  UInt16 v3; // bp
  int v4; // esi
  UInt16 *v5; // ebx
  int v6; // eax
  float *v7; // ecx
  int v8; // esi
  _WORD *v9; // edx
  float *p_x; // eax
  NiTriShapeData *v11; // eax
  unsigned __int16 *v12; // edi
  NiTriShapeData *v13; // ebx
  NiObject *v14; // eax
  void *v15; // eax
  NiTriShape *v16; // eax
  NiTriShape *v17; // esi
  int v18; // eax
  double v19; // st7
  int v20; // edx
  int v21; // edi
  void (__thiscall ***v22)(_DWORD, int); // edi
  int v23; // [esp+14h] [ebp-78h]
  NiPoint3 *v24; // [esp+18h] [ebp-74h]
  int v25; // [esp+20h] [ebp-6Ch]
  UInt16 v26; // [esp+24h] [ebp-68h]
  void *v27; // [esp+28h] [ebp-64h]
  float v28; // [esp+4Ch] [ebp-40h]
  float v29; // [esp+7Ch] [ebp-10h]

  if ( !*(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] ) /*0x7e414a*/
    return 0; /*0x7e4154*/
  result = (NiTriShape *)unk_B46014; /*0x7e416d*/
  if ( !unk_B46014 )
  {
    v1 = unk_B4600C; /*0x7e417a*/
    if ( !unk_B4600C )
    {
      v1 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ? 0x28 : 0x78;
      unk_B4600C = v1; /*0x7e4192*/
    }
    v2 = (unsigned __int16)v1; /*0x7e419a*/
    v3 = 2 * v1; /*0x7e419d*/
    v4 = 4 * (unsigned __int16)v1; /*0x7e41b0*/
    v26 = 2 * v1; /*0x7e41b7*/
    v25 = v4; /*0x7e41bb*/
    v5 = (UInt16 *)FormHeapAlloc(
                     (unsigned __int64)(6 * (unsigned int)(unsigned __int16)v1) >> 0x1F != 0
                   ? 0xFFFFFFFF
                   : 0xC * (unsigned __int16)v1);
    v24 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v4);
    v6 = FormHeapAlloc((unsigned __int64)(unsigned int)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4);
    v27 = (void *)v6; /*0x7e4208*/
    if ( v2 > 0 ) /*0x7e420c*/
    {
      v7 = (float *)(v6 + 0x10); /*0x7e4218*/
      v28 = kTerrainLODQuadRayDirectionZ; /*0x7e421b*/
      v8 = 0; /*0x7e4227*/
      v9 = v5 + 2; /*0x7e422b*/
      p_x = &v24[2].x; /*0x7e4232*/
      v23 = v2; /*0x7e423f*/
      do /*0x7e433c*/
      {
        p_x[0xFFFFFFFA] = v28; /*0x7e4289*/
        p_x[0xFFFFFFFB] = v28; /*0x7e4290*/
        p_x[0xFFFFFFFD] = 1.0; /*0x7e4297*/
        p_x[0xFFFFFFFE] = v28; /*0x7e429e*/
        p_x[0xFFFFFFFF] = 0.0; /*0x7e42a5*/
        *p_x = 1.0; /*0x7e42ac*/
        p_x[1] = 1.0; /*0x7e42b2*/
        p_x[2] = 0.0; /*0x7e42b9*/
        p_x[3] = v28; /*0x7e42c0*/
        p_x[4] = 1.0; /*0x7e42c7*/
        p_x[5] = 0.0; /*0x7e42ce*/
        p_x[0xFFFFFFFC] = 0.0; /*0x7e42d5*/
        v7[0xFFFFFFFC] = 0.0; /*0x7e42d8*/
        v7[0xFFFFFFFD] = 0.0; /*0x7e42df*/
        v7[0xFFFFFFFE] = 1.0; /*0x7e42e6*/
        v7[0xFFFFFFFF] = 0.0; /*0x7e42ed*/
        *v7 = 1.0; /*0x7e42f4*/
        v7[1] = 1.0; /*0x7e42fa*/
        v7[2] = 0.0; /*0x7e4301*/
        v7[3] = 1.0; /*0x7e4308*/
        v9[0xFFFFFFFF] = v8 + 1; /*0x7e430e*/
        v9[0xFFFFFFFE] = v8; /*0x7e4318*/
        v9[2] = v8; /*0x7e431c*/
        *v9 = v8 + 2; /*0x7e4320*/
        v9[1] = v8 + 3; /*0x7e4323*/
        v9[3] = v8 + 2; /*0x7e4327*/
        v8 += 4; /*0x7e432b*/
        p_x += 0xC; /*0x7e432e*/
        v7 += 8; /*0x7e4331*/
        v9 += 6; /*0x7e4334*/
        --v23; /*0x7e4337*/
      }
      while ( v23 ); /*0x7e433c*/
      v4 = v25; /*0x7e4346*/
      v3 = v26; /*0x7e434a*/
    }
    v11 = (NiTriShapeData *)FormHeapAlloc(0x58u); /*0x7e4350*/
    v12 = 0; /*0x7e435c*/
    if ( v11 ) /*0x7e4367*/
      v13 = NiTriShapeData_ConstructWithData(v11, v4, v24, 0, 0, v27, 1, 0, v3, v5); /*0x7e4382*/
    else
      v13 = 0; /*0x7e4386*/
    v14 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x7e4394*/
    if ( v14 ) /*0x7e43ad*/
      v12 = (unsigned __int16 *)sub_7E3AE0(v14, v4, 1); /*0x7e43b9*/
    OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(v12, 1u); /*0x7e43c6*/
    v15 = (void *)sub_7E48E0(); /*0x7e43d5*/
    OB_NiAdditionalGeometryData_SetDataBlock_010201A0(v12, 0, v15, 4 * v4, 1); /*0x7e43df*/
    OB_NiAdditionalGeometryData_SetDataStream_010201A0(v12, 0, 0, 0, 1u, v4, 4u, 4u); /*0x7e43f3*/
    sub_6C61E0(v13, (int)v12); /*0x7e43fb*/
    v16 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x7e4405*/
    if ( v16 ) /*0x7e441e*/
      v17 = OB_NiTriShape_ctorWithData_010201A0(v16, v13); /*0x7e4428*/
    else
      v17 = 0; /*0x7e442c*/
    v18 = *((_DWORD *)v17 + 0x2D); /*0x7e442e*/
    v19 = flt_A427E0; /*0x7e4434*/
    v20 = *(_DWORD *)(v18 + 0x10); /*0x7e4440*/
    v21 = *(_DWORD *)(v18 + 0x14); /*0x7e4443*/
    *(_DWORD *)(v18 + 0xC) = *(_DWORD *)(v18 + 0xC); /*0x7e4446*/
    v29 = v19; /*0x7e444d*/
    *(_DWORD *)(v18 + 0x10) = v20; /*0x7e4455*/
    *(_DWORD *)(v18 + 0x14) = v21; /*0x7e4458*/
    *(float *)(v18 + 0x18) = v29; /*0x7e445b*/
    result = (NiTriShape *)unk_B46014; /*0x7e445e*/
    if ( (NiTriShape *)unk_B46014 != v17 ) /*0x7e446c*/
    {
      if ( result ) /*0x7e4470*/
      {
        v22 = (void (__thiscall ***)(_DWORD, int))unk_B46014; /*0x7e4472*/
        if ( !InterlockedDecrement((volatile LONG *)result + 1) ) /*0x7e4478*/
          (**v22)(v22, 1); /*0x7e448e*/
      }
      unk_B46014 = (int)v17; /*0x7e4490*/
      InterlockedIncrement((volatile LONG *)v17 + 1); /*0x7e449a*/
      return (NiTriShape *)unk_B46014; /*0x7e44a0*/
    }
  }
  return result; /*0x7e4156*/
}
