// Verified TESPathGrid destruction order: clear rendered geometry; clear point array/backlinks; free PGRI rows; clear every pointsByCell (+0x44) bucket list (512-unit X/Y spatial buckets); release component references; release shared point-marker/render resources on the last instance; destroy both pointer-map containers and render node; then destroy TESForm base.
void __thiscall TESPathGrid_dtor(TESPathGrid *this)
{
  bool v2; // zf
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  UInt32 v4; // edi
  int v5; // edi
  NiNode *renderNode; // edi

  this->base.vtbl = (TESFormVtbl *)&TESPathGrid::`vftable'{for `TESPathGrid'};// Verified destructor clears the rendered graph, owned point/reference structures, PGRI records, and the per-PathGrid spatial bucket map at +0x44; then releases component references and refcounted render resources before TESForm destruction. /*0x4e784a*/
  this->childCell.vtbl = &TESPathGrid::`vftable'{for `TESChildCell'}; /*0x4e7850*/
  TESPathGrid_ClearRenderedPointGeometry(this); /*0x4e785f*/
  TESPathGrid_ClearPointsAndReferenceMaps(this); /*0x4e7866*/
  TESPathGrid_ClearPGRIRecords(this); /*0x4e786d*/
  TESPathGrid_ClearSpatialBucketMap(this); /*0x4e7874*/
  j_TESForm_ClearComponentReferences(&this->base); /*0x4e787b*/
  v2 = unk_B35F80-- == 1; /*0x4e7880*/
  v3 = InterlockedDecrement; /*0x4e7887*/
  if ( v2 ) /*0x4e788d*/
  {
    v4 = unk_B35F88; /*0x4e788f*/
    if ( unk_B35F88 ) /*0x4e788f*/
    {
      if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x4e789d*/
      {
        if ( v4 ) /*0x4e78a5*/
          (**(void (__thiscall ***)(UInt32, int))v4)(v4, 1); /*0x4e78af*/
      }
      unk_B35F88 = 0; /*0x4e78b1*/
    }
    v5 = unk_B35F8C; /*0x4e78bb*/
    if ( unk_B35F8C ) /*0x4e78bb*/
    {
      if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x4e78c9*/
      {
        if ( v5 ) /*0x4e78d1*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4e78db*/
      }
      unk_B35F8C = 0; /*0x4e78dd*/
    }
  }
  NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>((unsigned int *)&this->pointsByCell); /*0x4e78ef*/
  NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>((unsigned int *)&this->pointsByReference); /*0x4e78fc*/
  renderNode = this->renderNode; /*0x4e7901*/
  if ( renderNode ) /*0x4e790b*/
  {
    if ( !v3((volatile LONG *)&renderNode->members) ) /*0x4e7911*/
      renderNode->vtbl->super.super.super.Destructor((NiRefObject *)renderNode, 1); /*0x4e7923*/
  }
  TESForm_destr(&this->base); /*0x4e792f*/
}
