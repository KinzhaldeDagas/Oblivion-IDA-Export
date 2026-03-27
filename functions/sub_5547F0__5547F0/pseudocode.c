void __cdecl sub_5547F0(_DWORD *a1, _DWORD *a2, NiTexturingProperty *a3, char a4)
{
  const char *v4; // eax
  char *m_data; // ebp
  char *v6; // edi
  BSFaceGenModelMap *v7; // eax
  BSFaceGenModelMap *v8; // esi
  bool v9; // zf
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  Ni2DBuffer *v13; // esi
  BSFaceGenModel *v14; // eax
  Ni2DBuffer *v15; // eax
  NiNode *v16; // ecx
  NiInterpController *m_controller; // eax
  const char *unk028_low; // eax
  int *v19; // eax
  void (__thiscall ***v20)(_DWORD, int); // esi
  NiRenderedTexture *v21; // ebp
  NiTexturingProperty *v22; // eax
  NiTexturingProperty *v23; // esi
  NiNode *v24; // eax
  NiNode *v25; // esi
  const char *v26; // eax
  char *v27; // esi
  char *v28; // ebp
  char *v29; // edi
  BSFaceGenModelMap *v30; // eax
  BSFaceGenModelMap *v31; // esi
  int v32; // ecx
  int v33; // esi
  int v34; // ecx
  Ni2DBuffer *v35; // esi
  BSFaceGenModel *v36; // eax
  Ni2DBuffer *v37; // eax
  NiInterpController *v38; // eax
  const char *v39; // eax
  int *v40; // eax
  NiTexturingProperty *v41; // esi
  NiRenderedTexture *v42; // edi
  NiTexturingProperty *v43; // eax
  NiTexturingProperty *v44; // esi
  NiNode *v45; // eax
  NiNode *v46; // esi
  int v47; // edi
  NiNode *v48; // esi
  float v49; // [esp+30h] [ebp-84h]
  NiNode *v50; // [esp+48h] [ebp-6Ch] BYREF
  NiRenderedTexture *v51; // [esp+4Ch] [ebp-68h] BYREF
  UInt32 v52; // [esp+50h] [ebp-64h] BYREF
  int v53; // [esp+54h] [ebp-60h] BYREF
  void *v54; // [esp+58h] [ebp-5Ch]
  BSStringT ArgList; // [esp+5Ch] [ebp-58h] BYREF
  BSStringT v56; // [esp+64h] [ebp-50h] BYREF
  BSStringT v57; // [esp+6Ch] [ebp-48h] BYREF
  int v58; // [esp+74h] [ebp-40h]
  __int16 v59; // [esp+78h] [ebp-3Ch]
  __int16 v60; // [esp+7Ah] [ebp-3Ah]
  int v61; // [esp+7Ch] [ebp-38h]
  int v62; // [esp+80h] [ebp-34h]
  float v63[9]; // [esp+84h] [ebp-30h] BYREF
  int v64; // [esp+B0h] [ebp-4h]

  ArgList.m_data = 0;
  ArgList.m_dataLen = 0;
  ArgList.m_bufLen = 0;
  v64 = 0;
  v57.m_data = 0;
  v57.m_dataLen = 0;
  v57.m_bufLen = 0;
  v56.m_data = 0;
  v56.m_dataLen = 0;
  v56.m_bufLen = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v51 = 0;
  v50 = 0;
  v49 = flt_A3721C;
  LOBYTE(v64) = 6;
  sub_70FD80(v63, v49);
  if ( !*(_DWORD *)&a3[3].unk01C.numObjs )
    goto LABEL_66;
  v4 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&a3[3].unk01C.numObjs + 0x14))(*(_DWORD *)&a3[3].unk01C.numObjs);
  BSStringT_Static_Format(&ArgList, "Meshes\\%s", v4);
  m_data = ArgList.m_data;
  v53 = (int)sub_550010(&v56, ArgList.m_data);
  v6 = sub_54FEB0(&v57, m_data);
  v52 = 0;
  LOBYTE(v64) = 7;
  if ( !v6 )
  {
    LOBYTE(v64) = 6;
    goto LABEL_37;
  }
  if ( !dword_B39B80 )
    sub_553550();
  if ( !*(_DWORD *)(dword_B39B80 + 0xDAC) )
  {
    v7 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u);
    v54 = v7;
    LOBYTE(v64) = 8;
    if ( v7 )
      v8 = BSFaceGenModelMap::BSFaceGenModelMap(v7);
    else
      v8 = 0;
    v9 = dword_B39B80 == 0;
    LOBYTE(v64) = 7;
    if ( v9 )
      sub_553550();
    *(_DWORD *)(dword_B39B80 + 0xDAC) = v8;
    v10 = *(_DWORD *)(dword_B39B80 + 0xDAC);
    *(_DWORD *)(v10 + 0x18) = dword_B120EC;
    sub_5506B0((char *)v10, 0);
    v11 = dword_B120F4;
    if ( !dword_B39B80 )
      sub_553550();
    v12 = *(_DWORD *)(dword_B39B80 + 0xDAC);
    *(_DWORD *)(v12 + 0x1C) = v11;
    sub_5506B0((char *)v12, 0);
  }
  if ( !dword_B39B80 )
    sub_553550();
  if ( sub_5515B0(*(char **)(dword_B39B80 + 0xDAC), (int)v6, (int *)&v52) )
  {
    v13 = (Ni2DBuffer *)v52;
    if ( !*(_DWORD *)(v52 + 8) )
      sub_559B50((_DWORD *)v52, (int)v6, (int)m_data, v53, 0, 0);
    LOBYTE(v64) = 6;
    if ( InterlockedDecrement((volatile LONG *)&v13->members) )
      goto LABEL_36;
    goto LABEL_35;
  }
  v14 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu);
  v54 = v14;
  LOBYTE(v64) = 9;
  if ( v14 )
    v15 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v14);
  else
    v15 = 0;
  LOBYTE(v64) = 7;
  NiSmartPointer_Set__((Ni2DBuffer **)&v52, v15);
  v13 = (Ni2DBuffer *)v52;
  if ( sub_559B50((_DWORD *)v52, (int)v6, (int)m_data, v53, 0, 0) )
  {
    if ( !dword_B39B80 )
      sub_553550();
    sub_551450(*(char **)(dword_B39B80 + 0xDAC), (int)v6, v13);
  }
  else if ( v13 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v13->members) )
      (*(void (__thiscall **)(Ni2DBuffer *, int))v13->__vftable)(v13, 1);
    v13 = 0;
  }
  LOBYTE(v64) = 6;
  if ( v13 )
  {
    if ( InterlockedDecrement((volatile LONG *)&v13->members) )
    {
LABEL_36:
      sub_559870((char *)v13, (int)a3, (int *)&v50);
      goto LABEL_37;
    }
LABEL_35:
    (*(void (__thiscall **)(Ni2DBuffer *, int))v13->__vftable)(v13, 1);
    goto LABEL_36;
  }
