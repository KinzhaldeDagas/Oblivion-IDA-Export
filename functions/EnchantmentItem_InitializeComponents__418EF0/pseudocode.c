void __thiscall EnchantmentItem_InitializeComponents(int this)
{
  *(_DWORD *)(this + 0x3C) = 0xFFFFFFFF; /*0x418ef3*/
  *(_DWORD *)(this + 0x38) = 0xFFFFFFFF; /*0x418ef6*/
  *(_BYTE *)(this + 0x40) = 0; /*0x418ef9*/
  *(_DWORD *)(this + 0x34) = 2; /*0x418efd*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x418f04*/
}
