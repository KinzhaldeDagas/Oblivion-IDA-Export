int *__cdecl sub_7ED6C0(int a1, int a2, float a3)
{
  int *result; // eax
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
  double y; // st6
  double z; // st6
  char v26; // cl
  double v27; // st5
  float v28; // eax
  float v29; // edx
  float v30; // eax
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

  result = (int *)a1;
  if ( a1 < 8 )
  {
    if ( !a2 )
    {
      v4 = dword_B25AD4;
      result = &dword_B46498 + 4 * (unsigned __int16)(a1 + 1);
      *result = dword_B25AD0;
      v5 = dword_B25AD8;
      result[1] = v4;
      v6 = dword_B25ADC;
      result[2] = v5;
      result[3] = v6;
      return result;
    }
    v7 = *sub_405AD0((_DWORD *)a2, &v43);
    if ( v43 )
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v43;
      if ( !InterlockedDecrement((volatile LONG *)(v43 + 4)) )
        (**v8)(v8, 1);
    }
    v9 = *(_BYTE *)(a2 + 0xFC);
    v10 = a3;
    v11 = 1.0;
    if ( v9 )
    {
      if ( v7 )
      {
        v19 = *(float *)(v7 + 0x8C);
        v20 = *(float *)(v7 + 0x90);
        v47.x = *(float *)(v7 + 0x88);
        v45.x = v47.x;
        v47.y = v19;
        v47.z = v20;
        v45.y = v19;
        v45.z = v20;
        v46 = 1.0;
        sub_7ECAE0(a1 + 9, SLODWORD(v47.x), SLODWORD(v19), SLODWORD(v20), COERCE_INT(1.0));
LABEL_27:
        v26 = UseHDR;
        v27 = *(float *)(v7 + 0xDC);
        if ( !UseHDR && v27 > dbl_A2F928 )
        {
          v40 = v11;
          v27 = v40;
        }
        v28 = *(float *)(v7 + 0xF0);
        v47.x = *(float *)(v7 + 0xEC);
        v47.z = *(float *)(v7 + 0xF4);
        v47.x = v47.x * v27;
        v47.y = v28 * v27;
        v47.z = v27 * v47.z;
        v45.x = v47.x * v10;
        v45.y = v47.y * v10;
        v45.z = v47.z * v10;
        v41 = *(float *)(a2 + 0xD4);
        v45.x = v41 * v45.x;
        v45.y = v41 * v45.y;
        v45.z = v41 * v45.z;
        if ( v9 )
        {
          if ( v11 > v10 )
          {
            v29 = *(float *)&dword_B3FA94;
            v30 = *(float *)&dword_B3FA98;
            LODWORD(v45.x) = dword_B3FA90;
            v45.y = v29;
            v45.z = v30;
          }
        }
        else if ( v26 )
        {
          if ( !byte_B43074 )
            NiPoint3::MutliplyByValue(&v45, flt_B42F4C);
        }
        v31 = dword_B42E90;
        v44 = *(float *)(a2 + 0xD8);
        if ( v31 >= 0x10Fu && v31 <= 0x129u || v31 == 0x16A || v31 == 0x16C || (unsigned __int16)(v31 - 0x173) <= 2u )
        {
          if ( NiNode_GetNiPropertyByID(*(NiNode **)dword_B42EB8, 4) )
          {
            NiPropertyByID = NiNode_GetNiPropertyByID(*(NiNode **)dword_B42EB8, 4);
            if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5 )
            {
              v33 = NiNode_GetNiPropertyByID(*(NiNode **)dword_B42EB8, 4);
              if ( (*((int (__thiscall **)(NiProperty *))v33->vtbl + 0x15))(v33) <= 0xA )
              {
                v34 = NiNode_GetNiPropertyByID(*(NiNode **)dword_B42EB8, 4);
                if ( v34 )
                {
                  m_controller = v34[6].members.m_controller;
                  v45.x = *(float *)&m_controller * v45.x;
                  v45.y = *(float *)&m_controller * v45.y;
                  v45.z = *(float *)&m_controller * v45.z;
                }
              }
            }
          }
        }
        v47.x = v45.x;
        v47.y = v45.y;
        v35 = (float *)(&dword_B46498 + 4 * (unsigned __int16)(a1 + 1));
        v47.z = v45.z;
        v36 = v44;
        *v35 = v45.x;
        v48 = v36;
        v35[1] = v47.y;
        v35[2] = v47.z;
        v35[3] = v48;
        if ( v9 )
        {
          v47.x = *(float *)(v7 + 0xF8);
          v47.y = 0.0;
          v47.z = 0.0;
          v48 = 1.0;
          v37 = (NiPoint3 *)(&dword_B46498 + 4 * (unsigned __int16)(a1 + 0x11));
          *v37 = v47;
          v37[1].x = v48;
        }
        byte_B42F3D = v9;
        result = (int *)((v9 != 0) + 1);
        *(_DWORD *)(4 * a1 + 0xB46138) = result;
        return result;
      }
    }
    else
    {
      if ( v7 )
      {
        v12 = *(float *)(v7 + 0x10C);
        v13 = *(float *)(v7 + 0x110);
        v47.x = *(float *)(v7 + 0x108);
        v47.y = v12;
        v47.z = v13;
        sub_43F350(&v47.x);
        v45.x = v47.x;
        v45.y = v47.y;
        v45.z = v47.z;
        v46 = 1.0;
        sub_7ECAE0(a1 + 0x11, SLODWORD(v47.x), SLODWORD(v47.y), SLODWORD(v47.z), COERCE_INT(1.0));
        v10 = a3;
      }
      if ( !byte_B42EA7 || (v10 = a3, NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B40224, (NiObject *)v7)) )
      {
        v14 = *(float *)(v7 + 0xDC);
        if ( !UseHDR && v14 > dbl_A2F928 )
          v14 = (float)1.0;
        v15 = *(float *)(v7 + 0xE4);
        v16 = *(float *)(v7 + 0xE8);
        v45.x = *(float *)(v7 + 0xE0);
        v45.x = v45.x * v14;
        v45.y = v15 * v14;
        v45.z = v14 * v16;
        v17 = flt_B46924;
        if ( v17 > 0.0 )
        {
          v38 = dbl_A924F0 + v45.x * dbl_A924F0 + dbl_A924F8 * v45.y + v45.z;
          v18 = v38;
          if ( v38 > 0.0 )
          {
            if ( v18 <= v17 )
            {
              v22 = v17 / v18;
              x = v45.x;
            }
            else
            {
              x = v45.x;
              v22 = 1.0;
            }
            v39 = v22;
            v23 = dbl_A2FC80;
            v47.x = (x + v23) * v39;
            v47.y = (v45.y + v23) * v39;
            v17 = v39 * (v23 + v45.z);
          }
          else
          {
            v47.x = flt_B46924;
            v47.y = v17;
          }
          v47.z = v17;
          v45 = v47;
        }
        v45.x = v45.x * v10;
        v45.y = v45.y * v10;
        v45.z = v45.z * v10;
        v47.x = v45.x;
        y = v45.y;
        dword_B46498 = LODWORD(v45.x);
        v47.y = y;
        z = v45.z;
        dword_B4649C = LODWORD(v47.y);
        v47.z = z;
        v11 = 1.0;
        dword_B464A0 = LODWORD(v47.z);
        v48 = 1.0;
        *(float *)&dword_B464A4 = 1.0;
        goto LABEL_27;
      }
    }
    v11 = 1.0;
    goto LABEL_27;
  }
  return result;
}
