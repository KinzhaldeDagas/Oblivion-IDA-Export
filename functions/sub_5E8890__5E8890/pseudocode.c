bool __thiscall sub_5E8890(_DWORD *this)
{
  int v2; // eax
  BSExtraDataVtbl *ExtraPackage; // edi
  int v4; // ebx
  int v5; // edi

  v2 = *(this + 0x16);
  ExtraPackage = *(BSExtraDataVtbl **)(v2 + 8);
  if ( !ExtraPackage )
    return 0;
  if ( sub_567770(*(char **)(v2 + 8)) )
    ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(this + 0x11));
  if ( !ExtraPackage || ((int)ExtraPackage[3].CompareTo & 1) == 0 )
    return 0;
  v4 = 0;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 0x170))(this);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 0x190))(this) )
      v4 = v5;
  }
  return TESAIForm_OffersService((_DWORD *)(v4 + 0x68), 0x10000);
}
