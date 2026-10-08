bool __thiscall sub_5E12E0(TESObjectREFR *this)
{
  TESObjectREFR *v2; // eax
  TESWorldSpace *WorldSpace; // edi
  void *v4; // eax
  UInt32 DwordAtOffset40; // edi
  bool result; // al

  if ( !((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].IsMobileObject)(this) /*0x5e12ff*/
    || !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16)) )
  {
    return 0; /*0x5e134f*/
  }
  v2 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16)); /*0x5e1311*/
  WorldSpace = TESObjectREFR_GetWorldSpace(v2); /*0x5e131c*/
  result = 1; /*0x5e1355*/
  if ( WorldSpace == TESObjectREFR_GetWorldSpace(this) ) /*0x5e1325*/
  {
    v4 = (void *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0xCC))(*((_DWORD *)this + 0x16)); /*0x5e1332*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40(v4); /*0x5e133d*/
    if ( DwordAtOffset40 == Shared_GetDwordAtOffset40(this) ) /*0x5e1346*/
      return 0; /*0x5e1325*/
  }
  return result; /*0x5e1349*/
}
