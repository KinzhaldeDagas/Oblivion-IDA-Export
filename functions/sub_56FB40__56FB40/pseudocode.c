// Verified BSTempEffectGeometryDecal_Initialize override at vtable +0x4C. It guards repeated live initialization with initializeCallbackDone, checks source/parent refs, obtains sourceGeometry->geomData->m_spAdditionalGeomData, branches on that object's +0x4C bool slot to one of two builders, then marks callback-done and releases transient source refs. LoadGame builds restored geometry through BuildGeneratedGeometry instead of dispatching this Initialize virtual, so this byte is not a general generated-geometry-ready flag.
void __thiscall BSTempEffectGeometryDecal_Initialize(BSTempEffectGeometryDecalLayout_t *this)
{
  NiGeometry *sourceGeometry; // eax
  NiGeometryData *sourceGeometryData; // eax
  NiAdditionalGeometryData *additionalGeometryData; // eax
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  NiGeometry *sourceGeometry_2C; // edi
  NiNode *sourceParentNode_30; // edi

  sourceGeometry = this->sourceGeometry_2C; /*0x56fb43*/
  if ( sourceGeometry->member.skinData ) /*0x56fb46*/
  {
    if ( !this->base.initializeCallbackDone /*0x56fb69*/
      && this->sourceParentNode_30->members.super.super.super.m_uiRefCount > 1
      && sourceGeometry->member.super.super.super.m_uiRefCount > 1 )
    {
      sourceGeometryData = sourceGeometry->member.geomData; /*0x56fb6b*/
      if ( sourceGeometryData ) /*0x56fb73*/
        additionalGeometryData = sourceGeometryData->member.m_spAdditionalGeomData; /*0x56fb75*/
      else
        additionalGeometryData = 0; /*0x56fb7a*/
      if ( (*(unsigned __int8 (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)additionalGeometryData + 0x4C))(additionalGeometryData) )// Verified local dataflow: sourceGeometryData is NiGeometryData* and this loads member m_spAdditionalGeomData at object +0x34 as NiAdditionalGeometryData*. It calls that object's virtual +0x4C. The base and BSPackedAdditionalGeometryData vtables return false/true respectively; interpreting this as packed-data or vertex-stream readiness is Probable, exact method semantics Unknown. /*0x56fb83*/
        BSTempEffectGeometryDecal_InitializeUsingVertexStreams(this); /*0x56fb8b*/
      else
        BSTempEffectGeometryDecal_InitializeUsingSkinnedGeometryData(this); /*0x56fb92*/
    }
    v5 = InterlockedDecrement; /*0x56fb98*/
    this->base.initializeCallbackDone = 1; /*0x56fb9f*/
    sourceGeometry_2C = this->sourceGeometry_2C; /*0x56fba3*/
    if ( sourceGeometry_2C ) /*0x56fba8*/
    {
      if ( !v5((volatile LONG *)&sourceGeometry_2C->member) ) /*0x56fbae*/
        sourceGeometry_2C->__vftable->super.super.super.Destructor((NiRefObject *)sourceGeometry_2C, 1); /*0x56fbc0*/
      this->sourceGeometry_2C = 0; /*0x56fbc2*/
    }
    sourceParentNode_30 = this->sourceParentNode_30; /*0x56fbc9*/
    if ( sourceParentNode_30 ) /*0x56fbce*/
    {
      if ( !v5((volatile LONG *)&sourceParentNode_30->members) ) /*0x56fbd4*/
        sourceParentNode_30->vtbl->super.super.super.Destructor((NiRefObject *)sourceParentNode_30, 1); /*0x56fbe6*/
      this->sourceParentNode_30 = 0; /*0x56fbe8*/
    }
  }
}
