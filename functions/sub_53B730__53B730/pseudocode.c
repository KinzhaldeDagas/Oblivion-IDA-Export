unsigned int __thiscall sub_53B730(_DWORD **this, int a2, float a3)
{
  unsigned int result; // eax
  int v5; // edi
  int v6; // ebx
  signed int v7; // edx
  int v8; // eax
  NiProperty *NiPropertyByID; // eax
  NiProperty *v10; // eax
  NiProperty *v11; // eax
  NiProperty *v12; // eax
  signed int v13; // edx
  double v14; // st7
  double v15; // st5
  double v16; // st3
  int v17; // eax
  int v18; // eax
  signed int i; // edi
  Sky *(__cdecl *v20)(Ni2DBuffer *); // eax
  int v21; // esi
  int v22; // eax
  signed int j; // esi
  signed int k; // esi
  NiProperty *v25; // eax
  NiProperty *v26; // edi
  NiProperty *v27; // ebx
  int v28; // eax
  char v29; // al
  int v30; // edx
  BSRenderedTexture *v31; // eax
  float v32; // edi
  int v33; // edi
  int v34; // edi
  float v35; // [esp+14h] [ebp-38h]
  int v36; // [esp+1Ch] [ebp-30h]
  int v37; // [esp+20h] [ebp-2Ch]
  NiInterpController *v38; // [esp+34h] [ebp-18h]
  NiExtraData **v39; // [esp+38h] [ebp-14h]
  int v40; // [esp+3Ch] [ebp-10h]
  NiInterpController *v41; // [esp+40h] [ebp-Ch]
  NiExtraData **v42; // [esp+44h] [ebp-8h]
  int v43; // [esp+48h] [ebp-4h]

  result = nullsub_returnVoid_2arg(a2, LODWORD(a3));
  v5 = *(_DWORD *)(a2 + 0x10);
  v6 = *(_DWORD *)(a2 + 0x14);
  v36 = v5;
  v37 = v6;
  if ( v5 )
  {
    v7 = 0;
    while ( *(this + v7 + 2) )
    {
      result = (v7 + 1) / 3u;
      v7 = (v7 + 1) % 3u;
      if ( v7 >= 2 )
      {
        v8 = *(_DWORD *)(a2 + 0xDC);
        if ( v8 == 3 || v8 == 2 )
        {
          v40 = *(_DWORD *)(a2 + 0xB0);
          v38 = *(NiInterpController **)(a2 + 0xA8);
          v39 = *(NiExtraData ***)(a2 + 0xAC);
          v43 = *(_DWORD *)(a2 + 0x5C);
          v41 = *(NiInterpController **)(a2 + 0x54);
          v42 = *(NiExtraData ***)(a2 + 0x58);
          if ( NiNode_GetNiPropertyByID((NiNode *)*(this + 2), 4) )
          {
            NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)*(this + 2), 4);
            if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB )
            {
              v10 = NiNode_GetNiPropertyByID((NiNode *)*(this + 2), 4);
              if ( v10 )
              {
                v10[4].members.m_controller = v38;
                v10[4].members.m_extraDataList = v39;
                *(_DWORD *)&v10[4].members.m_extraDataListLen = v40;
                *(float *)&v10[5].vtbl = 1.0;
              }
            }
          }
          if ( NiNode_GetNiPropertyByID((NiNode *)*(this + 3), 4) )
          {
            v11 = NiNode_GetNiPropertyByID((NiNode *)*(this + 3), 4);
            if ( (*((int (__thiscall **)(NiProperty *))v11->vtbl + 0x15))(v11) == 0xB )
            {
              v12 = NiNode_GetNiPropertyByID((NiNode *)*(this + 3), 4);
              if ( v12 )
              {
                v12[4].members.m_controller = v41;
                v12[4].members.m_extraDataList = v42;
                *(_DWORD *)&v12[4].members.m_extraDataListLen = v43;
                *(float *)&v12[5].vtbl = 1.0;
              }
            }
          }
          v13 = 0;
          v14 = fWeatherCloudSpeedMax - 0.0;
          v15 = dbl_A3F398;
          v16 = a3;
          do
          {
            if ( v13 )
            {
              if ( v13 == 1 )
                v17 = 1;
              else
                v17 = 0xF;
            }
            else
            {
              v17 = 2;
            }
            a3 = (double)*(unsigned __int8 *)(v5 + v17 + 0x48) * v15 * v14 + 0.0;
            if ( v6 )
            {
              a3 = *(float *)(a2 + 0xD8) * a3;
              if ( v13 )
              {
                if ( v13 == 1 )
                  v18 = 1;
                else
                  v18 = 0xF;
              }
              else
              {
                v18 = 2;
              }
              v35 = (double)*(unsigned __int8 *)(v18 + v6 + 0x48) * v15 * v14 + 0.0;
              a3 = v35 * (1.0 - *(float *)(a2 + 0xD8)) + a3;
            }
            if ( (unsigned __int16)v13 < 2u )
            {
              a3 = *(float *)(a2 + 0xC0) * v16 * a3;
              *(float *)(4 * (unsigned __int16)v13 + 0xB4315C) = a3 + *(float *)(4 * (unsigned __int16)v13 + 0xB4315C);
            }
            v13 = (v13 + 1) % 3u;
          }
          while ( v13 < 2 );
        }
        if ( (*(_BYTE *)(a2 + 0xFC) & 3) != 0 )
        {
          if ( v6 )
          {
            for ( i = 0; i < 2; i = (i + 1) % 3u )
            {
              v20 = sub_542E00;
              if ( i != 1 )
                v20 = sub_542E20;
              v21 = 4 * (3 * i + 6);
              sub_542D30(0, v21 + v36, v20, 0);
              if ( sub_45A500(SaveLoad_CurrentSavegame) )
                sub_542D30((int)*(this + i + 2), v6 + v21, 0, 0);
            }
          }
          else
          {
            v22 = *(_DWORD *)(a2 + 0xDC);
            if ( v22 == 3 || v22 == 2 )
            {
              for ( j = 0; j < 2; j = (j + 1) % 3u )
                sub_542D30((int)*(this + j + 2), v5 + 4 * (3 * j + 6), 0, 0);
            }
          }
        }
        for ( k = 0; k < 2; k = (k + 1) % 3u )
        {
          if ( *(this + k + 4) )
          {
            v25 = NiNode_GetNiPropertyByID((NiNode *)*(this + k + 2), 4);
            v26 = v25;
            if ( v25 )
            {
              v28 = (*((int (__thiscall **)(NiProperty *))v25->vtbl + 1))(v25);
              if ( v28 )
              {
                while ( (char *)v28 != dword_B4335C )
                {
                  v28 = *(_DWORD *)(v28 + 4);
                  if ( !v28 )
                    goto LABEL_51;
                }
                v29 = 1;
              }
              else
              {
LABEL_51:
                v29 = 0;
              }
              v27 = v29 != 0 ? v26 : 0;
              if ( v27 )
              {
                v30 = (*(this + k + 4))[8];
                if ( *(_DWORD *)v30 )
                  v31 = *(BSRenderedTexture **)(*(_DWORD *)v30 + 8);
                else
                  v31 = 0;
                sub_802890((BSImageSpaceShader *)v27, v31);
                v27[5].members.m_pcName = *(const char **)(a2 + 0xD8);
              }
            }
            else
            {
              v27 = 0;
            }
            if ( !v37 )
            {
              sub_708560(*(this + k + 2), (volatile LONG **)&a3, 6);
              if ( a3 != 0.0 )
              {
                v32 = a3;
                if ( !InterlockedDecrement((volatile LONG *)(LODWORD(a3) + 4)) )
                  (**(void (__thiscall ***)(float, int))LODWORD(v32))(COERCE_FLOAT(LODWORD(v32)), 1);
              }
              sub_405680((NiNode *)*(this + k + 2), (BSShaderProperty *)*(this + k + 4));
              v33 = (int)*(this + k + 4);
              if ( v33 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) )
                  (**(void (__thiscall ***)(int, int))v33)(v33, 1);
                *(this + k + 4) = 0;
              }
              sub_802890((BSImageSpaceShader *)v27, 0);
              *(float *)&v27[5].members.m_pcName = 0.0;
              NiAVObject_InitializePropertyState((NiAVObject *)*(this + k + 2));
            }
          }
          v34 = (int)*(this + k + 2);
          if ( NiNode_GetNiPropertyByID((NiNode *)v34, 6) )
            *(_WORD *)(v34 + 0x18) &= ~1u;
          else
            *(_WORD *)(v34 + 0x18) |= 1u;
          result = (k + 1) / 3u;
        }
        return result;
      }
    }
  }
  return result;
}
