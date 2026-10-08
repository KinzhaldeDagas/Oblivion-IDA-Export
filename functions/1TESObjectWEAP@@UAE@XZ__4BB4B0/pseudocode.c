void __thiscall TESObjectWEAP::~TESObjectWEAP(TESObjectWEAP *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30); /*0x4bb4dd*/
  v3 = (_DWORD *)((char *)this + 0x48); /*0x4bb4e0*/
  v4 = (TESTexture *)((char *)this + 0x70); /*0x4bb4e3*/
  *(_DWORD *)this = &TESObjectWEAP::`vftable'{for `TESObjectWEAP'}; /*0x4bb4e6*/
  *((_DWORD *)this + 9) = &TESObjectWEAP::`vftable'{for `TESFullName'}; /*0x4bb4ec*/
  *((_DWORD *)this + 0xC) = &TESObjectWEAP::`vftable'{for `TESModel'}; /*0x4bb4f3*/
  *((_DWORD *)this + 0x12) = &TESObjectWEAP::`vftable'{for `TESIcon'}; /*0x4bb4f9*/
  *((_DWORD *)this + 0x15) = &TESObjectWEAP::`vftable'{for `TESScriptableForm'}; /*0x4bb4ff*/
  *((_DWORD *)this + 0x18) = &TESObjectWEAP::`vftable'{for `TESEnchantableForm'}; /*0x4bb506*/
  *((_DWORD *)this + 0x1C) = &TESObjectWEAP::`vftable'{for `TESValueForm'}; /*0x4bb50d*/
  *((_DWORD *)this + 0x1E) = &TESObjectWEAP::`vftable'{for `TESWeightForm'}; /*0x4bb514*/
  *((_DWORD *)this + 0x20) = &TESObjectWEAP::`vftable'{for `TESHealthForm'}; /*0x4bb51b*/
  *((_DWORD *)this + 0x22) = &TESObjectWEAP::`vftable'{for `TESAttackDamageForm'}; /*0x4bb525*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4bb537*/
  TESAttackDamageForm_destr((_DWORD *)this + 0x22); /*0x4bb547*/
  TESHealthForm_destr((_DWORD *)this + 0x20); /*0x4bb557*/
  TESWeightForm_destr((_DWORD *)this + 0x1E); /*0x4bb564*/
  TESValueForm_destr(v4); /*0x4bb570*/
  TESTexture_destr(v3); /*0x4bb57c*/
  TESModel::~TESModel(v2); /*0x4bb588*/
  FormHeapFree(*((_DWORD *)this + 0xA)); /*0x4bb591*/
  *((_DWORD *)this + 0xA) = 0; /*0x4bb59d*/
  *((_WORD *)this + 0x17) = 0; /*0x4bb5a0*/
  *((_WORD *)this + 0x16) = 0; /*0x4bb5a4*/
  TESObject_destr((TESForm *)this); /*0x4bb5b0*/
}
