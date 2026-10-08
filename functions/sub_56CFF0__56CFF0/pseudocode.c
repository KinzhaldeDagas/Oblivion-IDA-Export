// Verified common generated-geometry builder used by both Initialize branches and by LoadGame. Calls sub_7174B0 to create a NiTriShape from projected mesh arrays, constructs skin data/instance/partition and shader state, attaches the result under sourceParentNode (+0x30), stores generatedGeometry (+0x1C), and stores the persistent targetGeometry (+0x20).
void __thiscall BSTempEffectGeometryDecal_BuildGeneratedGeometry(
        BSTempEffectGeometryDecalLayout_t *this,
        int arg0,
        __int16 a3,
        unsigned __int16 a4,
        int a5,
        int a6,
        unsigned __int16 *a7,
        int a8)
{
  NiAVObject *v9; // ecx
  NiAVObject *v10; // ebp
  char *v11; // esi
  BSShader *shader; // esi
  BSShader *m_extraDataList; // edi
  BSShaderLightingPropertyLayout_t *NiPropertyByID; // edi
  DECAL_DATA *decalCreationData_18; // esi
  BSShaderLightingPropertyLayout_t *targetShaderProperty_48; // ebx
  _DWORD *p_targetShaderProperty_48; // esi
  _DWORD *v18; // edi
  int v19; // esi
  NiSkinData *v20; // eax
  char *v21; // eax
  char *v22; // ebx
  int v23; // ecx
  NiObject *v24; // esi
  NiObject *v25; // ebx
  NiSkinPartition *v26; // eax
  NiSkinPartition *v27; // edi
  volatile LONG *m_uiRefCount; // esi
  NiInterpController *m_controller; // edi
  NiObjectNET *v30; // eax
  BSShaderProperty *v31; // esi
  BSShaderProperty *v32; // eax
  NiGeometry *sourceGeometry_2C; // eax
  double v34; // st7
  NiAVObject *generatedGeometry_1C; // esi
  NiSkinData *a4a; // [esp+58h] [ebp+Ch]
  float a4b; // [esp+58h] [ebp+Ch]
  float a4c; // [esp+58h] [ebp+Ch]
  NiPoint3 *vertices; // [esp+5Ch] [ebp+10h]
  NiPoint3 *verticesa; // [esp+5Ch] [ebp+10h]

  v9 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x56d027*/
  v10 = 0; /*0x56d030*/
  if ( v9 ) /*0x56d038*/
    v10 = NiTriShape_ctorWithGeometryData(v9, a3, (NiPoint3 *)a5, (NiPoint3 *)a6, 0, 0, 0, 0, a4 / 3, a7); /*0x56d06b*/
  v11 = (char *)FormHeapAlloc(strlen(this->sourceGeometry_2C->member.super.super.m_pcName) + 7); /*0x56d094*/
  _sprintf(v11, "%s:%s", "Decal", this->sourceGeometry_2C->member.super.super.m_pcName); /*0x56d0a8*/
  NiObjectNET_SetName((NiObjectNET *)v10, v11); /*0x56d0b3*/
  FormHeapFree((unsigned int)v11); /*0x56d0b9*/
  shader = GetShaderDefinition(0x10u)->shader; /*0x56d0c5*/
  m_extraDataList = (BSShader *)v10[1].members.super.m_extraDataList; /*0x56d0c8*/
  if ( m_extraDataList != shader ) /*0x56d0d6*/
  {
    if ( m_extraDataList ) /*0x56d0da*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&m_extraDataList->member) ) /*0x56d0e0*/
        m_extraDataList->__vftable->super.super.super.super.Destructor((NiRefObject *)m_extraDataList, 1); /*0x56d0f6*/
    }
    v10[1].members.super.m_extraDataList = (NiExtraData **)shader; /*0x56d0fa*/
    if ( shader ) /*0x56d100*/
      InterlockedIncrement((volatile LONG *)&shader->member); /*0x56d106*/
  }
  shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)shader, v10); /*0x56d114*/
  NiPropertyByID = (BSShaderLightingPropertyLayout_t *)NiNode_GetNiPropertyByID((NiNode *)v10, 4); /*0x56d122*/
  BSShaderLightingProperty_AddDecalData(NiPropertyByID, this->decalCreationData_18);// [Verified] Generated geometry's shader property is retrieved with NiNode_GetNiPropertyByID(v10,4), then registered with BSShaderLightingProperty_AddDecalData using the effect's DECAL_DATA payload. The payload's targetShaderProperty_48 is replaced with a retained reference to that generated-geometry property. This connects the geometry-decal build path to the same per-property decal list. /*0x56d127*/
  decalCreationData_18 = this->decalCreationData_18; /*0x56d12c*/
  targetShaderProperty_48 = (BSShaderLightingPropertyLayout_t *)decalCreationData_18->targetShaderProperty_48; /*0x56d12f*/
  p_targetShaderProperty_48 = &decalCreationData_18->targetShaderProperty_48; /*0x56d132*/
  if ( targetShaderProperty_48 != NiPropertyByID ) /*0x56d137*/
  {
    if ( targetShaderProperty_48 ) /*0x56d13b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&targetShaderProperty_48->base.member) ) /*0x56d141*/
        (*(void (__thiscall **)(BSShaderLightingPropertyLayout_t *, int))targetShaderProperty_48->base.vtbl)( /*0x56d157*/
          targetShaderProperty_48,
          1);
    }
    *p_targetShaderProperty_48 = NiPropertyByID; /*0x56d15b*/
    if ( NiPropertyByID ) /*0x56d15d*/
      InterlockedIncrement((volatile LONG *)&NiPropertyByID->base.member); /*0x56d163*/
  }
  v18 = *(_DWORD **)(arg0 + 0xB8); /*0x56d16d*/
  v19 = *(_DWORD *)(v18[2] + 0x40); /*0x56d176*/
  v20 = (NiSkinData *)FormHeapAlloc(0x48u); /*0x56d17b*/
  if ( v20 ) /*0x56d191*/
    a4a = NiSkinData::NiSkinData(v20, v19, a8, (const void *)(v18[2] + 0xC), a5); /*0x56d1ac*/
  else
    a4a = 0; /*0x56d1b2*/
  vertices = (NiPoint3 *)v18[5]; /*0x56d1bd*/
  v21 = (char *)FormHeapAlloc((unsigned __int64)(unsigned int)v19 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v19);
  v22 = v21; /*0x56d1e6*/
  if ( v19 > 0 ) /*0x56d1e8*/
  {
    v23 = (char *)vertices - v21; /*0x56d1ee*/
    do /*0x56d1fb*/
    {
      *(_DWORD *)v21 = *(_DWORD *)&v21[v23]; /*0x56d1f3*/
      v21 += 4; /*0x56d1f5*/
      --v19; /*0x56d1f8*/
    }
    while ( v19 ); /*0x56d1fb*/
  }
  v24 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x56d204*/
  if ( v24 ) /*0x56d217*/
  {
    verticesa = (NiPoint3 *)v18[4]; /*0x56d21e*/
    NiObject_constr(v24); /*0x56d222*/
    v24->__vftable = (NiObjectVtbl *)&NiSkinInstance::`vftable'; /*0x56d22f*/
    v24[1].__vftable = (NiObjectVtbl *)a4a; /*0x56d235*/
    if ( a4a ) /*0x56d238*/
      InterlockedIncrement((volatile LONG *)a4a + 1); /*0x56d23e*/
    v24[1].members.m_uiRefCount = 0; /*0x56d248*/
    v24[2].members.m_uiRefCount = (UInt32)v22; /*0x56d24b*/
    v24[2].__vftable = (NiObjectVtbl *)verticesa; /*0x56d24e*/
    v24[3].__vftable = (NiObjectVtbl *)0xFFFFFFFF; /*0x56d251*/
    v24[3].members.m_uiRefCount = 0; /*0x56d258*/
    v24[4].__vftable = 0; /*0x56d25b*/
    v24[4].members.m_uiRefCount = 0; /*0x56d25e*/
    v24[5].__vftable = 0; /*0x56d261*/
    v25 = v24; /*0x56d264*/
  }
  else
  {
    v25 = 0; /*0x56d268*/
  }
  v26 = (NiSkinPartition *)FormHeapAlloc(0x10u); /*0x56d274*/
  if ( v26 ) /*0x56d28a*/
    v27 = NiSkinPartition::NiSkinPartition(v26); /*0x56d293*/
  else
    v27 = 0; /*0x56d297*/
  if ( sub_72ED50(v27, (unsigned __int16 *)v10[1].members.super.m_pcName, (int)a4a, 0x12u, 4u, 1) ) /*0x56d2b5*/
  {
    m_uiRefCount = (volatile LONG *)v25[1].members.m_uiRefCount; /*0x56d2be*/
    if ( m_uiRefCount != (volatile LONG *)v27 ) /*0x56d2c3*/
    {
      if ( m_uiRefCount ) /*0x56d2c7*/
      {
        if ( !InterlockedDecrement(m_uiRefCount + 1) ) /*0x56d2cd*/
          (**(void (__thiscall ***)(volatile LONG *, int))m_uiRefCount)(m_uiRefCount, 1); /*0x56d2e3*/
      }
      v25[1].members.m_uiRefCount = (UInt32)v27; /*0x56d2e7*/
      if ( v27 ) /*0x56d2ea*/
        InterlockedIncrement((volatile LONG *)v27 + 1); /*0x56d2f0*/
    }
    m_controller = v10[1].members.super.m_controller; /*0x56d2f6*/
    if ( m_controller != (NiInterpController *)v25 ) /*0x56d2fe*/
    {
      if ( m_controller ) /*0x56d302*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&m_controller->member) ) /*0x56d308*/
          m_controller->vtbl->super.super.super.Destructor((NiRefObject *)m_controller, 1); /*0x56d31e*/
      }
      v10[1].members.super.m_controller = (NiInterpController *)v25; /*0x56d322*/
      if ( v25 ) /*0x56d328*/
        InterlockedIncrement((volatile LONG *)&v25->members); /*0x56d32e*/
    }
  }
  else
  {
    if ( v27 ) /*0x56d338*/
      (**(void (__thiscall ***)(NiSkinPartition *, int))v27)(v27, 1); /*0x56d342*/
    if ( v25 ) /*0x56d346*/
      v25->__vftable->super.Destructor((NiRefObject *)v25, 1); /*0x56d350*/
  }
  v30 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x56d354*/
  v31 = (BSShaderProperty *)v30; /*0x56d359*/
  if ( v30 ) /*0x56d36c*/
  {
    NiObjectNET::NiObjectNET(v30); /*0x56d370*/
    v31->vtbl = &NiWireframeProperty::`vftable'; /*0x56d375*/
    v31->member.super.flags = 0; /*0x56d37b*/
    v32 = v31; /*0x56d381*/
  }
  else
  {
    v32 = 0; /*0x56d385*/
  }
  v32->member.super.flags &= ~1u; /*0x56d387*/
  sub_405680((NiNode *)v10, v32); /*0x56d398*/
  sourceGeometry_2C = this->sourceGeometry_2C; /*0x56d3a1*/
  v10->members.m_localTransform.pos.x = sourceGeometry_2C->member.super.m_localTransform.pos.x; /*0x56d3a7*/
  v10->members.m_localTransform.pos.y = sourceGeometry_2C->member.super.m_localTransform.pos.y; /*0x56d3b0*/
  v10->members.m_localTransform.pos.z = sourceGeometry_2C->member.super.m_localTransform.pos.z; /*0x56d3b6*/
  qmemcpy(&v10->members.m_localTransform, &this->sourceGeometry_2C->member.super.m_localTransform, 0x24u); /*0x56d3c7*/
  a4b = fabs(this->sourceGeometry_2C->member.super.m_localTransform.scale); /*0x56d3d4*/
  v10->members.m_localTransform.scale = a4b; /*0x56d3dc*/
  ((void (__thiscall *)(NiNode *, NiAVObject *, int))this->sourceParentNode_30->vtbl->AddObject)( /*0x56d3ea*/
    this->sourceParentNode_30,
    v10,
    1);
  v34 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x56d3ec*/
  if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x56d3fc*/
    v34 = v34 + flt_A2FC78; /*0x56d3fe*/
  a4c = v34 / dbl_A2FC70; /*0x56d40d*/
  NiAVObject_UpdateNiAVObject(v10, a4c, 0); /*0x56d418*/
  NiAVObject_InitializePropertyState(v10); /*0x56d41f*/
  generatedGeometry_1C = this->generatedGeometry_1C; /*0x56d424*/
  if ( generatedGeometry_1C == v10 ) /*0x56d429*/
  {
    this->targetGeometry_20 = this->sourceGeometry_2C; /*0x56d463*/
  }
  else
  {
    if ( generatedGeometry_1C ) /*0x56d42d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&generatedGeometry_1C->members) ) /*0x56d433*/
        generatedGeometry_1C->vtbl->super.super.Destructor((NiRefObject *)generatedGeometry_1C, 1); /*0x56d449*/
    }
    this->generatedGeometry_1C = v10; /*0x56d44b*/
    InterlockedIncrement((volatile LONG *)&v10->members); /*0x56d452*/
    this->targetGeometry_20 = this->sourceGeometry_2C; /*0x56d45b*/
  }
}
