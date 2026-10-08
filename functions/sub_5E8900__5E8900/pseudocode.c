double __usercall sub_5E8900@<st0>(Actor *this@<ecx>, double result@<st0>, double a3@<st2>)
{
  LowProcess *process; // eax
  BSExtraDataVtbl *editorPackage; // edi
  char v6; // al
  TESObjectCELL *DwordAtOffset40; // eax
  int v8; // ebx
  int v9; // edi

  process = this->members.super.process; /*0x5e8903*/
  editorPackage = (BSExtraDataVtbl *)process->editorPackage; /*0x5e8907*/
  if ( editorPackage ) /*0x5e890c*/
  {
    if ( TESPackage::IsTemporaryOverrideType(process->editorPackage) ) /*0x5e8914*/
      editorPackage = ExtraDataList::GetExtraPackage(&this->members.super.super.baseExtraList); /*0x5e8925*/
    if ( editorPackage ) /*0x5e8929*/
    {
      if ( ((int)editorPackage[3].CompareTo & 1) != 0 ) /*0x5e892f*/
      {
        result = sub_566DC0( /*0x5e8940*/
                   (TESPackage *)editorPackage,
                   result,
                   kTerrainLODQuadRayDirectionZ,
                   a3,
                   this,
                   0,
                   kTerrainLODQuadRayDirectionZ);
        if ( v6 /*0x5e895e*/
          || Shared_GetDwordAtOffset40(this)
          && (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this),
              TESObjectCELL_IsOwnedByActor(DwordAtOffset40, this)) )
        {
          v8 = 0; /*0x5e8972*/
          v9 = ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>))this->vtbl->super.super.GetBaseForm)( /*0x5e8976*/
                 this,
                 result);
          if ( v9 ) /*0x5e897a*/
          {
            if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e8986*/
              v8 = v9; /*0x5e898c*/
          }
          TESAIForm_OffersService((_DWORD *)(v8 + 0x68), 0x259F); /*0x5e8996*/
        }
      }
    }
  }
  return result; /*0x5e899c*/
}
