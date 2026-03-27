NiNode *__thiscall sub_57ED20(void *this, NiNode *a2, const char *a3, char a4)
{
  NiNode *v5; // ebp
  SceneGraph *v6; // eax
  SceneGraph *v7; // eax
  NiNodeVtbl *vtbl; // eax
  NiObjectNET *v9; // eax
  BSShaderProperty *v10; // esi
  BSShaderProperty *v11; // eax
  UInt16 v12; // dx
  NiNode *v13; // eax
  NiNode *v14; // eax
  float *v15; // eax
  NiLight *v16; // eax
  NiLight *v17; // esi
  NiObjectNET *v18; // eax
  BSShaderProperty *v19; // esi
  NiNode *v20; // ecx
  NiNode *v21; // eax
  NiNode *v22; // eax
  float *v23; // eax
  NiLight *v24; // eax
  NiLight *v25; // esi
  NiObjectNET *v26; // eax
  BSShaderProperty *v27; // esi
  NiNode *v28; // ecx
  float v30[9]; // [esp+48h] [ebp-30h] BYREF
  int v31; // [esp+74h] [ebp-4h]
  float v32; // [esp+84h] [ebp+Ch]
  float v33; // [esp+84h] [ebp+Ch]

  v5 = a2;
  if ( !a2 )
  {
    v6 = (SceneGraph *)FormHeapAlloc(0xF0u);
    v31 = 0;
    if ( v6 )
      v7 = SceneGraph::SceneGraph(v6, a3, 0, 0);
    else
      v7 = 0;
    v31 = 0xFFFFFFFF;
    v5 = (NiNode *)v7;
  }
  vtbl = v5[1].vtbl;
  v30[0] = 0.0;
  v30[1] = 0.0;
  v30[2] = 1.0;
  v30[3] = 1.0;
  v30[7] = 1.0;
  v30[4] = 0.0;
  v30[5] = 0.0;
  v30[6] = 0.0;
  v30[8] = 0.0;
  qmemcpy(&vtbl->super.super.DumpAttributes, v30, 0x24u);
  v9 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v10 = (BSShaderProperty *)v9;
  v31 = 1;
  if ( v9 )
  {
    NiObjectNET::NiObjectNET(v9);
    v10->vtbl = &NiZBufferProperty::`vftable';
    v10->member.super.flags = 0xF;
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  v12 = v11->member.super.flags & 0xFFFC | 1;
  v31 = 0xFFFFFFFF;
  v11->member.super.flags = v12;
  sub_405680(v5, v11);
  sub_405680(v5, *((BSShaderProperty **)this + 0x1E));
  if ( a4 )
  {
    SetCameraFOV_0((SceneGraph *)v5, flt_A56F44, 0.0);
  }
  else
  {
    sub_5730B0((NiNode **)dword_B3A6B0, (int)v5, *((float *)this + 0x1D), 1);
    v13 = (NiNode *)FormHeapAlloc(0xDCu);
    v31 = 2;
    if ( v13 )
      v14 = NiNode::NiNode(v13, 0);
    else
      v14 = 0;
    v31 = 0xFFFFFFFF;
    *((_DWORD *)this + 0x15) = v14;
    if ( !v14 )
      nullsub_return0_0arg();
    NiObjectNET_SetName(*((NiObjectNET **)this + 0x15), "InterfaceManager: Main Root");
    ((void (__thiscall *)(NiNode *, _DWORD, _DWORD))v5->vtbl->AddObject)(v5, *((_DWORD *)this + 0x15), 0);
    v15 = *((float **)this + 0x15);
    v32 = *((float *)this + 0x1D);
    v15[0x15] = 0.0;
    v15[0x16] = v32;
    v15[0x17] = 0.0;
    v16 = (NiLight *)FormHeapAlloc(0x114u);
    v31 = 3;
    if ( v16 )
      v17 = sub_719760(v16);
    else
      v17 = 0;
    v31 = 0xFFFFFFFF;
    NiObjectNET_SetName((NiObjectNET *)v17, "MainSceneLight");
    ++v17->unk0B8;
    v17->m_kAmb.r = 1.0;
    v17->m_kAmb.g = 1.0;
    v17->m_kAmb.b = 1.0;
    sub_708E40(v17, *((_DWORD *)this + 0x15));
    (*(void (__thiscall **)(_DWORD, NiLight *, int))(**((_DWORD **)this + 0x15) + 0x84))(
      *((_DWORD *)this + 0x15),
      v17,
      1);
    v18 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v19 = (BSShaderProperty *)v18;
    v31 = 4;
    if ( v18 )
    {
      NiObjectNET::NiObjectNET(v18);
      v19->vtbl = &NiVertexColorProperty::`vftable';
      v19->member.super.flags = 8;
    }
    else
    {
      v19 = 0;
    }
    v19->member.super.flags = v19->member.super.flags & 0xFFC7 | 0x28;
    v20 = *((NiNode **)this + 0x15);
    v31 = 0xFFFFFFFF;
    sub_405680(v20, v19);
    v21 = (NiNode *)FormHeapAlloc(0xDCu);
    v31 = 5;
    if ( v21 )
      v22 = NiNode::NiNode(v21, 0);
    else
      v22 = 0;
    v31 = 0xFFFFFFFF;
    *((_DWORD *)this + 0x16) = v22;
    if ( !v22 )
      nullsub_return0_0arg();
    NiObjectNET_SetName(*((NiObjectNET **)this + 0x16), "InterfaceManager: Cursor Root");
    ((void (__thiscall *)(NiNode *, _DWORD, _DWORD))v5->vtbl->AddObject)(v5, *((_DWORD *)this + 0x16), 0);
    v23 = *((float **)this + 0x16);
    v33 = *((float *)this + 0x1D);
    v23[0x15] = 0.0;
    v23[0x16] = v33;
    v23[0x17] = 0.0;
    v24 = (NiLight *)FormHeapAlloc(0x114u);
    v31 = 6;
    if ( v24 )
      v25 = sub_719760(v24);
    else
      v25 = 0;
    v31 = 0xFFFFFFFF;
    NiObjectNET_SetName((NiObjectNET *)v25, "CursorSceneLight");
    ++v25->unk0B8;
    v25->m_kAmb.r = 1.0;
    v25->m_kAmb.g = 1.0;
    v25->m_kAmb.b = 1.0;
    sub_708E40(v25, *((_DWORD *)this + 0x16));
    (*(void (__thiscall **)(_DWORD, NiLight *, int))(**((_DWORD **)this + 0x16) + 0x84))(
      *((_DWORD *)this + 0x16),
      v25,
      1);
    v26 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v27 = (BSShaderProperty *)v26;
    v31 = 7;
    if ( v26 )
    {
      NiObjectNET::NiObjectNET(v26);
      v27->vtbl = &NiVertexColorProperty::`vftable';
      v27->member.super.flags = 8;
    }
    else
    {
      v27 = 0;
    }
    v27->member.super.flags = v27->member.super.flags & 0xFFC7 | 0x28;
    v28 = *((NiNode **)this + 0x16);
    v31 = 0xFFFFFFFF;
    sub_405680(v28, v27);
    sub_5730B0((NiNode **)dword_B3A6B0, (int)v5, *((float *)this + 0x1D), 0);
  }
  return v5;
}
