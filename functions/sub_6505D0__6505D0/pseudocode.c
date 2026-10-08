// BunkFix: furniture scan predicate. Rejects disabled/deleted/blocked refs, wrong cell, and refs owned by someone other than scanning actor; accepts TESFurniture categories through sub_4AE590/sub_4AE5A0.
char __cdecl sub_6505D0(TESObjectREFR *a1, TESObjectREFR *actorReference)
{
  TESForm::FormFlags flags; // eax
  TESForm *SpatialContainerAtPosition; // ebx
  TESFurniture *v4; // eax
  TESFurniture *v5; // edi

  if ( a1 ) /*0x6505d7*/
  {
    flags = a1->member.super.flags; /*0x6505dd*/
    if ( (flags & 0x20) == 0 && (flags & 0x4000) == 0 && (flags & 0x800) == 0 ) /*0x650601*/
    {
      if ( !actorReference ) /*0x65060e*/
        return 0; /*0x65060e*/
      if ( BSSimpleList::Contains(&stru_B3BA9C, a1) ) /*0x65061a*/
        return 0; /*0x65061a*/
      if ( !sub_4D74B0(a1) ) /*0x650629*/
        return 0; /*0x650629*/
      if ( !sub_4DB9A0(a1) ) /*0x650634*/
        return 0; /*0x650634*/
      if ( TESObjectREFR_GetOwner(a1) && !TESObjectREFR_IsOwnedBy(a1, actorReference, 1) ) /*0x65064d*/
        return 0;                               // RadiantAI: furniture/reference scan predicate rejects owned refs unless owned by the scanning actor; separate from food acquire list builder. /*0x65064d*/
      SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(a1); /*0x650660*/
      if ( SpatialContainerAtPosition != TESObjectREFR_GetSpatialContainerAtPosition(actorReference) ) /*0x65066a*/
        return 0; /*0x65066a*/
      v4 = (TESFurniture *)a1->vtbl->GetBaseForm(a1); /*0x650676*/
      v5 = v4; /*0x65067f*/
      if ( !unk_B3BA80 ) /*0x650678*/
        goto LABEL_21; /*0x650678*/
      if ( sub_4AE590(v4) ) /*0x650685*/
      {
LABEL_16:
        BSSimpleList_PushFront(&stru_B3BA9C, (int)a1); /*0x6506a1*/
        return 0; /*0x6506a7*/
      }
      if ( !unk_B3BA80 ) /*0x65068e*/
      {
LABEL_21:
        if ( sub_4AE5A0(v5) ) /*0x650698*/
          goto LABEL_16; /*0x65069f*/
      }
      return 0; /*0x6506b0*/
    }
  }
  return 0; /*0x6506af*/
}
