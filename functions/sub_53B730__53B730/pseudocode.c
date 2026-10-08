void __thiscall sub_53B730(_DWORD **this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  signed int v6; // edx
  int v7; // eax
  NiProperty *NiPropertyByID; // eax
  NiProperty *v9; // eax
  NiProperty *v10; // eax
  NiProperty *v11; // eax
  signed int v12; // edx
  double v13; // st7
  double v14; // st5
  double v15; // st3
  int v16; // eax
  int v17; // eax
  signed int i; // edi
  Sky *(__cdecl *v19)(Ni2DBuffer *); // eax
  int v20; // esi
  int v21; // eax
  signed int j; // esi
  signed int k; // esi
  NiProperty *v24; // eax
  NiProperty *v25; // edi
  NiProperty *v26; // ebx
  NiRTTI *v27; // eax
  char v28; // al
  int v29; // edx
  BSRenderedTexture *v30; // eax
  void (__thiscall ***v31)(_DWORD, int); // edi
  int v32; // edi
  int v33; // edi
  float v34; // [esp+14h] [ebp-38h]
  int v35; // [esp+1Ch] [ebp-30h]
  int v36; // [esp+20h] [ebp-2Ch]
  NiInterpController *v37; // [esp+34h] [ebp-18h]
  NiExtraData **v38; // [esp+38h] [ebp-14h]
  int v39; // [esp+3Ch] [ebp-10h]
  NiInterpController *v40; // [esp+40h] [ebp-Ch]
  NiExtraData **v41; // [esp+44h] [ebp-8h]
  int v42; // [esp+48h] [ebp-4h]

  nullsub_returnVoid_2arg(a2, a3); /*0x53b746*/
  v4 = *(_DWORD *)(a2 + 0x10); /*0x53b74b*/
  v5 = *(_DWORD *)(a2 + 0x14); /*0x53b750*/
  v35 = v4; /*0x53b753*/
  v36 = v5; /*0x53b757*/
  if ( v4 )
  {
    v6 = 0; /*0x53b761*/
    while ( *(this + v6 + 2) )
    {
      v6 = (v6 + 1) % 3u; /*0x53b778*/
      if ( v6 >= 2 )
      {
        v7 = *(_DWORD *)(a2 + 0xDC); /*0x53b77f*/
        if ( v7 == 3 || v7 == 2 ) /*0x53b78c*/
        {
          v39 = *(_DWORD *)(a2 + 0xB0); /*0x53b7a4*/
          v37 = *(NiInterpController **)(a2 + 0xA8); /*0x53b7ab*/
          v38 = *(NiExtraData ***)(a2 + 0xAC); /*0x53b7b2*/
          v42 = *(_DWORD *)(a2 + 0x5C); /*0x53b7b9*/
          v40 = *(NiInterpController **)(a2 + 0x54); /*0x53b7c2*/
          v41 = *(NiExtraData ***)(a2 + 0x58); /*0x53b7c6*/
          if ( NiNode_GetNiPropertyByID((NiNode *)*(this + 2), 4) ) /*0x53b7ca*/
          {
            NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)*(this + 2), 4); /*0x53b7d8*/
            if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB ) /*0x53b7f2*/
            {
              v9 = NiNode_GetNiPropertyByID((NiNode *)*(this + 2), 4); /*0x53b7f9*/
              if ( v9 ) /*0x53b800*/
              {
                v9[4].members.m_controller = v37; /*0x53b812*/
                v9[4].members.m_extraDataList = v38; /*0x53b821*/
                *(_DWORD *)&v9[4].members.m_extraDataListLen = v39; /*0x53b82e*/
                *(float *)&v9[5].vtbl = 1.0; /*0x53b839*/
              }
            }
          }
          if ( NiNode_GetNiPropertyByID((NiNode *)*(this + 3), 4) ) /*0x53b841*/
          {
            v10 = NiNode_GetNiPropertyByID((NiNode *)*(this + 3), 4); /*0x53b84f*/
            if ( (*((int (__thiscall **)(NiProperty *))v10->vtbl + 0x15))(v10) == 0xB ) /*0x53b869*/
            {
              v11 = NiNode_GetNiPropertyByID((NiNode *)*(this + 3), 4); /*0x53b870*/
              if ( v11 ) /*0x53b877*/
              {
                v11[4].members.m_controller = v40; /*0x53b889*/
                v11[4].members.m_extraDataList = v41; /*0x53b898*/
                *(_DWORD *)&v11[4].members.m_extraDataListLen = v42; /*0x53b8a5*/
                *(float *)&v11[5].vtbl = 1.0; /*0x53b8b0*/
              }
            }
          }
          v12 = 0; /*0x53b8b9*/
          v13 = MEMORY[0xB365B4][0] - 0.0; /*0x53b8bd*/
          v14 = dbl_A3F398; /*0x53b8bf*/
          v15 = *(float *)&a3; /*0x53b8c7*/
          do /*0x53b9a1*/
          {
            if ( v12 ) /*0x53b8d0*/
            {
              if ( v12 == 1 ) /*0x53b8d5*/
                v16 = 1; /*0x53b8de*/
              else
                v16 = 0xF; /*0x53b8d7*/
            }
            else
            {
              v16 = 2; /*0x53b8e5*/
            }
            *(float *)&a3 = (double)*(unsigned __int8 *)(v4 + v16 + 0x48) * v14 * v13 + 0.0; /*0x53b8ff*/
            if ( v5 ) /*0x53b903*/
            {
              *(float *)&a3 = *(float *)(a2 + 0xD8) * *(float *)&a3; /*0x53b914*/
              if ( v12 ) /*0x53b922*/
              {
                if ( v12 == 1 ) /*0x53b927*/
                  v17 = 1; /*0x53b930*/
                else
                  v17 = 0xF; /*0x53b929*/
              }
              else
              {
                v17 = 2; /*0x53b937*/
              }
              v34 = (double)*(unsigned __int8 *)(v17 + v5 + 0x48) * v14 * v13 + 0.0; /*0x53b94f*/
              *(float *)&a3 = v34 * (1.0 - *(float *)(a2 + 0xD8)) + *(float *)&a3; /*0x53b963*/
            }
            if ( (unsigned __int16)v12 < 2u ) /*0x53b96b*/
            {
              *(float *)&a3 = *(float *)(a2 + 0xC0) * v15 * *(float *)&a3; /*0x53b97c*/
              *(float *)(4 * (unsigned __int16)v12 + 0xB4315C) = *(float *)&a3 /*0x53b98b*/
                                                               + *(float *)(4 * (unsigned __int16)v12 + 0xB4315C);
            }
            v12 = (v12 + 1) % 3u; /*0x53b99c*/
          }
          while ( v12 < 2 ); /*0x53b9a1*/
        }
        if ( (*(_BYTE *)(a2 + 0xFC) & 3) != 0 ) /*0x53b9b8*/
        {
          if ( v5 ) /*0x53b9c0*/
          {
            for ( i = 0; i < 2; i = (i + 1) % 3u ) /*0x53b9c2*/
            {
              v19 = sub_542E00; /*0x53b9c7*/
              if ( i != 1 ) /*0x53b9cc*/
                v19 = sub_542E20; /*0x53b9ce*/
              v20 = 4 * (3 * i + 6); /*0x53b9e0*/
              sub_542D30(0, v20 + v35, v19, 0); /*0x53b9e8*/
              if ( sub_45A500(g_TESSaveLoadGame) ) /*0x53b9f6*/
                sub_542D30((int)*(this + i + 2), v5 + v20, 0, 0); /*0x53ba0b*/
            }
          }
          else
          {
            v21 = *(_DWORD *)(a2 + 0xDC); /*0x53ba28*/
            if ( v21 == 3 || v21 == 2 ) /*0x53ba36*/
            {
              for ( j = 0; j < 2; j = (j + 1) % 3u ) /*0x53ba38*/
                sub_542D30((int)*(this + j + 2), v4 + 4 * (3 * j + 6), 0, 0); /*0x53ba51*/
            }
          }
        }
        for ( k = 0; k < 2; k = (k + 1) % 3u )
        {
          if ( *(this + k + 4) )
          {
            v24 = NiNode_GetNiPropertyByID((NiNode *)*(this + k + 2), 4); /*0x53ba81*/
            v25 = v24; /*0x53ba86*/
            if ( v24 )
            {
              v27 = (NiRTTI *)(*((int (__thiscall **)(NiProperty *))v24->vtbl + 1))(v24); /*0x53ba97*/
              if ( v27 ) /*0x53ba9b*/
              {
                while ( v27 != &stru_B4335C ) /*0x53baa5*/
                {
                  v27 = v27->parent; /*0x53baa7*/
                  if ( !v27 ) /*0x53baac*/
                    goto LABEL_51; /*0x53baac*/
                }
                v28 = 1; /*0x53bacc*/
              }
              else
              {
LABEL_51:
                v28 = 0; /*0x53baae*/
              }
              v26 = v28 != 0 ? v25 : 0;
              if ( v26 ) /*0x53bab8*/
              {
                v29 = (*(this + k + 4))[8]; /*0x53babe*/
                if ( *(_DWORD *)v29 ) /*0x53bac1*/
                  v30 = *(BSRenderedTexture **)(*(_DWORD *)v29 + 8); /*0x53bac7*/
                else
                  v30 = 0; /*0x53bad0*/
                sub_802890((BSImageSpaceShader *)v26, v30); /*0x53bad5*/
                v26[5].members.m_pcName = *(const char **)(a2 + 0xD8); /*0x53bae4*/
              }
            }
            else
            {
              v26 = 0; /*0x53ba8c*/
            }
            if ( !v36 ) /*0x53baef*/
            {
              sub_708560((int ***)*(this + k + 2), (volatile LONG **)&a3, 6); /*0x53bb00*/
              if ( *(float *)&a3 != 0.0 ) /*0x53bb0b*/
              {
                v31 = (void (__thiscall ***)(_DWORD, int))a3; /*0x53bb0d*/
                if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) ) /*0x53bb13*/
                  (**v31)(v31, 1); /*0x53bb29*/
              }
              sub_405680((NiNode *)*(this + k + 2), (BSShaderProperty *)*(this + k + 4)); /*0x53bb34*/
              v32 = (int)*(this + k + 4); /*0x53bb39*/
              if ( v32 ) /*0x53bb3f*/
              {
                if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) ) /*0x53bb45*/
                  (**(void (__thiscall ***)(int, int))v32)(v32, 1); /*0x53bb5b*/
                *(this + k + 4) = 0; /*0x53bb5d*/
              }
              sub_802890((BSImageSpaceShader *)v26, 0); /*0x53bb69*/
              *(float *)&v26[5].members.m_pcName = 0.0; /*0x53bb70*/
              NiAVObject_InitializePropertyState((NiAVObject *)*(this + k + 2)); /*0x53bb7a*/
            }
          }
          v33 = (int)*(this + k + 2); /*0x53bb7f*/
          if ( NiNode_GetNiPropertyByID((NiNode *)v33, 6) ) /*0x53bb87*/
            *(_WORD *)(v33 + 0x18) &= ~1u; /*0x53bb97*/
          else
            *(_WORD *)(v33 + 0x18) |= 1u; /*0x53bb90*/
        }
        return; /*0x53bbae*/
      }
    }
  }
}
