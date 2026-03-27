int __thiscall GetTeleportCellName(TESObjectREFR *this, BSStringT *a2)
{
  TESObjectCELL *parentCell; // edi
  const char *m_data; // edi
  TESObjectCELL *v6; // eax
  TESWorldSpace *WorldSpace; // ebx
  TESFormVtbl *v8; // edi
  float *v9; // eax

  parentCell = this->member.parentCell;
  if ( parentCell && TESObjectCELL_IsInterior(this->member.parentCell) )
  {
    m_data = parentCell->members.fullName.name.m_data;
    if ( !m_data )
      m_data = EmptyString;
    return BSStringT_Set(a2, m_data, 0);
  }
  else
  {
    v6 = this->member.parentCell;
    if ( (v6
       || (v6 = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell)) != 0)
      && (WorldSpace = TESObjectCELL_GetWorldSpace(v6)) != 0 )
    {
      v8 = WorldSpace->vtbl + 1;
      v9 = this->vtbl->GetPos(this);
      return ((int (__thiscall *)(TESWorldSpace *, BSStringT *, _DWORD, _DWORD, _DWORD))v8->super.InitializeComponent)(
               WorldSpace,
               a2,
               *(_DWORD *)v9,
               *((_DWORD *)v9 + 1),
               *((_DWORD *)v9 + 2));
    }
    else
    {
      return BSStringT_Set(a2, EmptyString, 0);
    }
  }
}
