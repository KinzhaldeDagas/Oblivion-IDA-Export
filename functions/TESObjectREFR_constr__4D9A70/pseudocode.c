TESChildCELL *__thiscall TESObjectREFR_constr(TESChildCELL *this)
{
  TESForm_constr((TESForm *)this); /*0x4d9a98*/
  *((_DWORD *)this + 6) = &TESChildCell::`vftable'; /*0x4d9a9d*/
  this->vtbl = &TESObjectREFR::`vftable'{for `TESObjectREFR'}; /*0x4d9aa4*/
  *((_DWORD *)this + 6) = &TESObjectREFR::`vftable'{for `TESChildCell'}; /*0x4d9aaa*/
  *((_DWORD *)this + 0xF) = 0; /*0x4d9ab9*/
  ExtraDataList_constr((_DWORD *)this + 0x11); /*0x4d9ac8*/
  *((_BYTE *)this + 4) = 0x31; /*0x4d9ad4*/
  TESObjectREFR_InitializeAllComponents((TESObjectREFR *)this); /*0x4d9ad8*/
  *((_DWORD *)this + 7) = 0; /*0x4d9adf*/
  *((_DWORD *)this + 8) = 0; /*0x4d9ae2*/
  *((_DWORD *)this + 9) = 0; /*0x4d9ae5*/
  *((_DWORD *)this + 0xA) = 0; /*0x4d9ae8*/
  *((_DWORD *)this + 0xB) = 0; /*0x4d9aeb*/
  *((_DWORD *)this + 0xC) = 0; /*0x4d9aee*/
  *((_DWORD *)this + 0xD) = 0; /*0x4d9af1*/
  *((_DWORD *)this + 0x10) = 0; /*0x4d9af4*/
  return this; /*0x4d9af9*/
}
