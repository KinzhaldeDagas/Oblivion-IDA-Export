void __stdcall sub_57EA20(NiObject *a1, float arg4, float a3)
{
  NiObject *v4; // edi
  NiProperty *NiPropertyByID; // ebx
  Tile *v6; // ebp
  NiObject *v7; // eax
  long double v8; // st7
  long double v9; // st6
  NiObject *v10; // esi
  UInt32 m_uiRefCount; // eax
  int v12; // ecx
  int v13; // eax
  float *v14; // ecx
  int v15; // edx
  double v16; // st5
  double v17; // st4
  double v18; // st2
  double v19; // rt0
  double v20; // rt1
  double v21; // st2
  double v22; // st4
  long double v23; // st1
  long double v24; // st0
  double v25; // rt2
  long double v26; // st5
  long double v27; // st4
  unsigned int m_uiRefCount_high; // eax
  unsigned int v29; // esi
  NiObject *v30; // eax
  float v31; // [esp+0h] [ebp-1Ch]
  float a2; // [esp+4h] [ebp-18h]
  float v34; // [esp+24h] [ebp+8h]
  float v35; // [esp+28h] [ebp+Ch]
  float v36; // [esp+28h] [ebp+Ch]

  if ( a1 )
  {
    v4 = a1->__vftable->Unk_02(a1); /*0x57ea42*/
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a1, 2); /*0x57ea4a*/
    v6 = sub_588E60((int)v4); /*0x57ea51*/
    if ( !v6 ) /*0x57ea58*/
    {
      if ( v4 ) /*0x57ea5c*/
        v6 = sub_588E60(v4[3].members.m_uiRefCount); /*0x57ea6a*/
    }
    if ( v6 ) /*0x57ea76*/
    {
      if ( fConstant_2 == Tile_GetFloat(v6, 0xFA9) ) /*0x57ea97*/
      {
        v34 = fabs(arg4); /*0x57eaa2*/
        if ( v34 >= 1.0 ) /*0x57eab5*/
          Tile_SetFloat(v6, 0xFA1u, fConstant_2); /*0x57ead8*/
        else
          Tile_SetFloat(v6, 0xFA1u, 1.0); /*0x57eac1*/
        return; /*0x57eacb*/
      }
      a3 = Tile_GetFloat(v6, 0xFA7) / dbl_A3DDD8; /*0x57eaf9*/
    }
    v7 = NiRTTI_Cast((BSStringT *)&stru_B3FCD4, a1); /*0x57eb03*/
    v8 = a3; /*0x57eb08*/
    v9 = arg4; /*0x57eb0c*/
    v10 = v7; /*0x57eb10*/
    if ( v7 && (m_uiRefCount = v7[0x16].members.m_uiRefCount, (v12 = *(_DWORD *)(m_uiRefCount + 0x24)) != 0) )
    {
      v13 = *(unsigned __int16 *)(m_uiRefCount + 8); /*0x57eb2e*/
      if ( v13 )
      {
        v14 = (float *)(v12 + 0xC); /*0x57eb38*/
        v15 = v13; /*0x57eb3d*/
        v35 = fabs(v9); /*0x57eb3f*/
        v16 = dbl_A68FE0; /*0x57eb43*/
        v17 = 0.0; /*0x57eb49*/
        v18 = v35; /*0x57eb4d*/
        while ( 1 )
        {
          if ( v18 >= v16 )
          {
            v23 = v8 * v9; /*0x57eb66*/
            v24 = v8 * v9 >= v8 ? a3 : v23;
            if ( v24 >= 0.0 ) /*0x57eb7e*/
            {
              if ( v23 >= v8 ) /*0x57eb8d*/
                v23 = a3; /*0x57eb91*/
            }
            else
            {
              v23 = 0.0; /*0x57eb82*/
            }
            *v14 = v23; /*0x57eb93*/
            v25 = v18; /*0x57eb95*/
            v21 = v17; /*0x57eb95*/
            v22 = v25; /*0x57eb95*/
          }
          else
          {
            v20 = v18; /*0x57eb5e*/
            v21 = v17; /*0x57eb5e*/
            v22 = v20; /*0x57eb5e*/
            *v14 = v21; /*0x57eb60*/
          }
          v14 += 4; /*0x57eb97*/
          if ( !--v15 ) /*0x57eb9d*/
            break; /*0x57eb9d*/
          v19 = v21; /*0x57eb53*/
          v18 = v22; /*0x57eb53*/
          v17 = v19; /*0x57eb53*/
        }
      }
      *(_WORD *)(v10[0x16].members.m_uiRefCount + 0x2E) |= 4u; /*0x57ebad*/
    }
    else if ( NiPropertyByID ) /*0x57ebb6*/
    {
      v36 = fabs(v9); /*0x57ebbc*/
      if ( v36 >= dbl_A68FE0 ) /*0x57ebcf*/
      {
        v26 = v8 * v9; /*0x57ebda*/
        if ( v8 * v9 >= v8 ) /*0x57ebe3*/
          v27 = a3; /*0x57ebe9*/
        else
          v27 = v26; /*0x57ebe5*/
        if ( v27 >= 0.0 ) /*0x57ebf6*/
        {
          if ( v26 >= v8 ) /*0x57ec05*/
            v26 = a3; /*0x57ec09*/
        }
        else
        {
          v26 = 0.0; /*0x57ebf8*/
        }
        *(float *)&NiPropertyByID[3].members.m_pcName = v26; /*0x57ec0b*/
      }
      else
      {
        *(float *)&NiPropertyByID[3].members.m_pcName = 0.0; /*0x57ebd3*/
      }
      ++NiPropertyByID[3].members.m_controller; /*0x57ec0e*/
    }
    if ( v4 )
    {
      if ( v6 ) /*0x57ec18*/
      {
        if ( Tile_GetFloat(v6, 0xFA8) == flt_A68FD8 ) /*0x57ec35*/
          return; /*0x57ec35*/
        v8 = a3; /*0x57ec37*/
        v9 = arg4; /*0x57ec3b*/
      }
      m_uiRefCount_high = HIWORD(v4[0x16].members.m_uiRefCount); /*0x57ec3f*/
      v29 = 0; /*0x57ec46*/
      if ( HIWORD(v4[0x16].members.m_uiRefCount) )
      {
        while ( 1 )
        {
          v30 = m_uiRefCount_high > v29 ? *((NiObject **)&v4[0x16].__vftable->super.Destructor + v29) : 0;
          a2 = v8; /*0x57ec82*/
          v31 = v9; /*0x57ec86*/
          sub_57EA20(v30, v31, a2); /*0x57ec8a*/
          m_uiRefCount_high = HIWORD(v4[0x16].members.m_uiRefCount); /*0x57ec8f*/
          if ( ++v29 >= m_uiRefCount_high ) /*0x57ec9b*/
            break; /*0x57ec9b*/
          v8 = a3; /*0x57ec60*/
          v9 = arg4; /*0x57ec64*/
        }
      }
    }
  }
}
