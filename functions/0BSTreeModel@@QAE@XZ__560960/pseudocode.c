// Verified current STBB layout view: BSTreeModel_OblivionLayout_058_STBBVerified refines model+0x1C to NiTriShape* billboardShape_STBB. This supersedes the earlier partial +0x1C NiStream view; the ctor initializes the shape pointer null.
BSTreeModel_OblivionLayout_058 *__thiscall BSTreeModel_ctor(BSTreeModel_OblivionLayout_058 *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  NiTriShape *billboardShape_STBB; // edi
  OB_STLSPData_010201A0 *leafShaderStreamData; // edi
  NiTexturingProperty *branchTexturingProperty; // edi
  NiSourceTexture *leafTexture; // edi
  NiTexturingProperty *billboardTexturingProperty; // edi

  this->vftable = &NiRefObject::`vftable'; /*0x560992*/
  this->refCount = 0; /*0x560998*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x56099b*/
  this->vftable = &BSTreeModel::`vftable';      // Verified BSTreeModel runtime layout is 0x58 bytes in Oblivion. Fallout's same-named model has a smaller 0x50-byte structure; its seed/trunk length/trunk width fields are at +0x40/+0x48/+0x4C versus Oblivion +0x48/+0x50/+0x54. /*0x5609a1*/
  this->baseModel = 0;                          // Verified owning baseModel NiPointer at +0x10 starts null; InitAsInstance stores the base model here and the destructor releases it after the instance CSpeedTreeRT wrapper. /*0x5609ab*/
  this->billboardShape_STBB = 0;                // Verified: billboardShape_STBB NiTriShape smart pointer at BSTreeModel+0x1C starts null. CreateBillboardGeometry stores the `STBB` NiTriShape here; CreateArt passes it through BSTreeNode vtable +0xC0 to BSTreeNode_SetBillboard; ClearModel and instances release/clone it. /*0x5609ae*/
  this->leafShaderStreamData = 0;               // Verified leafShaderStreamData NiPointer at +0x20 starts null. CreateLeafGeometry fills it with OB_STLSPData and SpeedTreeLeafShaderProperty constructors consume it; instances share its reference. /*0x5609b1*/
  this->branchTexturingProperty = 0;            // Verified branchTexturingProperty at +0x34 starts null; ApplyBaseObject creates the branch texture property and CreateArt attaches it to the branch root. /*0x5609b4*/
  this->leafTexture = 0;                        // Verified leafTexture at +0x38 starts null; ApplyBaseObject loads the TESObjectTREE leaf source texture here and assigns it to every leaf LOD shader property. /*0x5609b7*/
  this->billboardTexturingProperty = 0;         // Verified billboardTexturingProperty at +0x3C starts null; ApplyBaseObject loads the tree billboard texture and assigns this property to the billboard geometry path. /*0x5609ba*/
  this->collisionShape = 0;                     // Verified collisionShape NiPointer at +0x40 starts null; CreateGeometry builds a Havok capsule from trunkLength/trunkWidth and CreateArt passes it to BSTreeNode_ctor. /*0x5609bd*/
  v2 = InterlockedDecrement; /*0x5609c0*/
  this->speedTree = 0;                          // Verified BSTreeModel.speedTree at +0x0C starts null; BSTreeModel_InitFromBase allocates/loads the CSpeedTreeRT wrapper here, and the destructor releases it. /*0x5609c6*/
  this->modelState_0_uninit_1_base_2_instance = 0;// Verified BSTreeModel modelState enum values: constructor 0=uninitialized, InitFromBase sets 1=base model, and InitAsInstance sets 2=instance. Update and instance guards distinguish state 2. /*0x5609c9*/
  this->branchGeometryDataByLOD = 0;            // Verified branchGeometryDataByLOD array pointer at +0x14 starts null and is allocated to branch LOD count by CreateBranchGeometry; CreateArt uses each entry to build a branch NiTriStrips node. /*0x5609cc*/
  this->leafGeometryDataByLOD = 0;              // Verified leafGeometryDataByLOD array pointer at +0x18 starts null and is allocated to leaf LOD count by CreateLeafGeometry; CreateArt builds each leaf NiTriShape from those data entries. /*0x5609cf*/
  billboardShape_STBB = this->billboardShape_STBB; /*0x5609d2*/
  if ( billboardShape_STBB ) /*0x5609dc*/
  {
    if ( !v2((volatile LONG *)billboardShape_STBB + 1) ) /*0x5609e2*/
      (**(void (__thiscall ***)(NiTriShape *, int))billboardShape_STBB)(billboardShape_STBB, 1); /*0x5609f4*/
    this->billboardShape_STBB = 0; /*0x5609f6*/
  }
  leafShaderStreamData = this->leafShaderStreamData; /*0x5609f9*/
  if ( leafShaderStreamData ) /*0x5609fe*/
  {
    if ( !v2(&leafShaderStreamData->refCount) ) /*0x560a04*/
      (*(void (__thiscall **)(OB_STLSPData_010201A0 *, int))leafShaderStreamData->vtbl)(leafShaderStreamData, 1); /*0x560a16*/
    this->leafShaderStreamData = 0; /*0x560a18*/
  }
  this->branchShaderPropertiesByLOD = 0;        // Verified branchShaderPropertiesByLOD pointer array at +0x24 starts null, is allocated by CreateBranchGeometry, and is cloned per LOD when making a model instance. /*0x560a1b*/
  this->leafShaderPropertiesByLOD = 0;          // Verified leafShaderPropertiesByLOD pointer array at +0x28 starts null, is allocated by CreateLeafGeometry, and is cloned per LOD when making a model instance. /*0x560a1e*/
  this->branchCachedPropertiesByLOD = 0;        // Verified branchCachedPropertiesByLOD array at +0x2C starts null; CreateArt caches branch child property ID 3 into its LOD slots for reuse. /*0x560a21*/
  this->leafCachedPropertiesByLOD = 0;          // Candidate role: leafCachedPropertiesByLOD array at +0x30 is initialized and copied/cleared like the other leaf LOD arrays; CreateArt consumes its entries as BSShaderProperty values when present, but no stock writer was found in this pass. /*0x560a24*/
  branchTexturingProperty = this->branchTexturingProperty; /*0x560a27*/
  if ( branchTexturingProperty ) /*0x560a2c*/
  {
    if ( !v2((volatile LONG *)&branchTexturingProperty->super) ) /*0x560a32*/
      (*(void (__thiscall **)(NiTexturingProperty *, int))branchTexturingProperty->vtbl)(branchTexturingProperty, 1); /*0x560a44*/
    this->branchTexturingProperty = 0; /*0x560a46*/
  }
  leafTexture = this->leafTexture; /*0x560a49*/
  if ( leafTexture ) /*0x560a4e*/
  {
    if ( !v2((volatile LONG *)&leafTexture->members) ) /*0x560a54*/
      leafTexture->vtbl->super.super.super.Destructor((NiRefObject *)leafTexture, 1); /*0x560a66*/
    this->leafTexture = 0; /*0x560a68*/
  }
  billboardTexturingProperty = this->billboardTexturingProperty; /*0x560a6b*/
  if ( billboardTexturingProperty ) /*0x560a70*/
  {
    if ( !v2((volatile LONG *)&billboardTexturingProperty->super) ) /*0x560a76*/
      (*(void (__thiscall **)(NiTexturingProperty *, int))billboardTexturingProperty->vtbl)( /*0x560a88*/
        billboardTexturingProperty,
        1);
    this->billboardTexturingProperty = 0; /*0x560a8a*/
  }
  this->seed = 1;                               // Verified BSTreeModel.seed at +0x48 defaults to 1; InitFromBase replaces it with CSpeedTreeRT_GetSeed after successful Compute. /*0x560a8f*/
  this->curveScalar = 0.0;                      // Verified curveScalar at +0x44 defaults to 0 and ApplyBaseObject writes the validated forced/TESObjectTREE curve scalar here. /*0x560a96*/
  this->unknown_04C_04F[0] = 0;                 // Verified: BSTreeModel constructor initializes the byte at +0x4C to 0. Manager later sets it to 1 after the model's vtable CreateArt call; no stock read was found, so its semantic meaning remains Unknown. /*0x560a99*/
  this->trunkLength = 0.0;                      // Verified trunkLength at +0x50 and trunkWidth at +0x54 default to 0; successful InitFromBase fills them from CSpeedTreeRT_GetTrunkLength/GetTrunkWidth, and CreateGeometry uses them for the fallback Havok capsule. /*0x560a9c*/
  this->trunkWidth = 0.0; /*0x560aa1*/
  return this; /*0x560aa4*/
}
