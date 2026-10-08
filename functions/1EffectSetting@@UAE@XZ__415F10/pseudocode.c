void __thiscall EffectSetting::~EffectSetting(int this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebp
  void *v4; // eax

  v2 = (TESModel *)(this + 0x18); /*0x415f3d*/
  v3 = (_DWORD *)(this + 0x44); /*0x415f40*/
  *(_DWORD *)this = &EffectSetting::`vftable'{for `EffectSetting'}; /*0x415f43*/
  *(_DWORD *)(this + 0x18) = &EffectSetting::`vftable'{for `TESModel'}; /*0x415f49*/
  *(_DWORD *)(this + 0x30) = &EffectSetting::`vftable'{for `TESDescription'}; /*0x415f4f*/
  *(_DWORD *)(this + 0x38) = &EffectSetting::`vftable'{for `TESFullName'}; /*0x415f56*/
  *(_DWORD *)(this + 0x44) = &EffectSetting::`vftable'{for `TESIcon'}; /*0x415f5d*/
  v4 = *(void **)(this + 0x9C); /*0x415f64*/
  if ( v4 ) /*0x415f76*/
    MemoryHeap_Free_checked(v4); /*0x415f7e*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x415f85*/
  TESTexture_destr(v3); /*0x415f91*/
  FormHeapFree(*(_DWORD *)(this + 0x3C)); /*0x415f9a*/
  *(_DWORD *)(this + 0x3C) = 0; /*0x415fa4*/
  *(_WORD *)(this + 0x42) = 0; /*0x415fa7*/
  *(_WORD *)(this + 0x40) = 0; /*0x415fab*/
  TESModel::~TESModel(v2); /*0x415fb3*/
  TESForm_destr((TESForm *)this); /*0x415fc2*/
  EffectSetting::~EffectSetting(); /*0x415fc3*/
}
