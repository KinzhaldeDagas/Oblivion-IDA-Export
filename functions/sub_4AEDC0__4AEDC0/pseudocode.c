void __thiscall sub_4AEDC0(int this)
{
  double v1; // st7
  double v2; // st7
  double v3; // st7

  *(float *)(this + 0x48) = flt_A427E4; /*0x4aedc8*/
  *(_BYTE *)(this + 0x3C) = 0x1E; /*0x4aedcb*/
  v1 = flt_A3D9A4; /*0x4aedcf*/
  *(_BYTE *)(this + 0x3D) = 0; /*0x4aedd5*/
  *(float *)(this + 0x4C) = v1; /*0x4aedd8*/
  *(_BYTE *)(this + 0x3E) = 0x5A; /*0x4aeddb*/
  v2 = kHeadBodyNormalMatchRadius; /*0x4aeddf*/
  *(_WORD *)(this + 0x40) = 0; /*0x4aede5*/
  *(float *)(this + 0x50) = v2; /*0x4aede9*/
  *(_DWORD *)(this + 0x44) = 0; /*0x4aedec*/
  v3 = flt_A31C80; /*0x4aedef*/
  *(_BYTE *)(this + 0x58) = 0; /*0x4aedf5*/
  *(float *)(this + 0x54) = v3; /*0x4aedf8*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4aedfb*/
}
