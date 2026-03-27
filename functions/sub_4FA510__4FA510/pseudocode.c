void __thiscall sub_4FA510(int this)
{
  *(_DWORD *)(this + 0x18) = 0;
  *(_DWORD *)(this + 0x1C) = 0;
  *(_DWORD *)(this + 0x20) = 0;
  *(_DWORD *)(this + 0x24) = 0;
  *(_DWORD *)(this + 0x28) = 0;
  *(_DWORD *)(this + 0x30) = 0;
  *(_DWORD *)(this + 0x2C) = 0;
  IsConsoleMode = 0;
  *(float *)(this + 0x34) = 0.0;
  *(float *)(this + 0x38) = 0.0;
  *(_BYTE *)(this + 4) = 0xD;
  *(float *)(this + 0x3C) = 0.0;
  j_TESForm_InitializeComponents((TESForm *)this);
}
