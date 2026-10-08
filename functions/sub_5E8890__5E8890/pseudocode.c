bool __thiscall sub_5E8890(_DWORD *this)
{
  int v2; // eax
  BSExtraDataVtbl *ExtraPackage; // edi
  int v4; // ebx
  int v5; // edi

  v2 = *(this + 0x16); /*0x5e8893*/
  ExtraPackage = *(BSExtraDataVtbl **)(v2 + 8); /*0x5e8897*/
  if ( !ExtraPackage ) /*0x5e889c*/
    return 0; /*0x5e889c*/
  if ( TESPackage::IsTemporaryOverrideType(*(char **)(v2 + 8)) ) /*0x5e88a0*/
    ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x11)); /*0x5e88b1*/
  if ( !ExtraPackage || ((int)ExtraPackage[3].CompareTo & 1) == 0 ) /*0x5e88bb*/
    return 0; /*0x5e88f6*/
  v4 = 0; /*0x5e88c8*/
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this); /*0x5e88cc*/
  if ( v5 ) /*0x5e88d0*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) ) /*0x5e88dc*/
      v4 = v5; /*0x5e88e2*/
  }
  return TESAIForm_OffersService((_DWORD *)(v4 + 0x68), 0x10000); /*0x5e88f2*/
}
