void __thiscall sub_897C20(_DWORD *this, float a2)
{
  _DWORD *v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  NiAVObject *v7; // eax
  NiAVObject *v8; // esi
  float *m_parent; // edi
  NiNode *v10; // eax
  NiNode *v11; // esi
  int v12; // eax
  NiNode *v13; // ebp
  NiObjectNET *v14; // eax
  NiObjectNET *v15; // eax
  NiObjectNET *v16; // eax
  NiObjectNET *v17; // eax
  NiMaterialProperty *v18; // eax
  Ni2DBuffer *v19; // eax
  _DWORD *v20; // ecx
  int v21; // edx
  _DWORD *v22; // ecx
  int v23; // edx
  UInt32 v24; // ecx
  _DWORD *v25; // eax
  int v26; // edx
  NiObjectNET *v27; // eax
  NiObjectNET *v28; // eax
  NiAVObject *v29; // eax
  NiAVObject *v30; // esi
  int v31; // ebp
  unsigned int v32; // eax
  LONG (__stdcall *v33)(volatile LONG *); // edi
  const char **v34; // ecx
  const char **v35; // eax
  void (__thiscall ***v36)(_DWORD, int); // esi
  UInt32 v37; // esi
  UInt32 v38; // esi
  UInt32 v39; // esi
  UInt32 v40; // esi
  int v42; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v43; // [esp+30h] [ebp-10h]
  int v44; // [esp+3Ch] [ebp-4h]

  if ( (dword_BA7B98 & 1) == 0 )
  {
    dword_BA7B98 |= 1u;
    dword_BA7B94 = 0;
    atexit(sub_A27B10);
  }
  if ( (dword_BA7B98 & 2) == 0 )
  {
    dword_BA7B98 |= 2u;
    dword_BA7B90 = 0;
    atexit(sub_A27AE0);
  }
  if ( (dword_BA7B98 & 4) == 0 )
  {
    dword_BA7B98 |= 4u;
    dword_BA7B8C = 0;
    atexit(sub_A27AB0);
  }
  if ( (dword_BA7B98 & 8) == 0 )
  {
    dword_BA7B98 |= 8u;
    dword_BA7B88 = 0;
    atexit(sub_A27A80);
  }
  if ( LOBYTE(a2) )
  {
    if ( (*(_BYTE *)(this + 3) & 0x10) == 0 )
    {
      v3 = (_DWORD *)*(this + 4);
      if ( v3 )
      {
        v4 = v3[2];
        if ( v4 && (v5 = v4 + 0x14) != 0 )
          v6 = *(_DWORD *)(v5 + 0x1C);
        else
          LOBYTE(v6) = 0;
        if ( (v6 & 0x3F) != 0x11 )
        {
          v7 = sub_452A60((Atmosphere *)this);
          v8 = v7;
          if ( !v7 || (m_parent = (float *)v7->vtbl->super.Unk_02((NiObject *)v7)) == 0 )
            m_parent = (float *)v8->members.m_parent;
          v10 = (NiNode *)FormHeapAlloc(0xDCu);
          a2 = *(float *)&v10;
          v44 = 0;
          if ( v10 )
            v11 = NiNode::NiNode(v10, 0);
          else
            v11 = 0;
          v44 = 0xFFFFFFFF;
          NiObjectNET_SetName((NiObjectNET *)v11, "bhkColDisp");
          if ( m_parent )
          {
            a2 = 1.0 / m_parent[0x25];
            a2 = fabs(a2);
            v11->members.super.m_localTransform.scale = a2;
            (*(void (__thiscall **)(float *, NiNode *, int))(*(_DWORD *)m_parent + 0x84))(m_parent, v11, 1);
            NiAVObject_UpdateNiAVObject((NiAVObject *)v11, 0.0, 1);
          }
          v12 = (*(int (__thiscall **)(_DWORD *, NiNode *))(*v3 + 0x88))(v3, v11);
          v13 = (NiNode *)v12;
          v42 = v12;
          if ( v12 )
            InterlockedIncrement((volatile LONG *)(v12 + 4));
          v44 = 1;
          if ( v13 )
          {
            if ( m_parent )
            {
              if ( !dword_BA7B94 )
              {
                v14 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
                a2 = *(float *)&v14;
                LOBYTE(v44) = 2;
                if ( v14 )
                  v15 = sub_405990(v14);
                else
                  v15 = 0;
                LOBYTE(v44) = 1;
                NiSmartPointer_Set__((Ni2DBuffer **)&dword_BA7B94, (Ni2DBuffer *)v15);
                *(_WORD *)(dword_BA7B94 + 0x18) &= 0xFFCFu;
                *(_WORD *)(dword_BA7B94 + 0x18) &= ~8u;
              }
              if ( !dword_BA7B90 )
              {
                v16 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
                a2 = *(float *)&v16;
                LOBYTE(v44) = 3;
                if ( v16 )
                  v17 = NiObjectNET_Create(v16);
                else
                  v17 = 0;
                LOBYTE(v44) = 1;
                NiSmartPointer_Set__((Ni2DBuffer **)&dword_BA7B90, (Ni2DBuffer *)v17);
                *(_WORD *)(dword_BA7B90 + 0x18) |= 1u;
                *(_WORD *)(dword_BA7B90 + 0x18) |= 2u;
              }
              if ( !NiNode_GetNiPropertyByID(v13, 2) )
              {
                if ( !dword_BA7B8C )
                {
                  v18 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
                  a2 = *(float *)&v18;
                  LOBYTE(v44) = 4;
                  if ( v18 )
                    v19 = (Ni2DBuffer *)NiMaterialProperty::NiMaterialProperty(v18);
                  else
                    v19 = 0;
                  LOBYTE(v44) = 1;
                  NiSmartPointer_Set__((Ni2DBuffer **)&dword_BA7B8C, v19);
                  v20 = (_DWORD *)dword_BA7B8C;
                  v20[7] = dword_B25AC4;
                  v20[8] = dword_B25AC8;
                  v21 = dword_B25ACC;
                  ++v20[0x15];
                  v20[9] = v21;
                  v22 = (_DWORD *)dword_BA7B8C;
                  v22[0xA] = dword_B25AC4;
                  v22[0xB] = dword_B25AC8;
                  v23 = dword_B25ACC;
                  ++v22[0x15];
                  v22[0xC] = v23;
                  v24 = dword_BA7B8C;
                  v25 = (_DWORD *)(dword_BA7B8C + 0x40);
                  *v25 = dword_B25AC4;
                  v25[1] = dword_B25AC8;
                  v26 = dword_B25ACC;
                  ++*(_DWORD *)(v24 + 0x54);
                  v25[2] = v26;
                }
                sub_405680(v13, (BSShaderProperty *)dword_BA7B8C);
              }
              if ( !dword_BA7B88 )
              {
                v27 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
                a2 = *(float *)&v27;
                LOBYTE(v44) = 5;
                if ( v27 )
                  v28 = sub_4059D0(v27);
                else
                  v28 = 0;
                LOBYTE(v44) = 1;
                NiSmartPointer_Set__((Ni2DBuffer **)&dword_BA7B88, (Ni2DBuffer *)v28);
                *(_WORD *)(dword_BA7B88 + 0x18) |= 1u;
              }
              sub_405680(v13, (BSShaderProperty *)dword_BA7B94);
              sub_405680(v13, (BSShaderProperty *)dword_BA7B90);
              sub_405680(v13, (BSShaderProperty *)dword_BA7B88);
              NiAVObject_InitializePropertyState((NiAVObject *)v13);
              NiNode_UpdateDynamicEffectState(v13);
              NiAVObject_UpdateNiAVObject((NiAVObject *)v13, 0.0, 0);
            }
            if ( dword_BA7A84 )
              dword_BA7A84(v13);
          }
          else if ( m_parent )
          {
            if ( v11 )
            {
              (*(void (__thiscall **)(float *, float *, NiNode *))(*(_DWORD *)m_parent + 0x88))(m_parent, &a2, v11);
              sub_7016A0((NiD3DVertexShader *)&a2);
            }
          }
          *((_WORD *)this + 6) |= 0x10u;
          v44 = 0xFFFFFFFF;
          sub_7016A0((NiD3DVertexShader *)&v42);
        }
      }
    }
  }
  else if ( (*(_BYTE *)(this + 3) & 0x10) != 0 )
  {
    v29 = sub_452A60((Atmosphere *)this);
    v30 = v29;
    if ( v29 && (v31 = (int)v29->vtbl->super.Unk_02((NiObject *)v29)) != 0 || (v31 = (int)v30->members.m_parent) != 0 )
    {
      v32 = *(unsigned __int16 *)(v31 + 0xB6);
      v43 = v32;
      a2 = 0.0;
      if ( v32 )
      {
        v33 = InterlockedDecrement;
        do
        {
          if ( (unsigned int)*(unsigned __int16 *)(v31 + 0xB6) > LODWORD(a2) )
          {
            v34 = *(const char ***)(*(_DWORD *)(v31 + 0xB0) + 4 * LODWORD(a2));
            if ( v34 )
            {
              v35 = sub_7073F0(v34, "bhkColDisp");
              if ( v35 )
              {
                (*(void (__thiscall **)(int, int *, const char **))(*(_DWORD *)v31 + 0x88))(v31, &v42, v35);
                if ( v42 )
                {
                  v36 = (void (__thiscall ***)(_DWORD, int))v42;
                  if ( !v33((volatile LONG *)(v42 + 4)) )
                    (**v36)(v36, 1);
                }
                v37 = dword_BA7B94;
                if ( dword_BA7B94 )
                {
                  if ( *(_DWORD *)(v37 + 4) == 1 )
                  {
                    if ( !v33((volatile LONG *)(v37 + 4)) )
                    {
                      if ( v37 )
                        (**(void (__thiscall ***)(UInt32, int))v37)(v37, 1);
                    }
                    dword_BA7B94 = 0;
                  }
                }
                v38 = dword_BA7B90;
                if ( dword_BA7B90 )
                {
                  if ( *(_DWORD *)(v38 + 4) == 1 )
                  {
                    if ( !v33((volatile LONG *)(v38 + 4)) )
                    {
                      if ( v38 )
                        (**(void (__thiscall ***)(UInt32, int))v38)(v38, 1);
                    }
                    dword_BA7B90 = 0;
                  }
                }
                v39 = dword_BA7B8C;
                if ( dword_BA7B8C )
                {
                  if ( *(_DWORD *)(v39 + 4) == 1 )
                  {
                    if ( !v33((volatile LONG *)(v39 + 4)) )
                    {
                      if ( v39 )
                        (**(void (__thiscall ***)(UInt32, int))v39)(v39, 1);
                    }
                    dword_BA7B8C = 0;
                  }
                }
                v40 = dword_BA7B88;
                if ( dword_BA7B88 )
                {
                  if ( *(_DWORD *)(v40 + 4) == 1 )
                  {
                    if ( !v33((volatile LONG *)(v40 + 4)) )
                    {
                      if ( v40 )
                        (**(void (__thiscall ***)(UInt32, int))v40)(v40, 1);
                    }
                    dword_BA7B88 = 0;
                  }
                }
              }
            }
          }
          ++LODWORD(a2);
        }
        while ( LODWORD(a2) < v43 );
      }
    }
    *((_WORD *)this + 6) &= ~0x10u;
  }
}
