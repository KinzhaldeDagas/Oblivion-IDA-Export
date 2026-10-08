// Verified Oblivion rendering path is a flat billboard DDS attached to STBB NiTriShape and NiBillboardNode. Fallout's QueuedTreeBillboard::CreateBillboard builds the engine's BSTreeModel distant geometry and inserts it through DistantLODShaderProperty::AddDistantLOD; same queued asset workflow, different renderer integration.
NiObjectNET *__thiscall sub_4BA780(TESObjectTREE_BillboardTail *this, bool distantPlane)
{
  NiTexture *v2; // esi
  NiTexture **SourceTexture_010201A0; // eax
  int v5; // ebx
  NiTexture *v7; // edi
  void (__thiscall ***v8)(_DWORD, int); // esi
  NiTriShape *v9; // eax
  NiScreenElementsData *v10; // ebp
  NiObjectNET *v11; // edi
  NiTexturingProperty *v12; // eax
  NiTexturingProperty *v13; // esi
  BSShaderProperty *alphaProperty; // eax
  NiNode *v15; // eax
  NiObjectNET *v16; // esi
  void (__thiscall *v17)(NiObjectNET *, NiObjectNET *, int); // eax
  NiTexture *v18; // edi
  NiTexture *texture; // [esp+14h] [ebp-124h] BYREF
  NiScreenElementsData *a2; // [esp+18h] [ebp-120h] BYREF
  void *v21; // [esp+1Ch] [ebp-11Ch]
  int v22; // [esp+20h] [ebp-118h] BYREF
  char ArgList[260]; // [esp+24h] [ebp-114h] BYREF
  int v24; // [esp+134h] [ebp-4h]

  v2 = 0; /*0x4ba7bb*/
  a2 = 0; /*0x4ba7bd*/
  if ( this->BillboardSizeX > 0.0 && this->BillboardSizeX <= fConst_200 ) /*0x4ba7dd*/
    return 0; /*0x4ba7dd*/
  if ( this->BillboardSizeY > 0.0 && flt_A44F64 >= (double)this->BillboardSizeY ) /*0x4ba7f7*/
    return 0; /*0x4ba7f7*/
  OB_TESObjectTREE_BuildBillboardTexturePath_010201A0(this, ArgList); /*0x4ba7fe*/
  if ( MEMORY[0xB333A0] ) /*0x4ba803*/
  {
    SourceTexture_010201A0 = (NiTexture **)OB_TES_LoadOrFindSourceTexture_010201A0((UInt32 *)&v22, ArgList, 0, 0); /*0x4ba819*/
    v2 = texture; /*0x4ba81e*/
    v5 = 1; /*0x4ba822*/
  }
  else
  {
    texture = 0; /*0x4ba832*/
    SourceTexture_010201A0 = &texture; /*0x4ba836*/
    v5 = 2; /*0x4ba83a*/
  }
  v7 = *SourceTexture_010201A0; /*0x4ba83f*/
  texture = *SourceTexture_010201A0; /*0x4ba843*/
  if ( texture ) /*0x4ba847*/
    InterlockedIncrement((volatile LONG *)&v7->members); /*0x4ba84d*/
  v24 = 1; /*0x4ba856*/
  if ( (v5 & 2) != 0 ) /*0x4ba861*/
  {
    v5 &= ~2u; /*0x4ba863*/
    a2 = (NiScreenElementsData *)v5; /*0x4ba868*/
    if ( v2 ) /*0x4ba86c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v2->members) ) /*0x4ba872*/
        v2->__vftable->super.super.Destructor((NiRefObject *)v2, 1); /*0x4ba884*/
    }
  }
  LOBYTE(v24) = 2; /*0x4ba889*/
  if ( (v5 & 1) != 0 ) /*0x4ba891*/
  {
    v8 = (void (__thiscall ***)(_DWORD, int))v22; /*0x4ba893*/
    if ( v22 ) /*0x4ba899*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x4ba89f*/
      {
        if ( v8 ) /*0x4ba8ab*/
          (**v8)(v8, 1); /*0x4ba8b5*/
      }
    }
  }
  if ( !v7 ) /*0x4ba8b9*/
    return 0; /*0x4ba82b*/
  TESObjectTREE_BuildBillboardQuadData(this, (NiTriShapeData **)&a2, distantPlane); /*0x4ba8ce*/
  LOBYTE(v24) = 3; /*0x4ba8da*/
  v9 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x4ba8e1*/
  v21 = v9; /*0x4ba8e9*/
  v10 = a2; /*0x4ba8ef*/
  LOBYTE(v24) = 4; /*0x4ba8f3*/
  if ( v9 ) /*0x4ba8fb*/
    v11 = (NiObjectNET *)OB_NiTriShape_ctorWithData_010201A0(v9, (NiTriShapeData *)a2); /*0x4ba905*/
  else
    v11 = 0; /*0x4ba909*/
  LOBYTE(v24) = 3; /*0x4ba912*/
  NiObjectNET_SetName(v11, "STBB"); /*0x4ba919*/
  v12 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x4ba920*/
  v21 = v12; /*0x4ba928*/
  LOBYTE(v24) = 5; /*0x4ba92e*/
  if ( v12 ) /*0x4ba936*/
    v13 = NiTexturingProperty::NiTexturingProperty(v12); /*0x4ba93f*/
  else
    v13 = 0; /*0x4ba943*/
  LOBYTE(v24) = 3; /*0x4ba94c*/
  OB_NiTexturingProperty_SetBaseTexture_010201A0(v13, texture); /*0x4ba953*/
  OB_NiTexturingProperty_SetClampMode_010201A0(v13, 0); /*0x4ba95c*/
  sub_405680((NiNode *)v11, (BSShaderProperty *)v13); /*0x4ba964*/
  alphaProperty = (BSShaderProperty *)BSTreeManager_GetInstance(1)->alphaProperty; /*0x4ba973*/
  if ( alphaProperty ) /*0x4ba97a*/
    sub_405680((NiNode *)v11, alphaProperty); /*0x4ba97f*/
  v15 = (NiNode *)FormHeapAlloc(0xE4u); /*0x4ba989*/
  v16 = (NiObjectNET *)v15; /*0x4ba98e*/
  v21 = v15; /*0x4ba993*/
  LOBYTE(v24) = 6; /*0x4ba999*/
  if ( v15 ) /*0x4ba9a1*/
  {
    NiNode::NiNode(v15, 0); /*0x4ba9a7*/
    *(float *)&v16[9].members.m_pcName = 0.0; /*0x4ba9ae*/
    v16->vtbl = (NiObjectVtbl **)&NiBillboardNode::`vftable'; /*0x4ba9b4*/
    LOWORD(v16[9].members.super.m_uiRefCount) = 9; /*0x4ba9ba*/
  }
  else
  {
    v16 = 0; /*0x4ba9c5*/
  }
  v17 = *((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))v16->vtbl + 0x21); /*0x4ba9d0*/
  LOWORD(v16[9].members.super.m_uiRefCount) = v16[9].members.super.m_uiRefCount & 0xFFF8 | 5; /*0x4ba9e1*/
  LOBYTE(v24) = 3; /*0x4ba9eb*/
  v17(v16, v11, 1); /*0x4ba9f2*/
  NiObjectNET_SetName(v16, "Tree distant 3d billboard"); /*0x4ba9fb*/
  LOBYTE(v24) = 2; /*0x4baa02*/
  if ( v10 ) /*0x4baa0a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v10->member) ) /*0x4baa10*/
      (*(void (__thiscall **)(NiScreenElementsData *, int))v10->__vftable)(v10, 1); /*0x4baa23*/
  }
  v18 = texture; /*0x4baa25*/
  v24 = 0xFFFFFFFF; /*0x4baa2d*/
  if ( !InterlockedDecrement((volatile LONG *)&texture->members) ) /*0x4baa38*/
    v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x4baa4a*/
  return v16; /*0x4baa4e*/
}
