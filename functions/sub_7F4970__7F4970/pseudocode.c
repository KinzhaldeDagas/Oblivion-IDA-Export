int sub_7F4970()
{
  int result; // eax
  int v1; // eax
  int v2; // esi
  int v3; // edi
  UInt16 v4; // bp
  NiPoint3 *v5; // ebx
  int v6; // eax
  _WORD *v7; // ecx
  float *p_x; // eax
  int v9; // edx
  int v10; // edi
  NiTriShapeData *v11; // eax
  unsigned __int16 *v12; // esi
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
  UInt16 *v23; // [esp+20h] [ebp-44h]
  float v24; // [esp+24h] [ebp-40h]
  float v25; // [esp+54h] [ebp-10h]

  result = unk_B4690C; /*0x7f4997*/
  if ( !unk_B4690C )
  {
    v1 = unk_B468FC; /*0x7f49a4*/
    if ( !unk_B468FC )
    {
      v1 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x4B : 0xEB;
      unk_B468FC = v1; /*0x7f49c2*/
    }
    if ( (_WORD)v1 )
    {
      v2 = dword_B2DC90 * (unsigned __int16)v1; /*0x7f49e8*/
      v3 = 4 * v2; /*0x7f49ef*/
      v4 = 2 * v2; /*0x7f4a04*/
      v5 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)(4 * v2)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * v2);
      v6 = FormHeapAlloc((unsigned __int64)(unsigned int)(6 * v2) >> 0x1F != 0 ? 0xFFFFFFFF : 0xC * v2);
      v23 = (UInt16 *)v6; /*0x7f4a3e*/
      if ( v2 ) /*0x7f4a42*/
      {
        v7 = (_WORD *)(v6 + 4); /*0x7f4a4e*/
        v24 = kTerrainLODQuadRayDirectionZ; /*0x7f4a51*/
        p_x = &v5[2].x; /*0x7f4a55*/
        v9 = 0; /*0x7f4a5c*/
        v10 = v2; /*0x7f4a60*/
        do /*0x7f4b0d*/
        {
          p_x[0xFFFFFFFA] = v24; /*0x7f4a96*/
          p_x[0xFFFFFFFB] = v24; /*0x7f4a9d*/
          p_x[0xFFFFFFFD] = 1.0; /*0x7f4aa4*/
          p_x[0xFFFFFFFE] = v24; /*0x7f4aab*/
          p_x[0xFFFFFFFF] = 0.0; /*0x7f4ab2*/
          *p_x = 1.0; /*0x7f4ab9*/
          p_x[1] = 1.0; /*0x7f4abf*/
          p_x[2] = 0.0; /*0x7f4ac6*/
          p_x[3] = v24; /*0x7f4acd*/
          p_x[4] = 1.0; /*0x7f4ad4*/
          p_x[5] = 0.0; /*0x7f4adb*/
          p_x[0xFFFFFFFC] = 0.0; /*0x7f4ade*/
          v7[0xFFFFFFFF] = v9 + 1; /*0x7f4ae4*/
          v7[0xFFFFFFFE] = v9; /*0x7f4aee*/
          v7[2] = v9; /*0x7f4af2*/
          *v7 = v9 + 2; /*0x7f4af6*/
          v7[1] = v9 + 3; /*0x7f4af9*/
          v7[3] = v9 + 2; /*0x7f4afd*/
          v9 += 4; /*0x7f4b01*/
          p_x += 0xC; /*0x7f4b04*/
          v7 += 6; /*0x7f4b07*/
          --v10; /*0x7f4b0a*/
        }
        while ( v10 ); /*0x7f4b0d*/
        v3 = 4 * v2; /*0x7f4b13*/
        v4 = 2 * v2; /*0x7f4b17*/
      }
      v11 = (NiTriShapeData *)FormHeapAlloc(0x58u); /*0x7f4b1d*/
      v12 = 0; /*0x7f4b29*/
      if ( v11 ) /*0x7f4b31*/
        v13 = NiTriShapeData_ConstructWithData(v11, v3, v5, 0, 0, 0, 0, 0, v4, v23); /*0x7f4b47*/
      else
        v13 = 0; /*0x7f4b4b*/
      v14 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x7f4b56*/
      if ( v14 ) /*0x7f4b6c*/
        v12 = (unsigned __int16 *)sub_7E3AE0(v14, v3, 1); /*0x7f4b78*/
      OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(v12, 1u); /*0x7f4b82*/
      v15 = (void *)sub_7F3790(); /*0x7f4b91*/
      OB_NiAdditionalGeometryData_SetDataBlock_010201A0(v12, 0, v15, 4 * v3, 1); /*0x7f4b9b*/
      OB_NiAdditionalGeometryData_SetDataStream_010201A0(v12, 0, 0, 0, 1u, v3, 4u, 4u); /*0x7f4baf*/
      sub_6C61E0(v13, (int)v12); /*0x7f4bb7*/
      v16 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x7f4bc1*/
      if ( v16 ) /*0x7f4bd7*/
        v17 = OB_NiTriShape_ctorWithData_010201A0(v16, v13); /*0x7f4be1*/
      else
        v17 = 0; /*0x7f4be5*/
      v18 = *((_DWORD *)v17 + 0x2D); /*0x7f4be7*/
      v19 = flt_A2FF44; /*0x7f4bed*/
      v20 = *(_DWORD *)(v18 + 0x10); /*0x7f4bf9*/
      v21 = *(_DWORD *)(v18 + 0x14); /*0x7f4bfc*/
      *(_DWORD *)(v18 + 0xC) = *(_DWORD *)(v18 + 0xC); /*0x7f4bff*/
      v25 = v19; /*0x7f4c06*/
      *(_DWORD *)(v18 + 0x10) = v20; /*0x7f4c0e*/
      *(_DWORD *)(v18 + 0x14) = v21; /*0x7f4c11*/
      *(float *)(v18 + 0x18) = v25; /*0x7f4c14*/
      result = unk_B4690C; /*0x7f4c17*/
      if ( (NiTriShape *)unk_B4690C != v17 ) /*0x7f4c22*/
      {
        if ( result ) /*0x7f4c26*/
        {
          v22 = (void (__thiscall ***)(_DWORD, int))unk_B4690C; /*0x7f4c28*/
          if ( !InterlockedDecrement((volatile LONG *)(result + 4)) ) /*0x7f4c2e*/
            (**v22)(v22, 1); /*0x7f4c44*/
        }
        unk_B4690C = (int)v17; /*0x7f4c46*/
        InterlockedIncrement((volatile LONG *)v17 + 1); /*0x7f4c50*/
        return unk_B4690C; /*0x7f4c56*/
      }
    }
    else
    {
      return 0; /*0x7f49cf*/
    }
  }
  return result; /*0x7f49d1*/
}
