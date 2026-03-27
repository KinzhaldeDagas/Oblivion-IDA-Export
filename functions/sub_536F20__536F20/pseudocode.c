bool (__thiscall *__cdecl sub_536F20(TESObjectREFR *a1))(BSExtraData *this, BSExtraData *other)
{
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v2; // esi
  BSExtraDataVtbl *v3; // eax

  if ( !a1 )
    return 0;
  ParentCell = TESObjectREFR_GetParentCell(a1);
  v2 = (ExtraDataList *)ParentCell;
  if ( ParentCell
    && (!TESObjectCELL_IsInterior(ParentCell) ? (v3 = (BSExtraDataVtbl *)bhkWorldM) : (v3 = sub_424180(v2 + 2)), v3) )
  {
    return v3[4].CompareTo;
  }
  else
  {
    return 0;
  }
}
