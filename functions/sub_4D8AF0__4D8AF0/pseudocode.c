// Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
TESForm *__thiscall TESObjectREFR_GetSpatialContainerAtPosition(TESObjectREFR *this)
{
  TESObjectCELL *parentCell; // edi
  float *v3; // eax
  TESForm *result; // eax
  TESObjectCELL *v5; // eax
  float *v6; // eax

  parentCell = this->member.parentCell; /*0x4d8af4*/
  if ( parentCell && TESObjectCELL_IsInterior(this->member.parentCell) ) /*0x4d8afd*/
  {
    if ( this->vtbl->GetBaseForm(this)->member.type != kFormType_SubSpace ) /*0x4d8b16*/
    {
      v3 = this->vtbl->GetPos(this); /*0x4d8b22*/
      result = (TESForm *)TESObjectCELL_FindSmallestSubSpaceContainingPosition(parentCell, v3); /*0x4d8b27*/
      goto LABEL_10; /*0x4d8b2c*/
    }
  }
  else
  {
    v5 = this->member.parentCell; /*0x4d8b2e*/
    parentCell = 0; /*0x4d8b31*/
    if ( v5 /*0x4d8b43*/
      || (v5 = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell)) != 0 )
    {
      parentCell = (TESObjectCELL *)TESObjectCELL_GetWorldSpace(v5); /*0x4d8b4c*/
      if ( parentCell ) /*0x4d8b50*/
      {
        if ( this->vtbl->GetBaseForm(this)->member.type != kFormType_SubSpace ) /*0x4d8b62*/
        {
          v6 = this->vtbl->GetPos(this); /*0x4d8b6e*/
          result = (TESForm *)TESWorldSpace_FindSmallestSubSpaceContainingPosition((TESWorldSpace *)parentCell, v6); /*0x4d8b73*/
LABEL_10:
          if ( result ) /*0x4d8b7a*/
            return result; /*0x4d8b7a*/
        }
      }
    }
  }
  return (TESForm *)parentCell; /*0x4d8b7e*/
}
