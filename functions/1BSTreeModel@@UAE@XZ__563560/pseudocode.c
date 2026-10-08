// BSTreeModel destructor. Clears Gamebryo render resources first, then calls CSpeedTreeRT destructor/refcount cleanup for BSTreeModel+0x0C and frees the 0xA0 object storage.
void __thiscall BSTreeModel_dtor(BSTreeModel_OblivionLayout_058 *this)
{
  OB_CSpeedTreeRT_010201A0 *speedTree; // edi
  bhkRefObject *collisionShape; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  NiTexturingProperty *billboardTexturingProperty; // edi
  NiSourceTexture *leafTexture; // edi
  NiTexturingProperty *branchTexturingProperty; // edi
  OB_STLSPData_010201A0 *leafShaderStreamData; // edi
  NiTriShape *billboardShape_STBB; // edi
  struct BSTreeModel_OblivionLayout_058 *baseModel; // edi

  this->vftable = &BSTreeModel::`vftable'; /*0x56358a*/
  BSTreeModel_ClearModel(this);                 // Verified: destructor order is render-resource clear, CSpeedTreeRT shared-object release/free, release of NiPointer resources including the owning base-model reference, then NiRefObject bookkeeping. /*0x563598*/
  speedTree = this->speedTree; /*0x56359d*/
  if ( speedTree ) /*0x5635a2*/
  {
    CSpeedTreeRT__dtor(this->speedTree);        // Normal BSTreeModel destructor release and the second/last Oblivion code xref to CSpeedTreeRT dtor/refcount cleanup. The wrapper storage is freed at the next call. /*0x5635a6*/
    FormHeapFree((unsigned int)speedTree);      // Frees this model's 0xA0 CSpeedTreeRT wrapper immediately after shared cleanup. Raw wrapper addresses can be reused; sidecar identity needs a publication/link generation or the stable shared +0x30 allocation. /*0x5635ac*/
    this->speedTree = 0; /*0x5635b4*/
  }
  collisionShape = this->collisionShape; /*0x5635bb*/
  v4 = InterlockedDecrement; /*0x5635c0*/
  if ( collisionShape ) /*0x5635cb*/
  {
    if ( !v4((volatile LONG *)&collisionShape->members) ) /*0x5635d1*/
      collisionShape->__vftable->super.Destructor((NiRefObject *)collisionShape, 1); /*0x5635e3*/
  }
  billboardTexturingProperty = this->billboardTexturingProperty; /*0x5635e5*/
  if ( billboardTexturingProperty ) /*0x5635ef*/
  {
    if ( !v4((volatile LONG *)&billboardTexturingProperty->super) ) /*0x5635f5*/
      (*(void (__thiscall **)(NiTexturingProperty *, int))billboardTexturingProperty->vtbl)( /*0x563607*/
        billboardTexturingProperty,
        1);
  }
  leafTexture = this->leafTexture; /*0x563609*/
  if ( leafTexture ) /*0x563613*/
  {
    if ( !v4((volatile LONG *)&leafTexture->members) ) /*0x563619*/
      leafTexture->vtbl->super.super.super.Destructor((NiRefObject *)leafTexture, 1); /*0x56362b*/
  }
  branchTexturingProperty = this->branchTexturingProperty; /*0x56362d*/
  if ( branchTexturingProperty ) /*0x563637*/
  {
    if ( !v4((volatile LONG *)&branchTexturingProperty->super) ) /*0x56363d*/
      (*(void (__thiscall **)(NiTexturingProperty *, int))branchTexturingProperty->vtbl)(branchTexturingProperty, 1); /*0x56364f*/
  }
  leafShaderStreamData = this->leafShaderStreamData; /*0x563651*/
  if ( leafShaderStreamData ) /*0x56365b*/
  {
    if ( !v4(&leafShaderStreamData->refCount) ) /*0x563661*/
      (*(void (__thiscall **)(OB_STLSPData_010201A0 *, int))leafShaderStreamData->vtbl)(leafShaderStreamData, 1); /*0x563673*/
  }
  billboardShape_STBB = this->billboardShape_STBB; /*0x563675*/
  if ( billboardShape_STBB ) /*0x56367f*/
  {
    if ( !v4((volatile LONG *)billboardShape_STBB + 1) ) /*0x563685*/
      (**(void (__thiscall ***)(NiTriShape *, int))billboardShape_STBB)(billboardShape_STBB, 1); /*0x563697*/
  }
  baseModel = this->baseModel;                  // Loads BSTreeModel+0x10, the owning base-model reference installed at 0x56311B. The destructor releases it only after this instance's CSpeedTreeRT cleanup/free and other render references. /*0x563699*/
  if ( baseModel ) /*0x5636a3*/
  {                                             // Final release of the instance model's owning base BSTreeModel reference. Therefore a live BSTreeModel instance prevents base-wrapper-address reuse for its entire SpeedTree lifetime.
    if ( !v4(&baseModel->refCount) ) /*0x5636a9*/
      (*(void (__thiscall **)(struct BSTreeModel_OblivionLayout_058 *, int))baseModel->vftable)(baseModel, 1); /*0x5636bb*/
  }
  this->vftable = &NiRefObject::`vftable'; /*0x5636c2*/
  v4(&MEMORY[0xB3FD64]); /*0x5636c8*/
}