LABEL_37:
  v16 = v50;
  if ( v50 )
  {
    NiObjectNET_SetName((NiObjectNET *)v50, "FaceGenEyeLeft");
    m_controller = a3[2].super.m_controller;
    if ( m_controller )
    {
      unk028_low = (const char *)LODWORD(m_controller->member.unk028);
      if ( !unk028_low )
        unk028_low = EmptyString;
      BSStringT_Static_Format(&ArgList, "Textures\\%s", unk028_low);
      v19 = (int *)sub_442890((UInt32 *)&v53, ArgList.m_data, 0, 0);
      LOBYTE(v64) = 0xA;
    }
    else
    {
      v19 = (int *)sub_442890((UInt32 *)&v53, "Textures\\Characters\\Eyes\\EyeDefault.dds", 0, 0);
      LOBYTE(v64) = 0xB;
    }
    sub_55E2A0((int *)&v51, v19);
    LOBYTE(v64) = 6;
    if ( v53 )
    {
      v20 = (void (__thiscall ***)(_DWORD, int))v53;
      if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) )
        (**v20)(v20, 1);
    }
    v21 = v51;
    if ( v51 )
    {
      v22 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
      v54 = v22;
      LOBYTE(v64) = 0xC;
      if ( v22 )
        v23 = NiTexturingProperty::NiTexturingProperty(v22);
      else
        v23 = 0;
      LOBYTE(v64) = 6;
      NiTexturingProperty::SetUnk08(v23, v21);
      sub_405870(v23, 3);
      sub_405900(v23, 2);
      if ( NiNode_GetNiPropertyByID(v50, 6) )
      {
        sub_708560(v50, (volatile LONG **)&v53, 6);
        sub_7016A0((NiD3DVertexShader *)&v53);
      }
      sub_405680(v50, (BSShaderProperty *)v23);
    }
    if ( *(_DWORD *)&v50->members.children.numObjs )
    {
      if ( a4 )
      {
        sub_478350(v50, 0);
        v24 = v50;
        v50->members.super.m_localTransform.pos.x = Vector3_InitValue_;
        v24 = (NiNode *)((char *)v24 + 0x54);
        v24->members.super.super.super.m_uiRefCount = *(UInt32 *)(&Vector3_InitValue_ + 1);
        *(float *)&v24->members.super.super.m_pcName = dword_B3F9B0;
        qmemcpy(&v50->members.super.m_localTransform, v63, 0x24u);
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v50, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a2 + 0x84))(*a2, v50, 0);
      }
    }
    else
    {
      qmemcpy(&v50->members.super.m_localTransform, v63, 0x24u);
      (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v50, 0);
    }
    v16 = v50;
    if ( v50 )
    {
      v25 = v50;
      if ( !InterlockedDecrement((volatile LONG *)&v50->members) )
        v25->vtbl->super.super.super.Destructor((NiRefObject *)v25, 1);
      v16 = 0;
      v50 = 0;
    }
    if ( v21 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v21->member) )
        v21->__vftable->super.super.super.Destructor((NiRefObject *)v21, 1);
      v51 = 0;
