// positive sp value has been detected, the output may be wrong!
char __userpurge sub_545450@<al>(int a1@<edi>, int a2@<esi>, int a3)
{
  NiNode *v3; // eax
  NiNode *v4; // ebx
  NiNode *v5; // ebp
  NiNode *v6; // ebx
  NiAVObject *v7; // eax
  NiAVObject *v8; // edi
  NiAVObject *v9; // ebx
  NiNode *v10; // eax
  NiNode *v11; // edi
  NiNode *v12; // ebx
  NiLight *v13; // eax
  NiLight *v14; // ebx
  NiLight *v15; // edi
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  int v20; // edx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v24; // [esp-10h] [ebp-10h]
  int v25; // [esp-4h] [ebp-4h]
  int retaddr; // [esp+0h] [ebp+0h]
  float v27; // [esp+20h] [ebp+20h]

  v3 = (NiNode *)FormHeapAlloc(0xE4u);
  v4 = v3;
  if ( v3 )
  {
    NiNode::NiNode(v3, 0);
    *(float *)&v4[1].members.super.super.super.m_uiRefCount = 0.0;
    v4->vtbl = (NiNodeVtbl *)&NiBillboardNode::`vftable';
    LOWORD(v4[1].vtbl) = 9;
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  v6 = *(NiNode **)(a2 + 8);
  if ( v6 != v5 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) )
        v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1);
    }
    *(_DWORD *)(a2 + 8) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->members);
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a2 + 8), "Sun Billboard Node");
  *(_WORD *)(*(_DWORD *)(a2 + 8) + 0x18) |= 2u;
  *(_WORD *)(*(_DWORD *)(a2 + 8) + 0xDC) = *(_WORD *)(*(_DWORD *)(a2 + 8) + 0xDC) & 0xFFF8 | 2;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 8) + 0x84))(
    *(_DWORD *)(a2 + 8),
    *(_DWORD *)(a2 + 0x10),
    0);
  v7 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v7 )
    v8 = sub_7174B0(v7, 4, a3, retaddr, a1, v25, 1, 0, 2, v24);
  else
    v8 = 0;
  v9 = *(NiAVObject **)(a2 + 0x14);
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v9->members) )
        v9->vtbl->super.super.Destructor((NiRefObject *)v9, 1);
    }
    *(_DWORD *)(a2 + 0x14) = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)&v8->members);
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a2 + 0x14), "Sun Glare Geometry");
  *(_WORD *)(*(_DWORD *)(a2 + 0x14) + 0x18) |= 2u;
  v10 = (NiNode *)FormHeapAlloc(0xE4u);
  v11 = v10;
  if ( v10 )
  {
    NiNode::NiNode(v10, 0);
    *(float *)&v11[1].members.super.super.super.m_uiRefCount = 0.0;
    v11->vtbl = (NiNodeVtbl *)&NiBillboardNode::`vftable';
    LOWORD(v11[1].vtbl) = 9;
  }
  else
  {
    v11 = 0;
  }
  v12 = *(NiNode **)(a2 + 0xC);
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v12->members) )
        v12->vtbl->super.super.super.Destructor((NiRefObject *)v12, 1);
    }
    *(_DWORD *)(a2 + 0xC) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)&v11->members);
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a2 + 0xC), "Sun Glare Billboard Node");
  *(_WORD *)(*(_DWORD *)(a2 + 0xC) + 0x18) |= 2u;
  *(_WORD *)(*(_DWORD *)(a2 + 0xC) + 0xDC) = *(_WORD *)(*(_DWORD *)(a2 + 0xC) + 0xDC) & 0xFFF8 | 2;
  v27 = fabs(*(float *)(a2 + 0x20));
  *(float *)(*(_DWORD *)(a2 + 0xC) + 0x60) = v27;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 0xC) + 0x84))(
    *(_DWORD *)(a2 + 0xC),
    *(_DWORD *)(a2 + 0x14),
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 4) + 0x84))(
    *(_DWORD *)(a2 + 4),
    *(_DWORD *)(a2 + 8),
    0);
  v13 = (NiLight *)FormHeapAlloc(0x114u);
  if ( v13 )
    v14 = sub_719760(v13);
  else
    v14 = 0;
  v15 = *(NiLight **)(a2 + 0x1C);
  if ( v15 != v14 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) )
        v15->vtbl->super.super.Destructor((NiRefObject *)v15, 1);
    }
    *(_DWORD *)(a2 + 0x1C) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)&v14->members);
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a2 + 0x1C), "Sun Directional Light");
  v16 = *(_DWORD *)(a2 + 0x1C);
  *(float *)(v16 + 0xDC) = 1.0;
  ++*(_DWORD *)(v16 + 0xB8);
  v17 = *(_DWORD **)(a2 + 0x1C);
  v17[0x38] = dword_B25AC4;
  v17[0x39] = dword_B25AC8;
  v18 = dword_B25ACC;
  ++v17[0x2E];
  v17[0x3A] = v18;
  v19 = *(_DWORD **)(a2 + 0x1C);
  v19[0x3B] = dword_B25AC4;
  v19[0x3C] = dword_B25AC8;
  v20 = dword_B25ACC;
  ++v19[0x2E];
  v19[0x3D] = v20;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 4) + 0x84))(
    *(_DWORD *)(a2 + 4),
    *(_DWORD *)(a2 + 0x1C),
    0);
  v21 = (_DWORD *)FormHeapAlloc(0x30u);
  if ( v21 )
    v22 = sub_959BC0(v21);
  else
    v22 = 0;
  *(_DWORD *)(a2 + 0x18) = v22;
  *v22 = 1;
  *(_DWORD *)(*(_DWORD *)(a2 + 0x18) + 8) = 1;
  *(_BYTE *)(*(_DWORD *)(a2 + 0x18) + 0x10) = 1;
  *(_BYTE *)(*(_DWORD *)(a2 + 0x18) + 0x11) = 1;
  sub_7B8940(*(NiAVObject **)(a2 + 0xC), 0xA, 0, 1);
  return sub_7B8940(*(NiAVObject **)(a2 + 8), 0xA, 0, 1);
}
