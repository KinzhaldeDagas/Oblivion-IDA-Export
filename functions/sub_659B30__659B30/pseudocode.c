char __thiscall sub_659B30(TESObjectREFR *this)
{
  TESObjectCELL *ParentCell; // eax
  bool v3; // zf
  TESObjectREFRVtbl *vtbl; // eax

  if ( !this->vtbl->GetNiNode(this) )
    return 1;
  ParentCell = TESObjectREFR_GetParentCell(this);
  if ( !TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 1) )
    return 1;
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) == 0;
  vtbl = this->vtbl;
  if ( !v3 )
  {
    vtbl->IsParalyzed(this);
    return 1;
  }
  vtbl->super.Destroy((TESForm *)this, 1);
  return 0;
}
