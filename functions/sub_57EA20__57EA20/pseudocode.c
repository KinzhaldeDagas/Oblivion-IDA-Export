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
  NiNode *v30; // eax
  float v31; // [esp+0h] [ebp-1Ch]
  float a2; // [esp+4h] [ebp-18h]
  float v34; // [esp+24h] [ebp+8h]
  float v35; // [esp+28h] [ebp+Ch]
  float v36; // [esp+28h] [ebp+Ch]

  if ( a1 )
  {
    v4 = a1->__vftable->Unk_02(a1);
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a1, 2);
    v6 = sub_588E60((int)v4);
    if ( !v6 )
    {
      if ( v4 )
        v6 = sub_588E60(v4[3].members.m_uiRefCount);
    }
    if ( v6 )
    {
      if ( fConstant_2 == Tile_GetFloat(v6, 0xFA9) )
      {
        v34 = fabs(arg4);
        if ( v34 >= 1.0 )
          Tile_SetFloat(v6, (_DWORD *)0xFA1, fConstant_2);
        else
          Tile_SetFloat(v6, (_DWORD *)0xFA1, 1.0);
        return;
      }
      a3 = Tile_GetFloat(v6, 0xFA7) / dbl_A3DDD8;
    }
    v7 = NiRTTI_Cast((BSStringT *)dword_B3FCD4, a1);
    v8 = a3;
    v9 = arg4;
    v10 = v7;
    if ( v7 && (m_uiRefCount = v7[0x16].members.m_uiRefCount, (v12 = *(_DWORD *)(m_uiRefCount + 0x24)) != 0) )
    {
      v13 = *(unsigned __int16 *)(m_uiRefCount + 8);
      if ( v13 )
      {
        v14 = (float *)(v12 + 0xC);
        v15 = v13;
        v35 = fabs(v9);
        v16 = dbl_A68FE0;
        v17 = 0.0;
        v18 = v35;
        while ( 1 )
        {
          if ( v18 >= v16 )
          {
            v23 = v8 * v9;
            v24 = v8 * v9 >= v8 ? a3 : v23;
            if ( v24 >= 0.0 )
            {
              if ( v23 >= v8 )
                v23 = a3;
            }
            else
            {
              v23 = 0.0;
            }
            *v14 = v23;
            v25 = v18;
            v21 = v17;
            v22 = v25;
          }
          else
          {
            v20 = v18;
            v21 = v17;
            v22 = v20;
            *v14 = v21;
          }
          v14 += 4;
          if ( !--v15 )
            break;
          v19 = v21;
          v18 = v22;
          v17 = v19;
        }
      }
      *(_WORD *)(v10[0x16].members.m_uiRefCount + 0x2E) |= 4u;
    }
    else if ( NiPropertyByID )
    {
      v36 = fabs(v9);
      if ( v36 >= dbl_A68FE0 )
      {
        v26 = v8 * v9;
        if ( v8 * v9 >= v8 )
          v27 = a3;
        else
          v27 = v26;
        if ( v27 >= 0.0 )
        {
          if ( v26 >= v8 )
            v26 = a3;
        }
        else
        {
          v26 = 0.0;
        }
        *(float *)&NiPropertyByID[3].members.m_pcName = v26;
      }
      else
      {
        *(float *)&NiPropertyByID[3].members.m_pcName = 0.0;
      }
      ++NiPropertyByID[3].members.m_controller;
    }
    if ( v4 )
    {
      if ( v6 )
      {
        if ( Tile_GetFloat(v6, 0xFA8) == flt_A68FD8 )
          return;
        v8 = a3;
        v9 = arg4;
      }
      m_uiRefCount_high = HIWORD(v4[0x16].members.m_uiRefCount);
      v29 = 0;
      if ( HIWORD(v4[0x16].members.m_uiRefCount) )
      {
        while ( 1 )
        {
          v30 = m_uiRefCount_high > v29 ? *((NiNode **)&v4[0x16].__vftable->super.Destructor + v29) : 0;
          a2 = v8;
          v31 = v9;
          sub_57EA20(v30, v31, a2);
          m_uiRefCount_high = HIWORD(v4[0x16].members.m_uiRefCount);
          if ( ++v29 >= m_uiRefCount_high )
            break;
          v8 = a3;
          v9 = arg4;
        }
      }
    }
  }
}
