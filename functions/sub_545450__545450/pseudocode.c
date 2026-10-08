// positive sp value has been detected, the output may be wrong!
char __userpurge sub_545450@<al>(NiColorAlpha *a1@<edi>, int a2@<esi>, NiPoint3 *a3)
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
  int v17; // eax
  float z; // ecx
  int v19; // eax
  float v20; // edx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  UInt16 *v24; // [esp-10h] [ebp-10h]
  void *v25; // [esp-4h] [ebp-4h]
  NiPoint3 *retaddr; // [esp+0h] [ebp+0h]
  float v27; // [esp+20h] [ebp+20h]

  v3 = (NiNode *)FormHeapAlloc(0xE4u); /*0x545455*/
  v4 = v3; /*0x54545a*/
  if ( v3 ) /*0x54546d*/
  {
    NiNode::NiNode(v3, 0); /*0x545473*/
    *(float *)&v4[1].members.super.super.super.m_uiRefCount = 0.0; /*0x54547a*/
    v4->vtbl = (NiNodeVtbl *)&NiBillboardNode::`vftable'; /*0x545480*/
    LOWORD(v4[1].vtbl) = 9; /*0x545486*/
    v5 = v4; /*0x54548f*/
  }
  else
  {
    v5 = 0; /*0x545493*/
  }
  v6 = *(NiNode **)(a2 + 8); /*0x545495*/
  if ( v6 != v5 ) /*0x5454a2*/
  {
    if ( v6 ) /*0x5454a6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x5454ac*/
        v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1); /*0x5454c2*/
    }
    *(_DWORD *)(a2 + 8) = v5; /*0x5454c6*/
    if ( v5 ) /*0x5454c9*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x5454cf*/
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a2 + 8), "Sun Billboard Node"); /*0x5454dd*/
  *(_WORD *)(*(_DWORD *)(a2 + 8) + 0x18) |= 2u; /*0x5454ea*/
  *(_WORD *)(*(_DWORD *)(a2 + 8) + 0xDC) = *(_WORD *)(*(_DWORD *)(a2 + 8) + 0xDC) & 0xFFF8 | 2; /*0x545500*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 8) + 0x84))( /*0x545518*/
    *(_DWORD *)(a2 + 8),
    *(_DWORD *)(a2 + 0x10),
    0);
  v7 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x54551f*/
  if ( v7 ) /*0x545535*/
    v8 = NiTriShape_ctorWithGeometryData(v7, 4u, a3, retaddr, a1, v25, 1, 0, 2u, v24); /*0x54555a*/
  else
    v8 = 0; /*0x54555e*/
  v9 = *(NiAVObject **)(a2 + 0x14); /*0x545560*/
  if ( v9 != v8 ) /*0x54556d*/
  {
    if ( v9 ) /*0x545571*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v9->members) ) /*0x545577*/
        v9->vtbl->super.super.Destructor((NiRefObject *)v9, 1); /*0x54558d*/
    }
    *(_DWORD *)(a2 + 0x14) = v8; /*0x545591*/
    if ( v8 ) /*0x545594*/
      InterlockedIncrement((volatile LONG *)&v8->members); /*0x54559a*/
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a2 + 0x14), "Sun Glare Geometry"); /*0x5455a8*/
  *(_WORD *)(*(_DWORD *)(a2 + 0x14) + 0x18) |= 2u; /*0x5455b0*/
  v10 = (NiNode *)FormHeapAlloc(0xE4u); /*0x5455b9*/
  v11 = v10; /*0x5455be*/
  if ( v10 ) /*0x5455d1*/
  {
    NiNode::NiNode(v10, 0); /*0x5455d7*/
    *(float *)&v11[1].members.super.super.super.m_uiRefCount = 0.0; /*0x5455de*/
    v11->vtbl = (NiNodeVtbl *)&NiBillboardNode::`vftable'; /*0x5455e4*/
    LOWORD(v11[1].vtbl) = 9; /*0x5455ea*/
  }
  else
  {
    v11 = 0; /*0x5455f5*/
  }
  v12 = *(NiNode **)(a2 + 0xC); /*0x5455f7*/
  if ( v12 != v11 ) /*0x545604*/
  {
    if ( v12 ) /*0x545608*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v12->members) ) /*0x54560e*/
        v12->vtbl->super.super.super.Destructor((NiRefObject *)v12, 1); /*0x545624*/
    }
    *(_DWORD *)(a2 + 0xC) = v11; /*0x545628*/
    if ( v11 ) /*0x54562b*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x545631*/
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a2 + 0xC), "Sun Glare Billboard Node"); /*0x54563f*/
  *(_WORD *)(*(_DWORD *)(a2 + 0xC) + 0x18) |= 2u; /*0x545647*/
  *(_WORD *)(*(_DWORD *)(a2 + 0xC) + 0xDC) = *(_WORD *)(*(_DWORD *)(a2 + 0xC) + 0xDC) & 0xFFF8 | 2; /*0x54565d*/
  v27 = fabs(*(float *)(a2 + 0x20)); /*0x545676*/
  *(float *)(*(_DWORD *)(a2 + 0xC) + 0x60) = v27; /*0x54567e*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 0xC) + 0x84))( /*0x545690*/
    *(_DWORD *)(a2 + 0xC),
    *(_DWORD *)(a2 + 0x14),
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 4) + 0x84))( /*0x5456a3*/
    *(_DWORD *)(a2 + 4),
    *(_DWORD *)(a2 + 8),
    0);
  v13 = (NiLight *)FormHeapAlloc(0x114u); /*0x5456aa*/
  if ( v13 ) /*0x5456c0*/
    v14 = sub_719760(v13); /*0x5456c9*/
  else
    v14 = 0; /*0x5456cd*/
  v15 = *(NiLight **)(a2 + 0x1C); /*0x5456cf*/
  if ( v15 != v14 ) /*0x5456dc*/
  {
    if ( v15 ) /*0x5456e0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x5456e6*/
        v15->vtbl->super.super.Destructor((NiRefObject *)v15, 1); /*0x545700*/
    }
    *(_DWORD *)(a2 + 0x1C) = v14; /*0x54570b*/
    if ( v14 ) /*0x54570e*/
      InterlockedIncrement((volatile LONG *)&v14->members); /*0x545714*/
  }
  NiObjectNET_SetName(*(NiObjectNET **)(a2 + 0x1C), "Sun Directional Light"); /*0x545729*/
  v16 = *(_DWORD *)(a2 + 0x1C); /*0x545730*/
  *(float *)(v16 + 0xDC) = 1.0; /*0x545733*/
  ++*(_DWORD *)(v16 + 0xB8); /*0x545739*/
  v17 = *(_DWORD *)(a2 + 0x1C); /*0x54573f*/
  *(float *)(v17 + 0xE0) = stru_B25AC4.x; /*0x545748*/
  *(float *)(v17 + 0xE4) = stru_B25AC4.y; /*0x545754*/
  z = stru_B25AC4.z; /*0x54575a*/
  ++*(_DWORD *)(v17 + 0xB8); /*0x545760*/
  *(float *)(v17 + 0xE8) = z; /*0x545766*/
  v19 = *(_DWORD *)(a2 + 0x1C); /*0x54576c*/
  *(float *)(v19 + 0xEC) = stru_B25AC4.x; /*0x545775*/
  *(float *)(v19 + 0xF0) = stru_B25AC4.y; /*0x545781*/
  v20 = stru_B25AC4.z; /*0x545787*/
  ++*(_DWORD *)(v19 + 0xB8); /*0x54578d*/
  *(float *)(v19 + 0xF4) = v20; /*0x545793*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 4) + 0x84))( /*0x5457aa*/
    *(_DWORD *)(a2 + 4),
    *(_DWORD *)(a2 + 0x1C),
    0);
  v21 = (_DWORD *)FormHeapAlloc(0x30u); /*0x5457ae*/
  if ( v21 ) /*0x5457c4*/
    v22 = NiPickContext_ctor(v21); /*0x5457c8*/
  else
    v22 = 0; /*0x5457cf*/
  *(_DWORD *)(a2 + 0x18) = v22; /*0x5457d1*/
  *v22 = 1; /*0x5457d4*/
  *(_DWORD *)(*(_DWORD *)(a2 + 0x18) + 8) = 1; /*0x5457d9*/
  *(_BYTE *)(*(_DWORD *)(a2 + 0x18) + 0x10) = 1; /*0x5457df*/
  *(_BYTE *)(*(_DWORD *)(a2 + 0x18) + 0x11) = 1; /*0x5457e9*/
  BSShaderManager_AssignShadersRecursive(*(NiAVObject **)(a2 + 0xC), 0xAu, 0, 1); /*0x5457fb*/
  return BSShaderManager_AssignShadersRecursive(*(NiAVObject **)(a2 + 8), 0xAu, 0, 1); /*0x545824*/
}
