void __cdecl sub_554260(_DWORD *a1, _DWORD *a2, NiTexturingProperty *a3, char a4)
{
  int v4; // esi
  const char *v5; // eax
  char *m_data; // edi
  char *v7; // ebp
  char *v8; // edi
  BSFaceGenModelMap *v9; // eax
  BSFaceGenModelMap *v10; // esi
  bool v11; // zf
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  Ni2DBuffer *v15; // esi
  BSFaceGenModel *v16; // eax
  Ni2DBuffer *v17; // eax
  NiNode *v18; // ecx
  const char *v19; // eax
  int *v20; // eax
  NiTexturingProperty *v21; // esi
  NiRenderedTexture *v22; // ebp
  NiTexturingProperty *v23; // eax
  NiTexturingProperty *v24; // esi
  NiNode *v25; // esi
  BSShaderProperty *v26; // eax
  NiNode *v27; // eax
  NiNode *v28; // esi
  NiNode *v29; // esi
  NiRenderedTexture *v30; // esi
  float v31; // [esp+10h] [ebp-80h]
  NiNode *v32; // [esp+28h] [ebp-68h] BYREF
  UInt32 v33; // [esp+2Ch] [ebp-64h] BYREF
  NiRenderedTexture *v34; // [esp+30h] [ebp-60h] BYREF
  BSFaceGenModelMap *v35; // [esp+34h] [ebp-5Ch]
  BSStringT ArgList; // [esp+38h] [ebp-58h] BYREF
  BSStringT v37; // [esp+40h] [ebp-50h] BYREF
  BSStringT v38; // [esp+48h] [ebp-48h] BYREF
  int v39; // [esp+50h] [ebp-40h]
  __int16 v40; // [esp+54h] [ebp-3Ch]
  __int16 v41; // [esp+56h] [ebp-3Ah]
  int v42; // [esp+58h] [ebp-38h]
  __int16 v43; // [esp+5Ch] [ebp-34h]
  __int16 v44; // [esp+5Eh] [ebp-32h]
  float v45[9]; // [esp+60h] [ebp-30h] BYREF
  int v46; // [esp+8Ch] [ebp-4h]

  ArgList.m_data = 0;
  ArgList.m_dataLen = 0;
  ArgList.m_bufLen = 0;
  v46 = 0;
  v38.m_data = 0;
  v38.m_dataLen = 0;
  v38.m_bufLen = 0;
  v37.m_data = 0;
  v37.m_dataLen = 0;
  v37.m_bufLen = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v34 = 0;
  v32 = 0;
  v31 = flt_A3721C;
  LOBYTE(v46) = 6;
  sub_70FD80(v45, v31);
  v4 = (int)a3;
  if ( !a3[2].vtbl )
    goto LABEL_66;
  v5 = (const char *)(*(int (__thiscall **)(void **))(*((_DWORD *)a3[2].vtbl + 9) + 0x14))(a3[2].vtbl + 9);
  BSStringT_Static_Format(&ArgList, "Meshes\\%s", v5);
  m_data = ArgList.m_data;
  v7 = sub_550010(&v37, ArgList.m_data);
  v8 = sub_54FEB0(&v38, m_data);
  v33 = 0;
  LOBYTE(v46) = 7;
  if ( v8 )
  {
    if ( !dword_B39B80 )
      sub_553550();
    if ( !*(_DWORD *)(dword_B39B80 + 0xDAC) )
    {
      v9 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u);
      v35 = v9;
      LOBYTE(v46) = 8;
      if ( v9 )
        v10 = BSFaceGenModelMap::BSFaceGenModelMap(v9);
      else
        v10 = 0;
      v11 = dword_B39B80 == 0;
      LOBYTE(v46) = 7;
      if ( v11 )
        sub_553550();
      *(_DWORD *)(dword_B39B80 + 0xDAC) = v10;
      v12 = *(_DWORD *)(dword_B39B80 + 0xDAC);
      *(_DWORD *)(v12 + 0x18) = dword_B120EC;
      sub_5506B0((char *)v12, 0);
      v13 = dword_B120F4;
      if ( !dword_B39B80 )
        sub_553550();
      v14 = *(_DWORD *)(dword_B39B80 + 0xDAC);
      *(_DWORD *)(v14 + 0x1C) = v13;
      sub_5506B0((char *)v14, 0);
    }
    if ( !dword_B39B80 )
      sub_553550();
    if ( sub_5515B0(*(char **)(dword_B39B80 + 0xDAC), (int)v8, (int *)&v33) )
    {
      v15 = (Ni2DBuffer *)v33;
      if ( !*(_DWORD *)(v33 + 8) )
        sub_559B50((_DWORD *)v33, (int)v8, (int)ArgList.m_data, (int)v7, 0, 1);
      LOBYTE(v46) = 6;
      if ( InterlockedDecrement((volatile LONG *)&v15->members) )
        goto LABEL_36;
    }
    else
    {
      v16 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu);
      v35 = v16;
      LOBYTE(v46) = 9;
      if ( v16 )
        v17 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v16);
      else
        v17 = 0;
      LOBYTE(v46) = 7;
      NiSmartPointer_Set__((Ni2DBuffer **)&v33, v17);
      v15 = (Ni2DBuffer *)v33;
      if ( sub_559B50((_DWORD *)v33, (int)v8, (int)ArgList.m_data, (int)v7, 0, 1) )
      {
        if ( !dword_B39B80 )
          sub_553550();
        sub_551450(*(char **)(dword_B39B80 + 0xDAC), (int)v8, v15);
      }
      else if ( v15 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v15->members) )
          (*(void (__thiscall **)(Ni2DBuffer *, int))v15->__vftable)(v15, 1);
        v15 = 0;
      }
      LOBYTE(v46) = 6;
      if ( !v15 )
        goto LABEL_37;
      if ( InterlockedDecrement((volatile LONG *)&v15->members) )
      {
LABEL_36:
        sub_559870((char *)v15, (int)a3, (int *)&v32);
LABEL_37:
        v4 = (int)a3;
        goto LABEL_38;
      }
    }
    (*(void (__thiscall **)(Ni2DBuffer *, int))v15->__vftable)(v15, 1);
    goto LABEL_36;
  }
  LOBYTE(v46) = 6;
