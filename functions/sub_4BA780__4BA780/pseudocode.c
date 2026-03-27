NiObjectNET *__thiscall sub_4BA780(float *this, char arg0)
{
  NiRenderedTexture *v2; // esi
  NiRenderedTexture **v4; // eax
  int v5; // ebx
  NiRenderedTexture *v7; // edi
  void (__thiscall ***v8)(_DWORD, int); // esi
  NiGeometry *v9; // eax
  NiScreenElementsData *v10; // ebp
  NiObjectNET *v11; // edi
  NiTexturingProperty *v12; // eax
  NiTexturingProperty *v13; // esi
  BSShaderProperty *v14; // eax
  NiNode *v15; // eax
  NiObjectNET *v16; // esi
  void (__thiscall *v17)(NiObjectNET *, NiObjectNET *, int); // eax
  NiRenderedTexture *v18; // edi
  NiRenderedTexture *v19; // [esp+14h] [ebp-124h] BYREF
  NiScreenElementsData *a2; // [esp+18h] [ebp-120h] BYREF
  void *v21; // [esp+1Ch] [ebp-11Ch]
  int v22; // [esp+20h] [ebp-118h] BYREF
  char ArgList[260]; // [esp+24h] [ebp-114h] BYREF
  int v24; // [esp+134h] [ebp-4h]

  v2 = 0;
  a2 = 0;
  if ( *(this + 0x1E) > 0.0 && *(this + 0x1E) <= fConst_200 )
    return 0;
  if ( *(this + 0x1F) > 0.0 && flt_A44F64 >= (double)*(this + 0x1F) )
    return 0;
  sub_4B9C40(this, ArgList);
  if ( TES )
  {
    v4 = (NiRenderedTexture **)sub_442890((UInt32 *)&v22, ArgList, 0, 0);
    v2 = v19;
    v5 = 1;
  }
  else
  {
    v19 = 0;
    v4 = &v19;
    v5 = 2;
  }
  v7 = *v4;
  v19 = *v4;
  if ( v19 )
    InterlockedIncrement((volatile LONG *)&v7->member);
  v24 = 1;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    a2 = (NiScreenElementsData *)v5;
    if ( v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v2->member) )
        v2->__vftable->super.super.super.Destructor((NiRefObject *)v2, 1);
    }
  }
  LOBYTE(v24) = 2;
  if ( (v5 & 1) != 0 )
  {
    v8 = (void (__thiscall ***)(_DWORD, int))v22;
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
      {
        if ( v8 )
          (**v8)(v8, 1);
      }
    }
  }
  if ( !v7 )
    return 0;
  sub_4BA3C0(this, (volatile LONG **)&a2, arg0);
  LOBYTE(v24) = 3;
  v9 = (NiGeometry *)FormHeapAlloc(0xC0u);
  v21 = v9;
  v10 = a2;
  LOBYTE(v24) = 4;
  if ( v9 )
    v11 = (NiObjectNET *)NiTriShape_NiTriShape(v9, a2);
  else
    v11 = 0;
  LOBYTE(v24) = 3;
  NiObjectNET_SetName(v11, "STBB");
  v12 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
  v21 = v12;
  LOBYTE(v24) = 5;
  if ( v12 )
    v13 = NiTexturingProperty::NiTexturingProperty(v12);
  else
    v13 = 0;
  LOBYTE(v24) = 3;
  NiTexturingProperty::SetUnk08(v13, v19);
  sub_405870(v13, 0);
  sub_405680((NiNode *)v11, (BSShaderProperty *)v13);
  v14 = *(BSShaderProperty **)(sub_55F7E0(1) + 0x14);
  if ( v14 )
    sub_405680((NiNode *)v11, v14);
  v15 = (NiNode *)FormHeapAlloc(0xE4u);
  v16 = (NiObjectNET *)v15;
  v21 = v15;
  LOBYTE(v24) = 6;
  if ( v15 )
  {
    NiNode::NiNode(v15, 0);
    *(float *)&v16[9].members.m_pcName = 0.0;
    v16->vtbl = (NiObjectVtbl **)&NiBillboardNode::`vftable';
    LOWORD(v16[9].members.super.m_uiRefCount) = 9;
  }
  else
  {
    v16 = 0;
  }
  v17 = *((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))v16->vtbl + 0x21);
  LOWORD(v16[9].members.super.m_uiRefCount) = v16[9].members.super.m_uiRefCount & 0xFFF8 | 5;
  LOBYTE(v24) = 3;
  v17(v16, v11, 1);
  NiObjectNET_SetName(v16, "Tree distant 3d billboard");
  LOBYTE(v24) = 2;
  if ( v10 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v10->member) )
      (*(void (__thiscall **)(NiScreenElementsData *, int))v10->__vftable)(v10, 1);
  }
  v18 = v19;
  v24 = 0xFFFFFFFF;
  if ( !InterlockedDecrement((volatile LONG *)&v19->member) )
    v18->__vftable->super.super.super.Destructor((NiRefObject *)v18, 1);
  return v16;
}
