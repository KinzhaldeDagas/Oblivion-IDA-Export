void __thiscall TESObjectARMO_InitAllComponent(int this)
{
  *(_WORD *)(this + 0xE4) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  *(_DWORD *)(this + 0x48) = 3;
}
