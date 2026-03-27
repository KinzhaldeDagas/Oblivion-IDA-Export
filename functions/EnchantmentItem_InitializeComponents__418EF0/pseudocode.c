void __thiscall EnchantmentItem_InitializeComponents(int this)
{
  *(_DWORD *)(this + 0x3C) = 0xFFFFFFFF;
  *(_DWORD *)(this + 0x38) = 0xFFFFFFFF;
  *(_BYTE *)(this + 0x40) = 0;
  *(_DWORD *)(this + 0x34) = 2;
  j_TESForm_InitializeComponents((TESForm *)this);
}
