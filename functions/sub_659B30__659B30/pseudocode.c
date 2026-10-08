char __thiscall sub_659B30(TESObjectREFR *this)
{
  TESObjectCELL *DwordAtOffset40; // eax
  bool v3; // zf
  TESObjectREFRVtbl *vtbl; // eax

  if ( !this->vtbl->GetNiNode(this) ) /*0x659b3e*/
    return 1; /*0x659b3e*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x659b48*/
  if ( !TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 1) ) /*0x659b54*/
    return 1; /*0x659b5b*/
  v3 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 8))(*((_DWORD *)this + 0x16)) == 0; /*0x659b67*/
  vtbl = this->vtbl; /*0x659b69*/
  if ( !v3 ) /*0x659b6d*/
  {
    vtbl->MoveToHigh(this); /*0x659b75*/
    return 1; /*0x659b7b*/
  }
  vtbl->super.Destroy((TESForm *)this, 1); /*0x659b81*/
  return 0; /*0x659b77*/
}
