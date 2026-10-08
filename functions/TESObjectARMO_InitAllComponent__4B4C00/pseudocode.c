void __thiscall TESObjectARMO_InitAllComponent(int this)
{
  *(_WORD *)(this + 0xE4) = 0; /*0x4b4c03*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b4c0c*/
  *(_DWORD *)(this + 0x48) = 3; /*0x4b4c11*/
}