LABEL_38:
  v18 = v32;
  if ( v32 )
  {
    NiObjectNET_SetName((NiObjectNET *)v32, "FaceGenHair");
    sub_550980((int)v32, *(float *)(v4 + 0x68));
    v19 = *(const char **)(*(_DWORD *)(v4 + 0x60) + 0x40);
    if ( !v19 )
      v19 = EmptyString;
    BSStringT_Static_Format(&ArgList, "Textures\\%s", v19);
    v20 = (int *)sub_442890((UInt32 *)&a3, ArgList.m_data, 0, 0);
    LOBYTE(v46) = 0xA;
    sub_55E2A0((int *)&v34, v20);
    LOBYTE(v46) = 6;
    if ( a3 )
    {
      v21 = a3;
      if ( !InterlockedDecrement((volatile LONG *)&a3->super) )
        ((void (__thiscall *)(NiTexturingProperty *, int))*v21->vtbl)(v21, 1);
    }
    v22 = v34;
    if ( v34 )
    {
      v23 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
      a3 = v23;
      LOBYTE(v46) = 0xB;
      if ( v23 )
        v24 = NiTexturingProperty::NiTexturingProperty(v23);
      else
        v24 = 0;
      LOBYTE(v46) = 6;
      NiTexturingProperty::SetUnk08(v24, v22);
      sub_405870(v24, 3);
      sub_405900(v24, 2);
      if ( NiNode_GetNiPropertyByID(v32, 6) )
      {
        sub_708560(v32, (volatile LONG **)&a3, 6);
        sub_7016A0((NiD3DVertexShader *)&a3);
      }
      sub_405680(v32, (BSShaderProperty *)v24);
    }
    if ( !NiNode_GetNiPropertyByID(v32, 0) )
    {
      v25 = v32;
      v26 = (BSShaderProperty *)sub_550550();
      sub_405680(v25, v26);
    }
    if ( *(_DWORD *)&v32->members.children.numObjs )
    {
      if ( a4 )
      {
        sub_478350(v32, 0);
        v27 = v32;
        v32->members.super.m_localTransform.pos.x = Vector3_InitValue_;
        v27 = (NiNode *)((char *)v27 + 0x54);
        v27->members.super.super.super.m_uiRefCount = *(UInt32 *)(&Vector3_InitValue_ + 1);
        *(float *)&v27->members.super.super.m_pcName = dword_B3F9B0;
        qmemcpy(&v32->members.super.m_localTransform, v45, 0x24u);
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v32, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a2 + 0x84))(*a2, v32, 0);
      }
    }
    else
    {
      qmemcpy(&v32->members.super.m_localTransform, v45, 0x24u);
      (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v32, 0);
    }
    v18 = v32;
    if ( v32 )
    {
      v28 = v32;
      if ( !InterlockedDecrement((volatile LONG *)&v32->members) )
        v28->vtbl->super.super.super.Destructor((NiRefObject *)v28, 1);
      v18 = 0;
      v32 = 0;
    }
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v22->member) )
        v22->__vftable->super.super.super.Destructor((NiRefObject *)v22, 1);
      v34 = 0;
LABEL_66:
      v18 = v32;
    }
  }
  LOBYTE(v46) = 5;
  if ( v18 )
  {
    v29 = v18;
    if ( !InterlockedDecrement((volatile LONG *)&v18->members) )
      v29->vtbl->super.super.super.Destructor((NiRefObject *)v29, 1);
  }
  v30 = v34;
  LOBYTE(v46) = 4;
  if ( v34 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v34->member) )
      v30->__vftable->super.super.super.Destructor((NiRefObject *)v30, 1);
  }
  FormHeapFree(0);
  FormHeapFree(0);
  FormHeapFree((unsigned int)v37.m_data);
  FormHeapFree((unsigned int)v38.m_data);
  FormHeapFree((unsigned int)ArgList.m_data);
}
