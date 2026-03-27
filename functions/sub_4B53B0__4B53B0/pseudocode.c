void __thiscall sub_4B53B0(int this)
{
  *(_WORD *)(this + 0x88) = 0;
  *(_BYTE *)(this + 0x89) = 0xFF;
  j_TESForm_InitializeComponents((TESForm *)this);
  *(_DWORD *)(this + 0x6C) = 0;
}
