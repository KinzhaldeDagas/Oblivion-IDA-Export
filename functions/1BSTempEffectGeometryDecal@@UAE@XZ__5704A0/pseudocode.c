// [Verified] BSTempEffectGeometryDecal destructor unregisters its DECAL_DATA payload from the target shader property via BSShaderLightingProperty_RemoveDecalData, releases the target NiProperty, then releases the payload's source texture and target property and frees the 0x4C payload.
void __thiscall BSTempEffectGeometryDecal_Dtor(BSTempEffectGeometryDecalLayout_t *this)
{
  NiAVObject *generatedGeometry_1C; // eax
  void (__thiscall ***v3)(_DWORD, int); // edi
  NiAVObject *v4; // edi
  NiProperty *targetShaderProperty_48; // ecx
  DECAL_DATA *decalCreationData_18; // ebp
  NiProperty *v7; // edi
  NiProperty **p_targetShaderProperty_48; // ebp
  DECAL_DATA *v9; // edi
  NiGeometry *sourceGeometry_2C; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebp
  NiNode *sourceParentNode_30; // edi
  NiNode *v13; // edi
  NiGeometry *v14; // edi
  NiAVObject *v15; // edi
  _DWORD v16[2]; // [esp+20h] [ebp-14h] BYREF
  int v17; // [esp+30h] [ebp-4h]

  v16[1] = this; /*0x5704c9*/
  this->base.vtable = &BSTempEffectGeometryDecal::`vftable'; /*0x5704cd*/
  generatedGeometry_1C = this->generatedGeometry_1C; /*0x5704d3*/
  v17 = 3; /*0x5704da*/
  if ( generatedGeometry_1C ) /*0x5704e2*/
  {
    if ( generatedGeometry_1C->members.m_parent ) /*0x5704e4*/
    {
      generatedGeometry_1C->members.m_parent->vtbl->RemoveObject( /*0x5704fa*/
        generatedGeometry_1C->members.m_parent,
        (NiAVObject **)v16,
        generatedGeometry_1C);
      if ( v16[0] ) /*0x570502*/
      {
        v3 = (void (__thiscall ***)(_DWORD, int))v16[0]; /*0x570504*/
        if ( !InterlockedDecrement((volatile LONG *)(v16[0] + 4)) ) /*0x57050a*/
          (**v3)(v3, 1); /*0x570520*/
      }
    }
    v4 = this->generatedGeometry_1C; /*0x570522*/
    if ( v4 ) /*0x570527*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) ) /*0x57052d*/
        v4->vtbl->super.super.Destructor((NiRefObject *)v4, 1); /*0x570543*/
      this->generatedGeometry_1C = 0; /*0x570545*/
    }
  }
  targetShaderProperty_48 = this->decalCreationData_18->targetShaderProperty_48; /*0x57054b*/
  if ( targetShaderProperty_48 ) /*0x570550*/
    BSShaderLightingProperty_RemoveDecalData( /*0x570553*/
      (BSShaderLightingPropertyLayout_t *)targetShaderProperty_48,
      this->decalCreationData_18);
  decalCreationData_18 = this->decalCreationData_18; /*0x570558*/
  v7 = decalCreationData_18->targetShaderProperty_48; /*0x57055b*/
  p_targetShaderProperty_48 = &decalCreationData_18->targetShaderProperty_48; /*0x57055e*/
  if ( v7 ) /*0x570563*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v7->members) ) /*0x570569*/
      (*(void (__thiscall **)(NiProperty *, int))v7->vtbl)(v7, 1); /*0x57057f*/
    *p_targetShaderProperty_48 = 0; /*0x570581*/
  }
  if ( this->unknown24 ) /*0x570584*/
    FormHeapFree((unsigned int)this->unknown24); /*0x57058c*/
  v9 = this->decalCreationData_18; /*0x570594*/
  if ( v9 ) /*0x570599*/
  {
    DECAL_DATA_ReleaseOwnedReferences(this->decalCreationData_18); /*0x57059d*/
    FormHeapFree((unsigned int)v9); /*0x5705a3*/
  }
  sourceGeometry_2C = this->sourceGeometry_2C; /*0x5705ab*/
  v11 = InterlockedDecrement; /*0x5705b0*/
  if ( sourceGeometry_2C ) /*0x5705b6*/
  {
    if ( !v11((volatile LONG *)&sourceGeometry_2C->member) ) /*0x5705bc*/
      sourceGeometry_2C->__vftable->super.super.super.Destructor((NiRefObject *)sourceGeometry_2C, 1); /*0x5705ce*/
    this->sourceGeometry_2C = 0; /*0x5705d0*/
  }
  sourceParentNode_30 = this->sourceParentNode_30; /*0x5705d3*/
  if ( sourceParentNode_30 ) /*0x5705d8*/
  {
    if ( !v11((volatile LONG *)&sourceParentNode_30->members) ) /*0x5705de*/
      sourceParentNode_30->vtbl->super.super.super.Destructor((NiRefObject *)sourceParentNode_30, 1); /*0x5705f0*/
    this->sourceParentNode_30 = 0; /*0x5705f2*/
  }
  v13 = this->sourceParentNode_30; /*0x5705f5*/
  LOBYTE(v17) = 2; /*0x5705fa*/
  if ( v13 ) /*0x5705ff*/
  {
    if ( !v11((volatile LONG *)&v13->members) ) /*0x570605*/
      v13->vtbl->super.super.super.Destructor((NiRefObject *)v13, 1); /*0x570617*/
  }
  v14 = this->sourceGeometry_2C; /*0x570619*/
  LOBYTE(v17) = 1; /*0x57061e*/
  if ( v14 ) /*0x570623*/
  {
    if ( !v11((volatile LONG *)&v14->member) ) /*0x570629*/
      v14->__vftable->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x57063b*/
  }
  v15 = this->generatedGeometry_1C; /*0x57063d*/
  LOBYTE(v17) = 0; /*0x570642*/
  if ( v15 ) /*0x570646*/
  {
    if ( !v11((volatile LONG *)&v15->members) ) /*0x57064c*/
      v15->vtbl->super.super.Destructor((NiRefObject *)v15, 1); /*0x57065e*/
  }
  v17 = 0xFFFFFFFF; /*0x570662*/
  BSTempEffect_Destructor(&this->base); /*0x57066a*/
}
