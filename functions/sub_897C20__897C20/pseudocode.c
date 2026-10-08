void __thiscall sub_897C20(_DWORD *this, float a2)
{
  _DWORD *v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  NiAVObject *PointerAtOffset08; // eax
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
  UInt32 v20; // ecx
  float z; // edx
  UInt32 v22; // ecx
  float v23; // edx
  UInt32 v24; // ecx
  UInt32 p_members; // eax
  float v26; // edx
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

  if ( (dword_BA7B98[0] & 1) == 0 ) /*0x897c56*/
  {
    dword_BA7B98[0] |= 1u; /*0x897c58*/
    dword_BA7B94 = 0; /*0x897c64*/
    atexit(sub_A27B10); /*0x897c6a*/
  }
  if ( (dword_BA7B98[0] & 2) == 0 ) /*0x897c7d*/
  {
    dword_BA7B98[0] |= 2u; /*0x897c7f*/
    dword_BA7B90 = 0; /*0x897c8a*/
    atexit(sub_A27AE0); /*0x897c90*/
  }
  if ( (dword_BA7B98[0] & 4) == 0 ) /*0x897c9f*/
  {
    dword_BA7B98[0] |= 4u; /*0x897ca1*/
    dword_BA7B8C = 0; /*0x897cad*/
    atexit(sub_A27AB0); /*0x897cb3*/
  }
  if ( (dword_BA7B98[0] & 8) == 0 ) /*0x897cc6*/
  {
    dword_BA7B98[0] |= 8u; /*0x897cc8*/
    dword_BA7B88 = 0; /*0x897cd3*/
    atexit(sub_A27A80); /*0x897cd9*/
  }
  if ( LOBYTE(a2) ) /*0x897cec*/
  {
    if ( (*(_BYTE *)(this + 3) & 0x10) == 0 ) /*0x897cf4*/
    {
      v3 = (_DWORD *)*(this + 4); /*0x897cfa*/
      if ( v3 ) /*0x897cff*/
      {
        v4 = v3[2]; /*0x897d05*/
        if ( v4 && (v5 = v4 + 0x14) != 0 ) /*0x897d11*/
          v6 = *(_DWORD *)(v5 + 0x1C); /*0x897d13*/
        else
          LOBYTE(v6) = 0; /*0x897d18*/
        if ( (v6 & 0x3F) != 0x11 ) /*0x897d1f*/
        {
          PointerAtOffset08 = Shared_GetPointerAtOffset08((Atmosphere *)this); /*0x897d27*/
          v8 = PointerAtOffset08; /*0x897d2c*/
          if ( !PointerAtOffset08 /*0x897d3f*/
            || (m_parent = (float *)PointerAtOffset08->vtbl->super.Unk_02((NiObject *)PointerAtOffset08)) == 0 )
          {
            m_parent = (float *)v8->members.m_parent; /*0x897d41*/
          }
          *(float *)&v10 = COERCE_FLOAT(FormHeapAlloc(0xDCu)); /*0x897d49*/
          a2 = *(float *)&v10; /*0x897d51*/
          v44 = 0; /*0x897d57*/
          if ( *(float *)&v10 == 0.0 ) /*0x897d5f*/
            v11 = 0; /*0x897d6e*/
          else
            v11 = NiNode::NiNode(v10, 0); /*0x897d6a*/
          v44 = 0xFFFFFFFF; /*0x897d77*/
          NiObjectNET_SetName((NiObjectNET *)v11, "bhkColDisp"); /*0x897d7f*/
          if ( m_parent ) /*0x897d86*/
          {
            a2 = 1.0 / m_parent[0x25]; /*0x897d9f*/
            a2 = fabs(a2); /*0x897da9*/
            v11->members.super.m_localTransform.scale = a2; /*0x897db1*/
            (*(void (__thiscall **)(float *, NiNode *, int))(*(_DWORD *)m_parent + 0x84))(m_parent, v11, 1); /*0x897dbc*/
            NiAVObject_UpdateNiAVObject((NiAVObject *)v11, 0.0, 1); /*0x897dc8*/
          }
          v12 = (*(int (__thiscall **)(_DWORD *, NiNode *))(*v3 + 0x88))(v3, v11); /*0x897dd9*/
          v13 = (NiNode *)v12; /*0x897ddb*/
          v42 = v12; /*0x897ddf*/
          if ( v12 ) /*0x897de3*/
            InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x897de9*/
          v44 = 1; /*0x897df1*/
          if ( v13 ) /*0x897df9*/
          {
            if ( m_parent ) /*0x897e01*/
            {
              if ( !dword_BA7B94 ) /*0x897e07*/
              {
                *(float *)&v14 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x897e12*/
                a2 = *(float *)&v14; /*0x897e1a*/
                LOBYTE(v44) = 2; /*0x897e20*/
                if ( *(float *)&v14 == 0.0 ) /*0x897e24*/
                  v15 = 0; /*0x897e2f*/
                else
                  v15 = sub_405990(v14); /*0x897e28*/
                LOBYTE(v44) = 1; /*0x897e37*/
                NiSmartPointer_Set__(&dword_BA7B94, (Ni2DBuffer *)v15); /*0x897e3c*/
                LOWORD(dword_BA7B94[1].members.super.m_uiRefCount) &= 0xFFCFu; /*0x897e46*/
                LOWORD(dword_BA7B94[1].members.super.m_uiRefCount) &= ~8u; /*0x897e51*/
              }
              if ( !dword_BA7B90 ) /*0x897e57*/
              {
                *(float *)&v16 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x897e62*/
                a2 = *(float *)&v16; /*0x897e6a*/
                LOBYTE(v44) = 3; /*0x897e70*/
                if ( *(float *)&v16 == 0.0 ) /*0x897e75*/
                  v17 = 0; /*0x897e80*/
                else
                  v17 = NiObjectNET_Create(v16); /*0x897e79*/
                LOBYTE(v44) = 1; /*0x897e88*/
                NiSmartPointer_Set__(&dword_BA7B90, (Ni2DBuffer *)v17); /*0x897e8d*/
                LOWORD(dword_BA7B90[1].members.super.m_uiRefCount) |= 1u; /*0x897e9c*/
                LOWORD(dword_BA7B90[1].members.super.m_uiRefCount) |= 2u; /*0x897ea5*/
              }
              if ( !NiNode_GetNiPropertyByID(v13, 2) ) /*0x897eb3*/
              {
                if ( !dword_BA7B8C ) /*0x897ec0*/
                {
                  *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(0x5Cu)); /*0x897ece*/
                  a2 = *(float *)&v18; /*0x897ed6*/
                  LOBYTE(v44) = 4; /*0x897edc*/
                  if ( *(float *)&v18 == 0.0 ) /*0x897ee1*/
                    v19 = 0; /*0x897eec*/
                  else
                    v19 = (Ni2DBuffer *)NiMaterialProperty::NiMaterialProperty(v18); /*0x897ee5*/
                  LOBYTE(v44) = 1; /*0x897ef4*/
                  NiSmartPointer_Set__(&dword_BA7B8C, v19); /*0x897ef9*/
                  v20 = (UInt32)dword_BA7B8C; /*0x897efe*/
                  *(float *)(v20 + 0x1C) = stru_B25AC4.x; /*0x897f0a*/
                  *(float *)(v20 + 0x20) = stru_B25AC4.y; /*0x897f13*/
                  z = stru_B25AC4.z; /*0x897f16*/
                  ++*(_DWORD *)(v20 + 0x54); /*0x897f1c*/
                  *(float *)(v20 + 0x24) = z; /*0x897f1f*/
                  v22 = (UInt32)dword_BA7B8C; /*0x897f2b*/
                  *(float *)(v22 + 0x28) = stru_B25AC4.x; /*0x897f31*/
                  *(float *)(v22 + 0x2C) = stru_B25AC4.y; /*0x897f3a*/
                  v23 = stru_B25AC4.z; /*0x897f3d*/
                  ++*(_DWORD *)(v22 + 0x54); /*0x897f43*/
                  *(float *)(v22 + 0x30) = v23; /*0x897f49*/
                  v24 = (UInt32)dword_BA7B8C; /*0x897f4c*/
                  p_members = (UInt32)&dword_BA7B8C[3].members; /*0x897f58*/
                  *(float *)p_members = stru_B25AC4.x; /*0x897f5b*/
                  *(float *)(p_members + 4) = stru_B25AC4.y; /*0x897f63*/
                  v26 = stru_B25AC4.z; /*0x897f66*/
                  ++*(_DWORD *)(v24 + 0x54); /*0x897f6c*/
                  *(float *)(p_members + 8) = v26; /*0x897f6f*/
                }
                sub_405680(v13, (BSShaderProperty *)dword_BA7B8C); /*0x897f7a*/
              }
              if ( !dword_BA7B88 ) /*0x897f7f*/
              {
                *(float *)&v27 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x897f8a*/
                a2 = *(float *)&v27; /*0x897f92*/
                LOBYTE(v44) = 5; /*0x897f98*/
                if ( *(float *)&v27 == 0.0 ) /*0x897f9d*/
                  v28 = 0; /*0x897fa8*/
                else
                  v28 = sub_4059D0(v27); /*0x897fa1*/
                LOBYTE(v44) = 1; /*0x897fb0*/
                NiSmartPointer_Set__(&dword_BA7B88, (Ni2DBuffer *)v28); /*0x897fb5*/
                LOWORD(dword_BA7B88[1].members.super.m_uiRefCount) |= 1u; /*0x897fbf*/
              }
              sub_405680(v13, (BSShaderProperty *)dword_BA7B94); /*0x897fcc*/
              sub_405680(v13, (BSShaderProperty *)dword_BA7B90); /*0x897fda*/
              sub_405680(v13, (BSShaderProperty *)dword_BA7B88); /*0x897fe7*/
              NiAVObject_InitializePropertyState((NiAVObject *)v13); /*0x897fee*/
              NiNode_UpdateDynamicEffectState(v13); /*0x897ff5*/
              NiAVObject_UpdateNiAVObject((NiAVObject *)v13, 0.0, 0); /*0x898004*/
            }
            if ( unk_BA7A84 ) /*0x898009*/
              unk_BA7A84(v13); /*0x898013*/
          }
          else if ( m_parent ) /*0x89801c*/
          {
            if ( v11 ) /*0x898020*/
            {
              (*(void (__thiscall **)(float *, float *, NiNode *))(*(_DWORD *)m_parent + 0x88))(m_parent, &a2, v11); /*0x898032*/
              sub_7016A0((NiD3DVertexShader *)&a2); /*0x898038*/
            }
          }
          *((_WORD *)this + 6) |= 0x10u; /*0x898041*/
          v44 = 0xFFFFFFFF; /*0x89804a*/
          sub_7016A0((NiD3DVertexShader *)&v42); /*0x898052*/
        }
      }
    }
  }
  else if ( (*(_BYTE *)(this + 3) & 0x10) != 0 ) /*0x89805e*/
  {
    v29 = Shared_GetPointerAtOffset08((Atmosphere *)this); /*0x898066*/
    v30 = v29; /*0x89806b*/
    if ( v29 && (v31 = (int)v29->vtbl->super.Unk_02((NiObject *)v29)) != 0 || (v31 = (int)v30->members.m_parent) != 0 ) /*0x898085*/
    {
      v32 = *(unsigned __int16 *)(v31 + 0xB6); /*0x89808d*/
      v43 = v32; /*0x898096*/
      a2 = 0.0; /*0x89809a*/
      if ( v32 ) /*0x89809e*/
      {
        v33 = InterlockedDecrement; /*0x8980a4*/
        do /*0x8981e0*/
        {
          if ( (unsigned int)*(unsigned __int16 *)(v31 + 0xB6) > LODWORD(a2) ) /*0x8980b7*/
          {
            v34 = *(const char ***)(*(_DWORD *)(v31 + 0xB0) + 4 * LODWORD(a2)); /*0x8980c7*/
            if ( v34 ) /*0x8980cc*/
            {
              v35 = sub_7073F0(v34, "bhkColDisp"); /*0x8980d7*/
              if ( v35 ) /*0x8980de*/
              {
                (*(void (__thiscall **)(int, int *, const char **))(*(_DWORD *)v31 + 0x88))(v31, &v42, v35); /*0x8980f5*/
                if ( v42 ) /*0x8980fd*/
                {
                  v36 = (void (__thiscall ***)(_DWORD, int))v42; /*0x8980ff*/
                  if ( !v33((volatile LONG *)(v42 + 4)) ) /*0x898105*/
                    (**v36)(v36, 1); /*0x898117*/
                }
                v37 = (UInt32)dword_BA7B94; /*0x898119*/
                if ( dword_BA7B94 ) /*0x898119*/
                {
                  if ( *(_DWORD *)(v37 + 4) == 1 ) /*0x89812a*/
                  {
                    if ( !v33((volatile LONG *)(v37 + 4)) ) /*0x89812d*/
                    {
                      if ( v37 ) /*0x898135*/
                        (**(void (__thiscall ***)(UInt32, int))v37)(v37, 1); /*0x89813f*/
                    }
                    dword_BA7B94 = 0; /*0x898141*/
                  }
                }
                v38 = (UInt32)dword_BA7B90; /*0x898147*/
                if ( dword_BA7B90 ) /*0x898147*/
                {
                  if ( *(_DWORD *)(v38 + 4) == 1 ) /*0x898158*/
                  {
                    if ( !v33((volatile LONG *)(v38 + 4)) ) /*0x89815b*/
                    {
                      if ( v38 ) /*0x898163*/
                        (**(void (__thiscall ***)(UInt32, int))v38)(v38, 1); /*0x89816d*/
                    }
                    dword_BA7B90 = 0; /*0x89816f*/
                  }
                }
                v39 = (UInt32)dword_BA7B8C; /*0x898175*/
                if ( dword_BA7B8C ) /*0x898175*/
                {
                  if ( *(_DWORD *)(v39 + 4) == 1 ) /*0x898186*/
                  {
                    if ( !v33((volatile LONG *)(v39 + 4)) ) /*0x898189*/
                    {
                      if ( v39 ) /*0x898191*/
                        (**(void (__thiscall ***)(UInt32, int))v39)(v39, 1); /*0x89819b*/
                    }
                    dword_BA7B8C = 0; /*0x89819d*/
                  }
                }
                v40 = (UInt32)dword_BA7B88; /*0x8981a3*/
                if ( dword_BA7B88 ) /*0x8981a3*/
                {
                  if ( *(_DWORD *)(v40 + 4) == 1 ) /*0x8981b4*/
                  {
                    if ( !v33((volatile LONG *)(v40 + 4)) ) /*0x8981b7*/
                    {
                      if ( v40 ) /*0x8981bf*/
                        (**(void (__thiscall ***)(UInt32, int))v40)(v40, 1); /*0x8981c9*/
                    }
                    dword_BA7B88 = 0; /*0x8981cb*/
                  }
                }
              }
            }
          }
          ++LODWORD(a2); /*0x8981dc*/
        }
        while ( LODWORD(a2) < v43 ); /*0x8981e0*/
      }
    }
    *((_WORD *)this + 6) &= ~0x10u; /*0x8981ea*/
  }
}
