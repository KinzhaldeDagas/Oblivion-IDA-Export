NiNode *__thiscall InterfaceManager_CreateSceneGraph(void *this, NiNode *a2, const char *a3, char a4)
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

  v5 = a2; /*0x57ed49*/
  if ( !a2 ) /*0x57ed4f*/
  {
    v6 = (SceneGraph *)FormHeapAlloc(0xF0u); /*0x57ed56*/
    v31 = 0; /*0x57ed64*/
    if ( v6 ) /*0x57ed68*/
      v7 = SceneGraph::SceneGraph(v6, a3, 0, 0); /*0x57ed73*/
    else
      v7 = 0; /*0x57ed7a*/
    v31 = 0xFFFFFFFF; /*0x57ed7c*/
    v5 = (NiNode *)v7; /*0x57ed84*/
  }
  vtbl = v5[1].vtbl; /*0x57ed88*/
  v30[0] = 0.0; /*0x57ed8e*/
  v30[1] = 0.0; /*0x57ed95*/
  v30[2] = 1.0; /*0x57eda4*/
  v30[3] = 1.0; /*0x57edaa*/
  v30[7] = 1.0; /*0x57edae*/
  v30[4] = 0.0; /*0x57edb2*/
  v30[5] = 0.0; /*0x57edb6*/
  v30[6] = 0.0; /*0x57edba*/
  v30[8] = 0.0; /*0x57edbe*/
  qmemcpy(&vtbl->super.super.DumpAttributes, v30, 0x24u); /*0x57edc2*/
  v9 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x57edc4*/
  v10 = (BSShaderProperty *)v9; /*0x57edc9*/
  v31 = 1; /*0x57edd4*/
  if ( v9 ) /*0x57eddc*/
  {
    NiObjectNET::NiObjectNET(v9); /*0x57ede0*/
    v10->vtbl = &NiZBufferProperty::`vftable'; /*0x57ede5*/
    v10->member.super.flags = 0xF; /*0x57edeb*/
    v11 = v10; /*0x57edf1*/
  }
  else
  {
    v11 = 0; /*0x57edf5*/
  }
  v12 = v11->member.super.flags & 0xFFFC | 1; /*0x57ee00*/
  v31 = 0xFFFFFFFF; /*0x57ee0a*/
  v11->member.super.flags = v12; /*0x57ee0e*/
  sub_405680(v5, v11); /*0x57ee12*/
  sub_405680(v5, *((BSShaderProperty **)this + 0x1E)); /*0x57ee1d*/
  if ( a4 )
  {
    SetCameraFOV_0((SceneGraph *)v5, flt_A56F44, 0.0); /*0x57f151*/
  }
  else
  {
    sub_5730B0((NiNode **)unk_B3A6B0, (int)v5, *((float *)this + 0x1D), 1); /*0x57ee3d*/
    v13 = (NiNode *)FormHeapAlloc(0xDCu); /*0x57ee47*/
    v31 = 2; /*0x57ee55*/
    if ( v13 ) /*0x57ee5d*/
      v14 = NiNode::NiNode(v13, 0); /*0x57ee63*/
    else
      v14 = 0; /*0x57ee6a*/
    v31 = 0xFFFFFFFF; /*0x57ee6e*/
    *((_DWORD *)this + 0x15) = v14; /*0x57ee72*/
    if ( !v14 ) /*0x57ee75*/
      nullsub_return0_0arg(); /*0x57ee86*/
    NiObjectNET_SetName(*((NiObjectNET **)this + 0x15), "InterfaceManager: Main Root");
    ((void (__thiscall *)(NiNode *, _DWORD, _DWORD))v5->vtbl->AddObject)(v5, *((_DWORD *)this + 0x15), 0); /*0x57eeac*/
    v15 = *((float **)this + 0x15); /*0x57eeb1*/
    v32 = *((float *)this + 0x1D); /*0x57eeb4*/
    v15[0x15] = 0.0; /*0x57eecf*/
    v15[0x16] = v32; /*0x57eed6*/
    v15[0x17] = 0.0; /*0x57eee1*/
    v16 = (NiLight *)FormHeapAlloc(0x114u); /*0x57eee4*/
    v31 = 3; /*0x57eef2*/
    if ( v16 ) /*0x57eefa*/
      v17 = sub_719760(v16); /*0x57ef03*/
    else
      v17 = 0; /*0x57ef07*/
    v31 = 0xFFFFFFFF; /*0x57ef10*/
    NiObjectNET_SetName((NiObjectNET *)v17, "MainSceneLight"); /*0x57ef14*/
    ++v17->unk0B8; /*0x57ef1b*/
    v17->m_kAmb.r = 1.0; /*0x57ef3a*/
    v17->m_kAmb.g = 1.0; /*0x57ef40*/
    v17->m_kAmb.b = 1.0; /*0x57ef46*/
    sub_708E40(v17, *((_DWORD **)this + 0x15)); /*0x57ef52*/
    (*(void (__thiscall **)(_DWORD, NiLight *, int))(**((_DWORD **)this + 0x15) + 0x84))( /*0x57ef65*/
      *((_DWORD *)this + 0x15),
      v17,
      1);
    v18 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x57ef69*/
    v19 = (BSShaderProperty *)v18; /*0x57ef6e*/
    v31 = 4; /*0x57ef79*/
    if ( v18 ) /*0x57ef81*/
    {
      NiObjectNET::NiObjectNET(v18); /*0x57ef85*/
      v19->vtbl = &NiVertexColorProperty::`vftable'; /*0x57ef8a*/
      v19->member.super.flags = 8; /*0x57ef90*/
    }
    else
    {
      v19 = 0; /*0x57ef98*/
    }
    v19->member.super.flags = v19->member.super.flags & 0xFFC7 | 0x28; /*0x57efa6*/
    v20 = *((NiNode **)this + 0x15); /*0x57efaa*/
    v31 = 0xFFFFFFFF; /*0x57efae*/
    sub_405680(v20, v19); /*0x57efb2*/
    v21 = (NiNode *)FormHeapAlloc(0xDCu); /*0x57efbc*/
    v31 = 5; /*0x57efca*/
    if ( v21 ) /*0x57efd2*/
      v22 = NiNode::NiNode(v21, 0); /*0x57efd8*/
    else
      v22 = 0; /*0x57efdf*/
    v31 = 0xFFFFFFFF; /*0x57efe3*/
    *((_DWORD *)this + 0x16) = v22; /*0x57efe7*/
    if ( !v22 ) /*0x57efea*/
      nullsub_return0_0arg(); /*0x57effb*/
    NiObjectNET_SetName(*((NiObjectNET **)this + 0x16), "InterfaceManager: Cursor Root");
    ((void (__thiscall *)(NiNode *, _DWORD, _DWORD))v5->vtbl->AddObject)(v5, *((_DWORD *)this + 0x16), 0); /*0x57f021*/
    v23 = *((float **)this + 0x16); /*0x57f026*/
    v33 = *((float *)this + 0x1D); /*0x57f029*/
    v23[0x15] = 0.0; /*0x57f044*/
    v23[0x16] = v33; /*0x57f04b*/
    v23[0x17] = 0.0; /*0x57f056*/
    v24 = (NiLight *)FormHeapAlloc(0x114u); /*0x57f059*/
    v31 = 6; /*0x57f067*/
    if ( v24 ) /*0x57f06f*/
      v25 = sub_719760(v24); /*0x57f078*/
    else
      v25 = 0; /*0x57f07c*/
    v31 = 0xFFFFFFFF; /*0x57f085*/
    NiObjectNET_SetName((NiObjectNET *)v25, "CursorSceneLight"); /*0x57f089*/
    ++v25->unk0B8; /*0x57f090*/
    v25->m_kAmb.r = 1.0; /*0x57f0af*/
    v25->m_kAmb.g = 1.0; /*0x57f0b5*/
    v25->m_kAmb.b = 1.0; /*0x57f0bb*/
    sub_708E40(v25, *((_DWORD **)this + 0x16)); /*0x57f0c7*/
    (*(void (__thiscall **)(_DWORD, NiLight *, int))(**((_DWORD **)this + 0x16) + 0x84))( /*0x57f0da*/
      *((_DWORD *)this + 0x16),
      v25,
      1);
    v26 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x57f0de*/
    v27 = (BSShaderProperty *)v26; /*0x57f0e3*/
    v31 = 7; /*0x57f0ee*/
    if ( v26 ) /*0x57f0f6*/
    {
      NiObjectNET::NiObjectNET(v26); /*0x57f0fa*/
      v27->vtbl = &NiVertexColorProperty::`vftable'; /*0x57f0ff*/
      v27->member.super.flags = 8; /*0x57f105*/
    }
    else
    {
      v27 = 0; /*0x57f10d*/
    }
    v27->member.super.flags = v27->member.super.flags & 0xFFC7 | 0x28; /*0x57f11b*/
    v28 = *((NiNode **)this + 0x16); /*0x57f11f*/
    v31 = 0xFFFFFFFF; /*0x57f123*/
    sub_405680(v28, v27); /*0x57f127*/
    sub_5730B0((NiNode **)unk_B3A6B0, (int)v5, *((float *)this + 0x1D), 0); /*0x57f13c*/
  }
  return v5; /*0x57f158*/
}
