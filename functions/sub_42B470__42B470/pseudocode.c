TESWorldSpace *__thiscall sub_42B470(TESObjectREFR **this)
{
  TESObjectREFR *v2; // ecx
  TESObjectCELL *ParentCell; // eax

  v2 = *this;
  if ( v2
    && ((ParentCell = TESObjectREFR_GetParentCell(v2)) != 0
     || (ParentCell = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))(*this)->member.childCell.GetChildCell)(&(*this)->member.childCell)) != 0) )
  {
    return TESObjectCELL_GetWorldSpace(ParentCell);
  }
  else
  {
    return 0;
  }
}
