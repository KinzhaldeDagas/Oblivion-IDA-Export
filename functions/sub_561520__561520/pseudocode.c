// Verified render-resource cleanup: frees six per-LOD arrays; releases billboardShape_STBB (+0x1C), leafShaderStreamData (+0x20), texture properties/textures (+0x34..+0x3C), collisionShape (+0x40), and other array smart pointers. CSpeedTreeRT and baseModel are released separately by BSTreeModel_dtor.
void __thiscall BSTreeModel_ClearModel(BSTreeModel_OblivionLayout_058 *this)
{
  char *branchGeometryDataByLOD; // eax
  unsigned int v3; // edi
  char *leafGeometryDataByLOD; // eax
  unsigned int v5; // edi
  NiTriShape *billboardShape_STBB; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebp
  OB_STLSPData_010201A0 *leafShaderStreamData; // edi
  char *branchShaderPropertiesByLOD; // eax
  unsigned int v10; // edi
  char *leafShaderPropertiesByLOD; // eax
  unsigned int v12; // edi
  char *branchCachedPropertiesByLOD; // eax
  unsigned int v14; // edi
  char *leafCachedPropertiesByLOD; // eax
  unsigned int v16; // edi
  NiTexturingProperty *branchTexturingProperty; // edi
  NiSourceTexture *leafTexture; // edi
  NiTexturingProperty *billboardTexturingProperty; // edi
  bhkRefObject *collisionShape; // edi

  branchGeometryDataByLOD = (char *)this->branchGeometryDataByLOD; /*0x561525*/
  if ( branchGeometryDataByLOD ) /*0x56152d*/
  {
    v3 = (unsigned int)(branchGeometryDataByLOD + 0xFFFFFFFC); /*0x561532*/
    _LN21( /*0x56153e*/
      branchGeometryDataByLOD,
      4u,
      *((_DWORD *)branchGeometryDataByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v3); /*0x561544*/
    this->branchGeometryDataByLOD = 0; /*0x56154c*/
  }
  leafGeometryDataByLOD = (char *)this->leafGeometryDataByLOD; /*0x56154f*/
  if ( leafGeometryDataByLOD ) /*0x561554*/
  {
    v5 = (unsigned int)(leafGeometryDataByLOD + 0xFFFFFFFC); /*0x561559*/
    _LN21( /*0x561565*/
      leafGeometryDataByLOD,
      4u,
      *((_DWORD *)leafGeometryDataByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v5); /*0x56156b*/
    this->leafGeometryDataByLOD = 0; /*0x561573*/
  }
  billboardShape_STBB = this->billboardShape_STBB;// Verified: ClearModel releases the STBB billboardShape pointer at model+0x1C and clears the slot. /*0x561576*/
  v7 = InterlockedDecrement; /*0x56157b*/
  if ( billboardShape_STBB ) /*0x561581*/
  {
    if ( !v7((volatile LONG *)billboardShape_STBB + 1) ) /*0x561587*/
      (**(void (__thiscall ***)(NiTriShape *, int))billboardShape_STBB)(billboardShape_STBB, 1); /*0x561599*/
    this->billboardShape_STBB = 0; /*0x56159b*/
  }
  leafShaderStreamData = this->leafShaderStreamData; /*0x56159e*/
  if ( leafShaderStreamData ) /*0x5615a3*/
  {
    if ( !v7(&leafShaderStreamData->refCount) ) /*0x5615a9*/
      (*(void (__thiscall **)(OB_STLSPData_010201A0 *, int))leafShaderStreamData->vtbl)(leafShaderStreamData, 1); /*0x5615bb*/
    this->leafShaderStreamData = 0; /*0x5615bd*/
  }
  branchShaderPropertiesByLOD = (char *)this->branchShaderPropertiesByLOD; /*0x5615c0*/
  if ( branchShaderPropertiesByLOD ) /*0x5615c5*/
  {
    v10 = (unsigned int)(branchShaderPropertiesByLOD + 0xFFFFFFFC); /*0x5615ca*/
    _LN21( /*0x5615d6*/
      branchShaderPropertiesByLOD,
      4u,
      *((_DWORD *)branchShaderPropertiesByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v10); /*0x5615dc*/
    this->branchShaderPropertiesByLOD = 0; /*0x5615e4*/
  }
  leafShaderPropertiesByLOD = (char *)this->leafShaderPropertiesByLOD; /*0x5615e7*/
  if ( leafShaderPropertiesByLOD ) /*0x5615ec*/
  {
    v12 = (unsigned int)(leafShaderPropertiesByLOD + 0xFFFFFFFC); /*0x5615f1*/
    _LN21( /*0x5615fd*/
      leafShaderPropertiesByLOD,
      4u,
      *((_DWORD *)leafShaderPropertiesByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v12); /*0x561603*/
    this->leafShaderPropertiesByLOD = 0; /*0x56160b*/
  }
  branchCachedPropertiesByLOD = (char *)this->branchCachedPropertiesByLOD; /*0x56160e*/
  if ( branchCachedPropertiesByLOD ) /*0x561613*/
  {
    v14 = (unsigned int)(branchCachedPropertiesByLOD + 0xFFFFFFFC); /*0x561618*/
    _LN21( /*0x561624*/
      branchCachedPropertiesByLOD,
      4u,
      *((_DWORD *)branchCachedPropertiesByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v14); /*0x56162a*/
    this->branchCachedPropertiesByLOD = 0; /*0x561632*/
  }
  leafCachedPropertiesByLOD = (char *)this->leafCachedPropertiesByLOD; /*0x561635*/
  if ( leafCachedPropertiesByLOD ) /*0x56163a*/
  {
    v16 = (unsigned int)(leafCachedPropertiesByLOD + 0xFFFFFFFC); /*0x56163f*/
    _LN21( /*0x56164b*/
      leafCachedPropertiesByLOD,
      4u,
      *((_DWORD *)leafCachedPropertiesByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v16); /*0x561651*/
    this->leafCachedPropertiesByLOD = 0; /*0x561659*/
  }
  branchTexturingProperty = this->branchTexturingProperty; /*0x56165c*/
  if ( branchTexturingProperty ) /*0x561661*/
  {
    if ( !v7((volatile LONG *)&branchTexturingProperty->super) ) /*0x561667*/
      (*(void (__thiscall **)(NiTexturingProperty *, int))branchTexturingProperty->vtbl)(branchTexturingProperty, 1); /*0x561679*/
    this->branchTexturingProperty = 0; /*0x56167b*/
  }
  leafTexture = this->leafTexture; /*0x56167e*/
  if ( leafTexture ) /*0x561683*/
  {
    if ( !v7((volatile LONG *)&leafTexture->members) ) /*0x561689*/
      leafTexture->vtbl->super.super.super.Destructor((NiRefObject *)leafTexture, 1); /*0x56169b*/
    this->leafTexture = 0; /*0x56169d*/
  }
  billboardTexturingProperty = this->billboardTexturingProperty; /*0x5616a0*/
  if ( billboardTexturingProperty ) /*0x5616a5*/
  {
    if ( !v7((volatile LONG *)&billboardTexturingProperty->super) ) /*0x5616ab*/
      (*(void (__thiscall **)(NiTexturingProperty *, int))billboardTexturingProperty->vtbl)( /*0x5616bd*/
        billboardTexturingProperty,
        1);
    this->billboardTexturingProperty = 0; /*0x5616bf*/
  }
  collisionShape = this->collisionShape; /*0x5616c2*/
  if ( collisionShape ) /*0x5616c7*/
  {
    if ( !v7((volatile LONG *)&collisionShape->members) ) /*0x5616cd*/
      collisionShape->__vftable->super.Destructor((NiRefObject *)collisionShape, 1); /*0x5616df*/
    this->collisionShape = 0; /*0x5616e1*/
  }
}
