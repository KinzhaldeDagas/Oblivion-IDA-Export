void __thiscall IngredAlch_InitializeComponents(int this)
{
  *(_DWORD *)(this + 0x78) = 0xFFFFFFFF;
  *(_BYTE *)(this + 0x7C) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
}