LABEL_66:
      v16 = v50;
    }
  }
  if ( !a3[3].unk02C )
  {
    v47 = (int)v51;
    goto LABEL_132;
  }
  v26 = (const char *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)a3[3].unk02C + 0x14))(a3[3].unk02C);
  BSStringT_Static_Format(&ArgList, "Meshes\\%s", v26);
  v27 = ArgList.m_data;
  v28 = sub_550010(&v56, ArgList.m_data);
  v29 = sub_54FEB0(&v57, v27);
  v52 = 0;
  LOBYTE(v64) = 0xD;
  if ( v29 )
  {
    if ( !dword_B39B80 )
      sub_553550();
    if ( !*(_DWORD *)(dword_B39B80 + 0xDAC) )
    {
      v30 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u);
      v54 = v30;
      LOBYTE(v64) = 0xE;
      if ( v30 )
        v31 = BSFaceGenModelMap::BSFaceGenModelMap(v30);
      else
        v31 = 0;
      v9 = dword_B39B80 == 0;
      LOBYTE(v64) = 0xD;
      if ( v9 )
        sub_553550();
      *(_DWORD *)(dword_B39B80 + 0xDAC) = v31;
      v32 = *(_DWORD *)(dword_B39B80 + 0xDAC);
      *(_DWORD *)(v32 + 0x18) = dword_B120EC;
      sub_5506B0((char *)v32, 0);
      v33 = dword_B120F4;
      if ( !dword_B39B80 )
        sub_553550();
      v34 = *(_DWORD *)(dword_B39B80 + 0xDAC);
      *(_DWORD *)(v34 + 0x1C) = v33;
      sub_5506B0((char *)v34, 0);
    }
    if ( !dword_B39B80 )
      sub_553550();
    if ( sub_5515B0(*(char **)(dword_B39B80 + 0xDAC), (int)v29, (int *)&v52) )
    {
      v35 = (Ni2DBuffer *)v52;
      if ( !*(_DWORD *)(v52 + 8) )
        sub_559B50((_DWORD *)v52, (int)v29, (int)ArgList.m_data, (int)v28, 0, 0);
      LOBYTE(v64) = 6;
    }
    else
    {
      v36 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu);
      v54 = v36;
      LOBYTE(v64) = 0xF;
      if ( v36 )
        v37 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v36);
      else
        v37 = 0;
      LOBYTE(v64) = 0xD;
      NiSmartPointer_Set__((Ni2DBuffer **)&v52, v37);
      v35 = (Ni2DBuffer *)v52;
      if ( sub_559B50((_DWORD *)v52, (int)v29, (int)ArgList.m_data, (int)v28, 0, 0) )
      {
        if ( !dword_B39B80 )
          sub_553550();
        sub_551450(*(char **)(dword_B39B80 + 0xDAC), (int)v29, v35);
      }
      else if ( v35 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v35->members) )
          (*(void (__thiscall **)(Ni2DBuffer *, int))v35->__vftable)(v35, 1);
        v35 = 0;
      }
      LOBYTE(v64) = 6;
      if ( !v35 )
        goto LABEL_102;
    }
    if ( !InterlockedDecrement((volatile LONG *)&v35->members) )
      (*(void (__thiscall **)(Ni2DBuffer *, int))v35->__vftable)(v35, 1);
    sub_559870((char *)v35, (int)a3, (int *)&v50);
  }
  else
  {
    LOBYTE(v64) = 6;
  }
