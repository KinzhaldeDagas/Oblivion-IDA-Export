void __thiscall SpellItem_InitializeComponents(int this)
{
  *(_DWORD *)(this + 0x34) = 0; /*0x41d1b2*/
  *(_DWORD *)(this + 0x38) = 0xFFFFFFFF; /*0x41d1b5*/
  *(_DWORD *)(this + 0x3C) = 0; /*0x41d1bc*/
  *(_BYTE *)(this + 0x40) = 0; /*0x41d1bf*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x41d1c2*/
}
