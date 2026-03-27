void __thiscall TESObjectWEAP_InitAllComponents(int this)
{
  *(_DWORD *)(this + 0x90) = 0;
  *(_DWORD *)(this + 0x94) = 0;
  *(_DWORD *)(this + 0x98) = 0;
  *(_DWORD *)(this + 0x9C) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  *(_DWORD *)(this + 0x6C) = 2;
}
