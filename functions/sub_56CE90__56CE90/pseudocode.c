// Verified BSTempEffectGeometryDecal constructor layout (class size 0x54). Stores decalCreationData +0x18, sourceGeometry +0x2C and its parent NiNode +0x30; initializes generated/target geometry and failure state. Stores projection point XYZ at +0x34..+0x3C, orientation vector XYZ at +0x40..+0x48, footprintScale +0x4C and randomRotation +0x50. Geometry-builder code subtracts projectionPoint XYZ from transformed source points and feeds orientationVector XYZ to the rotation-matrix builder; both vectors are now typed floats. +0x24 and +0x34..+0x3C exact caller semantics beyond their observed dataflow are commented at their access sites.
BSTempEffectGeometryDecalLayout_t *__thiscall BSTempEffectGeometryDecal_Ctor(
        BSTempEffectGeometryDecalLayout_t *this,
        TESObjectCELL *parentCell,
        float durationSeconds,
        DECAL_DATA *decalCreationData,
        NiGeometry *sourceGeometry,
        float projectionPointX,
        float projectionPointY,
        float projectionPointZ,
        float orientationVectorX,
        float orientationVectorY,
        float orientationVectorZ,
        float footprintScale,
        float randomRotation)
{
  NiAVObject *generatedGeometry_1C; // edi
  NiGeometry *sourceGeometry_2C; // edi
  NiNode *m_parent; // ebp
  NiNode *sourceParentNode_30; // edi

  BSTempEffect_Constructor(&this->base, parentCell, durationSeconds); /*0x56cec8*/
  this->base.vtable = &BSTempEffectGeometryDecal::`vftable';// ODismemberment authority: geometry decal temp effect constructor stores source geometry, parent, direction, scale, and decal data; build/attach happens via StartOrQueueCreateTask. /*0x56cecf*/
  this->generatedGeometry_1C = 0; /*0x56ced9*/
  this->sourceGeometry_2C = 0; /*0x56cedc*/
  this->sourceParentNode_30 = 0; /*0x56cedf*/
  this->creationFailed_28 = 0; /*0x56ceee*/
  this->decalCreationData_18 = decalCreationData; /*0x56cef1*/
  sub_718A50(decalCreationData->rotationMatrix33_08); /*0x56cef4*/
  generatedGeometry_1C = this->generatedGeometry_1C; /*0x56cef9*/
  if ( generatedGeometry_1C ) /*0x56cefe*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&generatedGeometry_1C->members) ) /*0x56cf04*/
      generatedGeometry_1C->vtbl->super.super.Destructor((NiRefObject *)generatedGeometry_1C, 1); /*0x56cf1a*/
    this->generatedGeometry_1C = 0; /*0x56cf1c*/
  }
  this->unknown24 = 0; /*0x56cf23*/
  sourceGeometry_2C = this->sourceGeometry_2C; /*0x56cf26*/
  if ( sourceGeometry_2C != sourceGeometry ) /*0x56cf2b*/
  {
    if ( sourceGeometry_2C ) /*0x56cf2f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&sourceGeometry_2C->member) ) /*0x56cf35*/
        sourceGeometry_2C->__vftable->super.super.super.Destructor((NiRefObject *)sourceGeometry_2C, 1); /*0x56cf4b*/
    }
    this->sourceGeometry_2C = sourceGeometry; /*0x56cf4f*/
    if ( sourceGeometry ) /*0x56cf52*/
      InterlockedIncrement((volatile LONG *)&sourceGeometry->member); /*0x56cf58*/
  }
  m_parent = sourceGeometry->member.super.m_parent; /*0x56cf5e*/
  sourceParentNode_30 = this->sourceParentNode_30; /*0x56cf61*/
  if ( sourceParentNode_30 != m_parent ) /*0x56cf66*/
  {
    if ( sourceParentNode_30 ) /*0x56cf6a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&sourceParentNode_30->members) ) /*0x56cf70*/
        sourceParentNode_30->vtbl->super.super.super.Destructor((NiRefObject *)sourceParentNode_30, 1); /*0x56cf86*/
    }
    this->sourceParentNode_30 = m_parent; /*0x56cf8a*/
    if ( m_parent ) /*0x56cf8d*/
      InterlockedIncrement((volatile LONG *)&m_parent->members); /*0x56cf93*/
  }
  this->footprintScale_4C = footprintScale;     // BloodOnDeath decode 2026-05-30: Geometry decal stores the native fixed decal footprint argument here. Decal_AttachToGeometryRecursive passes flt_A468FC = 15.0. /*0x56cfa5*/
  this->projectionPointX_34 = projectionPointX; /*0x56cfb0*/
  this->randomRotation_50 = randomRotation;     // BloodOnDeath decode 2026-05-30: Geometry decal stores the random rotation angle here; selector/rotation vary appearance but do not increase decal count. /*0x56cfb3*/
  this->projectionPointY_38 = projectionPointY; /*0x56cfba*/
  this->orientationVectorX_40 = orientationVectorX; /*0x56cfc1*/
  this->projectionPointZ_3C = projectionPointZ; /*0x56cfc4*/
  this->orientationVectorY_44 = orientationVectorY; /*0x56cfcb*/
  this->orientationVectorZ_48 = orientationVectorZ; /*0x56cfce*/
  return this; /*0x56cfd3*/
}
