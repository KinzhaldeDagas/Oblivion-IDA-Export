bool __thiscall sub_5E8A20(_DWORD *this)
{
  int v2; // eax
  BSExtraDataVtbl *ExtraPackage; // edi
  int v4; // ebx
  int v5; // edi

  v2 = *(this + 0x16); /*0x5e8a23*/
  ExtraPackage = *(BSExtraDataVtbl **)(v2 + 8); /*0x5e8a27*/
  if ( !ExtraPackage ) /*0x5e8a2c*/
    return 0; /*0x5e8a2c*/
  if ( TESPackage::IsTemporaryOverrideType(*(char **)(v2 + 8)) ) /*0x5e8a30*/
    ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x11)); /*0x5e8a41*/
  if ( !ExtraPackage || ((int)ExtraPackage[3].CompareTo & 1) == 0 ) /*0x5e8a4b*/
    return 0; /*0x5e8a86*/
  v4 = 0; /*0x5e8a58*/
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this); /*0x5e8a5c*/
  if ( v5 ) /*0x5e8a60*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) ) /*0x5e8a6c*/
      v4 = v5; /*0x5e8a72*/
  }
  return TESAIForm_OffersService((_DWORD *)(v4 + 0x68), 0x20000); /*0x5e8a82*/
}
