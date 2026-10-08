// Verified Oblivion manager layout is 0x28 bytes with modelCacheByTree at +0 and pendingReferenceNodes at +0x24; constructor initializes shared Ni properties and the TESObjectREFR* -> BSTreeNode* map. Fallout's manager size/field offsets differ. Confidence applies to these local offsets and constructor stores.
BSTreeManager_OblivionVerifiedLayout *__thiscall BSTreeManager_ctor(BSTreeManager_OblivionVerifiedLayout *this)
{
  NiObjectNET *v2; // eax
  NiObjectNET *v3; // edi
  volatile LONG *v4; // ebp
  NiZBufferProperty *zBufferProperty; // edi
  NiMaterialProperty *v6; // eax
  volatile LONG *v7; // ebp
  NiMaterialProperty *materialProperty; // edi
  NiMaterialProperty *v9; // eax
  NiMaterialProperty *v10; // eax
  NiMaterialProperty *v11; // eax
  NiObjectNET *v12; // eax
  NiObjectNET *v13; // edi
  NiVertexColorProperty *vertexColorProperty; // ebp
  NiObjectNET *v15; // eax
  NiAlphaProperty *v16; // edi
  NiAlphaProperty *alphaProperty; // ebp
  unsigned int *v18; // eax
  volatile LONG *v19; // ebp
  BSXFlags *treeFlags; // edi
  double value; // st7
  LockFreeMap *v22; // eax
  LockFreeMap *v23; // eax

  this->unknown_004 = 0; /*0x55e87f*/
  this->zBufferProperty = 0; /*0x55e886*/
  this->materialProperty = 0; /*0x55e889*/
  this->vertexColorProperty = 0; /*0x55e88c*/
  this->alphaProperty = 0; /*0x55e88f*/
  this->treeFlags = 0; /*0x55e892*/
  this->windSpeed = 0.0; /*0x55e897*/
  this->modelCacheByTree = 0; /*0x55e89a*/
  this->unknown_021 = 1; /*0x55e89c*/
  this->treesVisible = 1; /*0x55e8a0*/
  this->unknown_022 = 0; /*0x55e8a4*/
  this->forceFullLOD = bForceFullLOD_SpeedTree.value; /*0x55e8b3*/
  v2 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x55e8b6*/
  v3 = v2; /*0x55e8bb*/
  if ( v2 ) /*0x55e8cb*/
  {
    NiObjectNET::NiObjectNET(v2); /*0x55e8cf*/
    v3->vtbl = (NiObjectVtbl **)&NiZBufferProperty::`vftable'; /*0x55e8d4*/
    LOWORD(v3[1].vtbl) = 0xF; /*0x55e8da*/
    v4 = (volatile LONG *)v3; /*0x55e8e0*/
  }
  else
  {
    v4 = 0; /*0x55e8e4*/
  }
  zBufferProperty = this->zBufferProperty; /*0x55e8e6*/
  if ( zBufferProperty != (NiZBufferProperty *)v4 ) /*0x55e8f0*/
  {
    if ( zBufferProperty ) /*0x55e8f4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)zBufferProperty + 1) ) /*0x55e8fa*/
        (**(void (__thiscall ***)(NiZBufferProperty *, int))zBufferProperty)(zBufferProperty, 1); /*0x55e910*/
    }
    this->zBufferProperty = (NiZBufferProperty *)v4; /*0x55e914*/
    if ( v4 ) /*0x55e917*/
      InterlockedIncrement(v4 + 1); /*0x55e91d*/
  }
  *((_WORD *)this->zBufferProperty + 0xC) |= 1u; /*0x55e926*/
  *((_WORD *)this->zBufferProperty + 0xC) |= 2u; /*0x55e92e*/
  *((_WORD *)this->zBufferProperty + 0xC) = *((_WORD *)this->zBufferProperty + 0xC) & 0xFFC3 | 0xC; /*0x55e945*/
  v6 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x55e949*/
  if ( v6 ) /*0x55e95c*/
    v7 = (volatile LONG *)NiMaterialProperty::NiMaterialProperty(v6); /*0x55e965*/
  else
    v7 = 0; /*0x55e969*/
  materialProperty = this->materialProperty; /*0x55e96b*/
  if ( materialProperty != (NiMaterialProperty *)v7 ) /*0x55e975*/
  {
    if ( materialProperty ) /*0x55e979*/
    {
      if ( !InterlockedDecrement((volatile LONG *)materialProperty + 1) ) /*0x55e97f*/
        (**(void (__thiscall ***)(NiMaterialProperty *, int))materialProperty)(materialProperty, 1); /*0x55e995*/
    }
    this->materialProperty = (NiMaterialProperty *)v7; /*0x55e999*/
    if ( v7 ) /*0x55e99c*/
      InterlockedIncrement(v7 + 1); /*0x55e9a2*/
  }
  v9 = this->materialProperty; /*0x55e9a8*/
  *((float *)v9 + 0xA) = 1.0; /*0x55e9c3*/
  *((float *)v9 + 0xB) = 1.0; /*0x55e9d2*/
  *((float *)v9 + 0xC) = 1.0; /*0x55e9e1*/
  ++*((_DWORD *)v9 + 0x15); /*0x55e9e9*/
  v10 = this->materialProperty; /*0x55e9ec*/
  ++*((_DWORD *)v10 + 0x15); /*0x55e9ef*/
  *((float *)v10 + 7) = 1.0; /*0x55e9f2*/
  *((float *)v10 + 8) = 1.0; /*0x55e9fd*/
  *((float *)v10 + 9) = 1.0; /*0x55ea08*/
  v11 = this->materialProperty; /*0x55ea0b*/
  ++*((_DWORD *)v11 + 0x15); /*0x55ea12*/
  *((float *)v11 + 0x10) = 1.0; /*0x55ea15*/
  *((float *)v11 + 0x11) = 1.0; /*0x55ea1c*/
  *((float *)v11 + 0x12) = 1.0; /*0x55ea23*/
  v12 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x55ea26*/
  v13 = v12; /*0x55ea2b*/
  if ( v12 ) /*0x55ea3f*/
  {
    NiObjectNET::NiObjectNET(v12); /*0x55ea43*/
    v13->vtbl = (NiObjectVtbl **)&NiVertexColorProperty::`vftable'; /*0x55ea48*/
    LOWORD(v13[1].vtbl) = 8; /*0x55ea4e*/
  }
  else
  {
    v13 = 0; /*0x55ea54*/
  }
  vertexColorProperty = this->vertexColorProperty; /*0x55ea56*/
  if ( vertexColorProperty != (NiVertexColorProperty *)v13 ) /*0x55ea60*/
  {
    if ( vertexColorProperty ) /*0x55ea64*/
    {
      if ( !InterlockedDecrement((volatile LONG *)vertexColorProperty + 1) ) /*0x55ea6a*/
        (**(void (__thiscall ***)(NiVertexColorProperty *, int))vertexColorProperty)(vertexColorProperty, 1); /*0x55ea81*/
    }
    this->vertexColorProperty = (NiVertexColorProperty *)v13; /*0x55ea85*/
    if ( v13 ) /*0x55ea88*/
      InterlockedIncrement((volatile LONG *)&v13->members); /*0x55ea8e*/
  }
  *((_WORD *)this->vertexColorProperty + 0xC) &= 0xFFCFu; /*0x55ea97*/
  *((_WORD *)this->vertexColorProperty + 0xC) |= 8u; /*0x55eaa0*/
  v15 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x55eaa6*/
  v16 = (NiAlphaProperty *)v15; /*0x55eaab*/
  if ( v15 ) /*0x55eabb*/
  {
    NiObjectNET::NiObjectNET(v15); /*0x55eabf*/
    v16->base.vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x55eac4*/
    v16->flags = 0xEC; /*0x55eaca*/
    v16->threshold = 0; /*0x55ead0*/
  }
  else
  {
    v16 = 0; /*0x55ead6*/
  }
  alphaProperty = this->alphaProperty; /*0x55ead8*/
  if ( alphaProperty != v16 ) /*0x55eae2*/
  {
    if ( alphaProperty ) /*0x55eae6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&alphaProperty->base.members) ) /*0x55eaec*/
        (*(void (__thiscall **)(NiAlphaProperty *, int))alphaProperty->base.vtbl)(alphaProperty, 1); /*0x55eb03*/
    }
    this->alphaProperty = v16; /*0x55eb07*/
    if ( v16 ) /*0x55eb0a*/
      InterlockedIncrement((volatile LONG *)&v16->base.members); /*0x55eb10*/
  }
  this->alphaProperty->flags |= 0x200u; /*0x55eb19*/
  this->alphaProperty->flags = this->alphaProperty->flags & 0xE3FF | 0x1000; /*0x55eb30*/
  this->alphaProperty->threshold = 0x54; /*0x55eb37*/
  this->alphaProperty->flags &= ~1u; /*0x55eb3e*/
  v18 = (unsigned int *)FormHeapAlloc(0x10u); /*0x55eb46*/
  if ( v18 ) /*0x55eb59*/
    v19 = (volatile LONG *)sub_6FA890(v18, 3u); /*0x55eb64*/
  else
    v19 = 0; /*0x55eb68*/
  treeFlags = this->treeFlags; /*0x55eb6a*/
  if ( treeFlags != (BSXFlags *)v19 ) /*0x55eb74*/
  {
    if ( treeFlags ) /*0x55eb78*/
    {
      if ( !InterlockedDecrement((volatile LONG *)treeFlags + 1) ) /*0x55eb7e*/
        (**(void (__thiscall ***)(BSXFlags *, int))treeFlags)(treeFlags, 1); /*0x55eb94*/
    }
    this->treeFlags = (BSXFlags *)v19; /*0x55eb98*/
    if ( v19 ) /*0x55eb9b*/
      InterlockedIncrement(v19 + 1); /*0x55eba1*/
  }
  CSpeedTreeRT__SetNumWindMatrices(4); /*0x55eba9*/
  CSpeedTreeRT__SetDropToBillboard(1); /*0x55ebb0*/
  CSpeedTreeRT__SetTextureFlip(1);              // Oblivion startup initializes CSpeedTreeRT global texture flip to true (push 1; call 0x787690). This is the sole code xref to the setter in this IDB, so generated/embedded SpeedTree T coordinates are negated for the Direct3D/Gamebryo path. /*0x55ebb7*/
  value = (double)iCanopyShadowScale_SpeedTree.value; /*0x55ebbc*/
  if ( iCanopyShadowScale_SpeedTree.value < 0 ) /*0x55ebc9*/
    value = value + flt_A2FC78; /*0x55ebcb*/
  g_CanopyShadowProjectionScale = value; /*0x55ebd3*/
  v22 = (LockFreeMap *)FormHeapAlloc(0x1Cu); /*0x55ebd9*/
  if ( v22 ) /*0x55ebec*/
    v23 = BSTreeManager_ReferenceNodeMap_ctor(v22, 2u, 0x25, 0xC); /*0x55ebf6*/
  else
    v23 = 0; /*0x55ebfd*/
  this->pendingReferenceNodes = v23; /*0x55ebff*/
  return this; /*0x55ec04*/
}
