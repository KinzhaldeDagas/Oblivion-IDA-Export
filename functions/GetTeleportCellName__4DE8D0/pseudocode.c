int __thiscall GetTeleportCellName(TESObjectREFR *this, BSStringT *a2)
{
  TESObjectCELL *parentCell; // edi
  const char *m_data; // edi
  TESObjectCELL *v6; // eax
  TESWorldSpace *WorldSpace; // ebx
  TESFormVtbl *v8; // edi
  float *v9; // eax

  parentCell = this->member.parentCell; /*0x4de8d5*/
  if ( parentCell && TESObjectCELL_IsInterior(this->member.parentCell) ) /*0x4de8de*/
  {
    m_data = parentCell->members.fullName.name.m_data; /*0x4de8e7*/
    if ( !m_data ) /*0x4de8ec*/
      m_data = EmptyString; /*0x4de8ee*/
    return BSStringT_Set(a2, m_data, 0); /*0x4de8fa*/
  }
  else
  {
    v6 = this->member.parentCell; /*0x4de905*/
    if ( (v6 /*0x4de925*/
       || (v6 = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell)) != 0)
      && (WorldSpace = TESObjectCELL_GetWorldSpace(v6)) != 0 )
    {
      v8 = WorldSpace->vtbl + 1; /*0x4de933*/
      v9 = this->vtbl->GetPos(this); /*0x4de939*/
      return ((int (__thiscall *)(TESWorldSpace *, BSStringT *, _DWORD, _DWORD, _DWORD))v8->super.InitializeComponent)( /*0x4de959*/
               WorldSpace,
               a2,
               *(_DWORD *)v9,
               *((_DWORD *)v9 + 1),
               *((_DWORD *)v9 + 2));
    }
    else
    {
      return BSStringT_Set(a2, EmptyString, 0); /*0x4de96c*/
    }
  }
}
