void __thiscall sub_4B53B0(int this)
{
  *(_WORD *)(this + 0x88) = 0; /*0x4b53b3*/
  *(_BYTE *)(this + 0x89) = 0xFF; /*0x4b53bc*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4b53c3*/
  *(_DWORD *)(this + 0x6C) = 0; /*0x4b53c8*/
}