LABEL_102:
  v16 = v50;
  if ( v50 )
  {
    NiObjectNET_SetName((NiObjectNET *)v50, "FaceGenEyeRight");
    v38 = a3[2].super.m_controller;
    if ( v38 )
    {
      v39 = (const char *)LODWORD(v38->member.unk028);
      if ( !v39 )
        v39 = EmptyString;
      BSStringT_Static_Format(&ArgList, "Textures\\%s", v39);
      v40 = (int *)sub_442890((UInt32 *)&a3, ArgList.m_data, 0, 0);
      LOBYTE(v64) = 0x10;
    }
    else
    {
      v40 = (int *)sub_442890((UInt32 *)&a3, "Textures\\Characters\\Eyes\\EyeDefault.dds", 0, 0);
      LOBYTE(v64) = 0x11;
    }
    sub_55E2A0((int *)&v51, v40);
    LOBYTE(v64) = 6;
    if ( a3 )
    {
      v41 = a3;
      if ( !InterlockedDecrement((volatile LONG *)&a3->super) )
        ((void (__thiscall *)(NiTexturingProperty *, int))*v41->vtbl)(v41, 1);
    }
    v42 = v51;
    if ( v51 )
    {
      v43 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
      a3 = v43;
      LOBYTE(v64) = 0x12;
      if ( v43 )
        v44 = NiTexturingProperty::NiTexturingProperty(v43);
      else
        v44 = 0;
      LOBYTE(v64) = 6;
      NiTexturingProperty::SetUnk08(v44, v42);
      sub_405870(v44, 3);
      sub_405900(v44, 2);
      if ( NiNode_GetNiPropertyByID(v50, 6) )
      {
        sub_708560(v50, (volatile LONG **)&a3, 6);
        sub_7016A0((NiD3DVertexShader *)&a3);
      }
      sub_405680(v50, (BSShaderProperty *)v44);
    }
    if ( *(_DWORD *)&v50->members.children.numObjs )
    {
      if ( a4 )
      {
        sub_478350(v50, 0);
        v45 = v50;
        v50->members.super.m_localTransform.pos.x = Vector3_InitValue_;
        v45 = (NiNode *)((char *)v45 + 0x54);
        v45->members.super.super.super.m_uiRefCount = *(UInt32 *)(&Vector3_InitValue_ + 1);
        *(float *)&v45->members.super.super.m_pcName = dword_B3F9B0;
        qmemcpy(&v50->members.super.m_localTransform, v63, 0x24u);
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v50, 0);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a2 + 0x84))(*a2, v50, 0);
      }
    }
    else
    {
      qmemcpy(&v50->members.super.m_localTransform, v63, 0x24u);
      (*(void (__thiscall **)(_DWORD, NiNode *, _DWORD))(*(_DWORD *)*a1 + 0x84))(*a1, v50, 0);
    }
    v16 = v50;
    if ( v50 )
    {
      v46 = v50;
      if ( !InterlockedDecrement((volatile LONG *)&v50->members) )
        v46->vtbl->super.super.super.Destructor((NiRefObject *)v46, 1);
      v16 = 0;
      v50 = 0;
    }
  }
  v47 = (int)v51;
  if ( v51 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v51->member) )
      (**(void (__thiscall ***)(int, int))v47)(v47, 1);
    v16 = v50;
    v47 = 0;
    v51 = 0;
  }
LABEL_132:
  LOBYTE(v64) = 5;
  if ( v16 )
  {
    v48 = v16;
    if ( !InterlockedDecrement((volatile LONG *)&v16->members) )
      v48->vtbl->super.super.super.Destructor((NiRefObject *)v48, 1);
  }
  LOBYTE(v64) = 4;
  if ( v47 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v47 + 4)) )
      (**(void (__thiscall ***)(int, int))v47)(v47, 1);
  }
  FormHeapFree(0);
  FormHeapFree(0);
  FormHeapFree((unsigned int)v56.m_data);
  FormHeapFree((unsigned int)v57.m_data);
  FormHeapFree((unsigned int)ArgList.m_data);
}
