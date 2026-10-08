bool __thiscall sub_5E89B0(_DWORD *this)
{
  int v2; // eax
  BSExtraDataVtbl *ExtraPackage; // edi
  int v4; // ebx
  int v5; // edi

  v2 = *(this + 0x16); /*0x5e89b3*/
  ExtraPackage = *(BSExtraDataVtbl **)(v2 + 8); /*0x5e89b7*/
  if ( !ExtraPackage ) /*0x5e89bc*/
    return 0; /*0x5e89bc*/
  if ( TESPackage::IsTemporaryOverrideType(*(char **)(v2 + 8)) ) /*0x5e89c0*/
    ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x11)); /*0x5e89d1*/
  if ( !ExtraPackage || ((int)ExtraPackage[3].CompareTo & 1) == 0 ) /*0x5e89db*/
    return 0; /*0x5e8a16*/
  v4 = 0; /*0x5e89e8*/
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this); /*0x5e89ec*/
  if ( v5 ) /*0x5e89f0*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) ) /*0x5e89fc*/
      v4 = v5; /*0x5e8a02*/
  }
  return TESAIForm_OffersService((_DWORD *)(v4 + 0x68), 0x4000); /*0x5e8a12*/
}
