// Verified BSTreeNode destructor frees branchNodesByLOD/leafNodesByLOD array headers, releases billboardNode/treeModel smart references, then chains to NiBSPNode destructor.
void __thiscall BSTreeNode_dtor(BSTreeNode_OblivionLayout_0F0 *this)
{
  char *branchNodesByLOD; // eax
  unsigned int v3; // edi
  char *leafNodesByLOD; // eax
  unsigned int v5; // edi
  NiTriBasedGeom *billboardGeometry; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebp
  BSTreeModel_OblivionLayout_058 *treeModel; // edi

  this->base.vtbl = (NiNodeVtbl *)&BSTreeNode::`vftable'; /*0x56464a*/
  branchNodesByLOD = (char *)this->branchNodesByLOD; /*0x564650*/
  if ( branchNodesByLOD ) /*0x564660*/
  {
    v3 = (unsigned int)(branchNodesByLOD + 0xFFFFFFFC); /*0x564665*/
    _LN21( /*0x564671*/
      branchNodesByLOD,
      4u,
      *((_DWORD *)branchNodesByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v3); /*0x564677*/
    this->branchNodesByLOD = 0; /*0x56467f*/
  }
  leafNodesByLOD = (char *)this->leafNodesByLOD; /*0x564689*/
  if ( leafNodesByLOD ) /*0x564691*/
  {
    v5 = (unsigned int)(leafNodesByLOD + 0xFFFFFFFC); /*0x564696*/
    _LN21( /*0x5646a2*/
      leafNodesByLOD,
      4u,
      *((_DWORD *)leafNodesByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v5); /*0x5646a8*/
    this->leafNodesByLOD = 0; /*0x5646b0*/
  }
  billboardGeometry = this->billboardGeometry; /*0x5646ba*/
  v7 = InterlockedDecrement; /*0x5646c2*/
  if ( billboardGeometry ) /*0x5646cd*/
  {
    if ( !v7((volatile LONG *)&billboardGeometry->vtbl.super.super.GetType) ) /*0x5646d3*/
      (*(void (__thiscall **)(NiTriBasedGeom *, int))billboardGeometry->vtbl.super.super.super.Destructor)( /*0x5646e5*/
        billboardGeometry,
        1);
  }
  treeModel = this->treeModel; /*0x5646e7*/
  if ( treeModel ) /*0x5646f4*/
  {
    if ( !v7(&treeModel->refCount) ) /*0x5646fa*/
      (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))treeModel->vftable)(treeModel, 1); /*0x56470c*/
  }
  NiBSPNode::~NiBSPNode((NiBSPNode *)this); /*0x564718*/
}
