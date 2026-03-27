void __fastcall sub_528550(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // edi
  int (__thiscall *v5)(int, _DWORD); // edx
  Ni2DBuffer *v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  NiNode *v18; // eax
  int v19; // esi
  NiObject *NiPropertyByID; // eax
  NiObject *v21; // eax
  const char *vftable; // eax
  unsigned int v23; // ebx
  unsigned int v24; // edi
  int v25; // eax
  NiNode *v26; // eax
  int v27; // esi
  NiObject *v28; // eax
  NiObject *v29; // eax
  const char *v30; // eax
  float v31; // ecx
  void *v32; // edx
  BSSimpleList_VoidPtr *v33; // esi
  LONG (__stdcall *v34)(volatile LONG *); // ebp
  int i; // esi
  int v36; // eax
  unsigned int end; // edi
  int v38; // eax
  unsigned int v39; // edi
  unsigned int v40; // edi
  int *v41; // eax
  void (__thiscall ***v42)(_DWORD, int); // edi
  size_t v43; // [esp+Ch] [ebp-F8h]
  char *v44; // [esp+Ch] [ebp-F8h]
  int v45; // [esp+24h] [ebp-E0h] BYREF
  unsigned int v46; // [esp+28h] [ebp-DCh]
  int v47; // [esp+2Ch] [ebp-D8h] BYREF
  int *v48; // [esp+30h] [ebp-D4h]
  _DWORD *v49[24]; // [esp+34h] [ebp-D0h] BYREF
  float v50; // [esp+94h] [ebp-70h]
  int v51; // [esp+98h] [ebp-6Ch]
  float v52; // [esp+9Ch] [ebp-68h]
  void *data; // [esp+A0h] [ebp-64h]
  int IsFemale; // [esp+A4h] [ebp-60h]
  NiTArray_NiTexturingPropertyMap v55; // [esp+A8h] [ebp-5Ch] BYREF
  NiTArray_NiTexturingPropertyMap v56; // [esp+B8h] [ebp-4Ch] BYREF
  NiTArray_NiTexturingPropertyMap v57; // [esp+C8h] [ebp-3Ch] BYREF
  unsigned __int16 v58[8]; // [esp+D8h] [ebp-2Ch] BYREF
  char v59; // [esp+E8h] [ebp-1Ch]
  unsigned int v60; // [esp+100h] [ebp-4h]

  v3 = a1;
  v46 = a1;
  if ( a3 )
  {
    if ( bFixFaceNormals )
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3);
      v5 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x138);
      v48 = (int *)(v3 + 0x1D8);
      v6 = (Ni2DBuffer *)v5(a3, 0);
      v7 = *NiSmartPointer_Set__((Ni2DBuffer **)(v3 + 0x1D8), v6);
      v44 = off_B10CA8[0];
      v45 = v7;
      v8 = NiObjectNET_LookupObjectByName(v4, v44);
      if ( v8 )
      {
        v47 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x10))(v8);
        if ( v47 )
        {
          if ( v7 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 0xBC))(v7) )
            {
              v9 = NiObjectNET_LookupObjectByName(v4, "UpperBody");
              if ( v9 )
              {
                v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
                v11 = v10;
                if ( v10 )
                {
                  v12 = sub_405790(v10, 0);
                  if ( v12 )
                  {
                    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
                    v14 = v13;
                    if ( v13 )
                    {
                      v15 = *(unsigned __int16 *)(v13 + 0xB8);
                      v16 = 0;
                      v46 = *(unsigned __int16 *)(v14 + 0xB8);
                      if ( v15 )
                      {
                        while ( 1 )
                        {
                          v17 = sub_405790(v14, v16);
                          if ( v17 )
                          {
                            v18 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x10))(v17);
                            v19 = (int)v18;
                            if ( v18 )
                            {
                              NiPropertyByID = (NiObject *)NiNode_GetNiPropertyByID(v18, 2);
                              v21 = NiRTTI_Cast((BSStringT *)dword_B3FA9C, NiPropertyByID);
                              if ( v21 )
                              {
                                vftable = (const char *)v21[1].__vftable;
                                if ( vftable )
                                {
                                  LODWORD(v43) = 4;
                                  if ( !_strnicmp(vftable, "Skin", v43) )
                                  {
                                    if ( NiTMap<unsigned int,VertexDist>::NiTMap<unsigned int,VertexDist>(
                                           v19,
                                           v47,
                                           flt_A3D65C,
                                           1,
                                           0) )
                                    {
                                      break;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          if ( ++v16 >= v46 )
                            goto LABEL_32;
                        }
                        (*(void (__thiscall **)(int, int))(*(_DWORD *)v45 + 0xC0))(v45, 1);
                      }
                    }
                  }
                  else
                  {
                    v23 = *(unsigned __int16 *)(v11 + 0xB8);
                    v24 = 0;
                    if ( *(_WORD *)(v11 + 0xB8) )
                    {
                      while ( 1 )
                      {
                        v25 = sub_405790(v11, v24);
                        if ( v25 )
                        {
                          v26 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x10))(v25);
                          v27 = (int)v26;
                          if ( v26 )
                          {
                            v28 = (NiObject *)NiNode_GetNiPropertyByID(v26, 2);
                            v29 = NiRTTI_Cast((BSStringT *)dword_B3FA9C, v28);
                            if ( v29 )
                            {
                              v30 = (const char *)v29[1].__vftable;
                              if ( v30 )
                              {
                                LODWORD(v43) = 4;
                                if ( !_strnicmp(v30, "Skin", v43) )
                                {
                                  if ( NiTMap<unsigned int,VertexDist>::NiTMap<unsigned int,VertexDist>(
                                         v27,
                                         v47,
                                         flt_A3D65C,
                                         1,
                                         0) )
                                  {
                                    break;
                                  }
                                }
                              }
                            }
                          }
                        }
                        if ( ++v24 >= v23 )
                          goto LABEL_31;
                      }
                      (*(void (__thiscall **)(int, int))(*(_DWORD *)v45 + 0xC0))(v45, 1);
                    }
LABEL_31:
                    v3 = v46;
                  }
                }
              }
            }
LABEL_32:
            if ( *(_DWORD *)(v3 + 0xE8) )
            {
              FaceGenHeadParameters_Ctor(v49);
              v31 = *(float *)(v3 + 0x1C8);
              v52 = *(float *)(v3 + 0x1CC);
              v32 = *(void **)(v3 + 0x1D0);
              v50 = v31;
              v60 = 0;
              data = v32;
              IsFemale = TESActorBase_IsFemale((_BYTE *)v3);
              v51 = *(_DWORD *)(v3 + 0x1E8);
              sub_5221C0((int *)v3, v49);
              if ( !data )
              {
                v33 = *(BSSimpleList_VoidPtr **)(v3 + 0xE8);
                if ( v33 != (BSSimpleList_VoidPtr *)0xFFFFFF58 && !BSSimpleList_IsEmpty(v33 + 0x15) )
                  data = v33[0x15].firstNode.data;
              }
              v34 = InterlockedDecrement;
              for ( i = 0; i < 9; ++i )
              {
                v36 = sub_52BC50(*(_DWORD *)(v3 + 0xE8), i);
                end = v55.end;
                v45 = v36;
                if ( v55.end >= (unsigned int)v55.capacity )
                  NiTArray_SetSize((unsigned __int16 *)&v55, v55.end + v55.growSize);
                NiTArray_SetAt(&v55, end, &v45);
                v38 = sub_52BD00(*(_DWORD *)(v3 + 0xE8), i);
                v39 = v56.end;
                v45 = v38;
                if ( v56.end >= (unsigned int)v56.capacity )
                  NiTArray_SetSize((unsigned __int16 *)&v56, v56.end + v56.growSize);
                NiTArray_SetAt(&v56, v39, &v45);
                v40 = v57.end;
                v45 = *(_DWORD *)(4 * i + 0xB10CA8);
                if ( v57.end >= (unsigned int)v57.capacity )
                  NiTArray_SetSize((unsigned __int16 *)&v57, v57.end + v57.growSize);
                NiTArray_SetAt(&v57, v40, &v45);
                if ( byte_B10D3C )
                {
                  v41 = sub_524100((TESForm *)v3, &v47, i);
                  LOBYTE(v60) = 1;
                  sub_526A30(v58, v41);
                  LOBYTE(v60) = 0;
                  if ( v47 )
                  {
                    v42 = (void (__thiscall ***)(_DWORD, int))v47;
                    if ( !v34((volatile LONG *)(v47 + 4)) )
                      (**v42)(v42, 1);
                  }
                }
              }
              v59 = byte_B10D3C;
              BSFaceGen_DoSomethingWithFaceGenNode(*(_DWORD *)(v3 + 0x1D4), v49);
              BSFaceGen_DoSomethingWithFaceGenNode(*v48, v49);
              v60 = 0xFFFFFFFF;
              FaceGenHeadParameters_Dtor((unsigned int *)v49);
            }
          }
        }
      }
    }
  }
}
