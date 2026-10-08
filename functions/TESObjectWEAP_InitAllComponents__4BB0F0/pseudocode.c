void __thiscall TESObjectWEAP_InitAllComponents(int this)
{
  *(_DWORD *)(this + 0x90) = 0; /*0x4bb0f5*/
  *(_DWORD *)(this + 0x94) = 0; /*0x4bb0fb*/
  *(_DWORD *)(this + 0x98) = 0; /*0x4bb101*/
  *(_DWORD *)(this + 0x9C) = 0; /*0x4bb107*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4bb10d*/
  *(_DWORD *)(this + 0x6C) = 2; /*0x4bb112*/
}
