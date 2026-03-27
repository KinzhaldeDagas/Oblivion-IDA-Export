void __thiscall SpellItem_InitializeComponents(int this)
{
  *(_DWORD *)(this + 0x34) = 0;
  *(_DWORD *)(this + 0x38) = 0xFFFFFFFF;
  *(_DWORD *)(this + 0x3C) = 0;
  *(_BYTE *)(this + 0x40) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
}
