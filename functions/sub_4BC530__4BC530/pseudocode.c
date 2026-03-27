void __thiscall sub_4BC530(int this)
{
  long double v1; // st7
  float v2; // [esp+4h] [ebp-4h]

  v1 = dbl_A45A50;
  *(_WORD *)(this + 0x24) = 0x190;
  *(_WORD *)(this + 0x26) = 0x190;
  *(_WORD *)(this + 0x28) = 0xC8;
  v2 = sqrt(v1);
  *(float *)(this + 0x2C) = v2;
  j_TESForm_InitializeComponents((TESForm *)this);
}
