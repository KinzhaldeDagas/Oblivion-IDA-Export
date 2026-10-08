void __thiscall IngredAlch_InitializeComponents(int this)
{
  *(_DWORD *)(this + 0x78) = 0xFFFFFFFF; /*0x4195f0*/
  *(_BYTE *)(this + 0x7C) = 0; /*0x4195f7*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4195fb*/
}
