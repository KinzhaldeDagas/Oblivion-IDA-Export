// Verified TESPathGrid form type 0x34 constructor and 0x54-byte layout. It initializes a secondary TESChildCELL vtable at +0x18, rendered NiNode at +0x1C, parent-cell slot +0x20, point-array pointer +0x24, PGRI list header +0x28, point-count word +0x30, and two 37-bucket maps at +0x34 and +0x44.
TESPathGrid *__thiscall TESPathGrid_ctor(TESPathGrid *this)
{
  void **v2; // eax
  void **v3; // eax
  NiNode *renderNode; // ebx
  unsigned int v6; // [esp-18h] [ebp-38h]
  unsigned int v7; // [esp-8h] [ebp-28h]

  TESForm_constr(&this->base); /*0x4e609a*/
  this->childCell.vtbl = &TESChildCell::`vftable'; /*0x4e609f*/
  this->base.vtbl = (TESFormVtbl *)&TESPathGrid::`vftable'{for `TESPathGrid'}; /*0x4e60a8*/
  this->childCell.vtbl = &TESPathGrid::`vftable'{for `TESChildCell'}; /*0x4e60ae*/
  this->renderNode = 0; /*0x4e60b9*/
  this->PGRIRecords.firstNode.data = 0; /*0x4e60cd*/
  this->PGRIRecords.firstNode.next = 0; /*0x4e60d0*/
  this->pointsByReference.vtable = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e60d8*/
  this->pointsByReference.bucketCount = 0x25; /*0x4e60df*/
  this->pointsByReference.itemCount = 0; /*0x4e60e6*/
  v2 = (void **)FormHeapAlloc(0x94u); /*0x4e60ee*/
  v7 = 4 * this->pointsByReference.bucketCount; /*0x4e60fa*/
  this->pointsByReference.buckets = v2; /*0x4e60fd*/
  _memset((int)v2, 0, v7); /*0x4e6100*/
  this->pointsByReference.vtable = &NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e6105*/
  this->pointsByCell.vtable = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable';// Verified map at TESPathGrid+0x44 is initialized as NiTPointerMap<u32, BSSimpleList<TESPathGridPoint*>*> with 37 buckets. Despite the legacy pointsByCell member/type spelling, its key is packed world X/Y at 512-unit granularity (see TESPathGrid_PackSpatialBucketKey). /*0x4e6122*/
  this->pointsByCell.bucketCount = 0x25; /*0x4e6129*/
  this->pointsByCell.itemCount = 0; /*0x4e6130*/
  v3 = (void **)FormHeapAlloc(0x94u); /*0x4e6138*/
  v6 = 4 * this->pointsByCell.bucketCount; /*0x4e6144*/
  this->pointsByCell.buckets = v3; /*0x4e6147*/
  _memset((int)v3, 0, v6); /*0x4e614a*/
  this->pointsByCell.vtable = &NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e6152*/
  this->base.member.type = kFormType_PathGrid; /*0x4e6159*/
  renderNode = this->renderNode; /*0x4e615d*/
  if ( renderNode ) /*0x4e6167*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&renderNode->members) ) /*0x4e616d*/
      renderNode->vtbl->super.super.super.Destructor((NiRefObject *)renderNode, 1); /*0x4e6183*/
    this->renderNode = 0; /*0x4e6185*/
  }
  this->parentCell = 0; /*0x4e618a*/
  this->pointArray = 0; /*0x4e618d*/
  this->pointCount = 0; /*0x4e6190*/
  j_TESForm_InitializeComponents(&this->base); /*0x4e6194*/
  ++unk_B35F80; /*0x4e6199*/
  return this; /*0x4e61a2*/
}
