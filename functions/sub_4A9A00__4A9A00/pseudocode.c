void __thiscall sub_4A9A00(int this)
{
  double v1; // st7

  *(_BYTE *)(this + 0x18) = byte_B35590;
  *(_BYTE *)(this + 0x69) = byte_B35598;
  *(_BYTE *)(this + 0x19) = byte_B355A0;
  *(float *)(this + 0x1C) = flt_B355A8;
  *(float *)(this + 0x20) = flt_B355B0;
  *(float *)(this + 0x24) = flt_B355B8;
  *(float *)(this + 0x28) = flt_B355C0;
  *(float *)(this + 0x2C) = flt_B355C8;
  *(float *)(this + 0x30) = flt_B355D0;
  *(float *)(this + 0x34) = flt_B355D8;
  *(float *)(this + 0x38) = flt_B355E0;
  *(_BYTE *)(this + 0x3C) = iAIDefaultBlockChance;
  *(_BYTE *)(this + 0x3D) = byte_B355F0;
  *(float *)(this + 0x40) = flt_B355F8;
  *(float *)(this + 0x44) = flt_B35600;
  *(float *)(this + 0x48) = flt_B35608;
  *(_BYTE *)(this + 0x4C) = byte_B35610;
  *(float *)(this + 0x50) = flt_B35618;
  *(float *)(this + 0x54) = flt_B35620;
  *(_BYTE *)(this + 0x58) = byte_B35628;
  *(_BYTE *)(this + 0x59) = byte_B35630;
  *(_BYTE *)(this + 0x5A) = byte_B35638;
  *(_BYTE *)(this + 0x5B) = byte_B35640;
  *(_BYTE *)(this + 0x5C) = byte_B35648;
  *(float *)(this + 0x60) = flt_B35650;
  *(float *)(this + 0x64) = flt_B35658;
  *(float *)(this + 0x6C) = flt_B35660;
  *(float *)(this + 0x70) = flt_B35668;
  *(float *)(this + 0x74) = fAIDefaultSwitchToMeleeDistance;
  *(float *)(this + 0x78) = fAIDefaultSwitchToRangedDistance;
  *(float *)(this + 0x7C) = fAIDefaultBuffStandoffDistance;
  *(float *)(this + 0x80) = fAIDefaultRangedStandoffDistance;
  *(float *)(this + 0x84) = fAIDefaultGroupStandoffDistance;
  *(_BYTE *)(this + 0x88) = byte_B35778;
  v1 = fAIDefaultRushingAttackDistanceMult;
  *(_BYTE *)(this + 0x68) = 0;
  *(float *)(this + 0x8C) = v1;
  *(_DWORD *)(this + 0x90) = 0;
  *(_DWORD *)(this + 0x94) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
}
